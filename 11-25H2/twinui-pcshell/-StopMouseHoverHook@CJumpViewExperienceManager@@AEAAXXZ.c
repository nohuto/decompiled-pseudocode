/*
 * XREFs of ?StopMouseHoverHook@CJumpViewExperienceManager@@AEAAXXZ @ 0x1803879C0
 * Callers:
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x18021C94C (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ?OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1802480C0 (-OnViewHidden@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?Close@CJumpViewExperienceManager@@UEAAJXZ @ 0x1803852A0 (-Close@CJumpViewExperienceManager@@UEAAJXZ.c)
 *     ?DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z @ 0x1803853FC (-DismissImpl@CJumpViewExperienceManager@@AEAAJ_N@Z.c)
 *     ?OnViewCloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180386AC0 (-OnViewCloaking@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CJumpViewExperienceManager::StopMouseHoverHook(CJumpViewExperienceManager *this)
{
  HHOOK v2; // rcx
  _BYTE v3[36]; // [rsp+20h] [rbp-38h] BYREF

  v2 = (HHOOK)*((_QWORD *)this + 64);
  if ( v2 )
    UnhookWindowsHookEx(v2);
  memset(v3, 0, sizeof(v3));
  *((_QWORD *)this + 64) = 0LL;
  g_hoverState = *(_OWORD *)v3;
  xmmword_18089B640 = *(_OWORD *)&v3[16];
  unk_18089B650 = 0u;
}
