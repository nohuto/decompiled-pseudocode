/*
 * XREFs of ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x180045A38
 * Callers:
 *     ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x180045224 (-ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z.c)
 *     ?DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x18007BC80 (-DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180009F94 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180037914 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x180045C40 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?_RemoveLauncherClones@CLivePreview@@AEAAJXZ @ 0x180045CF0 (-_RemoveLauncherClones@CLivePreview@@AEAAJXZ.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180057C74 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18006E69C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?IsLauncherVisible@CImmersiveState@@QEAA_NXZ @ 0x1800B8A38 (-IsLauncherVisible@CImmersiveState@@QEAA_NXZ.c)
 */

__int64 __fastcall CLivePreview::DeActivate(CLivePreview *this, char a2)
{
  unsigned int v2; // edi
  int v5; // r8d
  int v6; // eax
  bool v7; // zf
  int v8; // eax
  __int64 v9; // rdx
  __int64 i; // rcx
  __int64 v11; // rax
  int v13; // eax
  CImmersiveState *v14; // rcx
  _BYTE v15[16]; // [rsp+38h] [rbp-20h] BYREF

  v2 = 0;
  GetDesktopID(1LL);
  if ( *((_BYTE *)this + 240) )
  {
    if ( *((_DWORD *)this + 72) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (unsigned int)&UdwmLivePreviewAnimation_Start,
          v5,
          1,
          (__int64)v15);
      NotifyWinEvent(0x22u, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 142), 0, 0);
    }
    v6 = CDesktopManager::EnableLivePreviewInputHooks(0, 0);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x3FCu, 0LL);
      goto LABEL_7;
    }
    v7 = *((_BYTE *)this + 242) == 0;
    *((_BYTE *)this + 241) = 1;
    if ( v7 )
    {
      v14 = (CImmersiveState *)*((_QWORD *)this + 60);
      if ( v14 && CImmersiveState::IsLauncherVisible(v14) && *((_QWORD *)this + 57) == *((_QWORD *)this + 56) )
        CLivePreview::_AnimateOpaqueVisuals(this);
    }
    else
    {
      v8 = CLivePreview::_RemoveLauncherClones(this);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x403u, 0LL);
        goto LABEL_7;
      }
    }
    v13 = CLivePreview::_FadeInToNormal(this);
    v2 = v13;
    if ( v13 >= 0 )
    {
      if ( *((_QWORD *)this + 31) || a2 )
        CTimelineBase::JumpToFinalValue(*((CTimelineBase **)this + 49));
      *((_BYTE *)this + 240) = 0;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x409u, 0LL);
    }
  }
LABEL_7:
  v9 = *((_QWORD *)this + 57);
  for ( i = *((_QWORD *)this + 56); i != v9; i += 8LL )
    *(_BYTE *)(*(_QWORD *)i + 678LL) &= ~2u;
  v11 = *((_QWORD *)this + 56);
  if ( v11 != *((_QWORD *)this + 57) )
    *((_QWORD *)this + 57) = v11;
  return v2;
}
