/*
 * XREFs of ??1CWindowList@@UEAA@XZ @ 0x1800DF464
 * Callers:
 *     ??_ECWindowList@@UEAAPEAXI@Z @ 0x1800AA3F0 (--_ECWindowList@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x1800088C0 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001AF20 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18001E8E0 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ @ 0x18001EB40 (-CommitAndCloseResizeCompSyncObject@CWindowList@@AEAAXXZ.c)
 *     ?IsEmpty@?$CGenericSet@PEAVCWindowData@@@@QEAA_NXZ @ 0x18004D2A0 (-IsEmpty@-$CGenericSet@PEAVCWindowData@@@@QEAA_NXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180062A98 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?StopRotation@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18006E7BC (-StopRotation@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAVCWindowData@@U?$SetElement@PEAVCWindowData@@@?$CGenericSet@PEAVCWindowData@@@@@@QEAAXPEAU?$SetElement@PEAVCWindowData@@@?$CGenericSet@PEAVCWindowData@@@@@Z @ 0x18007800C (-RemoveElement@-$CGenericTableMap@PEAVCWindowData@@U-$SetElement@PEAVCWindowData@@@-$CGenericSet.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18008D8A4 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     ??3@YAXPEAX_K@Z @ 0x18008E5B4 (--3@YAXPEAX_K@Z.c)
 *     ?RemoveElement@?$CGenericTableMap@_KUCDesktop@@@@QEAAXPEAUCDesktop@@@Z @ 0x1800AC87C (-RemoveElement@-$CGenericTableMap@_KUCDesktop@@@@QEAAXPEAUCDesktop@@@Z.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x1800DF85C (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall CWindowList::~CWindowList(CWindowList *this)
{
  CWindowList *v1; // rdi
  winrt::Udwm::Transitions::TransitionManager *Current; // rax
  const char *v3; // r9
  CBaseObject *v4; // rcx
  unsigned int v5; // edx
  CLoginTransition *v6; // rcx
  struct CWindowData **v7; // rax
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  CBaseObject *v14; // rcx
  PVOID v15; // rax
  _QWORD *v16; // rsi
  CBaseObject *v17; // rcx
  CBaseObject *v18; // rcx
  void *v19; // rcx
  struct wil::details::wnf_subscription_state_base *v20; // rdx
  __int64 *v21; // rax
  __int64 *v22; // rax
  _QWORD *v23; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PVOID v25; // [rsp+40h] [rbp+8h] BYREF
  PVOID v26; // [rsp+48h] [rbp+10h] BYREF
  PVOID RestartKey; // [rsp+50h] [rbp+18h] BYREF

  v25 = this;
  v1 = this;
  *(_QWORD *)this = &CWindowList::`vftable';
  v26 = 0LL;
  CWindowList::CommitAndCloseResizeCompSyncObject(this);
  try
  {
    Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent();
    winrt::Udwm::Transitions::TransitionManager::StopRotation(Current);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x46,
      (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
      v3);
    v1 = (CWindowList *)v25;
  }
  v4 = (CBaseObject *)*((_QWORD *)v1 + 69);
  if ( v4 )
    CBaseObject::Release(v4);
  v6 = (CLoginTransition *)*((_QWORD *)v1 + 68);
  if ( v6 )
  {
    CLoginTransition::`scalar deleting destructor'(v6, v5);
    *((_QWORD *)v1 + 68) = 0LL;
  }
  while ( !CGenericSet<CWindowData *>::IsEmpty((struct _RTL_GENERIC_TABLE *)((char *)v1 + 312)) )
  {
    RestartKey = 0LL;
    v7 = (struct CWindowData **)RtlEnumerateGenericTableWithoutSplaying(
                                  (PRTL_GENERIC_TABLE)((char *)v1 + 312),
                                  &RestartKey);
    CWindowList::ImmediateDestroySprite(v1, *v7);
  }
  while ( 1 )
  {
    v15 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 8), &v26);
    v16 = v15;
    if ( !v15 )
      break;
    v8 = (CBaseObject *)*((_QWORD *)v15 + 1);
    if ( v8 )
      CBaseObject::Release(v8);
    v9 = (CBaseObject *)v16[2];
    if ( v9 )
      CBaseObject::Release(v9);
    v10 = (CBaseObject *)v16[3];
    if ( v10 )
      CBaseObject::Release(v10);
    v11 = (CBaseObject *)v16[4];
    if ( v11 )
      CBaseObject::Release(v11);
    v12 = (CBaseObject *)v16[5];
    if ( v12 )
      CBaseObject::Release(v12);
    v13 = (CBaseObject *)v16[6];
    if ( v13 )
      CBaseObject::Release(v13);
    v14 = (CBaseObject *)v16[7];
    if ( v14 )
      CBaseObject::Release(v14);
  }
  v17 = (CBaseObject *)*((_QWORD *)v1 + 11);
  if ( v17 )
    CBaseObject::Release(v17);
  v18 = (CBaseObject *)*((_QWORD *)v1 + 10);
  if ( v18 )
    CBaseObject::Release(v18);
  v19 = (void *)*((_QWORD *)v1 + 66);
  if ( v19 )
  {
    operator delete(v19, (const struct std::nothrow_t *)0x18);
    *((_QWORD *)v1 + 66) = 0LL;
  }
  CBitmapSourceArray::~CBitmapSourceArray((void **)v1 + 80);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(
    (wil::details **)v1 + 78,
    v20);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)v1 + 77);
  CBitmapSourceArray::~CBitmapSourceArray((void **)v1 + 71);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)v1 + 70);
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)v1 + 67);
  CBitmapSourceArray::~CBitmapSourceArray((void **)v1 + 62);
  while ( 1 )
  {
    v25 = 0LL;
    v21 = (__int64 *)RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 424), &v25);
    if ( !v21 )
      break;
    CGenericTableMap<CWindowData *,CGenericSet<CWindowData *>::SetElement<CWindowData *>>::RemoveElement(
      (struct _RTL_GENERIC_TABLE *)((char *)v1 + 424),
      v21);
  }
  CBitmapSourceArray::~CBitmapSourceArray((void **)v1 + 48);
  while ( 1 )
  {
    v25 = 0LL;
    v22 = (__int64 *)RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 312), &v25);
    if ( !v22 )
      break;
    CGenericTableMap<CWindowData *,CGenericSet<CWindowData *>::SetElement<CWindowData *>>::RemoveElement(
      (struct _RTL_GENERIC_TABLE *)((char *)v1 + 312),
      v22);
  }
  CBitmapSourceArray::~CBitmapSourceArray((void **)v1 + 35);
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease((CBaseObject **)v1 + 12);
  while ( 1 )
  {
    v25 = 0LL;
    v23 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)v1 + 8), &v25);
    if ( !v23 )
      break;
    CGenericTableMap<unsigned __int64,CDesktop>::RemoveElement((struct _RTL_GENERIC_TABLE *)((char *)v1 + 8), v23);
  }
}
