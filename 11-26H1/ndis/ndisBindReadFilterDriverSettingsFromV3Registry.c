/*
 * XREFs of ndisBindReadFilterDriverSettingsFromV3Registry @ 0x14014B908
 * Callers:
 *     ndisBindReadFilterDriverFromV3Registry @ 0x14014B680 (ndisBindReadFilterDriverFromV3Registry.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14015F700 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015FCA0 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 */

bool __fastcall ndisBindReadFilterDriverSettingsFromV3Registry(__int64 a1, __int64 a2)
{
  __int64 *i; // rbx
  int v5; // eax
  bool v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)(a1 + 40) = 0;
  v7 = a2;
  for ( i = (__int64 *)&unk_1401008C0; i != &NETSETUPPKEY_ProtocolDriver_NoStartAtBootHint; i += 3 )
  {
    v6 = 0;
    if ( (unsigned int)NetSetupPropertyBag::ReadBoolean(
                         (NetSetupPropertyBag *)&v7,
                         (const struct _NETSETUPPROPKEY *)i,
                         &v6) )
      return 0;
    if ( v6 )
      *(_DWORD *)(a1 + 40) |= *((_DWORD *)i + 5);
  }
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)(a1 + 48), 0LL);
  v5 = NetSetupPropertyBag::ReadString(&v7, &NETSETUPPKEY_FilterDriver_Class, a1 + 48);
  return !v5 || v5 == -1073741772;
}
