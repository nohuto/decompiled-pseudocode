/*
 * XREFs of ?HmgDecrementShareReferenceCountExFastOpt@@YAKAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@PEAH@Z @ 0x1401C4ED4
 * Callers:
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z @ 0x1401C4D28 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x1401C8050 (-DEC_SHARE_REF_CNT_LAZY0_FAST_OPT@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x14001B220 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@W4HandleLockOptions@@_N@Z @ 0x1401C4B7C (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@W4HandleLockOptions@@_N@Z.c)
 *     ?TrackObjectReferenceDecrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedType@@PEAX@Z @ 0x1401C6F0C (-TrackObjectReferenceDecrementFast@@YAXAEAUSESSION_GLOBALS@Base@Gre@@W4ReferenceTrackerCountedTy.c)
 */

__int64 __fastcall HmgDecrementShareReferenceCountExFastOpt(
        struct Gre::Base::SESSION_GLOBALS *a1,
        struct _BASEOBJECT *a2,
        int *a3)
{
  unsigned int v6; // r14d
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v8; // rbp
  int v9; // eax
  char v10; // cl
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  int v15; // [rsp+38h] [rbp-20h]

  if ( a3 )
    *a3 = 0;
  v6 = 0;
  IsEnabledDeviceUsageNoInline = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
  HANDLELOCK::HANDLELOCK((__int64)&v14, (__int64)a1, a2, 5, IsEnabledDeviceUsageNoInline != 0);
  if ( !v15 )
  {
    HmgPentryFromPobj(a2);
    goto LABEL_15;
  }
  v8 = v14;
  if ( a3 )
    *a3 = (*(unsigned __int8 *)(v14 + 15) >> 3) & 1;
  v6 = *((_DWORD *)a2 + 2);
  v9 = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
  v10 = *(_BYTE *)(v8 + 14);
  if ( !v9 )
  {
    TrackHmgrReferenceDecrement(v10, a2);
    goto LABEL_13;
  }
  if ( v10 == 5 )
  {
    v11 = *((_QWORD *)a2 + 85);
    v12 = 0LL;
LABEL_11:
    TrackObjectReferenceDecrementFast(a1, v12, v11);
    goto LABEL_13;
  }
  if ( v10 == 16 )
  {
    v11 = *((_QWORD *)a2 + 17);
    v12 = 2LL;
    goto LABEL_11;
  }
LABEL_13:
  --*((_DWORD *)a2 + 2);
  HANDLELOCK::vUnlock((HANDLELOCK *)&v14);
LABEL_15:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v14);
  return v6;
}
