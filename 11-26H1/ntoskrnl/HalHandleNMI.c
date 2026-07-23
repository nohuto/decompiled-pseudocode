/*
 * XREFs of HalHandleNMI @ 0x140580F40
 * Callers:
 *     KiProcessNMI @ 0x1405EE3D0 (KiProcessNMI.c)
 * Callees:
 *     WheaReportHwError @ 0x1403E0F70 (WheaReportHwError.c)
 *     WheapGetErrorSource @ 0x1403E13D0 (WheapGetErrorSource.c)
 *     HalpCheckAndReportGhes @ 0x1404D5CCC (HalpCheckAndReportGhes.c)
 *     HalpNMIHalt @ 0x140581284 (HalpNMIHalt.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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
  dword_140E109F8 = 1;
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
    if ( dword_140E109F4 != 1 )
    {
      LOBYTE(a1) = v4;
      HalpNMIHalt(a1);
    }
    memset_0(&dword_140E10A00, 0, 0x5CuLL);
    dword_140E10A04 = 3;
    dword_140E10A10 = 3;
    dword_140E10A1C = 3;
    dword_140E10A00 = 1095059543;
    dword_140E10A58 = ((unsigned int)dword_140E10A0C >> 2) & 1;
    dword_140E10A08 = 92;
    dword_140E10A14 = 1;
    dword_140E10A18 = HalpNmiInfo;
    xmmword_140E10A20 = (__int128)NMI_NOTIFY_TYPE_GUID;
    dword_140E10A38 = 4;
    dword_140E10A40 = 80;
    dword_140E10A44 = 12;
    byte_140E10A50 = v5;
    ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, HalpNmiInfo);
    PshedRetrieveErrorInfo(
      &dword_140E10A00,
      (unsigned __int64)(ErrorSource + 12) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64));
    result = WheaReportHwError((__int64)&dword_140E10A00);
  }
  _InterlockedDecrement(&WheapCriticalStateRefCount);
  HalpProcessorInNmiHandler = 2048;
  return result;
}
