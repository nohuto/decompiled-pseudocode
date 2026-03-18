/*
 * XREFs of ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x14001BBA0
 * Callers:
 *     ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x14001B9F4 (-SaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14001BA50 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140044190 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1400C03DC (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x140075800 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140075AB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 */

struct _DC_ATTR *__fastcall XDCOBJ::GetUserAttr(XDCOBJ *this)
{
  __int64 v2; // rcx
  GdiHandleManager *v3; // rcx
  struct _DC_ATTR *result; // rax

  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    v3 = *(GdiHandleManager **)(*((_QWORD *)this + 2) + 5672LL);
  else
    v3 = *(GdiHandleManager **)(*(_QWORD *)(W32GetSessionState(v2) + 88) + 5672LL);
  result = GdiHandleManager::GetEntryFromObject(v3, *(struct OBJECT **)this);
  if ( result )
    return (struct _DC_ATTR *)GreDecodeUserModePointer(*((void **)result + 2));
  return result;
}
