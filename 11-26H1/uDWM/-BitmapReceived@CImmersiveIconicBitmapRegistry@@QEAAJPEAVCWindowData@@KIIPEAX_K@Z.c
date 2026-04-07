/*
 * XREFs of ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x1800B6E20
 * Callers:
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18007E59C (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180035D04 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x180071634 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x18008A828 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800B7630 (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::BitmapReceived(
        CImmersiveIconicBitmapRegistry *this,
        struct CWindowData *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        int *a6,
        unsigned __int64 a7)
{
  __int64 v8; // r14
  CBaseObject *v10; // rdi
  HWND v12; // rcx
  unsigned __int64 v13; // rcx
  bool v14; // bl
  HWND ShellWindowForDesktop; // rax
  unsigned __int64 v16; // rax
  int *v17; // rdi
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // r8d
  int v21; // ecx
  int v22; // edx
  CBaseObject *v23; // r8
  DWORD dwProcessId; // [rsp+30h] [rbp-38h] BYREF
  CBaseObject *v26; // [rsp+38h] [rbp-30h]
  DWORD v27; // [rsp+78h] [rbp+10h] BYREF

  v8 = a4;
  v10 = 0LL;
  v26 = 0LL;
  v12 = (HWND)*((_QWORD *)a2 + 5);
  v27 = 0;
  if ( GetWindowThreadProcessId(v12, &v27) && a3 == v27 )
  {
    v14 = 1;
  }
  else
  {
    v14 = 0;
    ShellWindowForDesktop = (HWND)CWindowList::GetShellWindowForDesktop(
                                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                                    *((_QWORD *)a2 + 17));
    if ( ShellWindowForDesktop )
    {
      dwProcessId = 0;
      GetWindowThreadProcessId(ShellWindowForDesktop, &dwProcessId);
      v14 = dwProcessId == a3;
    }
  }
  if ( (*((_BYTE *)a2 + 738) & 2) != 0
    && (v13 = a5 * v8, v13 <= 0xFFFFFFFF)
    && (v16 = 4LL * (unsigned int)v13, v16 <= 0xFFFFFFFF)
    && a7 >= (unsigned int)v16
    && v14 )
  {
    v17 = a6;
    v18 = CBitmapSource::Create(v8, a5);
    v19 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F9114, 1LL, v18, 0x171u, 0LL);
      v10 = v26;
    }
    else
    {
      v20 = *v17;
      v21 = *v17;
      v10 = v26;
      v22 = v20 & 0xFF00 | ((unsigned __int8)v20 << 16) | BYTE2(v21);
      v23 = v26;
      *((_DWORD *)a2 + 50) = v22;
      CImmersiveIconicBitmapRegistry::_AcceptBitmap(this, a2, v23);
    }
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v13, (int)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
    v19 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F9114, 1LL, -2147024809, 0x16Du, 0LL);
  }
  if ( v10 )
    CBaseObject::Release(v10);
  return v19;
}
