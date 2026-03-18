/*
 * XREFs of ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180298CF0
 * Callers:
 *     ?DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ @ 0x18006A4D0 (-DestroyReleasedResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ??1CD2DResource@@MEAA@XZ @ 0x18012BE94 (--1CD2DResource@@MEAA@XZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18013569C (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x180135958 (-UnmanageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 * Callees:
 *     McTemplateU0qq_EventWriteTransfer @ 0x18002E388 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ @ 0x180187E60 (-IsHardwareProtectionDisabled@CD2DContext@@QEBA_NXZ.c)
 */

void __fastcall CD2DContext::RemoveHwProtectedResource(CD2DContext *this)
{
  __int64 v1; // r8
  CD2DContext *v3; // rcx
  char IsHardwareProtectionDisabled; // al
  char v5; // dl

  v1 = *((unsigned int *)this + 106);
  *((_DWORD *)this + 106) = v1 - 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0qq_EventWriteTransfer(
      (__int64)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (__int64)&EVTDESC_ETWGUID_HW_PROTECTED_ENTITY_CHANGE,
      v1,
      v1 - 1);
  if ( !*((_DWORD *)this + 106) )
  {
    CD2DContext::IsHardwareProtectionDisabled(this);
    *((_BYTE *)this + 428) = 0;
    IsHardwareProtectionDisabled = CD2DContext::IsHardwareProtectionDisabled(v3);
    if ( v5 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE,
        0LL);
  }
}
