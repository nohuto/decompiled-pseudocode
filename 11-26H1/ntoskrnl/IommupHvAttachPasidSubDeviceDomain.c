/*
 * XREFs of IommupHvAttachPasidSubDeviceDomain @ 0x1405A0574
 * Callers:
 *     IommupDomainAttachPasidDevice @ 0x14058A5DC (IommupDomainAttachPasidDevice.c)
 * Callees:
 *     IommupHvSetUpDomainConfig @ 0x1405A110C (IommupHvSetUpDomainConfig.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvAttachPasidSubDeviceDomain(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // ebx
  _OWORD v7[3]; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 32), *(unsigned int *)(a1 + 48));
  if ( v5 >= 0 )
  {
    v7[0] = 0LL;
    v5 = IommupHvSetUpDomainConfig(a2, v7);
    if ( v5 < 0 || (v5 = guard_dispatch_icall_no_overrides(0LL, *(unsigned int *)(a1 + 48)), v5 < 0) )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 32), *(unsigned int *)(a1 + 48));
  }
  return (unsigned int)v5;
}
