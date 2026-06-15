/*
 * XREFs of ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x1800829B8
 * Callers:
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x1800828F8 (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     ?Initialize@CVolumeSoftware@@EEAAJPEAUIMMDevice@@@Z @ 0x1801184C0 (-Initialize@CVolumeSoftware@@EEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GetPolicyConfig(struct IPolicyConfig **a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (**(__int64 (__fastcall ***)(CPolicyConfig *, GUID *, struct IPolicyConfig **))g_PolicyConfig)(
         g_PolicyConfig,
         &GUID_e8478600_a74b_4b3a_a96b_1fc3e796fc46,
         a1);
  v2 = v1;
  if ( v1 < 0 )
    AudSrvTraceLoggingErrorHelper("GetPolicyConfig", 3184, v1);
  return v2;
}
