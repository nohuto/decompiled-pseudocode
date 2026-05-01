/*
 * XREFs of ?FindAppView@UwpPrimaryAppProxy@@AEAA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@PEAUIApplicationView@@@Z @ 0x1804F0504
 * Callers:
 *     ?HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1804F0B10 (-HandleView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 *     ?RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@@Z @ 0x1804F1C30 (-RemoveView@UwpPrimaryAppProxy@@UEAA_NPEAUIApplicationView@@PEAUIImmersiveMonitorManager@@V-$fun.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

struct IUnknown ***__fastcall UwpPrimaryAppProxy::FindAppView(__int64 a1, struct IUnknown ***a2, struct IUnknown *a3)
{
  struct IUnknown **v3; // rbx
  struct IUnknown **v5; // rsi
  struct IUnknown ***result; // rax

  v3 = *(struct IUnknown ***)(a1 + 48);
  v5 = *(struct IUnknown ***)(a1 + 56);
  while ( v3 != v5 && !SHIsSameObject(a3, *v3) )
    ++v3;
  result = a2;
  *a2 = v3;
  return result;
}
