/*
 * XREFs of ndisGetSetBusConfigSpace @ 0x1400DBBC4
 * Callers:
 *     NdisReadPciSlotInformation @ 0x1400DBE40 (NdisReadPciSlotInformation.c)
 *     NdisReadPcmciaAttributeMemory @ 0x1400DBF20 (NdisReadPcmciaAttributeMemory.c)
 *     NdisWritePciSlotInformation @ 0x1400DC000 (NdisWritePciSlotInformation.c)
 *     NdisWritePcmciaAttributeMemory @ 0x1400DC0E0 (NdisWritePcmciaAttributeMemory.c)
 *     NdisImmediateReadPciSlotInformation @ 0x140176380 (NdisImmediateReadPciSlotInformation.c)
 *     NdisImmediateWritePciSlotInformation @ 0x140176460 (NdisImmediateWritePciSlotInformation.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisGetSetBusConfigSpace(__int64 a1, int a2, __int64 a3, int a4, unsigned int a5, char a6)
{
  unsigned int v8; // r14d
  unsigned int v10; // edi
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64, _QWORD, int); // rax
  __int64 v13; // rcx

  v8 = a2;
  v10 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      7,
      10,
      (struct _GUID *)&WPP_4816aa3b0baa34f1d8e04600f3680c92_Traceguids,
      a1);
  }
  if ( a6 && (*(_DWORD *)(a1 + 3688) & 0x40) != 0 || (*(_DWORD *)(a1 + 3688) & 0x80u) != 0 )
    return 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(a1 + 3696);
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 3712);
    if ( v13 )
    {
      if ( a6 )
        v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(a1 + 3704);
      v10 = v12(v13, a5, a3, v8, a4);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      7,
      11,
      (struct _GUID *)&WPP_4816aa3b0baa34f1d8e04600f3680c92_Traceguids,
      a1);
  }
  return v10;
}
