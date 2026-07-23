/*
 * XREFs of HalpExtBuildResourceIdString @ 0x14058964C
 * Callers:
 *     HalpTimerBuildKnownResourceIdString @ 0x140583E7C (HalpTimerBuildKnownResourceIdString.c)
 *     HalpExtRegisterResourceDescriptor @ 0x140589800 (HalpExtRegisterResourceDescriptor.c)
 *     HalpRegisterDmaController @ 0x14058F548 (HalpRegisterDmaController.c)
 *     HalpInterruptRegisterController @ 0x14059D384 (HalpInterruptRegisterController.c)
 *     ExtEnvRegisterIommu @ 0x140CB6E30 (ExtEnvRegisterIommu.c)
 * Callees:
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HalpExtBuildResourceIdString(
        int a1,
        int a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        int a7,
        size_t SizeInWords,
        wchar_t *a9)
{
  int v9; // eax
  int v10; // edi
  int v11; // esi
  int v13; // [rsp+50h] [rbp-30h] BYREF
  int v14; // [rsp+58h] [rbp-28h] BYREF
  wchar_t Dst; // [rsp+60h] [rbp-20h] BYREF
  __int128 v16; // [rsp+62h] [rbp-1Eh]
  int v17; // [rsp+72h] [rbp-Eh]

  v9 = a2;
  v14 = a2;
  v10 = a4;
  v17 = 0;
  v11 = a3;
  v13 = a1;
  Dst = 0;
  v16 = 0LL;
  if ( a6 )
  {
    swprintf_s(&Dst, 0xBuLL, L"INST_%04x&", a6);
    a1 = v13;
    v9 = v14;
  }
  if ( !a1 )
    return 3221225473LL;
  if ( v9 )
    swprintf_s(
      a9,
      (unsigned int)SizeInWords,
      L"VEN_%.4hs&DEV_%04x&SUBVEN_%.4hs&SUBDEV_%04x&REV_%04x&%lsUID_%08x",
      &v13,
      v11,
      &v14,
      v10,
      a5,
      &Dst,
      a7);
  else
    swprintf_s(
      a9,
      (unsigned int)SizeInWords,
      L"VEN_%.4hs&DEV_%04x&SUBDEV_%04x&REV_%04x&%lsUID_%08x",
      &v13,
      v11,
      v10,
      a5,
      &Dst,
      a7);
  return 0LL;
}
