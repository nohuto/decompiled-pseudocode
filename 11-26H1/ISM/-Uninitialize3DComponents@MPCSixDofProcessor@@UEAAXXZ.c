/*
 * XREFs of ?Uninitialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x1801C19B0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAXPEAVMPCButtonHoldHelper@@@Z @ 0x1800C1654 (-reset@-$unique_ptr@VMPCButtonHoldHelper@@U-$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QE.c)
 *     ?reset@?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAXPEAVMPCSlateDeadzoneHelper@@@Z @ 0x1800C1678 (-reset@-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@s.c)
 *     ?ClearInputTargets@MPCInputProviderBase@@IEAAXXZ @ 0x1800C4D50 (-ClearInputTargets@MPCInputProviderBase@@IEAAXXZ.c)
 */

void __fastcall MPCSixDofProcessor::Uninitialize3DComponents(MPCSixDofProcessor *this)
{
  std::unique_ptr<MPCButtonHoldHelper>::reset((_QWORD *)this + 509, 0LL);
  std::unique_ptr<MPCButtonHoldHelper>::reset((_QWORD *)this + 510, 0LL);
  std::unique_ptr<MPCButtonHoldHelper>::reset((_QWORD *)this + 511, 0LL);
  std::unique_ptr<MPCButtonHoldHelper>::reset((_QWORD *)this + 512, 0LL);
  std::unique_ptr<MPCButtonHoldHelper>::reset((_QWORD *)this + 513, 0LL);
  std::unique_ptr<MPCButtonHoldHelper>::reset((_QWORD *)this + 514, 0LL);
  std::unique_ptr<MPCButtonHoldHelper>::reset((_QWORD *)this + 515, 0LL);
  std::unique_ptr<MPCSlateDeadzoneHelper>::reset((_QWORD *)this + 516, 0LL);
  std::unique_ptr<MPCSlateDeadzoneHelper>::reset((_QWORD *)this + 517, 0LL);
  MPCInputProviderBase::ClearInputTargets((MPCSixDofProcessor *)((char *)this - 24));
  *((_BYTE *)this + 3547) = 0;
}
