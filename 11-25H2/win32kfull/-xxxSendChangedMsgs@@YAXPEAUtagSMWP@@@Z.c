/*
 * XREFs of ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x140233E58
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14004CC40 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x140035D3C (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     DwmChildRectChange @ 0x140036870 (DwmChildRectChange.c)
 *     DirtyVisRgnTrackers @ 0x140037A28 (DirtyVisRgnTrackers.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     xxxNotifyMonitorChanged @ 0x1400654C0 (xxxNotifyMonitorChanged.c)
 *     xxxAddShadow @ 0x1400E0A5C (xxxAddShadow.c)
 *     WindowHasShadow @ 0x1400E1290 (WindowHasShadow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1400E12C0 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1400E1A4C (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x140155710 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     xxxRemoveShadow @ 0x14017EAD0 (xxxRemoveShadow.c)
 *     ?PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1401B6A4C (-PostIAMPosChangedNotification@@YAXPEAUtagCVR@@PEAUtagWND@@@Z.c)
 *     ShouldHaveShadow @ 0x1401D159C (ShouldHaveShadow.c)
 *     CalcWindowFullScreen @ 0x1401F3F0C (CalcWindowFullScreen.c)
 *     xxxUpdateShadowZorder @ 0x1402180E4 (xxxUpdateShadowZorder.c)
 *     zzzMoveShadow @ 0x140220F8C (zzzMoveShadow.c)
 *     ?xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z @ 0x1402340C4 (-xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z.c)
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x1402597B4 (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline @ 0x1402721FC (Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall xxxSendChangedMsgs(struct tagSMWP *a1, __int64 a2)
{
  __int64 v2; // rbx
  struct tagSMWP *v3; // r14
  int v4; // ebp
  struct tagWND *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // ecx
  struct tagWND **Shadow; // rax
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rdx
  struct tagRECT v14; // xmm0
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int16 v17; // r9
  const struct tagCVR *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rdx
  struct tagRECT v21; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v3 = a1;
  v4 = *((_DWORD *)a1 + 7);
  while ( --v4 >= 0 )
  {
    a1 = *(struct tagSMWP **)v2;
    if ( *(_QWORD *)v2 )
    {
      LOBYTE(a2) = 1;
      v5 = (struct tagWND *)HMValidateHandleNoSecure((__int64)a1, a2);
      if ( v5 )
      {
        if ( (unsigned int)IsStillWindowC(*(HWND *)(v2 + 8), a2) )
        {
          if ( (*(_DWORD *)(v2 + 32) & 0x40000) != 0 || (*(_DWORD *)(v2 + 32) & 0x18E7) == 0x1807 )
          {
            if ( !(unsigned int)Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline() )
              PostIAMPosChangedNotification((struct tagCVR *)v2, v5);
          }
          else
          {
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v5);
            if ( (*(_DWORD *)(v2 + 32) & 0x80u) != 0 )
              xxxRemoveShadow((__int64)v5, v6);
            if ( (*(_DWORD *)(v2 + 32) & 0x40) != 0 )
            {
              if ( (unsigned int)ShouldHaveShadow(v5) )
                xxxAddShadow(v5, v7);
            }
            else if ( (unsigned int)WindowHasShadow(v5) )
            {
              v9 = *(_DWORD *)(v2 + 32);
              if ( (v9 & 0x21) == 1 )
              {
                if ( (v9 & 2) == 0 )
                  zzzMoveShadow(v5, v8);
              }
              else
              {
                Shadow = (struct tagWND **)FindShadow(v5, v8);
                if ( Shadow )
                  zzzApplyShadow(*Shadow, Shadow[1]);
              }
              if ( (*(_DWORD *)(v2 + 32) & 4) == 0 )
                xxxUpdateShadowZorder(v5, v8);
            }
            v11 = *(_DWORD *)(v2 + 32) & 0x9820;
            if ( (unsigned int)IsWindowDesktopComposed(v5) && v11 != 6144 )
            {
              DwmChildRectChange(v5);
              DirtyVisRgnTrackers(v5, v12);
            }
            xxxSendPosMessage(v5, 0x47u, (struct tagWINDOWPOS *)v2);
            if ( (*(_DWORD *)(v2 + 156) & 0x40) != 0 )
            {
              if ( (*(_DWORD *)(v2 + 32) & 0x80000) != 0 )
                v14 = *(struct tagRECT *)(*((_QWORD *)v5 + 5) + 88LL);
              else
                v14 = *(struct tagRECT *)(v2 + 136);
              v15 = *(_QWORD *)(v2 + 128);
              v21 = v14;
              v16 = ValidateHmonitorNoRip(v15, v13);
              if ( v16 )
                v17 = *(_WORD *)(*(_QWORD *)(v16 + 40) + 60LL);
              else
                v17 = 0;
              xxxNotifyMonitorChanged(v5, &v21, *(struct tagBWL **)(v2 + 160), v17);
            }
            if ( !(unsigned int)Feature_NoMoreSwpIamNotifyPosChanged__private_IsEnabledDeviceUsageNoInline() )
              PostIAMPosChangedNotification((struct tagCVR *)v2, v5);
            NotifyShell::PositioningChanged(v5, (struct tagWND *)v2, v18);
            CalcWindowFullScreen(v5);
            if ( v11 != 6144 )
              xxxWindowEvent(0x800Bu, v5, 0, 0, 1);
            Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v19);
          }
        }
      }
      else
      {
        *(_QWORD *)v2 = 0LL;
        *(_DWORD *)(v2 + 32) = 6159;
      }
    }
    v2 += 168LL;
  }
  if ( (**(_DWORD **)(W32GetUserSessionState(a1, a2) + 19872) & 4) != 0 )
    xxxImeWindowPosChanged(v3, v20);
}
