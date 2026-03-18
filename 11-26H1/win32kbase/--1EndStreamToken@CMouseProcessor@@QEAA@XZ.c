/*
 * XREFs of ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x140089C64
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14009A480 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z @ 0x14008D09C (-SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z.c)
 */

void __fastcall CMouseProcessor::EndStreamToken::~EndStreamToken(CMouseProcessor::EndStreamToken *this)
{
  int v1; // eax

  if ( *((_BYTE *)this + 16) )
  {
    v1 = *((_DWORD *)this + 5);
    if ( v1 )
    {
      if ( v1 != 4
        && (*(_DWORD *)(*((_QWORD *)this + 1) + 16LL) == 3
         || !_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)this + 3904LL), 1, 1)) )
      {
        CMouseProcessor::SendInputStreamEndedMessage(
          *(CMouseProcessor **)this,
          *((const struct CMouseProcessor::CMouseEvent **)this + 1));
      }
    }
  }
}
