/*
 * XREFs of ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x180131570
 * Callers:
 *     ?ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1801313E4 (-ProcessKernelTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18013122C (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z @ 0x1801318B8 (-AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1801C0204 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1801C0264 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CMmcssTask::Clone(LPCRITICAL_SECTION lpCriticalSection, struct _RTL_CRITICAL_SECTION *this)
{
  unsigned int v4; // edi
  bool v5; // al
  char DebugInfo; // dl
  int v8; // eax

  v4 = 0;
  EnterCriticalSection(lpCriticalSection);
  v5 = CMmcssTask::AreEqualMmTask(&lpCriticalSection[1].DebugInfo->Type, &this[1].DebugInfo->Type);
  DebugInfo = (char)lpCriticalSection[2].DebugInfo;
  if ( v5 )
  {
    if ( LOBYTE(this[2].DebugInfo) != DebugInfo )
    {
      if ( DebugInfo )
        CMmcssTask::Apply(this, 0);
      else
        CMmcssTask::Revert((CMmcssTask *)this);
    }
  }
  else
  {
    v8 = CMmcssTask::Set(
           this,
           (const struct DWM_MMTASK *)lpCriticalSection[1].DebugInfo,
           (char)lpCriticalSection[2].DebugInfo);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x77u, 0LL);
  }
  LeaveCriticalSection(lpCriticalSection);
  return v4;
}
