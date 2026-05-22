/*
 * XREFs of ?_Delete_this@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU?$_Ph@$00@2@@std@@XPEAUDeviceInfo@@@std@@EEAAX_N@Z @ 0x1800CFCB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall __Delete_this____Func_impl_no_alloc_V___Binder_U_Unforced_std__P8GameInputProcessor__EAAXPEAUDeviceInfo____EPEAV3_AEBU___Ph__00_2__std__XPEAUDeviceInfo___std__EEAAX_N_Z(
        void *a1,
        char a2)
{
  if ( a2 )
    std::_Deallocate<16>(a1, (struct std::nothrow_t *)0x28);
}
