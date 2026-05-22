/*
 * XREFs of ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x1800BB190
 * Callers:
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x180056C50 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x18004BAD4 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180056F88 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180057000 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x1800BA1E0 (-Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x1800BB95C (-UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ.c)
 */

void __fastcall MPCHolographicInputManager::OnHitTestingStateChanged(MPCHolographicInputManager *this, char a2)
{
  __int64 *v2; // rdi
  RTL_SRWLOCK *Instance; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax

  v2 = (__int64 *)((char *)this + 3376);
  if ( a2 )
  {
    Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(Instance);
    Microsoft::WRL::ComPtr<IInputTarget>::operator=(v2, (__int64)PostProcessor);
    MPCHolographicInputManager::Initialize3DComponents(this);
  }
  else
  {
    MPCHolographicInputManager::UnInitialize3DComponents(this);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
  }
}
