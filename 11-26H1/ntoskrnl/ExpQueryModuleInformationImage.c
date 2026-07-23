/*
 * XREFs of ExpQueryModuleInformationImage @ 0x14097B3C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlUnicodeStringToAnsiString @ 0x14097CC00 (RtlUnicodeStringToAnsiString.c)
 */

__int64 __fastcall ExpQueryModuleInformationImage(__int64 a1, __int64 a2)
{
  void *v4; // rsi
  unsigned int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // rax
  NTSTATUS v8; // eax
  __int16 v9; // cx
  char *v10; // rdx
  char *v11; // rax
  __int16 v12; // r10
  char v13; // r8
  __int64 result; // rax
  _STRING DestinationString; // [rsp+28h] [rbp-170h] BYREF
  __int64 v16; // [rsp+38h] [rbp-160h]
  _BYTE Src[16]; // [rsp+40h] [rbp-158h] BYREF
  __int64 v18; // [rsp+50h] [rbp-148h]
  int v19; // [rsp+58h] [rbp-140h]
  int v20; // [rsp+5Ch] [rbp-13Ch]
  __int16 v21; // [rsp+60h] [rbp-138h]
  __int16 v22; // [rsp+62h] [rbp-136h]
  __int16 v23; // [rsp+64h] [rbp-134h]
  __int16 v24; // [rsp+66h] [rbp-132h]
  char v25; // [rsp+68h] [rbp-130h] BYREF

  v16 = a2;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  v4 = *(void **)(a2 + 8);
  v5 = *(_DWORD *)(a2 + 20);
  v6 = v5 + 296;
  if ( v5 + 296 < v5 )
  {
    result = 3221225473LL;
    *(_DWORD *)a2 = -1073741823;
  }
  else
  {
    *(_DWORD *)(a2 + 20) = v6;
    if ( *(_DWORD *)(a2 + 16) < v6 )
    {
      **(_DWORD **)(a2 + 24) = v6;
      *(_DWORD *)a2 = -1073741820;
    }
    else
    {
      memset_0(Src, 0, 0x128uLL);
      v7 = 0LL;
      if ( !*(_BYTE *)(a2 + 32) )
        v7 = *(_QWORD *)(a1 + 48);
      v18 = v7;
      v20 = *(_DWORD *)(a1 + 104);
      v19 = *(_DWORD *)(a1 + 64);
      v23 = *(_WORD *)(a1 + 108);
      v21 = *(_WORD *)(a2 + 36);
      v22 = 0;
      DestinationString.Buffer = &v25;
      *(_DWORD *)&DestinationString.Length = 0x1000000;
      v8 = RtlUnicodeStringToAnsiString(&DestinationString, (PCUNICODE_STRING)(a1 + 72), 0);
      if ( (int)(v8 + 0x80000000) < 0 || v8 == -2147483643 )
      {
        v9 = LOWORD(DestinationString.Buffer) + DestinationString.Length;
        v10 = &DestinationString.Buffer[DestinationString.Length];
        v11 = v10;
        while ( 1 )
        {
          v12 = (__int16)v11;
          if ( v10 <= DestinationString.Buffer )
            break;
          v9 = (_WORD)v11 - 1;
          v13 = *(v11 - 1);
          if ( !v13 )
            break;
          v10 = --v11;
          if ( v13 == 92 )
          {
            v9 = v12;
            break;
          }
        }
        v24 = v9 - LOWORD(DestinationString.Buffer);
      }
      else
      {
        v25 = 0;
        v24 = 0;
      }
      if ( *(_BYTE *)(a2 + 33) )
        RtlCopyToUser(v4, Src, 0x128uLL);
      else
        RtlCopyVolatileMemory(v4, Src, 0x128uLL);
      *(_QWORD *)(a2 + 8) += 296LL;
    }
    ++*(_DWORD *)(a2 + 36);
    return 0LL;
  }
  return result;
}
