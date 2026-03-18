/*
 * XREFs of ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x14008F0AC
 * Callers:
 *     ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x140095104 (-AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x140067E70 (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 *     GetNameFromPath @ 0x140075728 (GetNameFromPath.c)
 *     ?CloseCompanionLibraryInterface@FxCompanionLibrary@@AEAAXXZ @ 0x14008F024 (-CloseCompanionLibraryInterface@FxCompanionLibrary@@AEAAXXZ.c)
 *     ?OpenCompanionLibraryInterface@FxCompanionLibrary@@AEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14008F604 (-OpenCompanionLibraryInterface@FxCompanionLibrary@@AEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     RtlStringCbCopyUnicodeString @ 0x14008F734 (RtlStringCbCopyUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxCompanionLibrary::LoadCompanion(
        FxCompanionLibrary *this,
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _DEVICE_OBJECT *Pdo,
        IDeviceCompanionCallbacks *CallbackInterface,
        IDeviceCompanion **DeviceCompanion)
{
  FxDriver *Driver; // rcx
  char v9; // r12
  unsigned int v10; // ebx
  signed int _a1; // eax
  unsigned __int64 v12; // rbx
  ULONG Tag; // ecx
  void *v14; // rax
  FX_POOL **v15; // rax
  wchar_t *v16; // rsi
  signed int v17; // eax
  unsigned __int16 v18; // r9
  IDeviceCompanion **v19; // r15
  signed int v20; // eax
  _UNICODE_STRING svcNameUnicodeString; // [rsp+30h] [rbp-20h] BYREF
  __m128i v23; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+38h]
  unsigned __int16 size; // [rsp+98h] [rbp+48h] BYREF
  _DEVICE_OBJECT *v26; // [rsp+A0h] [rbp+50h]

  v26 = Pdo;
  Driver = DriverGlobals->Driver;
  size = 0;
  v9 = 0;
  svcNameUnicodeString = 0LL;
  GetNameFromPath(&Driver->m_RegistryPath, &svcNameUnicodeString);
  if ( !svcNameUnicodeString.Length )
  {
    v10 = -1073741811;
    WPP_IFR_SF_(DriverGlobals, 2u, 0xCu, 0xFu, WPP_FxCompanionLibrary_cpp_Traceguids);
    return v10;
  }
  _a1 = RtlUShortAdd(svcNameUnicodeString.Length, 2u, &size);
  v10 = _a1;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, 0x10u, WPP_FxCompanionLibrary_cpp_Traceguids, _a1);
    return v10;
  }
  v12 = size;
  Tag = DriverGlobals->Tag;
  v14 = retaddr;
  v23.m128i_i64[0] = 0LL;
  v23.m128i_i64[1] = 64LL;
  if ( !DriverGlobals->FxPoolTrackingOn )
    v14 = 0LL;
  v15 = FxPoolAllocator(DriverGlobals, &DriverGlobals->FxPoolFrameworks, &v23, size, Tag, v14);
  v16 = (wchar_t *)v15;
  if ( !v15 )
  {
    v10 = -1073741670;
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, 0x11u, WPP_FxCompanionLibrary_cpp_Traceguids, size);
    return v10;
  }
  v17 = RtlStringCbCopyUnicodeString((wchar_t *)v15, v12, &svcNameUnicodeString);
  v10 = v17;
  if ( v17 < 0 )
  {
    v18 = 18;
LABEL_11:
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, v18, WPP_FxCompanionLibrary_cpp_Traceguids, v17);
    goto $exit_18;
  }
  v17 = FxCompanionLibrary::OpenCompanionLibraryInterface(this, DriverGlobals);
  v10 = v17;
  if ( v17 < 0 )
  {
    v18 = 19;
    goto LABEL_11;
  }
  v19 = DeviceCompanion;
  v20 = this->m_RdCompanionLibrary->LoadCompanion(
          this->m_RdCompanionLibrary,
          v26,
          v16,
          CallbackInterface,
          DeviceCompanion);
  v10 = v20;
  if ( v20 >= 0 )
  {
    WPP_IFR_SF_q(DriverGlobals, 4u, 0xCu, 0x15u, WPP_FxCompanionLibrary_cpp_Traceguids, v19);
  }
  else
  {
    WPP_IFR_SF_D(DriverGlobals, 2u, 0xCu, 0x14u, WPP_FxCompanionLibrary_cpp_Traceguids, v20);
    v9 = 1;
  }
$exit_18:
  FxPoolFree(v16);
  if ( v9 )
    FxCompanionLibrary::CloseCompanionLibraryInterface(this);
  return v10;
}
