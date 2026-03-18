/*
 * XREFs of SendWinlogonPowerMessageWorker @ 0x1401C0344
 * Callers:
 *     xxxSendWinlogonPowerMessage @ 0x1401D9BF0 (xxxSendWinlogonPowerMessage.c)
 * Callees:
 *     ??0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z @ 0x1401D94C4 (--0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z.c)
 *     ??1CAcquireReleaseRundownProtection@@QEAA@XZ @ 0x1401D9508 (--1CAcquireReleaseRundownProtection@@QEAA@XZ.c)
 *     WmsgpSendPSPMessage @ 0x1402D2BA0 (WmsgpSendPSPMessage.c)
 */

__int64 __fastcall SendWinlogonPowerMessageWorker(unsigned int a1, __int128 *a2, int a3)
{
  unsigned int v3; // ebx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  struct _EX_RUNDOWN_REF *UserSessionState; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rax
  int v15; // eax
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+50h] [rbp+18h] BYREF
  __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v17 = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, a3) + 69112) )
    return 0LL;
  UserSessionState = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v7, v6, v8);
  CAcquireReleaseRundownProtection::CAcquireReleaseRundownProtection(
    (CAcquireReleaseRundownProtection *)&v18,
    UserSessionState + 8640);
  if ( v18 )
  {
    v16 = *a2;
    v14 = W32GetUserSessionState(v12, v11, v13);
    v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int128 *, unsigned int *))WmsgpSendPSPMessage)(
            *(_QWORD *)(v14 + 69112),
            a1,
            &v16,
            &v17);
    v3 = v17;
    if ( v15 < 0 )
      v3 = v15;
  }
  CAcquireReleaseRundownProtection::~CAcquireReleaseRundownProtection((CAcquireReleaseRundownProtection *)&v18);
  return v3;
}
