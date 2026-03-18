/*
 * XREFs of ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x14033C114
 * Callers:
 *     ?CollectAllPaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJXZ @ 0x14031E72C (-CollectAllPaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJXZ.c)
 *     ??1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ @ 0x14033BAA4 (--1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x14033D450 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::ClearReservedFields(CCD_TOPOLOGY *this)
{
  __int64 v1; // r8
  unsigned int i; // r9d
  __int64 v4; // rax
  __int64 v5; // rcx

  v1 = *((_QWORD *)this + 8);
  for ( i = 0; i < *(unsigned __int16 *)(v1 + 20); v1 = *((_QWORD *)this + 8) )
  {
    v4 = i++;
    v5 = 296 * v4;
    *(_OWORD *)(v5 + v1 + 312) = 0LL;
    *(_OWORD *)(v5 + v1 + 328) = 0LL;
    *(_QWORD *)(v5 + v1 + 344) = 0LL;
  }
  *((_DWORD *)this + 22) = 0;
}
