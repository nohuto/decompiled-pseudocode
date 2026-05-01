/*
 * XREFs of ?WorkAreaChanged@TouchKeyboardExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x180238480
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800C1B0C (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x18002A0C0 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetWorkAreaRect@TabTipAdapter@KeyboardHosting@@QEAAJPEBUtagRECT@@@Z @ 0x18009334C (-SetWorkAreaRect@TabTipAdapter@KeyboardHosting@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x180095B48 (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??4?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801AB3C8 (--4-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@@@std@@@2@@s.c)
 *     KeyboardHosting::ForceToFitRectWithinMonitorRect @ 0x18021F78C (KeyboardHosting--ForceToFitRectWithinMonitorRect.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$WorkAreaChanged_ForceToFitRectInMonitor@PEBGAEAUtagRECT@@AEBU1@@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAUtagRECT@@AEBU1@@Z @ 0x1804599DC (--$WorkAreaChanged_ForceToFitRectInMonitor@PEBGAEAUtagRECT@@AEBU1@@TouchKeyboardExperienceTeleme.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::WorkAreaChanged(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  void *v5; // rdi
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
  __int64 v17; // [rsp+40h] [rbp-29h]
  __int128 v18; // [rsp+48h] [rbp-21h]
  __int128 v19; // [rsp+58h] [rbp-11h] BYREF
  __int128 v20; // [rsp+68h] [rbp-1h] BYREF
  struct tagRECT Rect; // [rsp+78h] [rbp+Fh] BYREF
  struct tagRECT v22; // [rsp+88h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( !*((_QWORD *)this + 57) )
    return 0LL;
  v16 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, (RTL_SRWLOCK *)this + 37);
  std::vector<std::shared_ptr<KBViewInfo>>::operator=(&v16, (_QWORD *)this + 38);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  v5 = (void *)v16;
  for ( i = v16; i != *((_QWORD *)&v16 + 1); i += 16LL )
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
                v20 = 0LL;
                *(float *)&v18 = (float)Rect.left;
                *((float *)&v18 + 1) = (float)Rect.top;
                *((float *)&v18 + 2) = (float)(Rect.right - Rect.left);
                *((float *)&v18 + 3) = (float)(Rect.bottom - Rect.top);
                v19 = v18;
                if ( KeyboardHosting::ForceToFitRectWithinMonitorRect((__int64)&v19, &a3->left, &v20) )
                {
                  v22.left = (int)*(float *)&v20;
                  v22.top = (int)*((float *)&v20 + 1);
                  v22.right = (int)(float)(*((float *)&v20 + 2) + *(float *)&v20);
                  v22.bottom = (int)(float)(*((float *)&v20 + 3) + *((float *)&v20 + 1));
                  v10 = TouchKeyboardExperienceManager::SetHostedPos(
                          v9,
                          *(struct IApplicationFrameWrapper **)(*(_QWORD *)i + 8LL),
                          v14,
                          &v22);
                  if ( v10 < 0 )
                    wil::details::in1diag3::_Log_Hr(
                      retaddr,
                      (void *)0xEC1,
                      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                      (const char *)(unsigned int)v10);
                  *(_QWORD *)&v20 = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)i + 112LL), 0LL);
                  TouchKeyboardExperienceTelemetryLogger::WorkAreaChanged_ForceToFitRectInMonitor<unsigned short const *,tagRECT &,tagRECT const &>(
                    &v20,
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
  v11 = KeyboardHosting::TabTipAdapter::SetWorkAreaRect(*((KeyboardHosting::TabTipAdapter **)this + 57), a3);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( v5 )
    {
      std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>((__int64)v5, *((__int64 *)&v16 + 1));
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)((v17 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF0uLL));
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xECC,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v11);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>((__int64)v5, *((__int64 *)&v16 + 1));
    std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)((v17 - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  return v12;
}
