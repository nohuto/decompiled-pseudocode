/*
 * XREFs of ExpTraceLogBadResourceAddress @ 0x14052D790
 * Callers:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 *     CcAllocateInitializeBcb @ 0x140260530 (CcAllocateInitializeBcb.c)
 *     ExInitializeResourceLite @ 0x140260870 (ExInitializeResourceLite.c)
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     RtlpCreateHeap @ 0x1404E3978 (RtlpCreateHeap.c)
 *     DifExInitializeResourceLiteWrapper @ 0x140652410 (DifExInitializeResourceLiteWrapper.c)
 *     ExInitializeResourceLite2 @ 0x1406CE730 (ExInitializeResourceLite2.c)
 *     FsRtlInitSystem @ 0x140CB8A6C (FsRtlInitSystem.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140CBFDA0 (IopInitializePlugPlayServices.c)
 *     PnpInitPhase0 @ 0x140CC3724 (PnpInitPhase0.c)
 *     PiDeviceDependencyInit @ 0x140CC3A38 (PiDeviceDependencyInit.c)
 *     PpInitializeBootDDB @ 0x140CC5184 (PpInitializeBootDDB.c)
 *     PiSwInit @ 0x140CC68FC (PiSwInit.c)
 *     PiDmaGuardQueueInitialize @ 0x140CC7BBC (PiDmaGuardQueueInitialize.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 *     PopInitializeAdpm @ 0x140CD671C (PopInitializeAdpm.c)
 *     PopDripsWatchdogInitialize @ 0x140CD68EC (PopDripsWatchdogInitialize.c)
 *     SepInitializeWorkList @ 0x140CDAB2C (SepInitializeWorkList.c)
 *     SepRmDbInitialization @ 0x140CDE524 (SepRmDbInitialization.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140CDFF80 (WmipGetSMBiosFromLoaderBlock.c)
 *     ExpInitSystemPhase0 @ 0x140CE40C0 (ExpInitSystemPhase0.c)
 *     MiInitializeLoadedModuleList @ 0x140D00470 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_char @ 0x1403EEB48 (_tlgCreate1Sz_char.c)
 *     RtlPcToFileName @ 0x140419600 (RtlPcToFileName.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall ExpTraceLogBadResourceAddress(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rtt
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

  if ( MEMORY[0xFFFFF78000000008] - ExSaPageGroupDescriptorArrayLock.Spare35[0] >= 0x5F5E100 )
  {
    v3 = ExSaPageGroupDescriptorArrayLock.Spare35[0];
    if ( v3 == _InterlockedCompareExchange64(
                 (volatile signed __int64 *)ExSaPageGroupDescriptorArrayLock.Spare35,
                 MEMORY[0xFFFFF78000000008],
                 ExSaPageGroupDescriptorArrayLock.Spare35[0]) )
    {
      *(_QWORD *)&DestinationString.Length = 0x1000000LL;
      DestinationString.Buffer = (wchar_t *)&v16;
      if ( (int)RtlPcToFileName(a2, &DestinationString) < 0 )
        RtlInitUnicodeString(&DestinationString, L"unknown_module");
      if ( (unsigned int)dword_140E09178 > 5 && tlgKeywordOn((__int64)&dword_140E09178, 0x400000000000LL) )
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
          (__int64)&dword_140E09178,
          (unsigned __int8 *)&dword_14005597C,
          0LL,
          0LL,
          7u,
          &v6);
      }
    }
  }
}
