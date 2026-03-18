/*
 * XREFs of Endpoint_EvtDestroyCallback @ 0x140034EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall Endpoint_EvtDestroyCallback(__int64 a1)
{
  __int64 v1; // rbx
  struct _IO_WORKITEM *v2; // rcx

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006AFE8);
  v2 = *(struct _IO_WORKITEM **)(v1 + 1288);
  if ( v2 )
  {
    IoFreeWorkItem(v2);
    *(_QWORD *)(v1 + 1288) = 0LL;
  }
}
