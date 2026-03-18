/*
 * XREFs of ?ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z @ 0x140226AFC
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x14021F560 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14016CD20 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x1401B7950 (ApiSetEditionInternalSetCursorPos.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall IVForegroundSync::ivReceiveForegroundUpdate(
        IVForegroundSync *this,
        const struct _IVForegroundPacket *a2,
        int a3)
{
  int v4; // edx
  char v5; // bp
  char v6; // r14
  int v7; // ebx
  __int64 v8; // rdi
  __int64 UserSessionState; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  bool v12; // di
  bool v13; // r14
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rbx
  void (__fastcall *v18)(__int64); // rax
  __int64 v19; // [rsp+48h] [rbp-30h]

  v4 = (int)WPP_GLOBAL_Control;
  v5 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = *((_DWORD *)this + 2);
    v8 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState((_DWORD)this, (_DWORD)WPP_GLOBAL_Control, a3);
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v5,
      v6,
      *(_QWORD *)(UserSessionState + 69136),
      4u,
      0xDu,
      0x11u,
      (__int64)&WPP_d763e2babcc93ef854e00ac0d326f989_Traceguids,
      v8,
      v7);
  }
  v10 = *(_QWORD *)((char *)this + 12);
  v11 = 4294935296LL;
  if ( v10 != 0xFFFF8300FFFF8300uLL )
  {
    v12 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v4, a3);
      LODWORD(v19) = HIDWORD(v10);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(v14 + 69136),
        4,
        13,
        18,
        (__int64)&WPP_d763e2babcc93ef854e00ac0d326f989_Traceguids,
        v10,
        v19);
    }
    ApiSetEditionInternalSetCursorPos((unsigned int)v10, HIDWORD(v10), 2u);
  }
  v17 = 0LL;
  if ( *((_DWORD *)this + 2) != 1 )
    v17 = *(_QWORD *)this;
  v18 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v11) + 48) + 4792LL);
  if ( v18 )
    v18(v17);
}
