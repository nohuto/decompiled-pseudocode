/*
 * XREFs of ACPILoadProcessFACS @ 0x1400DB880
 * Callers:
 *     ACPILoadProcessFADT @ 0x1400DB9D8 (ACPILoadProcessFADT.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x14002EC00 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_L @ 0x1400385BC (WPP_RECORDER_SF_L.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 ACPILoadProcessFACS()
{
  unsigned int v0; // edi
  __int64 v1; // rax
  int v2; // edx
  __int64 v3; // rsi

  v0 = 0;
  v1 = (*(__int64 (**)(void))(PmHalDispatchTable + 104))();
  v3 = v1;
  if ( !v1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        6,
        13,
        (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids);
    }
    return (unsigned int)-1072431079;
  }
  if ( *(_DWORD *)(v1 + 4) != 64 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v2) = 2;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v2,
        6,
        14,
        (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
        v1);
    }
    return (unsigned int)-1072431079;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      6,
      15,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
      v1);
  }
  *((_QWORD *)AcpiInformation + 2) = v3;
  *((_QWORD *)AcpiInformation + 5) = v3 + 16;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_L(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      6,
      16,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
      *(_DWORD *)(v3 + 16));
  }
  return v0;
}
