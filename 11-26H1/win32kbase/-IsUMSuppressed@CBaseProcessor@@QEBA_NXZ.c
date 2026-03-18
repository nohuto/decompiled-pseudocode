/*
 * XREFs of ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1400A2568
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@@Z @ 0x1400A2084 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessi.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ @ 0x1400A25AC (-IsInputThreadDesktopActive@CMasterInputThread@@QEBA_NXZ.c)
 */

char __fastcall CBaseProcessor::IsUMSuppressed(CBaseProcessor *this, int a2, int a3)
{
  __int64 UserSessionState; // rax
  bool IsInputThreadDesktopActive; // al
  char v6; // dl

  UserSessionState = W32GetUserSessionState((_DWORD)this, a2, a3);
  IsInputThreadDesktopActive = CMasterInputThread::IsInputThreadDesktopActive(*(CMasterInputThread **)(UserSessionState + 18800));
  v6 = 0;
  if ( IsInputThreadDesktopActive )
    return (*((_DWORD *)this + 2) & 4) != 0;
  return v6;
}
