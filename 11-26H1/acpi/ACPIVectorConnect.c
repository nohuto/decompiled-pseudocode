/*
 * XREFs of ACPIVectorConnect @ 0x14006AC70
 * Callers:
 *     ACPIVectorConnect2 @ 0x14006AE40 (ACPIVectorConnect2.c)
 *     ACPIEcConnectGpeVector @ 0x1400AED98 (ACPIEcConnectGpeVector.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     ACPIGpeIndexToByteIndex @ 0x1400201A8 (ACPIGpeIndexToByteIndex.c)
 *     ACPIGpeValidIndex @ 0x140020204 (ACPIGpeValidIndex.c)
 *     ACPIGpeEnableDisableEvents @ 0x140021160 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeInstallRemoveIndex @ 0x14006154C (ACPIGpeInstallRemoveIndex.c)
 *     ACPIVectorGetEntry @ 0x14006B00C (ACPIVectorGetEntry.c)
 */

__int64 __fastcall ACPIVectorConnect(__int64 a1, unsigned int a2, int a3, char a4, __int64 a5, __int64 a6, char **a7)
{
  unsigned int v9; // esi
  char **v10; // r14
  unsigned int v11; // ebx
  __int64 Pool2; // rax
  char *v14; // rdi
  KIRQL v15; // r12
  unsigned int v16; // eax
  unsigned int v17; // edx

  v9 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      11,
      (__int64)&WPP_7b0d4207db2a3169cd3bb4e871adee9d_Traceguids);
  }
  v10 = a7;
  v11 = 0;
  *a7 = 0LL;
  if ( !*((_WORD *)AcpiInformation + 51) )
    return 3221225473LL;
  if ( !ACPIGpeValidIndex(v9) )
    return 3221225712LL;
  Pool2 = ExAllocatePool2(64LL, 32LL, 1735418689LL);
  v14 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = v9;
  *(_QWORD *)(Pool2 + 8) = a5;
  *(_QWORD *)(Pool2 + 16) = a6;
  *(_DWORD *)(Pool2 + 28) = a3;
  *(_BYTE *)(Pool2 + 24) = a4;
  v15 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0);
  if ( !ACPIGpeInstallRemoveIndex(v9, a3 == 0, 0, v14 + 25) )
    goto LABEL_13;
  LODWORD(a7) = 0;
  if ( !(unsigned __int8)ACPIVectorGetEntry(&a7) )
  {
    ACPIGpeInstallRemoveIndex(v9, 2, 0, v14 + 25);
LABEL_13:
    v11 = -1073741823;
    ExFreePoolWithTag(v14, 0);
    goto LABEL_14;
  }
  v16 = ACPIGpeIndexToByteIndex();
  v17 = (unsigned int)a7;
  *(_BYTE *)(v16 + GpeMap) = (_BYTE)a7;
  *((_QWORD *)GpeVectorTable + 2 * v17 + 1) = v14;
  *v10 = v14;
LABEL_14:
  ACPIGpeEnableDisableEvents(1);
  KeReleaseSpinLock(&GpeTableLock, v15);
  return v11;
}
