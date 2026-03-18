/*
 * XREFs of ?vReleaseRaoFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C6880
 * Callers:
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x14001C880 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x140075800 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DC::vReleaseRaoFastOpt(DC *this, GdiHandleManager **a2)
{
  struct _ENTRY *EntryFromObject; // rax

  *((_DWORD *)this + 9) |= 0x10u;
  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    EntryFromObject = GdiHandleManager::GetEntryFromObject(a2[709], this);
  else
    EntryFromObject = (struct _ENTRY *)HmgPentryFromPobj(this);
  *((_BYTE *)EntryFromObject + 15) |= 4u;
}
