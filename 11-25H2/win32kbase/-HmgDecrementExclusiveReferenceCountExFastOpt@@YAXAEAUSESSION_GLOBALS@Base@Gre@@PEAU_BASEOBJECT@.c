/*
 * XREFs of ?HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@W4HandleLockOptions@@PEAH@Z @ 0x1401C4E20
 * Callers:
 *     _GetDCEx @ 0x1400A2500 (_GetDCEx.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1400C03DC (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?HmgDecrementExclusiveReferenceCountEx@@YAXPEAU_BASEOBJECT@@W4HandleLockOptions@@PEAH@Z @ 0x140177140 (-HmgDecrementExclusiveReferenceCountEx@@YAXPEAU_BASEOBJECT@@W4HandleLockOptions@@PEAH@Z.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14001BC00 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@W4HandleLockOptions@@_N@Z @ 0x1401C4B7C (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@W4HandleLockOptions@@_N@Z.c)
 */

void __fastcall HmgDecrementExclusiveReferenceCountExFastOpt(__int64 a1, __int64 a2, int a3, int *a4)
{
  char v5; // di
  int IsEnabledDeviceUsageNoInline; // eax
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h]

  *a4 = 0;
  v5 = a3;
  if ( a3 == 3 || !a3 )
  {
    IsEnabledDeviceUsageNoInline = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
    HANDLELOCK::HANDLELOCK((__int64)&v10, a1, (_DWORD *)a2, v5 | 5, IsEnabledDeviceUsageNoInline != 0);
    if ( v11 )
    {
      if ( (*(_BYTE *)(v10 + 15) & 8) == 0 || *(_DWORD *)(a2 + 8) || (v9 = 1, *(_WORD *)(a2 + 12) != 1) )
        v9 = 0;
      *a4 = v9;
      OBJECT::InterlockedDecrementExclusiveLockCount((OBJECT *)a2);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v10);
    }
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v10);
  }
}
