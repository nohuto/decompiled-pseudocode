/*
 * XREFs of ?QueryInterface@BamoHapticDeviceManagerPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801900C0
 * Callers:
 *     ?QueryInterface@BamoHapticDeviceManagerPrincipal@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180190140 (-QueryInterface@BamoHapticDeviceManagerPrincipal@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoHapticDeviceManagerPrincipal::QueryInterface(
        BamoHapticDeviceManagerPrincipal *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx

  if ( (*(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
     || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4)
    && (*(_QWORD *)&a2->Data1 != *(_QWORD *)&GUID_c57abfb5_a8c1_893d_2f70_cdebfe65dd0e.Data1
     || *(_QWORD *)a2->Data4 != *(_QWORD *)GUID_c57abfb5_a8c1_893d_2f70_cdebfe65dd0e.Data4)
    || (v3 = 0, !this) )
  {
    *a3 = 0LL;
    return (unsigned int)-2147467262;
  }
  *a3 = (char *)this + 8;
  if ( this == (BamoHapticDeviceManagerPrincipal *)-8LL )
    return (unsigned int)-2147467262;
  (**(void (__fastcall ***)(BamoHapticDeviceManagerPrincipal *))this)(this);
  return v3;
}
