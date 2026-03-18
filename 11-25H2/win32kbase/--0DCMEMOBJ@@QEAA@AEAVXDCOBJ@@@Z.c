/*
 * XREFs of ??0DCMEMOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140178AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400C5FB8 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     HmgAlloc @ 0x140177200 (HmgAlloc.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     HmgAllocFast @ 0x1401C5500 (HmgAllocFast.c)
 *     ??0XDCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x1401C7528 (--0XDCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, struct Gre::Base::SESSION_GLOBALS **a2)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v5; // rax
  __int64 v6; // rax

  IsEnabledDeviceUsageNoInline = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
  XDCOBJ::XDCOBJ(this, a2[2], IsEnabledDeviceUsageNoInline != 0);
  *((_DWORD *)this + 10) = 0;
  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    v5 = HmgAllocFast(*((struct Gre::Base::SESSION_GLOBALS **)this + 2), 0x850u);
  else
    v5 = HmgAlloc(2128LL);
  *(_QWORD *)this = v5;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 36) = 0;
    *(_DWORD *)(*(_QWORD *)this + 44LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 40LL) = 0;
    v6 = *(_QWORD *)this;
    *(_QWORD *)(v6 + 1112) = 0LL;
    *(_QWORD *)(v6 + 1120) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 1136LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)this + 48LL) = *((_QWORD *)*a2 + 6);
    *(_QWORD *)(*(_QWORD *)this + 976LL) = *(_QWORD *)this + 544LL;
    DC::vCopyTo(*a2, this);
  }
  return this;
}
