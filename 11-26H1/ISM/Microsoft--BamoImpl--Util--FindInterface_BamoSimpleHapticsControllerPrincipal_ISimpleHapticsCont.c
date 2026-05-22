/*
 * XREFs of Microsoft::BamoImpl::Util::FindInterface_BamoSimpleHapticsControllerPrincipal_ISimpleHapticsControllerPrincipal_ @ 0x180188320
 * Callers:
 *     ?QueryInterface@BamoSimpleHapticsControllerPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018A200 (-QueryInterface@BamoSimpleHapticsControllerPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::Util::FindInterface_BamoSimpleHapticsControllerPrincipal_ISimpleHapticsControllerPrincipal_(
        __int64 a1,
        _QWORD *a2)
{
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && a2[1] == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *a2 == *(_QWORD *)&GUID_79251106_9e5f_b49f_4e93_b11e4d6673f9.Data1
    && a2[1] == *(_QWORD *)GUID_79251106_9e5f_b49f_4e93_b11e4d6673f9.Data4 )
  {
    return (a1 + 8) & -(__int64)(a1 != 0);
  }
  else
  {
    return 0LL;
  }
}
