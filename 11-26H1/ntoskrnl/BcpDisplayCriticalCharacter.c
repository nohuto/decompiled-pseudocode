/*
 * XREFs of BcpDisplayCriticalCharacter @ 0x140716734
 * Callers:
 *     BcpDisplayErrorInformation @ 0x140716F38 (BcpDisplayErrorInformation.c)
 *     BgpFwDisplayBugCheckScreen @ 0x1407180B4 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x140715C90 (BgpDisplayCharacterEx.c)
 *     BcpSetCursorPosition @ 0x140717E1C (BcpSetCursorPosition.c)
 */

__int64 __fastcall BcpDisplayCriticalCharacter(__int16 a1, int a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // edi
  unsigned int v5; // r9d
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 result; // rax
  unsigned __int64 v9; // [rsp+40h] [rbp-28h]
  unsigned int v10; // [rsp+58h] [rbp-10h] BYREF
  int v11; // [rsp+70h] [rbp+8h] BYREF
  int v12; // [rsp+80h] [rbp+18h] BYREF

  v12 = a3;
  LOWORD(v11) = a1;
  v3 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[16];
  v4 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[20];
  v5 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[20];
  v6 = *(_DWORD *)&WheapPfaLock.SchedulerApcFill5[24];
  v7 = *(_QWORD *)(*(_QWORD *)&stru_140E3E928.Timer.Processor + 24LL);
  v12 = 0;
  v11 = 0;
  *(_DWORD *)(v7 + 56) = a2;
  *(_DWORD *)(*(_QWORD *)&stru_140E3E928.Timer.Processor + 8LL) = a2;
  result = BgpDisplayCharacterEx(
             0x20u,
             *(__int64 **)&stru_140E3E928.Timer.Processor,
             v3,
             v5,
             *(_DWORD *)(v7 + 40),
             -1,
             &v12,
             &v11,
             v9);
  if ( (int)result >= 0 )
  {
    if ( v6 < v4 + v11 )
      v6 = v4 + v11;
    v10 = v6;
    return BcpSetCursorPosition(v3 + v12, v4, &v10);
  }
  return result;
}
