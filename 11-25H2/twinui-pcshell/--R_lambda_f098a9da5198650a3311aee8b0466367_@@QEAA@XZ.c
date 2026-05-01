/*
 * XREFs of ??R_lambda_f098a9da5198650a3311aee8b0466367_@@QEAA@XZ @ 0x18044D26C
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_f098a9da5198650a3311aee8b0466367_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x180450610 (-Run@-$CTaskWrapper@V_lambda_f098a9da5198650a3311aee8b0466367_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x1801A8FD8 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _lambda_f098a9da5198650a3311aee8b0466367_::operator()(__int64 (**this)(void))
{
  HWND WindowW; // rax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !WindowW || GetPropW(WindowW, L"IsExplorerShuttingDown") )
    return this[1]();
  v6 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
  v3 = CMarshaledInterface::_Unmarshal((CMarshaledInterface *)this, &GUID_cc9f58c7_f178_47ce_b78c_6c5f88e13931, &v6, 0);
  if ( v3 >= 0 )
    (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, 0LL);
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xCA,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v3);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
}
