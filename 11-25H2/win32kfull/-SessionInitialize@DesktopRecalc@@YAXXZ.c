/*
 * XREFs of ?SessionInitialize@DesktopRecalc@@YAXXZ @ 0x14021D850
 * Callers:
 *     EditionUserInitialize @ 0x14021D820 (EditionUserInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ds @ 0x1402C8FAC (WPP_RECORDER_AND_TRACE_SF_ds.c)
 */

void __fastcall DesktopRecalc::SessionInitialize(DesktopRecalc *this)
{
  char v1; // di
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 UserSessionState; // rsi
  unsigned int *v6; // rcx
  bool v7; // bp
  __int64 v8; // rax
  int v9; // r8d
  int v10; // edx
  int v11; // [rsp+70h] [rbp+8h] BYREF

  v1 = 1;
  v11 = 0;
  FastGetProfileIntFromID(0LL, 39LL, 616LL);
  UserSessionState = W32GetUserSessionState(v3, v2);
  *(_BYTE *)(UserSessionState + 71280) = v11 != 0;
  v6 = &WPP_GLOBAL_Control;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (v6 = (unsigned int *)*(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL), ((unsigned __int8)v6 & 0x40) == 0)
    || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
  {
    v1 = 0;
  }
  v7 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v1 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v8 = W32GetUserSessionState(v6, v4);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v1;
    WPP_RECORDER_AND_TRACE_SF_ds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v10,
      v9,
      *(_QWORD *)(v8 + 69160),
      (unsigned int)&v11,
      0);
  }
  *(_QWORD *)(UserSessionState + 71272) = 0LL;
  *(_DWORD *)(UserSessionState + 71240) = 5000;
}
