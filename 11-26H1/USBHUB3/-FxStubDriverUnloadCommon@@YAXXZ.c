/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x140042CE0
 * Callers:
 *     FxDriverEntryWorker @ 0x140042E14 (FxDriverEntryWorker.c)
 *     FxStubDriverUnload @ 0x140042FA0 (FxStubDriverUnload.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

void FxStubDriverUnloadCommon(void)
{
  unsigned int *v0; // rcx
  unsigned int *v1; // rdi
  unsigned int *v2; // rbx
  void (__fastcall *v3)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *); // rax

  v0 = (unsigned int *)&__KMDF_CLASS_BIND_END;
  if ( off_1400709B8 != &__KMDF_CLASS_BIND_START )
  {
    v1 = (unsigned int *)((char *)off_1400709B8 + 80);
    while ( 1 )
    {
      while ( v0 + 2 <= v1 && !*(_QWORD *)v0 )
        v0 += 2;
      if ( v0 < v1 )
      {
        if ( v0 + 20 > v1 || *v0 != 80 )
        {
LABEL_17:
          DbgPrintEx(0x4Du, 0, "FxGetNextClassBindInfo failed\n");
          break;
        }
        v2 = v0;
      }
      else
      {
        v2 = v1;
      }
      if ( !v2 )
        goto LABEL_17;
      if ( v2 >= v1 )
        break;
      v3 = (void (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *))*((_QWORD *)v2 + 8);
      if ( v3 )
        v3(WdfVersionUnbindClass, &WdfBindInfo, WdfDriverGlobals, v2);
      else
        WdfVersionUnbindClass(&WdfBindInfo, WdfDriverGlobals, v2);
      v0 = (unsigned int *)((char *)v2 + *v2);
    }
  }
  WdfVersionUnbind(&DestinationString, &WdfBindInfo, WdfDriverGlobals);
}
