/*
 * XREFs of ??$com_weak_query@PEAVCActionCenterExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCActionCenterExperienceManager@@@Z @ 0x1802AA378
 * Callers:
 *     ?OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ @ 0x180197124 (-OnVisibilityChanged@CActionCenterExperienceManager@@AEAAXXZ.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x18035EE14 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800BDC3C (-reset@-$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?QueryInterface@CActionCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801539D0 (-QueryInterface@CActionCenterExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 *__fastcall wil::com_weak_query<CActionCenterExperienceManager *>(
        __int64 *a1,
        CActionCenterExperienceManager **a2)
{
  CActionCenterExperienceManager *v3; // rbx
  int v4; // esi
  void *v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v8; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  *a1 = 0LL;
  wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::reset(a1);
  *a1 = 0LL;
  v8 = 0LL;
  v4 = CActionCenterExperienceManager::QueryInterface(v3, &_uuidof__AUIWeakReferenceSource_Details_Platform__, &v8);
  v5 = v8;
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, a1);
  if ( v5 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x795,
      (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)v4,
      1);
  return a1;
}
