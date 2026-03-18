/*
 * XREFs of ?FreePointerDeviceIfSupported@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1401DE720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall FreePointerDeviceIfSupported(struct tagHID_POINTER_DEVICE_INFO *a1)
{
  int (*v2)(void); // rax
  __int64 v3; // rcx
  void (__fastcall *v4)(struct tagHID_POINTER_DEVICE_INFO *); // rax

  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 2552LL);
  if ( v2 && v2() >= 0 )
  {
    v4 = *(void (__fastcall **)(struct tagHID_POINTER_DEVICE_INFO *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 48)
                                                                    + 2560LL);
    if ( v4 )
      v4(a1);
  }
}
