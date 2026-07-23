/*
 * XREFs of PfpVirtualQuery @ 0x140A5D4B0
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x140A5C19C (PfQuerySuperfetchInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     MmQueryVirtualMemory @ 0x1409243E0 (MmQueryVirtualMemory.c)
 */

__int64 __fastcall PfpVirtualQuery(__int64 a1, char a2, _DWORD *a3)
{
  size_t v6; // r8
  void *v7; // rdx
  int v8; // eax
  __int64 result; // rax
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int128 v11; // [rsp+50h] [rbp-18h]

  v10 = 0LL;
  v11 = 0LL;
  if ( *(_DWORD *)(a1 + 24) != 32 )
    return 3221225990LL;
  if ( a2 )
    ProbeForRead(*(volatile void **)(a1 + 16), 0x20uLL, 8u);
  v6 = *(unsigned int *)(a1 + 24);
  v7 = *(void **)(a1 + 16);
  if ( a2 )
    RtlCopyFromUser(&v10, v7, v6);
  else
    RtlCopyVolatileMemory(&v10, v7, v6);
  if ( (_DWORD)v10 != 1 )
    return 3221225485LL;
  v8 = 2;
  if ( (BYTE4(v10) & 1) != 0 && (BYTE4(v10) & 2) != 0 )
    return 3221225485LL;
  if ( (DWORD1(v10) & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  if ( (BYTE4(v10) & 1) == 0 )
    v8 = (BYTE4(v10) & 2) != 0;
  result = MmQueryVirtualMemory(*((ULONG_PTR *)&v11 + 1), 0LL, 4, *((char **)&v10 + 1), v11, 0LL, v8);
  if ( (int)result >= 0 )
    *a3 = 32;
  return result;
}
