/*
 * XREFs of IommupHvIsStage1DmarCompatible @ 0x14059E728
 * Callers:
 *     HalpDmaGetDefaultRemappingDomainPolicy @ 0x140578DC0 (HalpDmaGetDefaultRemappingDomainPolicy.c)
 *     IommupDeviceEnablePasidTaggedDma @ 0x14078268C (IommupDeviceEnablePasidTaggedDma.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

bool __fastcall IommupHvIsStage1DmarCompatible(_DWORD *a1, char a2)
{
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  if ( HalpHvParaVirtIommuDomain
    && (!a2 || LOBYTE(IommuInterfaceStateChangeCallbackPushLock.StackLimit))
    && *a1 == 1
    && (int)guard_dispatch_icall_no_overrides(a1, &v4) >= 0
    && (v4 & 0x20) != 0 )
  {
    if ( !a2 )
      return 1;
    if ( (v4 & 0x200) != 0 )
      return DWORD1(v4) >= LODWORD(IommuInterfaceStateChangeCallbackPushLock.KernelStack);
  }
  return 0;
}
