/*
 * XREFs of MiApplyRetpolineToBootDriver @ 0x140CFA8C8
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140D00CF0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     RtlImageNtHeaderEx @ 0x14046A510 (RtlImageNtHeaderEx.c)
 *     RtlIsImageFullyRetpolined @ 0x1404FFD68 (RtlIsImageFullyRetpolined.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x14050B024 (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiMarkRetpolineBits @ 0x140B1F348 (MiMarkRetpolineBits.c)
 *     MiLogRetpolineImageLoadEvents @ 0x140B1F474 (MiLogRetpolineImageLoadEvents.c)
 */

__int64 __fastcall MiApplyRetpolineToBootDriver(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v1; // rdi
  int v3; // eax
  unsigned int v5; // [rsp+28h] [rbp-C0h]
  __int64 v6; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v7[8]; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v8; // [rsp+68h] [rbp-80h]
  char v9; // [rsp+70h] [rbp-78h]

  v1 = *(_QWORD *)(BugCheckParameter2 + 48);
  v6 = 0LL;
  RtlImageNtHeaderEx(1, v1, 0LL, &v6);
  if ( !_bittest16((const signed __int16 *)(BugCheckParameter2 + 110), 9u) )
    MiLogRetpolineImageLoadEvents(BugCheckParameter2);
  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0
    && v1 != PsNtosImageBase
    && v1 != PsHalImageBase
    && (*(_BYTE *)(v6 + 22) & 1) == 0
    && *(_DWORD *)(v6 + 132) > 5u
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
             v1,
             v1,
             *(_DWORD *)(BugCheckParameter2 + 64),
             *(_DWORD *)(BugCheckParameter2 + 48)
           + *(_DWORD *)(BugCheckParameter2 + 64)
           + LODWORD(stru_140E36558.QuantumTarget)
           + HIDWORD(stru_140E36558.SListFaultAddress),
             *(_QWORD *)&stru_140E2D150.WaitBlockFill11[64] + 4LL,
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
