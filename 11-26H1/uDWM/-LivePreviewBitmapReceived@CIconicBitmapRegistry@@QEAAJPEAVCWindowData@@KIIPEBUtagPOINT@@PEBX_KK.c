/*
 * XREFs of ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x1800B68DC
 * Callers:
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800E4478 (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 * Callees:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800194C0 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180033740 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180033AB8 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x180071634 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18007E8F8 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x18008A828 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1800DE760 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CIconicBitmapRegistry::LivePreviewBitmapReceived(
        unsigned __int64 this,
        struct CWindowData *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        const struct tagPOINT *a6,
        void *a7,
        unsigned __int64 a8,
        char a9)
{
  CBaseObject *v9; // r15
  bool v11; // zf
  CIconicBitmapRegistry *v14; // rsi
  unsigned __int64 v15; // rax
  struct CWindowData *MDIOwner; // rbx
  int WindowRestoreRect; // eax
  unsigned int v18; // edi
  unsigned int v19; // r8d
  unsigned int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // rdx
  unsigned int v24; // ecx
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  int v28; // eax
  const struct tagPOINT *v29; // rax
  char v30; // bl
  char v31; // r8
  __int64 v32; // rcx
  void *v34; // [rsp+20h] [rbp-30h]
  CBaseObject **v35; // [rsp+28h] [rbp-28h]
  CBaseObject *v36; // [rsp+30h] [rbp-20h] BYREF
  struct tagRECT v37; // [rsp+38h] [rbp-18h] BYREF
  DWORD dwProcessId; // [rsp+88h] [rbp+38h] BYREF

  v9 = 0LL;
  v11 = (*((_BYTE *)a2 + 738) & 2) == 0;
  v36 = 0LL;
  v14 = (CIconicBitmapRegistry *)this;
  dwProcessId = 0;
  if ( v11
    || (this = a5 * (unsigned __int64)a4, this > 0xFFFFFFFF)
    || (v15 = 4LL * (unsigned int)this, v15 > 0xFFFFFFFF)
    || a8 < (unsigned int)v15
    || !GetWindowThreadProcessId(*((HWND *)a2 + 5), &dwProcessId)
    || a3 != dwProcessId )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(this, (int)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
    v18 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"W", 1LL, -2147024809, 0x2D4u, 0LL);
    goto LABEL_47;
  }
  MDIOwner = CWindowData::GetMDIOwner((HWND *)a2);
  if ( !MDIOwner )
    MDIOwner = a2;
  v37 = 0LL;
  WindowRestoreRect = CWindowData::GetWindowRestoreRect(MDIOwner, &v37, 0);
  v18 = WindowRestoreRect;
  if ( WindowRestoreRect < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"W", 1LL, WindowRestoreRect, 0x2DFu, 0LL);
    return v18;
  }
  v19 = 0;
  v20 = 0;
  v21 = *((_QWORD *)MDIOwner + 60);
  if ( v37.right - v37.left >= 0 )
    v19 = v37.right - v37.left;
  v22 = (unsigned int)(v37.bottom - v37.top);
  if ( v37.bottom - v37.top >= 0 )
    v20 = v37.bottom - v37.top;
  if ( v21 )
  {
    v23 = *(_DWORD **)(v21 + 32);
    v24 = 0;
    if ( v23[14] - v23[12] >= 0 )
      v24 = v23[14] - v23[12];
    if ( v19 > v24 )
      v24 = v19;
    v25 = v23[15] - v23[13];
    v19 = v24;
    v22 = 0LL;
    if ( v25 >= 0 )
      v22 = (unsigned int)v25;
    if ( v20 > (unsigned int)v22 )
      v22 = v20;
    v20 = v22;
  }
  if ( a4 > v19 || a5 > v20 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v22, (int)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
    v18 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"W", 1LL, -2147024809, 0x2EAu, 0LL);
  }
  else
  {
    v26 = *((_QWORD *)v14 + 12);
    if ( v26 && *(struct CWindowData **)(v26 + 72) == a2 )
    {
      v35 = &v36;
      v34 = a7;
      v27 = CBitmapSource::Create(a4, a5);
      v18 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"W", 1LL, v27, 0x2F6u, 0LL);
        v9 = v36;
      }
      else
      {
        if ( *((_BYTE *)v14 + 89) )
        {
          v28 = CIconicBitmapRegistry::RequestBitmap(v14, (HWND *)0xFFFFFFFFFFFFFFFFLL, 0);
          v18 = v28;
          if ( v28 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"W", 1LL, v28, 0x2FBu, 0LL);
        }
        v29 = a6;
        v30 = *((_BYTE *)v14 + 88);
        v31 = a9;
        *(_WORD *)((char *)v14 + 89) = 0;
        v9 = v36;
        *((_BYTE *)v14 + 88) = 1;
        *((struct tagPOINT *)v14 + 13) = *v29;
        CWindowIconic::SetBitmap(*((CWindowIconic **)v14 + 12), v9, v31 & 1, 1);
        if ( !v30 )
          CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)v14 + 12));
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0qp_EtwEventWriteTransfer(
            v32,
            (int)&UdwmManageIconicThumbnail_Info,
            0,
            *((_QWORD *)a2 + 5),
            v34,
            v35);
      }
LABEL_47:
      if ( v9 )
        CBaseObject::Release(v9);
      return v18;
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v22, (int)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
  }
  return v18;
}
