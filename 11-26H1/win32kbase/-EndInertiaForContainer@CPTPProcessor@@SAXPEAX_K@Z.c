/*
 * XREFs of ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x140218C18
 * Callers:
 *     ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x140219660 (-OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x140126220 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x140126618 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14016DC30 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 */

void __fastcall CPTPProcessor::EndInertiaForContainer(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  struct tagHID_POINTER_DEVICE_INFO *v7; // rbx
  __int64 *v8; // rdi
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 UserSessionState; // rax
  int v13; // edx
  int v14; // ecx
  const struct INERTIA_INFO_INTERNAL *Inertia; // rsi
  int v16; // r8d
  struct tagPOINT *v17; // rax
  struct tagPOINT v18; // rbx
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  struct tagPOINT *v22; // rax
  CInertiaManager *v23; // rcx

  v2 = a2;
  LOBYTE(a2) = 19;
  v3 = HMValidateHandleNoSecure(a1, a2);
  if ( v3 )
  {
    v7 = *(struct tagHID_POINTER_DEVICE_INFO **)(v3 + 456);
    if ( v7 )
    {
      v8 = (__int64 *)(W32GetUserSessionState(v5, v4, v6) + 16912);
      UserSessionState = W32GetUserSessionState(v10, v9, v11);
      Inertia = (const struct INERTIA_INFO_INTERNAL *)CInertiaManager::QueryInertia(
                                                        (__int64)v8,
                                                        *(_QWORD *)(UserSessionState + 19216),
                                                        15);
      if ( Inertia )
      {
        v17 = (struct tagPOINT *)W32GetUserSessionState(v14, v13, v16);
        v18 = CPTPProcessor::TransformTPScreenToHimetric(v7, v17[2402]);
        v22 = (struct tagPOINT *)W32GetUserSessionState(v20, v19, v21);
        CInertiaManager::PostInertiaMessage(v23, 0x23Cu, Inertia, v22[2402], v18);
        *v8 = v2;
      }
    }
  }
}
