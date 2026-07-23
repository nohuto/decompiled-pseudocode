/*
 * XREFs of ExBlockOnAddressPushLock @ 0x140478530
 * Callers:
 *     CmUnRegisterCallback @ 0x1408568E0 (CmUnRegisterCallback.c)
 *     CmpRollbackLightWeightTransaction @ 0x1408B48C4 (CmpRollbackLightWeightTransaction.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     CmpTransSearchAddTrans @ 0x1408F2710 (CmpTransSearchAddTrans.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 *     MiLockImageSection @ 0x140A9E9E8 (MiLockImageSection.c)
 *     PopBatteryUpdateCurrentState @ 0x140AAF2C0 (PopBatteryUpdateCurrentState.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140AC16F8 (CmFcpManagerProcessUsageDataProviders.c)
 *     RtlUpdateSwapReference @ 0x140AC1C5C (RtlUpdateSwapReference.c)
 *     CmFcManagerFlushFeatureUsage @ 0x140B3625C (CmFcManagerFlushFeatureUsage.c)
 *     PsSetVmProcessorHostProcess @ 0x140B6B880 (PsSetVmProcessorHostProcess.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x14036A040 (ExpUnblockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140478630 (ExTimedWaitForUnblockPushLock.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall ExBlockOnAddressPushLock(signed __int64 *a1, _BYTE *a2, _BYTE *a3, __int64 a4, __int64 a5)
{
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  signed __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rbx
  bool v16; // zf
  _BYTE v18[24]; // [rsp+20h] [rbp-48h] BYREF
  signed __int64 v19; // [rsp+38h] [rbp-30h]
  int v20; // [rsp+54h] [rbp-14h]

  memset_0(v18, 0, 0x40uLL);
  v20 = 2;
  _m_prefetchw(a1);
  v19 = *a1;
  v10 = v19;
  v9 = _InterlockedCompareExchange64(a1, (signed __int64)v18, v19);
  if ( v10 != v9 )
  {
    do
    {
      v11 = v9;
      v19 = v9;
      v9 = _InterlockedCompareExchange64(a1, (signed __int64)v18, v9);
    }
    while ( v9 != v11 );
  }
  v12 = 0;
  v13 = a4 - 1;
  if ( !v13 )
  {
    if ( *a2 == *a3 )
      return (unsigned int)ExTimedWaitForUnblockPushLock(a1, v18, a5);
    goto LABEL_11;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 2;
    if ( v15 )
    {
      if ( v15 == 4 )
      {
        v16 = *(_QWORD *)a2 == *(_QWORD *)a3;
        goto LABEL_8;
      }
LABEL_11:
      ExpUnblockPushLock(a1, v18, 0);
      return v12;
    }
    v16 = *(_DWORD *)a2 == *(_DWORD *)a3;
  }
  else
  {
    v16 = *(_WORD *)a2 == *(_WORD *)a3;
  }
LABEL_8:
  if ( !v16 )
    goto LABEL_11;
  return (unsigned int)ExTimedWaitForUnblockPushLock(a1, v18, a5);
}
