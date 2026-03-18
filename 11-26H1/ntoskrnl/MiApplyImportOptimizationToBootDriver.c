/*
 * XREFs of MiApplyImportOptimizationToBootDriver @ 0x140CFA76C
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140D00CF0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     RtlUpdateImportRelocationsInImage @ 0x14072096C (RtlUpdateImportRelocationsInImage.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall MiApplyImportOptimizationToBootDriver(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // rcx
  int updated; // eax
  _BYTE v8[8]; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp-80h]

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 != PsNtosImageBase
    && v2 != PsHalImageBase
    && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v2)
    && !_bittest16((const signed __int16 *)(a1 + 110), 9u) )
  {
    v5 = 0LL;
    if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
      v5 = *(_QWORD *)(a1 + 48)
         + *(_DWORD *)(a1 + 64)
         + ((HIDWORD(stru_140E36558.SListFaultAddress) + LODWORD(stru_140E36558.QuantumTarget)) & 0xFFFFF000)
         + (((WORD2(stru_140E36558.SListFaultAddress) + LOWORD(stru_140E36558.QuantumTarget)) & 0xFFF) != 0 ? 0x1000 : 0);
    if ( (MiFlags & 0x20000) != 0 )
    {
      memset_0(v8, 0, 0x68uLL);
      v9 = v2;
      updated = VslpEnterIumSecureMode(2u, 0xE2u, 0, (__int64)v8);
    }
    else
    {
      updated = RtlUpdateImportRelocationsInImage(
                  v2,
                  v2,
                  *(_DWORD *)(a1 + 64),
                  a2,
                  v5,
                  (unsigned int *)(*(_QWORD *)&stru_140E2D150.WaitBlockFill11[64] + 4LL),
                  0,
                  (KiSpeculationFeatures & 0x20000000000LL) == 0);
    }
    if ( updated >= 0 )
      *(_DWORD *)(a1 + 104) |= 0x80u;
  }
  return 1LL;
}
