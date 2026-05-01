/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7fad240542ce92aae90a7e34c5fc06d3___::Run @ 0x1802E1E10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CopyLocal@UIBatterySaverStateChangedHandler@@@AgileGitPtr@@QEBAJV?$ComPtrRef@V?$ComPtr@UIBatterySaverStateChangedHandler@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802C91E0 (--$CopyLocal@UIBatterySaverStateChangedHandler@@@AgileGitPtr@@QEBAJV-$ComPtrRef@V-$ComPtr@UIBatt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7fad240542ce92aae90a7e34c5fc06d3___::Run(
        __int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = AgileGitPtr::CopyLocal<IBatterySaverStateChangedHandler>((AgileGitPtr *)(a1 + 24), &v6);
  if ( v2 < 0
    || (LOBYTE(v3) = *(_BYTE *)(a1 + 16),
        v2 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v6 + 24LL))(v6, v3),
        v2 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (int)"pcshell\\twinui\\acrylicmanager\\lib\\acrylicpolicymanager.cpp",
      (const char *)(unsigned int)v2);
  }
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v6);
}
