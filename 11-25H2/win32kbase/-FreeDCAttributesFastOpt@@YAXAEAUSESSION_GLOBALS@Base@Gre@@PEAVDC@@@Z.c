/*
 * XREFs of ?FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x1401C8BDC
 * Callers:
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1400D9D40 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ?FreeDCAttributes@@YAXPEAVDC@@@Z @ 0x14017929C (-FreeDCAttributes@@YAXPEAVDC@@@Z.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C8C80 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x14001BC30 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x140075800 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140075AB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 *     HmgFreeDcAttr @ 0x1400C0A8C (HmgFreeDcAttr.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     HmgFreeDcAttrFastOpt @ 0x1401C82DC (HmgFreeDcAttrFastOpt.c)
 */

void __fastcall FreeDCAttributesFastOpt(GdiHandleManager **a1, struct DC *a2)
{
  struct _ENTRY *EntryFromObject; // rax
  struct _ENTRY *v5; // rsi
  struct _DC_ATTR *v6; // rax
  __int64 v7; // rbx

  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    EntryFromObject = GdiHandleManager::GetEntryFromObject(a1[709], a2);
  else
    EntryFromObject = (struct _ENTRY *)HmgPentryFromPobj(a2);
  v5 = EntryFromObject;
  v6 = (struct _DC_ATTR *)GreDecodeUserModePointer(*((void **)EntryFromObject + 2));
  v7 = (__int64)v6;
  if ( v6 )
  {
    *((_QWORD *)v5 + 2) = 0LL;
    if ( (*((_DWORD *)a2 + 11) & 2) == 0 )
      DC::SaveAttributes(a2, v6);
    if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
      HmgFreeDcAttrFastOpt(a1, v7);
    else
      HmgFreeDcAttr(v7);
  }
}
