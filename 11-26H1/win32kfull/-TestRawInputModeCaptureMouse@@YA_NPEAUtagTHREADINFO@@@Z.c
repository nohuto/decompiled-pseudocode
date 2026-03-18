/*
 * XREFs of ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x140172930
 * Callers:
 *     zzzUpdateCursorImage @ 0x14002AEE0 (zzzUpdateCursorImage.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1400F7250 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     HasHidTable @ 0x140172990 (HasHidTable.c)
 */

bool __fastcall TestRawInputModeCaptureMouse(struct tagTHREADINFO *a1)
{
  char v2; // bl

  v2 = 0;
  if ( !(unsigned __int8)IsSpatialDelegationEnabledForThread() && (unsigned int)HasHidTable(a1) )
    return (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 57) + 824LL) + 100LL) & 0x100) != 0;
  return v2;
}
