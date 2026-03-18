/*
 * XREFs of ??0CPTPProcessor@@AEAA@XZ @ 0x140192AF8
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140192A90 (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1401B5BE4 (--0CTouchProcessor@@QEAA@XZ.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

CPTPProcessor *__fastcall CPTPProcessor::CPTPProcessor(CPTPProcessor *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  __int64 UserSessionState; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // rax
  CPTPProcessor *result; // rax

  CTouchProcessor::CTouchProcessor(this);
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_QWORD *)this + 21) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  memset((char *)this + 400, 0, 0x70uLL);
  *((_BYTE *)this + 512) = 0;
  memset((char *)this + 560, 0, 0xA0uLL);
  memset((char *)this + 720, 0, 0x278uLL);
  memset((char *)this + 1352, 0, 0x278uLL);
  *((_WORD *)this + 992) = 0;
  *((_BYTE *)this + 1986) = 0;
  UserSessionState = W32GetUserSessionState(v3, v2, v4);
  *((_QWORD *)this + 250) = 0LL;
  *((_QWORD *)this + 249) = UserSessionState + 3296;
  *((_QWORD *)this + 251) = 0LL;
  *((_QWORD *)this + 252) = 0LL;
  *((_QWORD *)this + 253) = 0LL;
  *((_QWORD *)this + 261) = W32GetUserSessionState(v7, v6, v8) + 3328;
  v12 = W32GetUserSessionState(v10, v9, v11);
  *((_DWORD *)this + 97) &= ~2u;
  *((_QWORD *)this + 262) = v12 + 3332;
  result = this;
  *((_DWORD *)this + 96) = 0;
  return result;
}
