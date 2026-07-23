/*
 * XREFs of PspInitializeSystemDlls @ 0x140CDEF00
 * Callers:
 *     PspInitPhase2 @ 0x140CDE7AC (PspInitPhase2.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PspWow64GetSharedInformation @ 0x1409E6F34 (PspWow64GetSharedInformation.c)
 *     PsQuerySystemDllInfo @ 0x1409E8308 (PsQuerySystemDllInfo.c)
 *     PspLookupEntryPoint @ 0x140CDEFCC (PspLookupEntryPoint.c)
 */

_UNKNOWN **PspInitializeSystemDlls()
{
  _UNKNOWN **result; // rax
  __int64 *v1; // rdi
  int i; // ebx
  _UNKNOWN **v3; // rbp
  __int64 v4; // r15
  unsigned int j; // esi
  int v6; // eax
  _QWORD *v7; // rcx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  _UNKNOWN **v9; // [rsp+50h] [rbp+8h] BYREF

  result = &retaddr;
  v9 = 0LL;
  v1 = &qword_140D1BDC8;
  for ( i = 0; i < 6; ++i )
  {
    result = (_UNKNOWN **)PsQuerySystemDllInfo(i);
    v3 = result;
    if ( result )
    {
      v4 = *(v1 - 1);
      for ( j = 0; j < *(_DWORD *)v1; ++j )
      {
        v6 = PspLookupEntryPoint(v3, *(_QWORD *)(v4 + 16LL * j), &v9);
        if ( v6 < 0 )
          KeBugCheckEx(0x6Bu, v6, 6uLL, 0LL, 0LL);
        v7 = *(_QWORD **)(v4 + 16LL * j + 8);
        result = v9;
        *v7 = v9;
      }
      if ( i == 1 )
      {
        result = (_UNKNOWN **)PspWow64GetSharedInformation(1);
        result[6] = v3[3];
      }
    }
    v1 += 2;
  }
  return result;
}
