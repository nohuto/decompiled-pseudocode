/*
 * XREFs of RtlpConvertLCIDsToCultureNames @ 0x1801424F0
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1801431B0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpMultiSZCchLength @ 0x1800DE504 (LdrpMultiSZCchLength.c)
 *     RtlUnicodeStringToLcid @ 0x1801148C4 (RtlUnicodeStringToLcid.c)
 *     wcsnlen @ 0x18012DD40 (wcsnlen.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpConvertLCIDsToCultureNames(WCHAR *SourceString, __int64 *a2)
{
  PCWSTR v3; // rsi
  unsigned int v4; // r13d
  __int16 v5; // bx
  unsigned int v6; // edi
  __int64 Heap_0; // rax
  unsigned int v8; // ecx
  __int64 v9; // r14
  _DWORD *v10; // r15
  unsigned int i; // ecx
  unsigned __int64 v12; // rbx
  char *v13; // r15
  unsigned int v15; // [rsp+20h] [rbp-E0h] BYREF
  int *v16; // [rsp+28h] [rbp-D8h]
  _DWORD v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  void *Src; // [rsp+38h] [rbp-C8h]
  __int64 v19; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v21[6]; // [rsp+58h] [rbp-A8h] BYREF
  char v22; // [rsp+70h] [rbp-90h] BYREF

  v15 = 0;
  v17[1] = 0;
  v3 = SourceString;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  DestinationString = 0LL;
  if ( !a2 || !SourceString || *a2 || (int)LdrpMultiSZCchLength(SourceString, (__int64)a2, &v15) < 0 )
    return 3221225485LL;
  v15 *= 2;
  Heap_0 = RtlAllocateHeap_0();
  v8 = v15;
  v9 = Heap_0;
  v10 = (_DWORD *)Heap_0;
  while ( 1 )
  {
    if ( !v3 || !*v3 || !v8 )
    {
      *v10 = 0;
      goto LABEL_23;
    }
    if ( v4 >= 4 )
      break;
    v19 = 2 * (unsigned int)wcsnlen(v3, (unsigned __int64)v8 >> 1);
    RtlInitUnicodeString(&DestinationString, v3);
    v16 = &v21[v4];
    if ( (int)RtlUnicodeStringToLcid(&DestinationString.Length, v16) < 0 )
      break;
    v17[0] = 11141120;
    Src = &v22;
    LODWORD(v16) = *v16;
    if ( !(unsigned __int8)RtlLCIDToCultureName((unsigned int)v16, (__int64)v17) )
      break;
    for ( i = 0; i < v4; ++i )
    {
      if ( (_DWORD)v16 == v21[i] )
        goto LABEL_19;
    }
    LOWORD(v16) = LOWORD(v17[0]) + 2 + v5;
    if ( (unsigned __int16)v16 >= 0x2A7u )
    {
      v6 = -1073741595;
      goto LABEL_20;
    }
    v12 = LOWORD(v17[0]);
    memmove(v10, Src, LOWORD(v17[0]) + 2LL);
    ++v4;
    v3 = (PCWSTR)((char *)v3 + (unsigned int)v19 + 2);
    v13 = (char *)v10 + 2 * (v12 >> 1);
    v5 = (__int16)v16;
    v10 = v13 + 2;
    v8 = -2 - v19 + v15;
    v15 = v8;
  }
LABEL_19:
  v6 = -1073741811;
LABEL_20:
  if ( v9 )
  {
    RtlFreeHeap_0();
    return v6;
  }
LABEL_23:
  *a2 = v9;
  return v6;
}
