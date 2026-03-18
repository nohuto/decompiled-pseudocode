/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z @ 0x1401C4D28
 * Callers:
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x14001C840 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x14006FA70 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x140075800 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     bDeleteFont @ 0x140089B5C (bDeleteFont.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400CFBA8 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x1401C4BF4 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 *     ?HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEAH@Z @ 0x1401C4ED4 (-HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEA.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT(struct Gre::Base::SESSION_GLOBALS *a1, struct HOBJ__ **a2)
{
  struct HOBJ__ *v2; // rsi
  __int16 v5; // ax
  int IsEnabledDeviceUsageNoInline; // eax
  struct OBJECT *EntryObject; // rbx
  struct _ENTRY *EntryFromObject; // rax
  char v9; // bl
  unsigned int *v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    v2 = *a2;
    v5 = (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline()
       ? HmgDecrementShareReferenceCountExFastOpt(a1, (struct _BASEOBJECT *)a2, 0LL)
       : HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)a2, 0LL);
    if ( v5 == 1 )
    {
      IsEnabledDeviceUsageNoInline = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
      HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v10, a1, IsEnabledDeviceUsageNoInline != 0);
      HANDLELOCK::bLockHobj((HANDLELOCK *)&v10, v2, 10);
      if ( v11 )
      {
        EntryObject = GdiHandleManager::GetEntryObject(*(GdiHandleManager **)(v12 + 5672), *v10);
        if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
          EntryFromObject = GdiHandleManager::GetEntryFromObject(*((GdiHandleManager **)a1 + 709), EntryObject);
        else
          EntryFromObject = (struct _ENTRY *)HmgPentryFromPobj(EntryObject);
        v9 = *((_BYTE *)EntryFromObject + 15);
        HANDLELOCK::vUnlock((HANDLELOCK *)&v10);
        if ( (v9 & 2) != 0 )
          bDeleteFont((__int64)v2, 0);
      }
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v10);
    }
  }
}
