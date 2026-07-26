/*
 * XREFs of NdisReadEisaSlotInformationEx @ 0x1400DBD90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 */

_UNKNOWN **__fastcall NdisReadEisaSlotInformationEx(_DWORD *a1, char a2)
{
  _UNKNOWN **result; // rax
  int v5; // [rsp+30h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (_UNKNOWN **)WPP_RECORDER_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            4,
                            7,
                            14,
                            (struct _GUID *)&WPP_4816aa3b0baa34f1d8e04600f3680c92_Traceguids,
                            a2);
  *a1 = -1073741637;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = -1073741637;
    return (_UNKNOWN **)WPP_RECORDER_SF_qL(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          4u,
                          7u,
                          0xFu,
                          (struct _GUID *)&WPP_4816aa3b0baa34f1d8e04600f3680c92_Traceguids,
                          a2,
                          v5);
  }
  return result;
}
