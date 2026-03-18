/*
 * XREFs of ?GetRedirectedFlipFenceValue@DXGSYNCOBJECT@@QEBA_KXZ @ 0x14005D7FC
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1403074C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int64 __fastcall DXGSYNCOBJECT::GetRedirectedFlipFenceValue(DXGSYNCOBJECT *this)
{
  if ( *((_DWORD *)this + 105) != 3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 492;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetSyncObjectType() == D3DDDI_FENCE",
      492LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *((_QWORD *)this + 15);
}
