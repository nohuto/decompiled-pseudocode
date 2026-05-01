/*
 * XREFs of ?InternalClose@?$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x18065F560
 * Callers:
 *     ??1?$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18065EF60 (--1-$HandleT@UHBITMAPTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAA@X.c)
 *     s_DrawThemeTextPPIAware @ 0x18065FB48 (s_DrawThemeTextPPIAware.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::HBITMAPTraits>::InternalClose(
        __int64 a1)
{
  return DeleteObject(*(HGDIOBJ *)(a1 + 8));
}
