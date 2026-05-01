/*
 * XREFs of _lambda_8564353b7dc6971d7da83ff0ca7e4bd3_::operator() @ 0x18046A97C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8564353b7dc6971d7da83ff0ca7e4bd3___::Run @ 0x1804701B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8564353b7dc6971d7da83ff0ca7e4bd3___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C34B4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x180201AE4 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1802A1AB4 (-RelaunchInputAppAfterTermination@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_8564353b7dc6971d7da83ff0ca7e4bd3_::operator()(__int64 a1)
{
  ULONGLONG TickCount64; // r8
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
            (void *)0x101C,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v4);
      }
    }
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
}
