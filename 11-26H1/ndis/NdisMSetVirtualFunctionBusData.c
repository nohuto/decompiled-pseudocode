/*
 * XREFs of NdisMSetVirtualFunctionBusData @ 0x1400E5D20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisMSetVirtualFunctionBusData(__int64 a1, __int16 a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned __int16 v7; // r14
  unsigned int v9; // ebx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, _QWORD, int); // r10
  __int64 v11; // rcx
  char v13[4]; // [rsp+30h] [rbp-28h]

  v7 = a2;
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      122,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      a1);
  }
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(a1 + 4784);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 4824);
    if ( v11 )
      v9 = v10(v11, v7, a3, a4, a5);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v13 = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x7Bu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      a1,
      *(_DWORD *)v13);
  }
  return v9;
}
