/*
 * XREFs of ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1401F6D94
 * Callers:
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1401FC2B8 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 *     NtDxgkVailConnect @ 0x140210E60 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x140211380 (NtDxgkVailDisconnect.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402E6CB0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x140041AB0 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 */

struct DXGVAILOBJECT *__fastcall DXGPROCESS::ReferenceVailObject(DXGPROCESS *this)
{
  DxgkCompositionObject *v2; // rcx

  if ( !DXGFASTMUTEX::IsOwner((DXGPROCESS *)((char *)this + 104)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1425;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsMutexOwner()", 1425LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (DxgkCompositionObject *)*((_QWORD *)this + 72);
  if ( !v2 )
    return 0LL;
  DxgkCompositionObject::AddRef(v2);
  return (struct DXGVAILOBJECT *)*((_QWORD *)this + 72);
}
