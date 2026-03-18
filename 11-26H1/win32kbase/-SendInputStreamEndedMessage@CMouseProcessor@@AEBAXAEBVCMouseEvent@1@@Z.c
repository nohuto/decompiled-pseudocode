/*
 * XREFs of ?SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z @ 0x14008D09C
 * Callers:
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x140089C64 (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 * Callees:
 *     SendMessageTo @ 0x14008B570 (SendMessageTo.c)
 */

void __fastcall CMouseProcessor::SendInputStreamEndedMessage(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  bool v2; // zf
  int v3; // eax
  __int64 v4; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+34h] [rbp-14h]

  v2 = *((_DWORD *)a2 + 4) == 3;
  v7 = 0;
  if ( v2 )
    v3 = *((_DWORD *)this + 915);
  else
    v3 = *((_DWORD *)this + 914);
  v6 = v3;
  v4 = *((_QWORD *)a2 + 1);
  v5[1] = 4LL;
  v5[0] = *(_QWORD *)(v4 + 8);
  SendMessageTo(19, (int)v5, 24);
}
