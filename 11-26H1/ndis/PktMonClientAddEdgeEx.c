/*
 * XREFs of PktMonClientAddEdgeEx @ 0x140060750
 * Callers:
 *     PktMonClientAddEdge @ 0x1400605E0 (PktMonClientAddEdge.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PktMonClientAddEdgeEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v7; // ebx
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int16 v12; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+32h] [rbp-26h]
  __int16 v14; // [rsp+36h] [rbp-22h]
  __int64 v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+40h] [rbp-18h]
  int v17; // [rsp+44h] [rbp-14h]
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v15 = a2;
  v16 = 3;
  v13 = 0;
  v14 = 0;
  v18 = 0LL;
  v12 = 24;
  v17 = 4;
  KeWaitForSingleObject(&PktMonCompMutex, Executive, 0, 0, 0LL);
  if ( ExAcquireRundownProtectionCacheAware(RunRefCacheAware) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int16 *, __int64 *))(*((_QWORD *)&xmmword_14011F760 + 1) + 32LL))(
           xmmword_14011F760,
           *(_QWORD *)(a1 + 40),
           &v12,
           &v18);
    if ( !v7 )
    {
      v9 = *(_QWORD *)(a1 + 16);
      v10 = (__int64 *)(a1 + 16);
      if ( *(_QWORD *)(v9 + 8) != a1 + 16 )
        __fastfail(3u);
      v11 = a6;
      *(_QWORD *)(a6 + 8) = v10;
      *(_QWORD *)v11 = v9;
      *(_QWORD *)(v9 + 8) = v11;
      *v10 = v11;
      ++*(_DWORD *)(a1 + 32);
      *(_QWORD *)(v11 + 16) = v18;
      *(_DWORD *)(v11 + 32) = a5;
      *(_QWORD *)(v11 + 24) = a1;
    }
    ExReleaseRundownProtectionCacheAware(RunRefCacheAware);
  }
  else
  {
    v7 = -1073741661;
  }
  KeReleaseMutex(&PktMonCompMutex, 0);
  return v7;
}
