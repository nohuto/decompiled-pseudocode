/*
 * XREFs of PktMonDetachProvider @ 0x1400E8670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 PktMonDetachProvider()
{
  _QWORD *v0; // rbx
  void **v1; // rax
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  int v5; // eax
  bool v6; // cl

  byte_14011F740 = 0;
  ExWaitForRundownProtectionReleaseCacheAware(RunRefCacheAware);
  xmmword_14011F760 = 0LL;
  KeWaitForSingleObject(&PktMonCompMutex, Executive, 0, 0, 0LL);
  while ( (__int64 *)PktMonCompList != &PktMonCompList )
  {
    v0 = qword_14011F7E8;
    if ( *(__int64 **)qword_14011F7E8 != &PktMonCompList
      || (v1 = (void **)*((_QWORD *)qword_14011F7E8 + 1), *v1 != qword_14011F7E8) )
    {
LABEL_18:
      __fastfail(3u);
    }
    --PktMonCompCount;
    qword_14011F7E8 = v1;
    *v1 = &PktMonCompList;
    v2 = v0 + 2;
    while ( (_QWORD *)*v2 != v2 )
    {
      v3 = v0[3];
      if ( *(_QWORD **)v3 != v2 )
        goto LABEL_18;
      v4 = *(_QWORD **)(v3 + 8);
      if ( *v4 != v3 )
        goto LABEL_18;
      v0[3] = v4;
      *v4 = v2;
      *(_OWORD *)v3 = 0LL;
      *(_OWORD *)(v3 + 16) = 0LL;
      *(_QWORD *)(v3 + 32) = 0LL;
    }
    v5 = *((_DWORD *)v0 + 14);
    v6 = (v5 & 1) != 0 || (v5 & 2) != 0;
    *((_DWORD *)v0 + 14) = v5 & 0xFFFFFFFC;
    if ( v6 && qword_14011F758 )
      qword_14011F758(v0);
    memset(v0, 0, 0x40uLL);
  }
  KeReleaseMutex(&PktMonCompMutex, 0);
  if ( qword_14011F750 )
    qword_14011F750();
  return 0LL;
}
