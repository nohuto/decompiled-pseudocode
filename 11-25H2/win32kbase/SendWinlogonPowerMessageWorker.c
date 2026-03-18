/*
 * XREFs of SendWinlogonPowerMessageWorker @ 0x1401B6BB0
 * Callers:
 *     xxxSendWinlogonPowerMessage @ 0x14016C260 (xxxSendWinlogonPowerMessage.c)
 * Callees:
 *     ??0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z @ 0x1401B6914 (--0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z.c)
 *     ??1CAcquireReleaseRundownProtection@@QEAA@XZ @ 0x1401B6954 (--1CAcquireReleaseRundownProtection@@QEAA@XZ.c)
 *     WmsgpSendPSPMessage @ 0x1402C97EC (WmsgpSendPSPMessage.c)
 */

__int64 __fastcall SendWinlogonPowerMessageWorker(__int64 a1, __int128 *a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _EX_RUNDOWN_REF *UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int128 v11; // xmm6
  __int64 v12; // rax
  int v13; // eax
  __int128 v14; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+60h] [rbp+18h] BYREF
  struct _EX_RUNDOWN_REF *v16; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0;
  v15 = 0;
  v4 = a1;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 69120) )
    return 0LL;
  UserSessionState = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v6, v5);
  CAcquireReleaseRundownProtection::CAcquireReleaseRundownProtection(
    (CAcquireReleaseRundownProtection *)&v16,
    UserSessionState + 8641);
  if ( v16 )
  {
    v11 = *a2;
    v12 = W32GetUserSessionState(v10, v9);
    v14 = v11;
    v13 = WmsgpSendPSPMessage(*(_QWORD *)(v12 + 69120), v4, &v14, &v15);
    v2 = v15;
    if ( v13 < 0 )
      v2 = v13;
  }
  CAcquireReleaseRundownProtection::~CAcquireReleaseRundownProtection(&v16);
  return v2;
}
