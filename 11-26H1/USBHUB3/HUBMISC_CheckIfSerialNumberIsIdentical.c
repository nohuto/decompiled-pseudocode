/*
 * XREFs of HUBMISC_CheckIfSerialNumberIsIdentical @ 0x14002E644
 * Callers:
 *     HUBDSM_ComparingSerialNumberOnReEnumeration @ 0x140021260 (HUBDSM_ComparingSerialNumberOnReEnumeration.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x1400025E4 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1400341F4 (HUBMISC_VerifierDbgBreak.c)
 *     McTemplateK0psqzq_EtwWriteTransfer @ 0x1400345CC (McTemplateK0psqzq_EtwWriteTransfer.c)
 */

__int64 __fastcall HUBMISC_CheckIfSerialNumberIsIdentical(__int64 a1)
{
  __int64 v1; // rsi
  const void *v3; // rbp
  unsigned int v4; // edi
  int v5; // edx
  int v6; // r15d
  unsigned int v7; // r14d

  v1 = 0LL;
  v3 = (const void *)(*(_QWORD *)(a1 + 2160) + 12LL);
  v4 = 4089;
  v5 = (*(_DWORD *)(a1 + 1644) & 0x800) != 0 ? 14 : 2;
  v6 = *(_DWORD *)(a1 + 2156) - v5;
  if ( (*(_DWORD *)(a1 + 1644) & 0x800) == 0 )
    v3 = *(const void **)(a1 + 2160);
  v7 = *(_DWORD *)(a1 + 264) - 2;
  if ( v6 == v7 )
  {
    v1 = a1 + 1740;
    v5 = RtlCompareMemory((const void *)(a1 + 1742), v3, v7);
    if ( v5 == v7 )
      return v4;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x73u,
        (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids,
        v5,
        v7);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      v5,
      5,
      114,
      (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids);
  }
  v4 = 4061;
  if ( (*(_DWORD *)(a1 + 2444) & 0x20) != 0 )
    HUBMISC_VerifierDbgBreak("DeviceHwVerifierSerialNumberMismatchOnRenumeration", a1 + 512);
  if ( v1 )
  {
    if ( (byte_140070D4A & 0x40) != 0 )
      McTemplateK0psqzq_EtwWriteTransfer(
        a1,
        v5,
        a1 + 1524,
        *(_QWORD *)(*(_QWORD *)a1 + 248LL),
        (__int64)v3,
        v6,
        v1 + 2,
        v7);
  }
  else if ( (byte_140070D4A & 0x40) != 0 )
  {
    McTemplateK0psqzq_EtwWriteTransfer(a1, v5, a1 + 1524, *(_QWORD *)(*(_QWORD *)a1 + 248LL), (__int64)v3, v6, 0LL, 0);
  }
  return v4;
}
