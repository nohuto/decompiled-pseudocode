/*
 * XREFs of ?SetBand@CFrameApplicationPresentation@@UEAAJW4ZBID@@@Z @ 0x1801E4210
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetBand(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rcx
  HWND ForegroundWindow; // rax
  HWND v8; // rbp
  int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == *(_DWORD *)(a1 + 212) )
    return 0LL;
  v4 = 0LL;
  *(_DWORD *)(a1 + 212) = a2;
  if ( a2 == 1 )
  {
    v4 = -2LL;
    ForegroundWindow = GetForegroundWindow();
    v8 = ForegroundWindow;
    if ( ForegroundWindow )
    {
      if ( *(HWND *)(a1 + 128) != ForegroundWindow && (GetWindowLongPtrW(ForegroundWindow, -20) & 8) == 0 )
        v4 = (__int64)v8;
    }
  }
  result = (*(__int64 (__fastcall **)(PVOID, _QWORD, __int64, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                                     + 32LL))(
             CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
             *(_QWORD *)(a1 + 128),
             v4,
             a2);
  if ( (int)result >= 0 )
  {
    if ( a2 == 1 && ((v4 + 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
    {
      v9 = (*(__int64 (__fastcall **)(PVOID, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr
                                                             + 40LL))(
             CApplicationManagerUtility::g_pIAMGlobals[19].Ptr,
             *(_QWORD *)(a1 + 128),
             v4);
      if ( v9 < 0 )
      {
        v10 = 1749LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
          (const char *)(unsigned int)v9);
        return (unsigned int)v9;
      }
    }
    v6 = **(_QWORD **)(a1 + 104);
    if ( v6 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, a2);
      if ( v9 < 0 )
      {
        v10 = 1758LL;
        goto LABEL_16;
      }
    }
    return 0LL;
  }
  return result;
}
