/*
 * XREFs of PpCheckInDriverDatabase @ 0x140A26144
 * Callers:
 *     PnpPrepareDriverLoading @ 0x140A266A4 (PnpPrepareDriverLoading.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x1405B08AC (McTemplateK0j_EtwWriteTransfer.c)
 *     PiLookupInDDBCache @ 0x140A25C14 (PiLookupInDDBCache.c)
 *     PiLookupInDDB @ 0x140A25D58 (PiLookupInDDB.c)
 *     IopBuildFullDriverPath @ 0x140A27A4C (IopBuildFullDriverPath.c)
 *     PnpLogEvent @ 0x140AA4138 (PnpLogEvent.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpCheckInDriverDatabase(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        __int128 *a6)
{
  int v8; // ebx
  __int64 v9; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // r8
  UNICODE_STRING P; // [rsp+30h] [rbp-18h] BYREF

  P = 0LL;
  if ( InitIsWinPEMode || !BYTE1(NlsMbCodePageTag) )
    return 0LL;
  v8 = IopBuildFullDriverPath(a1, a2, &P);
  if ( v8 < 0 )
  {
    if ( (PiLoggedErrorEventsMask & 8) == 0 )
    {
      PiLoggedErrorEventsMask |= 8u;
      P = 0LL;
      RtlInitUnicodeString(&P, L"BUILD DRIVER PATH FAILED");
      PnpLogEvent(&P, 0LL, 3221226349LL, 0LL, 0);
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiDDBLock, 1u);
    v8 = PiLookupInDDBCache((__int64)&P, a3, v11, a6);
    if ( v8 == -1073741823 )
      v8 = PiLookupInDDB((__int64)&P, a3, a4, a6);
    if ( v8 == -1073740948 )
    {
      if ( !a5 )
        v8 = -1073740949;
    }
    else if ( v8 == -1073740949 && a5 )
    {
      v8 = -1073740948;
    }
    ExReleaseResourceLite(&PiDDBLock);
    KeLeaveCriticalRegion();
    ExFreePoolWithTag(P.Buffer, 0);
  }
  if ( (unsigned int)(v8 + 1073740949) <= 1 )
  {
    if ( (byte_140EF3DCA & 4) != 0 )
      McTemplateK0j_EtwWriteTransfer(
        MS_KernelPnP_Provider_Context,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_Driver_Blocked,
        v9,
        (__int64)a6);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v8;
}
