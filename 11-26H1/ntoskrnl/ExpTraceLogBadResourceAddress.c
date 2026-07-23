/*
 * XREFs of ExpTraceLogBadResourceAddress @ 0x14052FCB0
 * Callers:
 *     CcAllocateInitializeBcb @ 0x140219DA4 (CcAllocateInitializeBcb.c)
 *     ExInitializeResourceLite @ 0x14021A0F0 (ExInitializeResourceLite.c)
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     RtlpCreateHeap @ 0x1404DCF18 (RtlpCreateHeap.c)
 *     DifExInitializeResourceLiteWrapper @ 0x140655FF0 (DifExInitializeResourceLiteWrapper.c)
 *     ExInitializeResourceLite2 @ 0x1406D2760 (ExInitializeResourceLite2.c)
 *     FsRtlInitSystem @ 0x140CBEAB0 (FsRtlInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CC5E70 (IopInitializePlugPlayServices.c)
 *     PnpInitPhase0 @ 0x140CC97F8 (PnpInitPhase0.c)
 *     PiDeviceDependencyInit @ 0x140CC9B0C (PiDeviceDependencyInit.c)
 *     PpInitializeBootDDB @ 0x140CCB264 (PpInitializeBootDDB.c)
 *     PiSwInit @ 0x140CCC9EC (PiSwInit.c)
 *     PiDmaGuardQueueInitialize @ 0x140CCDCAC (PiDmaGuardQueueInitialize.c)
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 *     PopInitializeAdpm @ 0x140CDCA70 (PopInitializeAdpm.c)
 *     PopDripsWatchdogInitialize @ 0x140CDCC40 (PopDripsWatchdogInitialize.c)
 *     SepInitializeWorkList @ 0x140CE0EAC (SepInitializeWorkList.c)
 *     SepRmDbInitialization @ 0x140CE48BC (SepRmDbInitialization.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140CE6318 (WmipGetSMBiosFromLoaderBlock.c)
 *     ExpInitSystemPhase0 @ 0x140CEA460 (ExpInitSystemPhase0.c)
 *     MiInitializeLoadedModuleList @ 0x140D06810 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlPcToFileName @ 0x14040DB30 (RtlPcToFileName.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall ExpTraceLogBadResourceAddress(unsigned __int64 a1, unsigned __int64 a2)
{
  void *Spare32; // rtt
  bool v4; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+50h] [rbp-B0h] BYREF
  bool *v7; // [rsp+70h] [rbp-90h]
  __int64 v8; // [rsp+78h] [rbp-88h]
  _DWORD *v9; // [rsp+80h] [rbp-80h]
  __int64 v10; // [rsp+88h] [rbp-78h]
  wchar_t *Buffer; // [rsp+90h] [rbp-70h]
  _DWORD v12[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v13[16]; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+B0h] [rbp-50h]
  __int64 v15; // [rsp+B8h] [rbp-48h]
  char v16; // [rsp+C0h] [rbp-40h] BYREF

  if ( MEMORY[0xFFFFF78000000008] - (unsigned __int64)ExSaPageGroupDescriptorArrayLock.Spare32 >= 0x5F5E100 )
  {
    Spare32 = ExSaPageGroupDescriptorArrayLock.Spare32;
    if ( Spare32 == (void *)_InterlockedCompareExchange64(
                              (volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock.Spare32,
                              MEMORY[0xFFFFF78000000008],
                              (signed __int64)ExSaPageGroupDescriptorArrayLock.Spare32) )
    {
      *(_QWORD *)&DestinationString.Length = 0x1000000LL;
      DestinationString.Buffer = (wchar_t *)&v16;
      if ( (int)RtlPcToFileName(a2, &DestinationString) < 0 )
        RtlInitUnicodeString(&DestinationString, L"unknown_module");
      if ( (unsigned int)dword_140E09170 > 5 && tlgKeywordOn((__int64)&dword_140E09170, 0x400000000000LL) )
      {
        v8 = 1LL;
        v10 = 2LL;
        v12[1] = 0;
        v7 = &v4;
        v4 = a1 < 0x7FFFFFFF0000LL;
        v9 = v12;
        Buffer = DestinationString.Buffer;
        v12[0] = DestinationString.Length;
        tlgCreate1Sz_char((__int64)v13, (const CHAR *)&KeGetCurrentThread()->ApcState.Process[1].SecureState);
        *(_QWORD *)&DestinationString.Length = 0x1000000LL;
        p_DestinationString = &DestinationString;
        v15 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E09170,
          (unsigned __int8 *)&byte_14005696F,
          0LL,
          0LL,
          7u,
          &v6);
      }
    }
  }
}
