/*
 * XREFs of ?Release@?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@AEAAKXZ @ 0x18056ED88
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18056CA50 (--1-$com_ptr_t@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18056CAC4 (--4-$com_ptr_t@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180570278 (-reset@-$com_ptr_t@V-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 * Callees:
 *     ??1?$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@QEAA@XZ @ 0x18056CA70 (--1-$merged_data@U_tip_TouchGestureTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 76);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>::~merged_data<_tip_TouchGestureTest,_tip_TouchGestureTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
