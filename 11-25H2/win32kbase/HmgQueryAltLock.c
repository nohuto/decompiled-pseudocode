/*
 * XREFs of HmgQueryAltLock @ 0x14006F190
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x140070324 (bMigrateSurfaceForConversion.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x140071D90 (vDynamicConvertNewSurfaceDCs.c)
 * Callees:
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x14006FA70 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

__int64 __fastcall HmgQueryAltLock(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 SessionState; // rax

  v1 = a1;
  SessionState = W32GetSessionState(a1);
  return *((unsigned int *)GdiHandleManager::GetEntryObject(
                             *(GdiHandleManager **)(*(_QWORD *)(SessionState + 88) + 5672LL),
                             (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000)
         + 2);
}
