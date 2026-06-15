/*
 * XREFs of ?InitializeDeviceGraphManager@@YAJXZ @ 0x1800FE5A0
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800DB064 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCProcessSubmixManager@@UIProcessSubmixManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixManager@@@Z @ 0x1800BAC5C (--$MakeAndInitialize@VCProcessSubmixManager@@UIProcessSubmixManager@@$$V@Details@WRL@Microsoft@@.c)
 *     ??$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphManager@@@Z @ 0x1800F87E8 (--$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@$$V@Details@WRL@Microsoft@@YAJP.c)
 */

__int64 __fastcall InitializeDeviceGraphManager(void *a1)
{
  char *v1; // rcx
  int v2; // ebx
  __int64 v3; // rdx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphManager,IDeviceGraphManager,>(a1);
  if ( v2 < 0 )
  {
    v3 = 3192LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CProcessSubmixManager,IProcessSubmixManager,>(v1);
  v2 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
      (const char *)(unsigned int)v5);
    v3 = 3195LL;
    goto LABEL_3;
  }
  return 0LL;
}
