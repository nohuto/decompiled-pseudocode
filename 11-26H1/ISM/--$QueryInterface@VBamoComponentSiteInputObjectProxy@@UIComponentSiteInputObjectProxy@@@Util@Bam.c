/*
 * XREFs of ??$QueryInterface@VBamoComponentSiteInputObjectProxy@@UIComponentSiteInputObjectProxy@@@Util@BamoImpl@Microsoft@@YAJPEAVBamoComponentSiteInputObjectProxy@@AEBU_GUID@@PEAPEAX@Z @ 0x18009565C
 * Callers:
 *     ?QueryInterface@BamoComponentSiteInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180095650 (-QueryInterface@BamoComponentSiteInputObjectProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::BamoImpl::Util::QueryInterface<BamoComponentSiteInputObjectProxy,IComponentSiteInputObjectProxy>(
        void (__fastcall ***a1)(_QWORD),
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v3 )
  {
    v4 = *a2 - *(_QWORD *)&GUID_76d0682c_efad_f6c3_6b01_5b4201df35b4.Data1;
    if ( *a2 == *(_QWORD *)&GUID_76d0682c_efad_f6c3_6b01_5b4201df35b4.Data1 )
      v4 = a2[1] - *(_QWORD *)GUID_76d0682c_efad_f6c3_6b01_5b4201df35b4.Data4;
    if ( v4 )
      goto LABEL_10;
  }
  if ( !a1 )
  {
LABEL_10:
    *a3 = 0LL;
  }
  else
  {
    *a3 = a1 + 1;
    if ( a1 != (void (__fastcall ***)(_QWORD))-8LL )
    {
      (**a1)(a1);
      return 0LL;
    }
  }
  return 2147500034LL;
}
