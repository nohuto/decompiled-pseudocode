/*
 * XREFs of EnableDisableIPMIRegions @ 0x1400B18A0
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x14005ADC0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x14005B380 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1400AE0C0 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1400AE270 (ACPIBusIrpStopDevice.c)
 *     EnableDisableIPMIRegions @ 0x1400B18A0 (EnableDisableIPMIRegions.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     AMLIIterateSiblingsNext @ 0x14003DB50 (AMLIIterateSiblingsNext.c)
 *     AMLIGetFirstChild @ 0x14003DC0C (AMLIGetFirstChild.c)
 *     AMLIGetNSObjectData @ 0x140055C10 (AMLIGetNSObjectData.c)
 *     memset @ 0x140072740 (memset.c)
 *     EnableDisableIPMIRegions @ 0x1400B18A0 (EnableDisableIPMIRegions.c)
 */

__int64 __fastcall EnableDisableIPMIRegions(__int64 *a1, unsigned __int8 a2)
{
  __int64 v2; // r15
  unsigned int v4; // edi
  _QWORD *i; // rbx
  __int64 v6; // rdx
  __int16 v7; // cx
  __int64 v8; // rcx
  __int64 *v9; // rsi
  int v10; // r14d
  int v11; // eax
  _QWORD v13[10]; // [rsp+30h] [rbp-68h] BYREF

  v2 = a2;
  v4 = 0;
  for ( i = (_QWORD *)AMLIGetFirstChild((__int64)a1); i; i = (_QWORD *)AMLIIterateSiblingsNext((__int64)i) )
  {
    v7 = *(_WORD *)(AMLIGetNSObjectData(i) + 2);
    if ( v7 == 6 )
    {
      LOBYTE(v6) = v2;
      v11 = EnableDisableIPMIRegions(i, v6);
      if ( v11 < 0 )
        v4 = v11;
    }
    else if ( v7 == 10 )
    {
      v8 = *(_QWORD *)(AMLIGetNSObjectData(i) + 32);
      if ( v8 )
      {
        if ( *(_BYTE *)(v8 + 12) == 7 )
        {
          v9 = AMLIGetNamedChild(a1, 1195725407);
          if ( v9 )
          {
            memset(v13, 0, sizeof(v13));
            WORD1(v13[0]) = 1;
            v13[2] = 7LL;
            WORD1(v13[5]) = 1;
            v13[7] = v2;
            v10 = AMLIAsyncEvalObject(v9, 0LL, 2, (__int64)v13, 0LL, 0LL);
            AMLIDereferenceHandleEx((__int64)v9);
            if ( v10 < 0 )
              v4 = v10;
          }
        }
      }
    }
  }
  return v4;
}
