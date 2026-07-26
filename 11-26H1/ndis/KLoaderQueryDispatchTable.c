/*
 * XREFs of KLoaderQueryDispatchTable @ 0x1400DF020
 * Callers:
 *     ?Initialize@ExecutionContextLibrary@@QEAAJXZ @ 0x14014614C (-Initialize@ExecutionContextLibrary@@QEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_q_guid_ @ 0x140096F3C (WPP_RECORDER_SF_q_guid_.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KLoaderQueryDispatchTable(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      0x10u,
      (struct _GUID *)&WPP_55471d99dfe531a5203c087762dc6bc5_Traceguids,
      a1,
      a2);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)a1 + 104LL))(
         *(_QWORD *)(*(_QWORD *)a1 + 96LL),
         a2,
         a3);
  v7 = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = v6;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x11u,
      (struct _GUID *)&WPP_55471d99dfe531a5203c087762dc6bc5_Traceguids,
      a1,
      v9);
  }
  return v7;
}
