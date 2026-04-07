/*
 * XREFs of ?SetFilterList@CMagnifierRenderTargetProxy@@QEAAJPEAVCVisualGroupProxy@@@Z @ 0x180061B4C
 * Callers:
 *     ?OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z @ 0x1800618DC (-OnModifyWindowFilterList@CMagnifier@@QEAAJPEBUMAGN_FILTERLIST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMagnifierRenderTargetProxy::SetFilterList(
        CMagnifierRenderTargetProxy *this,
        struct CVisualGroupProxy *a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    v2 = *((unsigned int *)a2 + 6);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 2) + 336LL))(
           *((_QWORD *)this + 2),
           *((unsigned int *)this + 6),
           v2);
}
