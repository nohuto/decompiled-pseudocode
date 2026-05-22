/*
 * XREFs of Microsoft::BamoImpl::Util::FindInterface_BamoSimpleHapticsControllerStub_ISimpleHapticsControllerStub_ @ 0x180188370
 * Callers:
 *     ?QueryInterface@BamoSimpleHapticsControllerStub@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018A250 (-QueryInterface@BamoSimpleHapticsControllerStub@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::BamoImpl::Util::FindInterface_BamoSimpleHapticsControllerStub_ISimpleHapticsControllerStub_(
        __int64 a1,
        _QWORD *a2)
{
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && a2[1] == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || *a2 == *(_QWORD *)&GUID_5deb94e2_f2a0_1197_99a6_06e969e7ba72.Data1
    && a2[1] == *(_QWORD *)GUID_5deb94e2_f2a0_1197_99a6_06e969e7ba72.Data4 )
  {
    return (a1 + 8) & -(__int64)(a1 != 0);
  }
  else
  {
    return 0LL;
  }
}
