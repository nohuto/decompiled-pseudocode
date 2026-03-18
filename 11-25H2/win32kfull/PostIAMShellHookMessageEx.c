/*
 * XREFs of PostIAMShellHookMessageEx @ 0x1400237D0
 * Callers:
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140023794 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     HandleDisplayChangeForInactiveDesktops @ 0x140255740 (HandleDisplayChangeForInactiveDesktops.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140020958 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x140024198 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x140029E0C (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x14014BAA4 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     Feature_HSHELL_IAM_Delivery__private_GetVariant @ 0x1401ADC30 (Feature_HSHELL_IAM_Delivery__private_GetVariant.c)
 *     Feature_HSHELL_IAM_Delivery__private_IsEnabledPreCheck @ 0x1401DEBBC (Feature_HSHELL_IAM_Delivery__private_IsEnabledPreCheck.c)
 */

char __fastcall PostIAMShellHookMessageEx(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v6; // rax
  __int64 UserSessionState; // rax
  unsigned int v8; // edx
  struct tagWND *CompositeAppFrameWindowOrSelf; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  char Variant; // si
  __int64 v17; // rcx
  struct tagWND *v18; // rbx
  __int64 v19; // rax

  v3 = (unsigned int)a2;
  v4 = a3;
  if ( (((_DWORD)a2 - 17) & 0xFFFFFFFB) == 0 )
  {
    v6 = _HMObjectFromHandle(a3);
    *(_DWORD *)(v6 + 384) |= 2u;
  }
  LODWORD(UserSessionState) = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19872) + 2120LL);
  if ( (UserSessionState & 8) != 0 )
  {
    if ( *(_QWORD *)(a1 + 288) )
    {
      if ( (_DWORD)v3 != 39
        || (LOBYTE(UserSessionState) = ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x400, v8),
            (_BYTE)UserSessionState) )
      {
        CompositeAppFrameWindowOrSelf = 0LL;
        if ( (_DWORD)v3 != 35 )
        {
          CompositeAppFrameWindowOrSelf = (struct tagWND *)_HMObjectFromHandle(v4);
          UserSessionState = _HMPheFromObject(CompositeAppFrameWindowOrSelf);
          if ( (*(_BYTE *)(UserSessionState + 25) & 1) != 0 )
            return UserSessionState;
          v11 = (unsigned int)(v3 - 19);
          if ( (v11 & 0xFFFFFFFB) != 0 )
          {
            if ( (_DWORD)v3 != 39 )
            {
              LODWORD(UserSessionState) = *((_DWORD *)CompositeAppFrameWindowOrSelf + 96);
              if ( (UserSessionState & 2) == 0 )
                return UserSessionState;
            }
          }
          else
          {
            UserSessionState = W32GetUserSessionState(v11, v10);
            if ( !*(_QWORD *)(UserSessionState + 18888) )
              return UserSessionState;
            UserSessionState = W32GetUserSessionState(v13, v12);
            if ( *(struct tagWND **)(*(_QWORD *)(UserSessionState + 18888) + 128LL) != CompositeAppFrameWindowOrSelf )
              return UserSessionState;
            *((_DWORD *)CompositeAppFrameWindowOrSelf + 96) |= 2u;
            if ( (_DWORD)v3 == 19 )
            {
              CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(CompositeAppFrameWindowOrSelf);
              v4 = *(_QWORD *)CompositeAppFrameWindowOrSelf;
            }
          }
        }
        Feature_HSHELL_IAM_Delivery__private_IsEnabledPreCheck();
        Variant = Feature_HSHELL_IAM_Delivery__private_GetVariant();
        if ( (Variant & 3) == 0 )
          goto LABEL_24;
        if ( (Variant & 2) != 0 )
        {
          if ( CompositeAppFrameWindowOrSelf )
            v17 = *(_QWORD *)CompositeAppFrameWindowOrSelf;
          else
            LODWORD(v17) = 0;
          anonymous_namespace_::NotifyShellSimplePayload(v17, 12, v3, 0, 0);
        }
        LOBYTE(UserSessionState) = 1;
        if ( (Variant & 1) != 0 )
        {
LABEL_24:
          UserSessionState = *(_QWORD *)(a1 + 8);
          v18 = *(struct tagWND **)(UserSessionState + 184);
          if ( v18 )
          {
            v19 = W32GetUserSessionState(v15, v14);
            LOBYTE(UserSessionState) = (unsigned __int8)_PostTransformableMessageExtended(
                                                          v18,
                                                          *(_DWORD *)(*(_QWORD *)(v19 + 19872) + 928LL),
                                                          v3,
                                                          v4,
                                                          0LL,
                                                          1);
          }
        }
      }
    }
  }
  return UserSessionState;
}
