/*
 * XREFs of HmgFreeFast @ 0x1401C56C0
 * Callers:
 *     HmgFree @ 0x140177250 (HmgFree.c)
 *     ?vDeleteCore@XDCOBJ@@QEAAXXZ @ 0x140178E6C (-vDeleteCore@XDCOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x140018960 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x1400189D0 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001A30C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x14001A830 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x14006FA70 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     FreeObject @ 0x14014C950 (FreeObject.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401C4B14 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     FreeObjectFast @ 0x1401C54CC (FreeObjectFast.c)
 */

void __fastcall HmgFreeFast(_QWORD *a1, unsigned int a2)
{
  char *v2; // rdi
  unsigned __int8 v4; // bl
  unsigned int *v6; // rbx
  struct OBJECT *EntryObject; // rax
  unsigned int *v8; // [rsp+20h] [rbp-20h] BYREF
  int v9; // [rsp+28h] [rbp-18h]
  __int64 v10; // [rsp+30h] [rbp-10h]
  HSEMAPHORE v11; // [rsp+70h] [rbp+30h] BYREF

  v2 = 0LL;
  v4 = 0;
  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
  {
    SEMOBJ<20>::SEMOBJ<20>(&v11, a1);
    HANDLELOCK::HANDLELOCK((__int64)&v8, (__int64)a1, a2, 1u);
  }
  else
  {
    SEMOBJ<20>::SEMOBJ<20>(&v11);
    HANDLELOCK::HANDLELOCK((__int64)&v8, a2, 1u);
  }
  if ( v9 )
  {
    v6 = v8;
    EntryObject = GdiHandleManager::GetEntryObject(*(GdiHandleManager **)(v10 + 5672), *v8);
    v4 = *((_BYTE *)v6 + 14);
    v2 = (char *)EntryObject;
    HANDLELOCK::vUnlockAndRelease(&v8);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v8);
  SEMOBJ<20>::vUnlock(&v11);
  if ( v2 )
  {
    if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
      FreeObjectFast((__int64)a1, v2, v4);
    else
      FreeObject((__int64)v2, v4);
  }
}
