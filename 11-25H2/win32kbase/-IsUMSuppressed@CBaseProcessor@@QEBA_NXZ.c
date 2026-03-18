/*
 * XREFs of ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1400B98F0
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1400B89EC (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@@Z @ 0x14018F020 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessi.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140190F18 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ @ 0x1400B9A04 (-IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ.c)
 */

char __fastcall CBaseProcessor::IsUMSuppressed(CBaseProcessor *this, __int64 a2)
{
  __int64 UserSessionState; // rax
  bool IsInputThreadDesktopActive; // al
  char v5; // dl

  UserSessionState = W32GetUserSessionState(this, a2);
  IsInputThreadDesktopActive = CMasterInputThread::IsInputThreadDesktopActive(*(CMasterInputThread **)(UserSessionState + 18752));
  v5 = 0;
  if ( IsInputThreadDesktopActive )
    return (*((_DWORD *)this + 2) & 4) != 0;
  return v5;
}
