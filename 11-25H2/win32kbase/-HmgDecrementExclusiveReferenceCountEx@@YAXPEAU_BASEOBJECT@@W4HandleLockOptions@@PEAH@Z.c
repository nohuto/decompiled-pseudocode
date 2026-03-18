/*
 * XREFs of ?HmgDecrementExclusiveReferenceCountEx@@YAXPEAU_BASEOBJECT@@W4HandleLockOptions@@PEAH@Z @ 0x140177140
 * Callers:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1400C03DC (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 * Callees:
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@W4HandleLockOptions@@PEAH@Z @ 0x1401C4E20 (-HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@.c)
 */

__int64 __fastcall HmgDecrementExclusiveReferenceCountEx(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rcx
  PVOID *p_DeviceContext; // rcx

  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    p_DeviceContext = *(PVOID **)(W32GetSessionState(v6) + 88);
  else
    p_DeviceContext = &WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  return HmgDecrementExclusiveReferenceCountExFastOpt(p_DeviceContext, a1, a2, a3);
}
