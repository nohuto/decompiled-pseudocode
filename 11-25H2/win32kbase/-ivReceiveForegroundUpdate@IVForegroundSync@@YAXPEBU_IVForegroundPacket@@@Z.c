/*
 * XREFs of ?ivReceiveForegroundUpdate@IVForegroundSync@@YAXPEBU_IVForegroundPacket@@@Z @ 0x14021BA20
 * Callers:
 *     ?ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z @ 0x14021AC00 (-ivOnNonInputPacketReceived@@YA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x14013B930 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ApiSetEditionInternalSetCursorPos @ 0x140195AE0 (ApiSetEditionInternalSetCursorPos.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall IVForegroundSync::ivReceiveForegroundUpdate(
        IVForegroundSync *this,
        const struct _IVForegroundPacket *a2)
{
  void *v3; // rdx
  bool v4; // bp
  bool v5; // r14
  int v6; // ebx
  __int64 v7; // rdi
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  __int64 v11; // rbx
  __int64 v12; // rcx
  bool v13; // di
  bool v14; // r14
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rbx
  void (__fastcall *v19)(__int64); // rax
  __int64 v20; // [rsp+48h] [rbp-30h]

  v3 = WPP_GLOBAL_Control;
  v4 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = *((_DWORD *)this + 2);
    v7 = *(_QWORD *)this;
    UserSessionState = W32GetUserSessionState(this, WPP_GLOBAL_Control);
    LOBYTE(v9) = v5;
    LOBYTE(v10) = v4;
    WPP_RECORDER_AND_TRACE_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      13,
      17,
      (__int64)&WPP_b62f9cf1c4903e8cd4543b7f28a8c611_Traceguids,
      v7,
      v6);
  }
  v11 = *(_QWORD *)((char *)this + 12);
  v12 = 4294935296LL;
  if ( v11 != 0xFFFF8300FFFF8300uLL )
  {
    v13 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v3);
      LODWORD(v20) = HIDWORD(v11);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 69144),
        4,
        13,
        18,
        (__int64)&WPP_b62f9cf1c4903e8cd4543b7f28a8c611_Traceguids,
        v11,
        v20);
    }
    ApiSetEditionInternalSetCursorPos((unsigned int)v11, HIDWORD(v11), 2u);
  }
  v18 = 0LL;
  if ( *((_DWORD *)this + 2) != 1 )
    v18 = *(_QWORD *)this;
  v19 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v12, v3) + 48) + 5232LL);
  if ( v19 )
    v19(v18);
}
