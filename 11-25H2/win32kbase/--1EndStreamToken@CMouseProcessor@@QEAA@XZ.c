/*
 * XREFs of ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x1400B9350
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x140036A78 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1400B89EC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z @ 0x1400B9E3C (-SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z.c)
 */

void __fastcall CMouseProcessor::EndStreamToken::~EndStreamToken(CMouseProcessor **this)
{
  if ( *((_BYTE *)this + 16)
    && (*((_DWORD *)this + 5) & 0xFFFFFFFB) != 0
    && (*((_DWORD *)this[1] + 4) == 3 || !_InterlockedCompareExchange((volatile signed __int32 *)*this + 974, 1, 1)) )
  {
    CMouseProcessor::SendInputStreamEndedMessage(*this, this[1]);
  }
}
