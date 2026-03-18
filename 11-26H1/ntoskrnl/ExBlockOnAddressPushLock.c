/*
 * XREFs of ExBlockOnAddressPushLock @ 0x14047EBC0
 * Callers:
 *     CmUnRegisterCallback @ 0x1408505D0 (CmUnRegisterCallback.c)
 *     CmpRollbackLightWeightTransaction @ 0x1408AE484 (CmpRollbackLightWeightTransaction.c)
 *     CmLoadAppKey @ 0x1408B2250 (CmLoadAppKey.c)
 *     CmpTransSearchAddTrans @ 0x1408EC150 (CmpTransSearchAddTrans.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1408FAEC4 (ExpBlockOnLockedHandleEntry.c)
 *     MiLockImageSection @ 0x140A9BE78 (MiLockImageSection.c)
 *     PopBatteryUpdateCurrentState @ 0x140AB12D0 (PopBatteryUpdateCurrentState.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x140ABF658 (CmFcpManagerProcessUsageDataProviders.c)
 *     RtlUpdateSwapReference @ 0x140ABFBBC (RtlUpdateSwapReference.c)
 *     CmFcManagerFlushFeatureUsage @ 0x140B33E0C (CmFcManagerFlushFeatureUsage.c)
 *     PsSetVmProcessorHostProcess @ 0x140B688F0 (PsSetVmProcessorHostProcess.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1403682A0 (ExpUnblockPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x14047ECC0 (ExTimedWaitForUnblockPushLock.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
