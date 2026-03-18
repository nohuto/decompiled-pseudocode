/*
 * XREFs of ??1DCMEMOBJ@@QEAA@XZ @ 0x140178DF0
 * Callers:
 *     GreCreateDisplayDC @ 0x140041200 (GreCreateDisplayDC.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x14001CE4C (--1DCOBJ@@QEAA@XZ.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x1400D9C88 (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1401C6564 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0XDCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x1401C7528 (--0XDCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 */

void __fastcall DCMEMOBJ::~DCMEMOBJ(struct Gre::Base::SESSION_GLOBALS **this)
{
  int IsEnabledDeviceUsageNoInline; // eax
  DC *v3; // rax
  bool v4; // zf
  DC *v5[5]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v6[48]; // [rsp+48h] [rbp-30h] BYREF
  int v7; // [rsp+80h] [rbp+8h] BYREF

  if ( *this )
  {
    IsEnabledDeviceUsageNoInline = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
    XDCOBJ::XDCOBJ((XDCOBJ *)v5, this[2], IsEnabledDeviceUsageNoInline != 0);
    UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v6);
    v3 = *this;
    *this = 0LL;
    v4 = *((_DWORD *)this + 10) == 0;
    v5[0] = v3;
    if ( v4 )
    {
      v7 = 0;
      GrepDeleteDCOBJ(v5, 0x400000u, &v7);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v5);
  }
}
