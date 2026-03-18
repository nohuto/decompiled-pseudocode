/*
 * XREFs of ?RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802A8CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180075B50 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x18012DEA8 (-Intersect@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18016A260 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?Flush@CD3DDevice@@QEAAXXZ @ 0x1801C6C94 (-Flush@CD3DDevice@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x180293BF4 (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1802A9058 (-UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::RailAppPresent(CD3DDevice **this, __int64 a2, const struct tagRECT *a3)
{
  HRGN v6; // rdi
  unsigned int v7; // ebx
  CD3DDevice *v8; // rax
  int updated; // eax
  signed int v10; // ebx
  int v11; // eax
  signed int LastError; // eax
  HRGN hrgn; // [rsp+30h] [rbp-D0h] BYREF
  struct tagRECT v15; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v16[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h]
  int v18; // [rsp+60h] [rbp-A0h]
  int v19; // [rsp+64h] [rbp-9Ch]
  __int64 v20; // [rsp+68h] [rbp-98h]
  int v21; // [rsp+98h] [rbp-68h]
  __int64 v22; // [rsp+A0h] [rbp-60h]
  HRGN v23; // [rsp+A8h] [rbp-58h]
  LONG left; // [rsp+B8h] [rbp-48h]
  LONG top; // [rsp+BCh] [rbp-44h]
  FastRegion::CRegion *v26[10]; // [rsp+E0h] [rbp-20h] BYREF

  v6 = 0LL;
  hrgn = 0LL;
  memset_0(v16, 0, 0x90uLL);
  v7 = 1;
  CD3DDevice::Flush(this[7]);
  v18 = a3->right - a3->left;
  v19 = a3->bottom - a3->top;
  v8 = this[14];
  v17 = a2;
  v20 = 0LL;
  if ( !*(_DWORD *)v8 )
    goto LABEL_11;
  updated = CLegacyRemotingSwapChain::UpdateSectionBits((CLegacyRemotingSwapChain *)this);
  v10 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x11Eu, 0LL);
    goto LABEL_19;
  }
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v26, a3);
  CRegion::Intersect((CRegion *)(this + 14), (const struct CRegion *)v26);
  *(_QWORD *)&v15.left = 0LL;
  FastRegion::CRegion::GetBoundingRect((LONG **)this + 14, &v15);
  v11 = CRegion::CreateHRGN((int **)this + 14, &hrgn);
  v10 = v11;
  if ( v11 >= 0 )
  {
    SetLastError(0);
    v6 = hrgn;
    if ( !OffsetRgn(hrgn, -a3->left, -a3->top) )
    {
      LastError = GetLastError();
      v10 = LastError;
      if ( LastError > 0 )
        v10 = (unsigned __int16)LastError | 0x80070000;
      if ( v10 >= 0 )
        v10 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x12Du, 0LL);
      FastRegion::CRegion::FreeMemory(v26);
      goto LABEL_17;
    }
    left = v15.left;
    v7 = 2;
    top = v15.top;
    v21 = 2;
    v22 = a2;
    v23 = v6;
    FastRegion::CRegion::FreeMemory(v26);
LABEL_11:
    v10 = (*(__int64 (__fastcall **)(CD3DDevice *, _BYTE *, _QWORD))(*(_QWORD *)this[12] + 56LL))(this[12], v16, v7);
    if ( ((v10 + 2147467263) & 0xFFFFFFFB) != 0 )
    {
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x142u, 0LL);
    }
    else
    {
      v10 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x13Eu, 0LL);
    }
    goto LABEL_17;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x129u, 0LL);
  FastRegion::CRegion::FreeMemory(v26);
  v6 = hrgn;
LABEL_17:
  if ( v6 )
    DeleteObject(v6);
LABEL_19:
  *(_DWORD *)this[14] = 0;
  return (unsigned int)v10;
}
