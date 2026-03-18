/*
 * XREFs of ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1401ECFAC
 * Callers:
 *     ?bClone@EPATHOBJ@@QEAAHAEBV1@@Z @ 0x14011A440 (-bClone@EPATHOBJ@@QEAAHAEBV1@@Z.c)
 * Callees:
 *     ?reinit@PATH_CORE@@QEAAXXZ @ 0x1401C38C8 (-reinit@PATH_CORE@@QEAAXXZ.c)
 */

void __fastcall EPATHOBJ::reinit(EPATHOBJ *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    PATH_CORE::reinit((PATH_CORE *)(v2 + 24));
    *(_QWORD *)(*((_QWORD *)this + 1) + 80LL) = 0LL;
    *(_DWORD *)(*((_QWORD *)this + 1) + 92LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 96LL) = 0;
    *(_QWORD *)this = 0LL;
  }
}
