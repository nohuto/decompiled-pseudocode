/*
 * XREFs of HalpHvCheckIommuCapability @ 0x140CB5D44
 * Callers:
 *     HalpIommuInitDiscard @ 0x140CB5E64 (HalpIommuInitDiscard.c)
 * Callees:
 *     HviGetHardwareFeatures @ 0x1404DF900 (HviGetHardwareFeatures.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

_QWORD *__fastcall HalpHvCheckIommuCapability(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF
  int v15; // [rsp+40h] [rbp-10h]

  v13 = 0LL;
  HalpHvIommu = 0;
  if ( HalpHvCpuManager )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    _RAX = 1073741827LL;
    HalpHvIommuDeviceDomain = BYTE3(_RDX) & 1;
    __asm { cpuid }
    a2 = (unsigned int)_RDX >> 25;
    LOBYTE(a2) = a2 & 1;
    *(_QWORD *)&v14 = __PAIR64__(_RBX, _RAX);
    HalpHvParaVirtIommuDomain = a2;
    *((_QWORD *)&v14 + 1) = (unsigned int)_RCX;
  }
  v15 = 0;
  v14 = 0LL;
  if ( qword_140FBB4B8 )
    guard_dispatch_icall_no_overrides((__int64)&v14, a2);
  HviGetHardwareFeatures((__int64)&v13);
  if ( HalpPrebootMode || (v13 & 0x20) != 0 || (result = (_QWORD *)(v14 & 5), (_BYTE)result == 5) )
  {
    result = (_QWORD *)HalIommuDispatch;
    HalpHvIommu = 1;
    *(_QWORD *)(HalIommuDispatch + 8) = IommuHvGetConfiguration;
    result[5] = IommuHvSetAddressSpace;
    result[9] = IommuHvFlushTb;
    result[10] = IommuHvFlushAllPasid;
    result[16] = IommuHvDevicePowerChange;
  }
  return result;
}
