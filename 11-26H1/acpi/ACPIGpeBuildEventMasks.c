/*
 * XREFs of ACPIGpeBuildEventMasks @ 0x14003D890
 * Callers:
 *     ACPITableLoad @ 0x140049220 (ACPITableLoad.c)
 *     ACPITableUnload @ 0x140069970 (ACPITableUnload.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     ACPIGpeEnableDisableEvents @ 0x140021160 (ACPIGpeEnableDisableEvents.c)
 *     AMLIIterateSiblingsNext @ 0x14003DB50 (AMLIIterateSiblingsNext.c)
 *     AMLIGetFirstChild @ 0x14003DC0C (AMLIGetFirstChild.c)
 *     ACPIVectorBuildVectorMasks @ 0x140055B7C (ACPIVectorBuildVectorMasks.c)
 *     ACPIGpeInstallRemoveIndex @ 0x14006154C (ACPIGpeInstallRemoveIndex.c)
 */

void ACPIGpeBuildEventMasks()
{
  KIRQL v0; // di
  int v1; // eax
  int v2; // edx
  __int64 i; // rax
  unsigned int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // al
  ULONG_PTR v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v1 = AMLIGetNameSpaceObject("\\_GPE", 0LL, &v14, 0);
  if ( v1 >= 0 )
  {
    for ( i = AMLIGetFirstChild(v14); ; i = AMLIIterateSiblingsNext(v13) )
    {
      v13 = i;
      if ( !i )
        goto LABEL_18;
      if ( *(_WORD *)(*(_QWORD *)i + 66LL) == 8 )
      {
        v4 = *(_DWORD *)(*(_QWORD *)i + 40LL);
        if ( (_BYTE)v4 == 95 )
        {
          v5 = HIWORD(v4) | v4 & 0xFF0000;
          v6 = v4 >> 8;
          v7 = v5;
          v8 = HIWORD(v5);
          v9 = v7 >> 8;
          if ( (unsigned __int8)(v8 - 48) > 9u )
          {
            if ( (unsigned __int8)(v8 - 65) > 5u )
              continue;
            LOBYTE(v8) = v8 - 55;
          }
          v10 = 16 * v8;
          v11 = v9 - 48;
          if ( (unsigned __int8)(v9 - 48) > 9u )
          {
            if ( (unsigned __int8)(v9 - 65) > 5u )
              continue;
            v11 = v9 - 55;
          }
          v12 = v11 | (unsigned int)v10;
          LOBYTE(v14) = 1;
          if ( (_BYTE)v6 == 76 || (_BYTE)v6 == 69 )
            ACPIGpeInstallRemoveIndex(v12);
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      21,
      10,
      (__int64)&WPP_1219ceb08a59382993486227e101cade_Traceguids,
      v1);
  }
LABEL_18:
  ACPIVectorBuildVectorMasks();
  ACPIGpeEnableDisableEvents(1);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&GpeTableLock, v0);
}
