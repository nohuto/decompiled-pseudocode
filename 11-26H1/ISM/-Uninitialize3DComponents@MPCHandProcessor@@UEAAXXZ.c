/*
 * XREFs of ?Uninitialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x1800C1530
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAXPEAVMPCButtonHoldHelper@@@Z @ 0x1800C1654 (-reset@-$unique_ptr@VMPCButtonHoldHelper@@U-$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QE.c)
 *     ?reset@?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAXPEAVMPCSlateDeadzoneHelper@@@Z @ 0x1800C1678 (-reset@-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@s.c)
 *     ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x1800C4D50 (-ClearInputTargets@MPCInputProviderBase@@IEAAXXZ.c)
 */

void __fastcall MPCHandProcessor::Uninitialize3DComponents(MPCHandProcessor *this)
{
  std::unique_ptr<MPCSlateDeadzoneHelper>::reset((char *)this + 3648, 0LL);
  std::unique_ptr<MPCSlateDeadzoneHelper>::reset((char *)this + 3656, 0LL);
  std::unique_ptr<MPCButtonHoldHelper>::reset((char *)this + 3664, 0LL);
  MPCInputProviderBase::ClearInputTargets((MPCHandProcessor *)((char *)this - 24));
  *((_BYTE *)this + 3547) = 0;
}
