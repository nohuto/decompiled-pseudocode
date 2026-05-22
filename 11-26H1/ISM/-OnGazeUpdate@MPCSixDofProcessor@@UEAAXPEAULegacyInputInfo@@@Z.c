/*
 * XREFs of ?OnGazeUpdate@MPCSixDofProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x180023740
 * Callers:
 *     <none>
 * Callees:
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180024128 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800244EC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180024524 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 */

void __fastcall MPCSixDofProcessor::OnGazeUpdate(unsigned __int64 this, struct LegacyInputInfo *a2)
{
  struct MPCGestureHandlerManager *Instance; // rdi
  __int64 v4; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  Instance = MPCGestureHandlerManager::GetInstance();
  v4 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
         &v5,
         this & -(__int64)(this != 24));
  MPCGestureHandlerManager::OnGazeUpdate(Instance, v4);
}
