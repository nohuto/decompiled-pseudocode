/*
 * XREFs of ApiSetEditionCreateEdgePalmRejectionZones @ 0x14022747C
 * Callers:
 *     ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x14018E238 (-OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionCreateEdgePalmRejectionZones(__int64 a1)
{
  unsigned int v2; // ebx
  int (*v3)(void); // rax
  __int64 v4; // rcx
  unsigned int (__fastcall *v5)(__int64); // rax

  v2 = 0;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6288LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v5 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 48) + 6296LL);
      if ( v5 )
        return v5(a1);
    }
  }
  return v2;
}
