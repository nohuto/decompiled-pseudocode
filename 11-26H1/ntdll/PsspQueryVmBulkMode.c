/*
 * XREFs of PsspQueryVmBulkMode @ 0x180159930
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18015F3A0 (ZwQueryVirtualMemory.c)
 *     NtPssCaptureVaSpaceBulk @ 0x180161830 (NtPssCaptureVaSpaceBulk.c)
 */

__int64 __fastcall PsspQueryVmBulkMode(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  __int64 result; // rax
  _DWORD *v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  _QWORD *v16; // [rsp+28h] [rbp-20h]

  v6 = a4;
  v7 = a2 & 0xFFFFFFFFFFFFF000uLL;
  if ( (_DWORD)a3 )
    return ZwQueryVirtualMemory(*a1, a2, a3, a4, a5, a6);
  if ( a5 < 0x30 )
    return 3221225476LL;
  v11 = (_DWORD *)a1[1];
  if ( !a2 )
  {
    *((_DWORD *)a1 + 6) = 0;
    v12 = 0LL;
    v16 = a6;
    v11[1] = 0;
    return ZwQueryVirtualMemory(*a1, v12, 0LL, a4, a5, v16);
  }
  if ( *((_DWORD *)a1 + 6) == v11[1] )
  {
    *v11 = 3;
    result = NtPssCaptureVaSpaceBulk(*a1, a2, a1[1], a1[2], a6);
    if ( (_DWORD)result == -1073741503 || (_DWORD)result == -1073741822 )
    {
      v16 = a6;
      a4 = v6;
      v12 = a2;
      return ZwQueryVirtualMemory(*a1, v12, 0LL, a4, a5, v16);
    }
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)a1 + 6) = 0;
  }
  if ( a6 )
    *a6 = 0LL;
  v13 = a1[1];
  if ( !*(_DWORD *)(v13 + 4) )
    return 2147483674LL;
  v14 = *((unsigned int *)a1 + 6);
  if ( a2 >= *(_QWORD *)(v13 + 48 * v14 + 16) )
  {
    if ( v7 != *(_QWORD *)(v13 + 48 * v14 + 16) )
      return 3221225793LL;
    *(_OWORD *)v6 = *(_OWORD *)(v13 + 48 * v14 + 16);
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(v13 + 48 * v14 + 32);
    *(_OWORD *)(v6 + 32) = *(_OWORD *)(v13 + 48 * v14 + 48);
    ++*((_DWORD *)a1 + 6);
  }
  else
  {
    *(_QWORD *)v6 = v7;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_DWORD *)(v6 + 16) = 0;
    v15 = *(_QWORD *)(v13 + 48 * v14 + 16) - v7;
    *(_DWORD *)(v6 + 32) = 0x10000;
    *(_QWORD *)(v6 + 24) = v15;
    *(_QWORD *)(v6 + 36) = 1LL;
  }
  if ( a6 )
    *a6 = 48LL;
  return 0LL;
}
