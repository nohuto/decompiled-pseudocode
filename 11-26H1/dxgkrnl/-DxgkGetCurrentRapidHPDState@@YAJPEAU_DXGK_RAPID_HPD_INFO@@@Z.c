/*
 * XREFs of ?DxgkGetCurrentRapidHPDState@@YAJPEAU_DXGK_RAPID_HPD_INFO@@@Z @ 0x14005A0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXGK_RAPID_HPD_DIAG@@@Z @ 0x14005A14C (-GetCurrenRapidHPDState@RAPID_HPD_MANAGER@@QEAAX_NPEAW4_DXGK_RAPID_HPD_TYPE@@PEAU_GUID@@PEAU_DXG.c)
 */

__int64 __fastcall DxgkGetCurrentRapidHPDState(struct _DXGK_RAPID_HPD_INFO *a1)
{
  struct _DXGK_RAPID_HPD_DIAG *v3; // rbx
  struct DXGGLOBAL *Global; // rax

  if ( !a1 )
    return 3221225485LL;
  v3 = (struct _DXGK_RAPID_HPD_INFO *)((char *)a1 + 24);
  Global = DXGGLOBAL::GetGlobal();
  RAPID_HPD_MANAGER::GetCurrenRapidHPDState(
    (struct DXGGLOBAL *)((char *)Global + 305640),
    1,
    a1,
    (struct _GUID *)((char *)a1 + 4),
    v3);
  return 0LL;
}
