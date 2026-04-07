/*
 * XREFs of ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x18002CDFC
 * Callers:
 *     ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x18002C88C (-ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z.c)
 *     ?DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x18006CAF0 (-DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x18002D00C (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?_RemoveLauncherClones@CLivePreview@@AEAAJXZ @ 0x18002D0BC (-_RemoveLauncherClones@CLivePreview@@AEAAJXZ.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18003137C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x180045A00 (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180056CBC (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?IsLauncherVisible@CImmersiveState@@QEAA_NXZ @ 0x1800B7A10 (-IsLauncherVisible@CImmersiveState@@QEAA_NXZ.c)
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
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v16[16]; // [rsp+38h] [rbp-20h] BYREF

  v2 = 0;
  v15 = 0LL;
  GetDesktopID(1LL, &v15);
  if ( *((_BYTE *)this + 184) )
  {
    if ( *((_DWORD *)this + 58) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
          (unsigned int)&UdwmLivePreviewAnimation_Start,
          v5,
          1,
          (__int64)v16);
      NotifyWinEvent(0x22u, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 143), 0, 0);
    }
    v6 = CDesktopManager::EnableLivePreviewInputHooks(0, 0);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x3F2u, 0LL);
      goto LABEL_7;
    }
    v7 = *((_BYTE *)this + 186) == 0;
    *((_BYTE *)this + 185) = 1;
    if ( v7 )
    {
      v14 = (CImmersiveState *)*((_QWORD *)this + 50);
      if ( v14 && CImmersiveState::IsLauncherVisible(v14) && *((_QWORD *)this + 47) == *((_QWORD *)this + 46) )
        CLivePreview::_AnimateOpaqueVisuals(this);
    }
    else
    {
      v8 = CLivePreview::_RemoveLauncherClones(this);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x3F9u, 0LL);
        goto LABEL_7;
      }
    }
    v13 = CLivePreview::_FadeInToNormal(this);
    v2 = v13;
    if ( v13 >= 0 )
    {
      if ( v15 != *((_QWORD *)this + 24) || a2 )
        CTimelineBase::JumpToFinalValue(*((CTimelineBase **)this + 41));
      *((_BYTE *)this + 184) = 0;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x3FFu, 0LL);
    }
  }
LABEL_7:
  v9 = *((_QWORD *)this + 47);
  for ( i = *((_QWORD *)this + 46); i != v9; i += 8LL )
    *(_BYTE *)(*(_QWORD *)i + 742LL) &= ~1u;
  v11 = *((_QWORD *)this + 46);
  if ( v11 != *((_QWORD *)this + 47) )
    *((_QWORD *)this + 47) = v11;
  return v2;
}
