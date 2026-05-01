/*
 * XREFs of ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x18022A380
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800F8858 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x18009100C (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x1800BF00C (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180128914 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??4?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18018FD78 (--4-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std@@@2@@s.c)
 *     ?SetWorkAreaRect@TabTipAdapter@KeyboardHosting@@QEAAJPEBUtagRECT@@@Z @ 0x1801F7BC4 (-SetWorkAreaRect@TabTipAdapter@KeyboardHosting@@QEAAJPEBUtagRECT@@@Z.c)
 *     KeyboardHosting::ForceToFitRectWithinMonitorRect @ 0x180211014 (KeyboardHosting--ForceToFitRectWithinMonitorRect.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180289FE8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$WorkAreaChanged_ForceToFitRectInMonitor@PEBGAEAUtagRECT@@AEBU1@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAUtagRECT@@AEBU1@@Z @ 0x180465BF4 (--$WorkAreaChanged_ForceToFitRectInMonitor@PEBGAEAUtagRECT@@AEBU1@@TouchKeyboardExperienceTeleme.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::WorkAreaChanged(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  __int64 v5; // rdi
  __int64 i; // r14
  __int64 v7; // r12
  int (__fastcall *v8)(__int64, struct IApplicationFrame **); // rbx
  TouchKeyboardExperienceManager *v9; // rcx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  struct IApplicationFrame *v14; // [rsp+20h] [rbp-49h] BYREF
  PSRWLOCK SRWLock; // [rsp+28h] [rbp-41h] BYREF
  __int128 v16; // [rsp+30h] [rbp-39h] BYREF
  __int128 v17; // [rsp+40h] [rbp-29h] BYREF
  __int64 v18; // [rsp+50h] [rbp-19h]
  __int128 v19; // [rsp+58h] [rbp-11h]
  __int128 v20; // [rsp+68h] [rbp-1h] BYREF
  struct tagRECT Rect; // [rsp+78h] [rbp+Fh] BYREF
  struct tagRECT v22; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( !*((_QWORD *)this + 57) )
    return 0LL;
  v17 = 0LL;
  v18 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, (RTL_SRWLOCK *)this + 37);
  std::vector<std::shared_ptr<KBViewInfo>>::operator=(&v17, (_QWORD *)this + 38);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  v5 = v17;
  for ( i = v17; i != *((_QWORD *)&v17 + 1); i += 16LL )
  {
    if ( !(unsigned __int8)std::_Atomic_storage<bool,1>::load(*(_QWORD *)i + 34LL) )
    {
      v7 = *(_QWORD *)(*(_QWORD *)i + 8LL);
      if ( v7 )
      {
        v14 = 0LL;
        v8 = *(int (__fastcall **)(__int64, struct IApplicationFrame **))(*(_QWORD *)v7 + 32LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
        if ( v8(v7, &v14) >= 0 )
        {
          SRWLock = 0LL;
          if ( (*(int (__fastcall **)(struct IApplicationFrame *, PSRWLOCK *))(*(_QWORD *)v14 + 24LL))(v14, &SRWLock) >= 0 )
          {
            Rect = 0LL;
            if ( GetWindowRect((HWND)SRWLock, &Rect) )
            {
              if ( *((_DWORD *)this + 86) <= Rect.left
                && Rect.right <= *((_DWORD *)this + 88)
                && *((_DWORD *)this + 87) <= Rect.top
                && Rect.bottom <= *((_DWORD *)this + 89) )
              {
                v16 = 0LL;
                *(float *)&v19 = (float)Rect.left;
                *((float *)&v19 + 1) = (float)Rect.top;
                *((float *)&v19 + 2) = (float)(Rect.right - Rect.left);
                *((float *)&v19 + 3) = (float)(Rect.bottom - Rect.top);
                v20 = v19;
                if ( KeyboardHosting::ForceToFitRectWithinMonitorRect((__int64)&v20, &a3->left, &v16) )
                {
                  v22.left = (int)*(float *)&v16;
                  v22.top = (int)*((float *)&v16 + 1);
                  v22.right = (int)(float)(*((float *)&v16 + 2) + *(float *)&v16);
                  v22.bottom = (int)(float)(*((float *)&v16 + 3) + *((float *)&v16 + 1));
                  v10 = TouchKeyboardExperienceManager::SetHostedPos(
                          v9,
                          *(struct IApplicationFrameWrapper **)(*(_QWORD *)i + 8LL),
                          v14,
                          &v22);
                  if ( v10 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0xE9B,
                      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                      (const char *)(unsigned int)v10);
                  *(_QWORD *)&v16 = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)i + 112LL), 0LL);
                  TouchKeyboardExperienceTelemetryLogger::WorkAreaChanged_ForceToFitRectInMonitor<unsigned short const *,tagRECT &,tagRECT const &>(
                    &v16,
                    &Rect,
                    &v22);
                }
              }
            }
          }
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
      }
    }
  }
  *(struct tagRECT *)((char *)this + 344) = *a3;
  v11 = KeyboardHosting::TabTipAdapter::SetWorkAreaRect(*((RTL_SRWLOCK **)this + 57), a3);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( v5 )
    {
      std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v5, *((__int64 *)&v17 + 1));
      std::_Deallocate<16>(v5, (v18 - v5) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEA6,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v11);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>(v5, *((__int64 *)&v17 + 1));
    std::_Deallocate<16>(v5, (v18 - v5) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  return v12;
}
