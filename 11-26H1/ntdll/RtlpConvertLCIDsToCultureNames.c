/*
 * XREFs of RtlpConvertLCIDsToCultureNames @ 0x1801423F0
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1801430B0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     LdrpMultiSZCchLength @ 0x1800DB474 (LdrpMultiSZCchLength.c)
 *     RtlUnicodeStringToLcid @ 0x1801140C0 (RtlUnicodeStringToLcid.c)
 *     wcsnlen @ 0x18012DAB0 (wcsnlen.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlpConvertLCIDsToCultureNames(WCHAR *SourceString, _QWORD *a2)
{
  PCWSTR v3; // rsi
  unsigned int v4; // r13d
  __int16 v5; // bx
  unsigned int v6; // edi
  PVOID Heap_0; // rax
  unsigned int v8; // ecx
  void *v9; // r14
  _DWORD *v10; // r15
  unsigned int i; // ecx
  unsigned __int64 Length; // rbx
  char *v13; // r15
  unsigned int v15; // [rsp+20h] [rbp-E0h] BYREF
  PULONG v16; // [rsp+28h] [rbp-D8h]
  _UNICODE_STRING String; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h]
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v20[6]; // [rsp+58h] [rbp-A8h] BYREF
  char v21; // [rsp+70h] [rbp-90h] BYREF

  v15 = 0;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  v3 = SourceString;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  DestinationString = 0LL;
  if ( !a2 || !SourceString || *a2 || (int)LdrpMultiSZCchLength(SourceString, (__int64)a2, &v15) < 0 )
    return 3221225485LL;
  v15 *= 2;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 0, 0x2A8uLL);
  v8 = v15;
  v9 = Heap_0;
  v10 = Heap_0;
  while ( 1 )
  {
    if ( !v3 || !*v3 || !v8 )
    {
      *v10 = 0;
      goto LABEL_23;
    }
    if ( v4 >= 4 )
      break;
    v18 = 2 * (unsigned int)wcsnlen(v3, (unsigned __int64)v8 >> 1);
    RtlInitUnicodeString(&DestinationString, v3);
    v16 = &v20[v4];
    if ( (int)RtlUnicodeStringToLcid(&DestinationString, v16) < 0 )
      break;
    *(_DWORD *)&String.Length = 11141120;
    String.Buffer = (wchar_t *)&v21;
    LODWORD(v16) = *v16;
    if ( !RtlLCIDToCultureName((LCID)v16, &String) )
      break;
    for ( i = 0; i < v4; ++i )
    {
      if ( (_DWORD)v16 == v20[i] )
        goto LABEL_19;
    }
    LOWORD(v16) = String.Length + 2 + v5;
    if ( (unsigned __int16)v16 >= 0x2A7u )
    {
      v6 = -1073741595;
      goto LABEL_20;
    }
    Length = String.Length;
    memmove(v10, String.Buffer, String.Length + 2LL);
    ++v4;
    v3 = (PCWSTR)((char *)v3 + (unsigned int)v18 + 2);
    v13 = (char *)v10 + 2 * (Length >> 1);
    v5 = (__int16)v16;
    v10 = v13 + 2;
    v8 = -2 - v18 + v15;
    v15 = v8;
  }
LABEL_19:
  v6 = -1073741811;
LABEL_20:
  if ( v9 )
  {
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v9);
    return v6;
  }
LABEL_23:
  *a2 = v9;
  return v6;
}
