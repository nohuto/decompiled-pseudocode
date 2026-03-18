/*
 * XREFs of ?ClearForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z @ 0x1401C9990
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x140137220 (-GetTID@tagTHREADINFO@@QEBAKXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDD @ 0x140183D04 (WPP_RECORDER_AND_TRACE_SF_DDD.c)
 */

__int64 __fastcall tagTHREADINFO::ClearForegroundActivate(__int64 a1, int a2)
{
  char v4; // r14
  char v5; // r15
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 UserSessionState; // rax
  unsigned int v10; // ecx
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-58h]
  int v13; // [rsp+28h] [rbp-50h]
  int v14; // [rsp+30h] [rbp-48h]
  int v15; // [rsp+38h] [rbp-40h]

  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    tagTHREADINFO::GetTID((PETHREAD *)a1);
    UserSessionState = W32GetUserSessionState(v7, v6, v8);
    WPP_RECORDER_AND_TRACE_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v4,
      v5,
      *(_QWORD *)(UserSessionState + 69136),
      v12,
      v13,
      v14,
      v15);
  }
  v10 = *(_DWORD *)(a1 + 1716);
  result = a2 & v10;
  if ( ((unsigned __int8)a2 & *(_BYTE *)(a1 + 1716) & 0x20) != 0 )
    *(_DWORD *)(a1 + 1720) = 0;
  *(_DWORD *)(a1 + 1716) = v10 & ~a2;
  return result;
}
