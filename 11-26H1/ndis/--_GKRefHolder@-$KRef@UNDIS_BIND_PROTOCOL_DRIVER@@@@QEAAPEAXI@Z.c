/*
 * XREFs of ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1401589E0
 * Callers:
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x140158860 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 */

void **__fastcall KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(void **P)
{
  void ***v2; // rdx
  PVOID *v3; // rax

  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(P + 3, 0LL);
  v2 = (void ***)P[1];
  if ( v2[1] != P + 1 || (v3 = (PVOID *)P[2], *v3 != P + 1) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  if ( P )
    ExFreePoolWithTag(P, 0x44745042u);
  return P;
}
