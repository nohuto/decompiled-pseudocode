/*
 * XREFs of ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x140056A54
 * Callers:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1400566BC (-FxStubDriverUnloadCommon@@YAXXZ.c)
 * Callees:
 *     FxGetNextClassBindInfo @ 0x140056B14 (FxGetNextClassBindInfo.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

void __fastcall FxStubUnbindClasses(struct _WDF_BIND_INFO *a1)
{
  char *v1; // rcx
  char *v2; // rdi
  unsigned __int64 NextClassBindInfo; // rax
  unsigned int *v4; // rbx
  void (__fastcall *v5)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *); // rax

  v1 = (char *)&Ucx_BIND_INFO;
  if ( off_14006B838 != &__KMDF_CLASS_BIND_START )
  {
    v2 = (char *)off_14006B838 + 80;
    if ( *(_DWORD *)off_14006B838 == 120 )
      v2 = (char *)off_14006B838 + 120;
    while ( 1 )
    {
      NextClassBindInfo = FxGetNextClassBindInfo(v1, v2);
      v4 = (unsigned int *)NextClassBindInfo;
      if ( !NextClassBindInfo )
        break;
      if ( NextClassBindInfo >= (unsigned __int64)v2 )
        return;
      v5 = *(void (__fastcall **)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, unsigned int *))(NextClassBindInfo + 64);
      if ( v5 )
        v5(WdfVersionUnbindClass, &unk_14006B6B0, WdfDriverGlobals, v4);
      else
        WdfVersionUnbindClass(&unk_14006B6B0, WdfDriverGlobals, v4);
      v1 = (char *)v4 + *v4;
    }
    DbgPrintEx(0x4Du, 0, "FxGetNextClassBindInfo failed\n");
  }
}
