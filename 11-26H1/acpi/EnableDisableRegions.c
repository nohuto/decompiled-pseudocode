/*
 * XREFs of EnableDisableRegions @ 0x1400C82A0
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x14001C520 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIDetectFilterDevices @ 0x14001D41C (ACPIDetectFilterDevices.c)
 *     ACPIFilterIrpRemoveDevice @ 0x14003BD90 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x14005ADC0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x14005B380 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1400AE0C0 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1400AE270 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpStopDevice @ 0x1400B1360 (ACPIFilterIrpStopDevice.c)
 *     EnableDisableRegions @ 0x1400C82A0 (EnableDisableRegions.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     AMLIGetNSObjectType @ 0x14003BAA4 (AMLIGetNSObjectType.c)
 *     AMLIIterateSiblingsNext @ 0x14003DB50 (AMLIIterateSiblingsNext.c)
 *     AMLIGetFirstChild @ 0x14003DC0C (AMLIGetFirstChild.c)
 *     memset @ 0x140072740 (memset.c)
 *     EnableDisableRegions @ 0x1400C82A0 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1400C83A4 (IsNsobjPciBus.c)
 */

__int64 __fastcall EnableDisableRegions(__int64 *a1, char a2, char a3)
{
  unsigned int v6; // edi
  __int64 *v7; // rsi
  __int64 i; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  _QWORD v14[10]; // [rsp+20h] [rbp-58h] BYREF

  v6 = 0;
  v7 = AMLIGetNamedChild(a1, 1195725407);
  if ( v7 )
  {
    memset(v14, 0, sizeof(v14));
    WORD1(v14[0]) = 1;
    WORD1(v14[5]) = 1;
    v14[2] = 2LL;
    v14[7] = a2 != 0;
    v6 = AMLIEvalNameSpaceObject(v7, 0LL, 2, (__int64)v14);
    AMLIDereferenceHandleEx((__int64)v7);
  }
  if ( (unsigned __int8)IsNsobjPciBus(a1) || a3 )
  {
    for ( i = AMLIGetFirstChild((__int64)a1); ; i = AMLIIterateSiblingsNext(v9) )
    {
      v9 = i;
      if ( !i )
        break;
      if ( (unsigned int)AMLIGetNSObjectType(i) == 6 && !(unsigned __int8)IsNsobjPciBus(v10) )
      {
        LOBYTE(v11) = a2;
        v12 = EnableDisableRegions(v9, v11, 0LL);
        if ( v12 < 0 )
          v6 = v12;
      }
    }
  }
  return v6;
}
