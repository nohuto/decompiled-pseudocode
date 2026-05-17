/*
 * XREFs of RtlpConvertCultureNamesToLCIDs @ 0x1801262E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpMultiSZCchLength @ 0x1800DE504 (LdrpMultiSZCchLength.c)
 *     RtlConvertLCIDToString @ 0x180126000 (RtlConvertLCIDToString.c)
 *     wcsnlen @ 0x18012DD40 (wcsnlen.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpConvertCultureNamesToLCIDs(wchar_t *SourceString, __int64 *a2)
{
  unsigned int v2; // ebx
  const wchar_t *v4; // rdi
  __int64 v5; // r14
  unsigned int v6; // esi
  unsigned int i; // ebp
  unsigned int v8; // r15d
  unsigned int j; // edx
  unsigned int v10; // r15d
  __int64 Heap_0; // rax
  _WORD *v12; // rdi
  unsigned int k; // ebp
  __int64 v14; // rcx
  __int64 v15; // rax
  int v17; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  int v19[4]; // [rsp+48h] [rbp-50h] BYREF

  v2 = 0;
  v17 = 0;
  v4 = SourceString;
  v5 = 0LL;
  v6 = 0;
  DestinationString = 0LL;
  if ( !a2 || !SourceString || *a2 || (int)LdrpMultiSZCchLength(SourceString, (__int64)a2, &v17) < 0 )
    return 3221225485LL;
  for ( i = 2 * v17; v4 && *v4 && i; i += -2 - v8 )
  {
    if ( v6 >= 4
      || (v8 = 2 * wcsnlen(v4, (unsigned __int64)i >> 1),
          RtlInitUnicodeString(&DestinationString, v4),
          !RtlCultureNameToLCID(&DestinationString.Length, &v19[v6])) )
    {
LABEL_16:
      v2 = -1073741811;
      goto LABEL_29;
    }
    for ( j = 0; j < v6; ++j )
    {
      if ( v19[v6] == v19[j] )
        goto LABEL_16;
    }
    v4 = (const wchar_t *)((char *)v4 + v8 + 2);
    ++v6;
  }
  v10 = (unsigned __int16)(((_WORD)v6 << 6) + 4);
  Heap_0 = RtlAllocateHeap_0();
  v5 = Heap_0;
  if ( Heap_0 )
  {
    v12 = (_WORD *)Heap_0;
    for ( k = 0; k < v6; ++k )
    {
      RtlConvertLCIDToString(v19[k], 0x10u, 4u, v12, 0x20u);
      v14 = -1LL;
      do
        ++v14;
      while ( v12[v14] );
      v10 += -2 - v14;
      v15 = -1LL;
      do
        ++v15;
      while ( v12[v15] );
      v12 += v15 + 1;
      if ( v10 < 4 )
      {
        v2 = -1073741595;
        RtlFreeHeap_0();
        return v2;
      }
    }
    *(_DWORD *)v12 = 0;
  }
  else
  {
    v2 = -1073741801;
  }
LABEL_29:
  *a2 = v5;
  return v2;
}
