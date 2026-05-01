/*
 * XREFs of ?Release@?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@AEAAKXZ @ 0x1805B1AA8
 * Callers:
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1802AA09C (-reset@-$com_ptr_t@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802AFC64 (--4-$com_ptr_t@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805A7C14 (--1-$com_ptr_t@V-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@Uerr_returncode_policy@wil@@.c)
 * Callees:
 *     ??1?$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@QEAA@XZ @ 0x1805A7DFC (--1-$merged_data@U_tip_AppPrelaunch@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 86);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>::~merged_data<_tip_AppPrelaunch,_tip_AppPrelaunch>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
