/*
 * XREFs of ??0CDWMDisplaySet@@QEAA@XZ @ 0x180066A38
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x1800666E0 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180009100 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 */

CDWMDisplaySet *__fastcall CDWMDisplaySet::CDWMDisplaySet(CDWMDisplaySet *this)
{
  CDWMDisplaySet *v1; // r9

  *(_DWORD *)this = 1;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 40, (__int64)this + 72, 4);
  *((_QWORD *)v1 + 3) = 0LL;
  *((_QWORD *)v1 + 2) = 0LL;
  return v1;
}
