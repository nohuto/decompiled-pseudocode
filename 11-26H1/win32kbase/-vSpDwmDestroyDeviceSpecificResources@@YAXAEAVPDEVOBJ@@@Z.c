/*
 * XREFs of ?vSpDwmDestroyDeviceSpecificResources@@YAXAEAVPDEVOBJ@@@Z @ 0x1401C1C3C
 * Callers:
 *     ?DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z @ 0x140030770 (-DrvDisableDisplay@@YAHAEAVPDEVOBJ@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall vSpDwmDestroyDeviceSpecificResources(struct PDEVOBJ *a1)
{
  int (*v2)(void); // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  void (__fastcall *v5)(__int64); // rax

  v2 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 24) + 2272LL);
  if ( v2 && v2() >= 0 )
  {
    v4 = *(_QWORD *)a1;
    v5 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v3) + 24) + 2280LL);
    if ( v5 )
      v5(v4);
  }
}
