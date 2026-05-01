/*
 * XREFs of ?_GetApplicationFromFrame@CApplicationFrameService@@AEAAJPEAUIApplicationFrame@@PEAPEAUIImmersiveApplication@@@Z @ 0x18017B318
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18017AB50 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180063A20 (-GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::_GetApplicationFromFrame(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2,
        struct IImmersiveApplication **a3)
{
  int FrameByWindow; // ebx
  struct IApplicationFrameProxy *v6; // rcx
  struct IApplicationFrameProxy *v8; // [rsp+48h] [rbp+10h] BYREF
  HWND v9; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v9 = 0LL;
  FrameByWindow = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a2 + 24LL))(a2, &v9);
  if ( FrameByWindow >= 0 )
  {
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v8 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
    FrameByWindow = CApplicationFrameService::GetFrameByWindow((CApplicationFrameService *)((char *)this + 40), v9, &v8);
    if ( FrameByWindow >= 0 )
      FrameByWindow = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationFrameProxy *, GUID *, struct IImmersiveApplication **))(**((_QWORD **)this + 21) + 48LL))(
                        *((_QWORD *)this + 21),
                        v8,
                        &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                        a3);
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    v6 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return (unsigned int)FrameByWindow;
}
