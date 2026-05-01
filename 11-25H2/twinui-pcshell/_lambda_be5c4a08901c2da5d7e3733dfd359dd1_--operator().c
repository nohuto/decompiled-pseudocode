/*
 * XREFs of _lambda_be5c4a08901c2da5d7e3733dfd359dd1_::operator() @ 0x18045E918
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_be5c4a08901c2da5d7e3733dfd359dd1___::Run @ 0x180464500 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_be5c4a08901c2da5d7e3733dfd359dd1___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800B90F0 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18020E8D8 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1802A91B8 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_be5c4a08901c2da5d7e3733dfd359dd1_::operator()(__int64 a1)
{
  ULONGLONG TickCount64; // r9
  __int64 v3; // rax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)a1, &v7) >= 0
    && !TouchKeyboardExperienceManager::IsSessionShuttingDown() )
  {
    TickCount64 = GetTickCount64();
    if ( ((TickCount64 - *(_QWORD *)(*(_QWORD *)(a1 + 8) + 992LL)) & -(__int64)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 992LL) < TickCount64)) >= *(unsigned int *)(a1 + 16) )
    {
      v3 = *(_QWORD *)(a1 + 8);
      if ( *(_QWORD *)(v3 + 584) )
      {
        _InterlockedExchange64((volatile __int64 *)(v3 + 992), TickCount64);
        v4 = KeyboardHosting::TabTipAdapter::RelaunchInputAppAfterTermination(*(KeyboardHosting::TabTipAdapter **)(*(_QWORD *)(a1 + 8) + 584LL));
        if ( v4 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1044,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v4);
      }
    }
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
}
