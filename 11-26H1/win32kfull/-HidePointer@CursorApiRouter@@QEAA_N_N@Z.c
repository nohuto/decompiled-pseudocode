/*
 * XREFs of ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1400FA110
 * Callers:
 *     SetPointerMetaVisibility @ 0x1400F7ED0 (SetPointerMetaVisibility.c)
 *     _anonymous_namespace_::RenderCursor @ 0x1400F8A80 (_anonymous_namespace_--RenderCursor.c)
 *     TransitionCursorSuppressionState @ 0x1400F8F50 (TransitionCursorSuppressionState.c)
 *     _anonymous_namespace_::xxxSwitchCursors @ 0x1400F9310 (_anonymous_namespace_--xxxSwitchCursors.c)
 *     EditionShowSystemCursor @ 0x1400F9FE0 (EditionShowSystemCursor.c)
 *     PowerOnGdi @ 0x140248020 (PowerOnGdi.c)
 *     PowerOffGdi @ 0x140253020 (PowerOffGdi.c)
 * Callees:
 *     GreHidePointer @ 0x1400A4E00 (GreHidePointer.c)
 *     ?HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z @ 0x1400FA018 (-HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400FB58C (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x14025F994 (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 *     GreUpdatePointerState @ 0x14029093C (GreUpdatePointerState.c)
 *     ?DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z @ 0x1402EE65C (-DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z.c)
 */

bool __fastcall CursorApiRouter::HidePointer(CursorApiRouter *this, unsigned __int8 a2)
{
  unsigned int v2; // esi
  __int64 HDEV; // rax
  bool v5; // bp
  int v6; // r14d
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = a2;
  HDEV = UserGetHDEV();
  if ( !HDEV )
    return HDEV;
  v5 = 0;
  W32AcquirePushLockExclusiveEx((CursorApiRouter *)((char *)this + 40), 0);
  v6 = *((_DWORD *)this + 8);
  if ( v6 != 1 )
  {
    if ( *((_DWORD *)this + 8) != 2 )
      goto LABEL_6;
    v7 = GreHidePointer((Gre::Base *)v2);
    v5 = v7 != 0;
    if ( !v7 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( (unsigned int)GreUpdatePointerState(v2) )
  {
    v5 = 1;
LABEL_5:
    *((_BYTE *)this + 12) = v2;
  }
LABEL_6:
  ExReleasePushLockExclusiveEx((char *)this + 40, 0LL);
  KeLeaveCriticalRegion();
  LOBYTE(v8) = v5;
  LOBYTE(v9) = v2;
  InputTraceLogging::Cursor::Api::HidePointer(v9, v8, *((_BYTE *)this + 12));
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
