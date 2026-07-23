/*
 * XREFs of AslpProcessMatchRegNode @ 0x1408912FC
 * Callers:
 *     AslRegWildcardFindNext @ 0x140890B90 (AslRegWildcardFindNext.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     AslRegistryEnumKey @ 0x14088E73C (AslRegistryEnumKey.c)
 *     AslRegistryOpenSubKey @ 0x14088EAD0 (AslRegistryOpenSubKey.c)
 *     AslStringPatternMatchExW @ 0x1409D59C0 (AslStringPatternMatchExW.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     AslAlloc @ 0x1409D8260 (AslAlloc.c)
 *     AslRegistryGetKey @ 0x140B32A38 (AslRegistryGetKey.c)
 */

__int64 __fastcall AslpProcessMatchRegNode(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  void *v4; // rcx
  __int64 v5; // rcx
  int Key; // ebx
  wchar_t *Buffer; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  wchar_t *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v13; // rbp
  __int16 *v14; // rax
  __int16 v15; // bx
  int v16; // eax
  __int64 v17; // rax
  const WCHAR *v18; // rdx
  void *v19; // rcx
  UNICODE_STRING Destination; // [rsp+30h] [rbp-18h] BYREF

  Destination = 0LL;
  if ( *(_QWORD *)(a1 + 8) == a2 )
  {
    v3 = (_QWORD *)(a1 + 32);
    v4 = *(void **)(a1 + 32);
    if ( v4 )
    {
      ZwClose(v4);
      *v3 = 0LL;
      Key = -2147483622;
    }
    else
    {
      Key = AslRegistryGetKey(v3, *(_QWORD *)(a1 + 24), 131097LL, 1LL);
    }
    Buffer = Destination.Buffer;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 24);
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(v8 + 2 * v9) );
    Destination.MaximumLength = 2 * (v9 + 261);
    v10 = (wchar_t *)AslAlloc(261LL, Destination.MaximumLength);
    v12 = *(_QWORD *)(a1 + 8);
    Buffer = v10;
    Destination.Buffer = v10;
    v13 = *(void **)(v12 + 32);
    while ( 1 )
    {
      *Buffer = 0;
      Key = AslRegistryEnumKey(Buffer, v11, v13, *(_DWORD *)(a1 + 40));
      if ( Key < 0 )
        break;
      v14 = *(__int16 **)(a1 + 24);
      ++*(_DWORD *)(a1 + 40);
      v15 = *v14;
      *v14 = 0;
      v16 = AslStringPatternMatchExW(*(_QWORD *)(a1 + 16), Buffer);
      **(_WORD **)(a1 + 24) = v15;
      if ( v16 )
      {
        v17 = -1LL;
        do
          ++v17;
        while ( Buffer[v17] );
        v18 = *(const WCHAR **)(a1 + 24);
        Destination.Length = 2 * v17;
        RtlAppendUnicodeToString(&Destination, v18);
        v19 = *(void **)(a1 + 32);
        if ( v19 )
        {
          ZwClose(v19);
          *(_QWORD *)(a1 + 32) = 0LL;
        }
        Buffer = Destination.Buffer;
        Key = AslRegistryOpenSubKey((PHANDLE)(a1 + 32), v13, Destination.Buffer);
        if ( Key >= 0 )
          goto LABEL_18;
      }
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
LABEL_18:
  AslFree(v5, Buffer);
  return (unsigned int)Key;
}
