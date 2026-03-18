/*
 * XREFs of ?HmgIncrementShareReferenceCountFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@@Z @ 0x1401C4FCC
 * Callers:
 *     HmgIncrementShareReferenceCount @ 0x14001C920 (HmgIncrementShareReferenceCount.c)
 *     INC_SHARE_REF_CNT_FAST @ 0x1401C5820 (INC_SHARE_REF_CNT_FAST.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1400194C0 (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@W4HandleLockOptions@@_N@Z @ 0x1401C4B7C (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@W4HandleLockOptions@@_N@Z.c)
 *     ?TrackObjectReferenceIncrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C6F44 (-TrackObjectReferenceIncrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedTy.c)
 */

void __fastcall HmgIncrementShareReferenceCountFastOpt(struct Gre::Base::SESSION_GLOBALS *a1, struct _BASEOBJECT *a2)
{
  int IsEnabledDeviceUsageNoInline; // eax
  int v5; // eax
  char v6; // cl
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]

  IsEnabledDeviceUsageNoInline = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
  HANDLELOCK::HANDLELOCK((__int64)&v9, (__int64)a1, a2, 1, IsEnabledDeviceUsageNoInline != 0);
  if ( !v10 )
  {
    HmgPentryFromPobj(a2);
    goto LABEL_11;
  }
  v5 = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
  v6 = *(_BYTE *)(v9 + 14);
  if ( !v5 )
  {
    TrackHmgrReferenceIncrement(v6, a2);
    goto LABEL_9;
  }
  if ( v6 == 5 )
  {
    v7 = *((_QWORD *)a2 + 85);
    v8 = 0LL;
LABEL_7:
    TrackObjectReferenceIncrementFast(a1, v8, v7);
    goto LABEL_9;
  }
  if ( v6 == 16 )
  {
    v7 = *((_QWORD *)a2 + 17);
    v8 = 2LL;
    goto LABEL_7;
  }
LABEL_9:
  ++*((_DWORD *)a2 + 2);
  HANDLELOCK::vUnlock((HANDLELOCK *)&v9);
LABEL_11:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v9);
}
