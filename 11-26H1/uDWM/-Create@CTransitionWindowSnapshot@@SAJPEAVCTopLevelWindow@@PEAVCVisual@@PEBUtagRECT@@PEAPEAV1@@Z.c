/*
 * XREFs of ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x180032CA0
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x1800324C8 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800332BC (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ??2CTransitionWindowSnapshot@@KAPEAX_K@Z @ 0x180085AEC (--2CTransitionWindowSnapshot@@KAPEAX_K@Z.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@AEBUtagRECT@@@Z @ 0x180088260 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@AEBUtagRECT@@@Z.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18008C8A8 (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::Create(
        struct CTopLevelWindow *this,
        struct CVisual *a2,
        const struct tagRECT *a3,
        struct CTransitionWindowSnapshot **a4)
{
  CTransitionWindowSnapshot *v8; // rax
  CTransitionWindowSnapshot *v9; // rbx
  unsigned int v10; // edi
  CTopLevelWindow *v12; // rcx
  struct CWindowData *WindowData; // rax
  int v14; // r8d
  int v15; // eax
  struct tagRECT rc; // [rsp+38h] [rbp-40h] BYREF

  *a4 = 0LL;
  v8 = (CTransitionWindowSnapshot *)CTransitionWindowSnapshot::operator new((unsigned __int64)this);
  if ( v8 && (v9 = CTransitionWindowSnapshot::CTransitionWindowSnapshot(v8)) != 0LL )
  {
    rc = 0LL;
    if ( a3 )
    {
      rc = *a3;
      CTopLevelWindow::GetWindowData(this);
      WindowData = CTopLevelWindow::GetWindowData(v12);
      OffsetRect(&rc, *((_DWORD *)WindowData + 12), v14);
    }
    else
    {
      rc = (struct tagRECT)*((_OWORD *)CTopLevelWindow::GetWindowData(this) + 3);
    }
    v15 = CTransitionWindowSnapshot::Initialize(v9, this, a2, &rc);
    v10 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F53A4, 1LL, v15, 0x2Au, 0LL);
    }
    else
    {
      *a4 = v9;
      CBaseObject::AddRef(v9);
    }
    CBaseObject::Release(v9);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800F53A4, 1LL, -2147024882, 0x1Cu, 0LL);
  }
  return v10;
}
