/*
 * XREFs of ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x140211228
 * Callers:
 *     ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x1402129C0 (-OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1400DA130 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1400DA8D0 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1401519B8 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 */

void __fastcall CPTPProcessor::EndInertiaForContainer(void *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagHID_POINTER_DEVICE_INFO *v6; // rbx
  __int64 UserSessionState; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const struct INERTIA_INFO_INTERNAL *Inertia; // rsi
  struct tagPOINT *v14; // rax
  struct tagPOINT v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagPOINT *v18; // rax
  CInertiaManager *v19; // rcx

  v3 = HMValidateHandleNoSecure((int)a1, 19);
  if ( v3 )
  {
    v6 = *(struct tagHID_POINTER_DEVICE_INFO **)(v3 + 456);
    if ( v6 )
    {
      UserSessionState = W32GetUserSessionState(v5, v4);
      v10 = W32GetUserSessionState(v9, v8);
      Inertia = (const struct INERTIA_INFO_INTERNAL *)CInertiaManager::QueryInertia(
                                                        UserSessionState + 16920,
                                                        *(_QWORD *)(v10 + 19184),
                                                        15);
      if ( Inertia )
      {
        v14 = (struct tagPOINT *)W32GetUserSessionState(v12, v11);
        v15 = CPTPProcessor::TransformTPScreenToHimetric(v6, v14[2398]);
        v18 = (struct tagPOINT *)W32GetUserSessionState(v17, v16);
        CInertiaManager::PostInertiaMessage(v19, 572LL, Inertia, v18[2398], v15);
        *(_QWORD *)(UserSessionState + 16920) = a2;
      }
    }
  }
}
