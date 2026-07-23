/*
 * XREFs of MiApplyRetpolineToBootDriver @ 0x140D00C48
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140D07090 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 *     RtlIsImageFullyRetpolined @ 0x1404F9558 (RtlIsImageFullyRetpolined.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x140504A94 (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiMarkRetpolineBits @ 0x140B213C8 (MiMarkRetpolineBits.c)
 *     MiLogRetpolineImageLoadEvents @ 0x140B214F4 (MiLogRetpolineImageLoadEvents.c)
 */

__int64 __fastcall MiApplyRetpolineToBootDriver(ULONG_PTR BugCheckParameter2)
{
  PVOID v1; // rdi
  int v3; // eax
  int v5; // [rsp+28h] [rbp-C0h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v7[8]; // [rsp+60h] [rbp-88h] BYREF
  PVOID v8; // [rsp+68h] [rbp-80h]
  char v9; // [rsp+70h] [rbp-78h]

  v1 = *(PVOID *)(BugCheckParameter2 + 48);
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, v1, 0LL, &OutHeaders);
  if ( !_bittest16((const signed __int16 *)(BugCheckParameter2 + 110), 9u) )
    MiLogRetpolineImageLoadEvents(BugCheckParameter2);
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0
    && v1 != PsNtosImageBase
    && v1 != PsHalImageBase
    && (OutHeaders->FileHeader.Characteristics & 1) == 0
    && OutHeaders->OptionalHeader.NumberOfRvaAndSizes > 5
    && !_bittest16((const signed __int16 *)(BugCheckParameter2 + 110), 9u) )
  {
    if ( (MiFlags & 0x20000) != 0 )
    {
      memset_0(v7, 0, 0x68uLL);
      v8 = v1;
      v9 = 1;
      v3 = VslpEnterIumSecureMode(2u, 0xE1u, 0, (__int64)v7);
    }
    else
    {
      v3 = RtlPerformRetpolineRelocationsOnImageEx(
             (char *)v1,
             (__int64)v1,
             *(_DWORD *)(BugCheckParameter2 + 64),
             *(_QWORD *)(BugCheckParameter2 + 48)
           + *(unsigned int *)(BugCheckParameter2 + 64)
           + (unsigned __int64)(unsigned int)(LODWORD(stru_140E366D8.QuantumTarget)
                                            + HIDWORD(stru_140E366D8.SListFaultAddress)),
             *(_QWORD *)&stru_140E2D2D0.WaitBlockFill11[64] + 4LL,
             v5,
             0LL,
             0LL,
             0);
    }
    if ( (int)(v3 + 0x80000000) >= 0 && v3 != -1073741637 )
      KeBugCheckEx(0x1Au, 0x1080uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 48), v3);
    if ( (unsigned int)RtlIsImageFullyRetpolined(*(_QWORD *)(BugCheckParameter2 + 48)) )
      MiMarkRetpolineBits(*(_QWORD *)(BugCheckParameter2 + 48), *(unsigned int *)(BugCheckParameter2 + 64), 1);
  }
  return 1LL;
}
