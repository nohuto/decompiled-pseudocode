/*
 * XREFs of ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1400C03DC
 * Callers:
 *     ??1DCOBJ@@QEAA@XZ @ 0x14001CE4C (--1DCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140043E9C (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1400C03B4 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x14001B8A0 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x14001BBA0 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 *     ?HmgDecrementExclusiveReferenceCountEx@@YAXPEAU_BASEOBJECT@@W4HandleLockOptions@@PEAH@Z @ 0x140177140 (-HmgDecrementExclusiveReferenceCountEx@@YAXPEAU_BASEOBJECT@@W4HandleLockOptions@@PEAH@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ?HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@@W4HandleLockOptions@@PEAH@Z @ 0x1401C4E20 (-HmgDecrementExclusiveReferenceCountExFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAU_BASEOBJECT@.c)
 */

void __fastcall XDCOBJ::vUnlockFast(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // rax
  HDC *v3; // rax
  HDC v4; // rdi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v6; // rdx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 2) && (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
  {
    if ( (*((_DWORD *)this + 8) & 2) == 0 )
    {
      UserAttr = XDCOBJ::GetUserAttr(this);
      if ( UserAttr )
        DC::RestoreAttributes(*(DC **)this, UserAttr);
    }
    *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
    *((_DWORD *)this + 2) = 0;
  }
  v3 = *(HDC **)this;
  v7 = 0;
  v4 = *v3;
  IsEnabledDeviceUsageNoInline = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
  v6 = *((unsigned int *)this + 8);
  if ( IsEnabledDeviceUsageNoInline )
    HmgDecrementExclusiveReferenceCountExFastOpt(*((_QWORD *)this + 2), *(_QWORD *)this, (unsigned int)v6, &v7);
  else
    HmgDecrementExclusiveReferenceCountEx(*(_QWORD *)this, v6, &v7);
  if ( v7 )
    GrepDeleteDC(v4, 0x2000000u);
}
