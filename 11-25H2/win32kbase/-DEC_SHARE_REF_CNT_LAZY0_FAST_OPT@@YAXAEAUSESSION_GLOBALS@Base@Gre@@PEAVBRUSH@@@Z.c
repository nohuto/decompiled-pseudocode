/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x1401C8050
 * Callers:
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x14001C8C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x14006FA70 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     bDeleteBrush @ 0x140085F50 (bDeleteBrush.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400CFBA8 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x1401C4BF4 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 *     ?HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEAH@Z @ 0x1401C4ED4 (-HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEA.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY0_FAST_OPT(struct Gre::Base::SESSION_GLOBALS *a1, struct HOBJ__ **a2)
{
  struct HOBJ__ *v4; // rdi
  __int16 v5; // ax
  int v6; // ebx
  int IsEnabledDeviceUsageNoInline; // eax
  _DWORD *v8; // rax
  unsigned int *v9; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  if ( a2 )
  {
    v4 = *a2;
    v5 = (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline()
       ? HmgDecrementShareReferenceCountExFastOpt(a1, (struct _BASEOBJECT *)a2, 0LL)
       : HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)a2, 0LL);
    if ( v5 == 1 )
    {
      v6 = 0;
      IsEnabledDeviceUsageNoInline = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
      HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v9, a1, IsEnabledDeviceUsageNoInline != 0);
      HANDLELOCK::bLockHobj((HANDLELOCK *)&v9, v4, 16);
      if ( v10 )
      {
        v8 = (_DWORD *)*((_QWORD *)GdiHandleManager::GetEntryObject(*(GdiHandleManager **)(v11 + 5672), *v9) + 6);
        if ( v8 )
          v6 = *v8 & 2;
        HANDLELOCK::vUnlock((HANDLELOCK *)&v9);
      }
      if ( v6 )
        bDeleteBrush(v4, 0, 0);
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v9);
    }
  }
}
