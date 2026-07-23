/*
 * XREFs of PnpSetDeviceAffinityThread @ 0x14049B304
 * Callers:
 *     PnpGetRelatedTargetDevice @ 0x14049B114 (PnpGetRelatedTargetDevice.c)
 *     PnpSendIrp @ 0x14049B254 (PnpSendIrp.c)
 *     PnpCallAddDevice @ 0x14096F278 (PnpCallAddDevice.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140201320 (KeQueryNodeActiveAffinity.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeAndGroupAffinityEx @ 0x140462640 (KeAndGroupAffinityEx.c)
 */

__int64 __fastcall PnpSetDeviceAffinityThread(__int64 a1, _GROUP_AFFINITY *a2)
{
  __int64 v3; // r9
  unsigned int v5; // ecx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  if ( !a1 )
    return 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( !v3 )
    return 0LL;
  v5 = *(_DWORD *)(v3 + 660);
  if ( v5 == -1 )
    return 0LL;
  if ( v5 == -2 )
    return 0LL;
  if ( v5 >= (unsigned __int16)KeNumberNodes )
    return 0LL;
  KeQueryNodeActiveAffinity(v5, &Affinity, 0LL);
  KeAndGroupAffinityEx(
    (_KWAIT_STATUS_REGISTER *)&stru_140FC11F0.WaitRegister.Flags,
    (__int64)&Affinity,
    (char *)&Affinity);
  if ( !Affinity.Mask )
    return 0LL;
  KeSetSystemGroupAffinityThread(&Affinity, a2);
  return 1LL;
}
