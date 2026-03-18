/*
 * XREFs of ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1401212F8
 * Callers:
 *     _anonymous_namespace_::RenderCursor @ 0x14005E7DC (_anonymous_namespace_--RenderCursor.c)
 *     EditionShowSystemCursor @ 0x1401212C0 (EditionShowSystemCursor.c)
 *     SetPointerMetaVisibility @ 0x1401229B0 (SetPointerMetaVisibility.c)
 *     _anonymous_namespace_::xxxSwitchCursors @ 0x140123C6C (_anonymous_namespace_--xxxSwitchCursors.c)
 *     TransitionCursorSuppressionState @ 0x140123E50 (TransitionCursorSuppressionState.c)
 *     PowerOnGdi @ 0x1401257F0 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x1401259E0 (PowerOffGdi.c)
 * Callees:
 *     GreHidePointer @ 0x140094C3C (GreHidePointer.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140121C48 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z @ 0x140121C88 (-HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z.c)
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x14022655C (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 *     GreUpdatePointerState @ 0x140260ED4 (GreUpdatePointerState.c)
 *     ?DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z @ 0x1402DB7A0 (-DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z.c)
 */

bool __fastcall CursorApiRouter::HidePointer(CursorApiRouter *this, unsigned __int8 a2)
{
  unsigned int v2; // esi
  __int64 HDEV; // rax
  bool v5; // bp
  int v6; // r14d
  int updated; // eax

  v2 = a2;
  HDEV = UserGetHDEV();
  if ( !HDEV )
    return HDEV;
  v5 = 0;
  W32AcquirePushLockExclusiveEx((CursorApiRouter *)((char *)this + 40), 0);
  v6 = *((_DWORD *)this + 8);
  if ( v6 == 1 )
  {
    updated = GreUpdatePointerState(v2);
LABEL_5:
    v5 = updated != 0;
    if ( updated )
      *((_BYTE *)this + 12) = v2;
    goto LABEL_7;
  }
  if ( *((_DWORD *)this + 8) == 2 )
  {
    updated = GreHidePointer((Gre::Base *)v2);
    goto LABEL_5;
  }
LABEL_7:
  ExReleasePushLockExclusiveEx((char *)this + 40, 0LL);
  KeLeaveCriticalRegion();
  InputTraceLogging::Cursor::Api::HidePointer(v2, v5, *((_BYTE *)this + 12));
  if ( v5 && v6 == 1 )
  {
    if ( (_BYTE)v2 )
      CursorApiRouter::DwmSetPointer(this, 0LL);
    else
      CursorApiRouter::ForceSetCurrentCursorShape(this);
  }
  LOBYTE(HDEV) = 1;
  return HDEV;
}
