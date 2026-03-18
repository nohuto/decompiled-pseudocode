/*
 * XREFs of HalHandleNMI @ 0x14057EA20
 * Callers:
 *     KiProcessNMI @ 0x1405EBA60 (KiProcessNMI.c)
 * Callees:
 *     WheaReportHwError @ 0x1403DDD80 (WheaReportHwError.c)
 *     WheapGetErrorSource @ 0x1403DE1E0 (WheapGetErrorSource.c)
 *     HalpCheckAndReportGhes @ 0x1404DC5EC (HalpCheckAndReportGhes.c)
 *     HalpNMIHalt @ 0x14057ED64 (HalpNMIHalt.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

char __fastcall HalHandleNMI(__int64 a1)
{
  __int64 *v1; // rdi
  char v2; // bl
  char result; // al
  unsigned __int8 v4; // al
  char v5; // bl
  __int64 *ErrorSource; // rax

  _InterlockedAdd(&WheapCriticalStateRefCount, 1u);
  dword_140E108C8 = 1;
  HalpProcessorInNmiHandler = KeGetPcr()->Prcb.Number;
  if ( !HalpGenericNmiInitDone )
    goto LABEL_7;
  v1 = (__int64 *)HalpGenericNmiErrorSourceListHead;
  v2 = 0;
  if ( (__int64 *)HalpGenericNmiErrorSourceListHead == &HalpGenericNmiErrorSourceListHead )
    goto LABEL_7;
  do
  {
    result = HalpCheckAndReportGhes((__int64)v1);
    v1 = (__int64 *)*v1;
    if ( result )
      v2 = 1;
  }
  while ( v1 != &HalpGenericNmiErrorSourceListHead );
  if ( v2 != 1 )
  {
LABEL_7:
    v4 = __inbyte(0x61u);
    v5 = v4;
    if ( dword_140E108C4 != 1 )
    {
      LOBYTE(a1) = v4;
      HalpNMIHalt(a1);
    }
    memset_0(&dword_140E108D0, 0, 0x5CuLL);
    dword_140E108D4 = 3;
    dword_140E108E0 = 3;
    dword_140E108EC = 3;
    dword_140E108D0 = 1095059543;
    dword_140E10928 = ((unsigned int)dword_140E108DC >> 2) & 1;
    dword_140E108D8 = 92;
    dword_140E108E4 = 1;
    dword_140E108E8 = HalpNmiInfo;
    xmmword_140E108F0 = (__int128)NMI_NOTIFY_TYPE_GUID;
    dword_140E10908 = 4;
    dword_140E10910 = 80;
    dword_140E10914 = 12;
    byte_140E10920 = v5;
    ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, HalpNmiInfo);
    PshedRetrieveErrorInfo(
      &dword_140E108D0,
      (unsigned __int64)(ErrorSource + 12) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64));
    result = WheaReportHwError((__int64)&dword_140E108D0);
  }
  _InterlockedDecrement(&WheapCriticalStateRefCount);
  HalpProcessorInNmiHandler = 2048;
  return result;
}
