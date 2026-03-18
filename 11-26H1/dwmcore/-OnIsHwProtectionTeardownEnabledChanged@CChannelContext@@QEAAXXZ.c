/*
 * XREFs of ?OnIsHwProtectionTeardownEnabledChanged@CChannelContext@@QEAAXXZ @ 0x18022F5CC
 * Callers:
 *     ?SetIsHwProtectionTeardownEnabled@?$CChannelGeneratedT@VCChannelContext@@V?$CMILRefCountBaseT@UIMILRefCount@@VCMilObjectDeleter@@@@@@QEAAJ_N@Z @ 0x18024BA14 (-SetIsHwProtectionTeardownEnabled@-$CChannelGeneratedT@VCChannelContext@@V-$CMILRefCountBaseT@UI.c)
 * Callees:
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801785D0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

void __fastcall CChannelContext::OnIsHwProtectionTeardownEnabledChanged(CChannelContext *this)
{
  bool v1; // zf
  __int64 v2; // r8
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_BYTE *)this + 17) == 0;
  v3 = &CriticalSection;
  if ( v1 )
  {
    EnterCriticalSection(&CriticalSection);
    byte_1803DE6A0 = 0;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v2 = 0LL;
      goto LABEL_6;
    }
  }
  else
  {
    EnterCriticalSection(&CriticalSection);
    byte_1803DE6A0 = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v2 = 1LL;
LABEL_6:
      McTemplateU0t_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE,
        v2);
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
  CRenderTargetManager::ForceFullDirty(*((CRenderTargetManager **)g_pComposition + 77));
}
