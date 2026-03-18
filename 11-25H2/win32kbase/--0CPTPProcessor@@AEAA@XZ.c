/*
 * XREFs of ??0CPTPProcessor@@AEAA@XZ @ 0x140210FD8
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x14015799C (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x14014D0A8 (--0CTouchProcessor@@QEAA@XZ.c)
 *     memset @ 0x140243000 (memset.c)
 */

CPTPProcessor *__fastcall CPTPProcessor::CPTPProcessor(CPTPProcessor *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax

  CTouchProcessor::CTouchProcessor(this, a2);
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_QWORD *)this + 21) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  memset((char *)this + 400, 0, 0x70uLL);
  *((_BYTE *)this + 512) = 0;
  memset((char *)this + 560, 0, 0xA0uLL);
  memset((char *)this + 720, 0, 0x278uLL);
  memset((char *)this + 1352, 0, 0x278uLL);
  *((_WORD *)this + 992) = 0;
  *((_BYTE *)this + 1986) = 0;
  UserSessionState = W32GetUserSessionState(v4, v3);
  *((_QWORD *)this + 250) = 0LL;
  *((_QWORD *)this + 251) = 0LL;
  *((_QWORD *)this + 252) = 0LL;
  *((_QWORD *)this + 253) = 0LL;
  *((_QWORD *)this + 249) = UserSessionState + 3296;
  *((_QWORD *)this + 261) = W32GetUserSessionState(v7, v6) + 3328;
  v10 = W32GetUserSessionState(v9, v8);
  *((_DWORD *)this + 97) &= ~2u;
  *((_DWORD *)this + 96) = 0;
  *((_QWORD *)this + 262) = v10 + 3332;
  return this;
}
