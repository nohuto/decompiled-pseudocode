/*
 * XREFs of ?GetBits@COffScreenRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x180254BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBUtagRECT@@@Z @ 0x18018CEC4 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBUtag.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COffScreenRenderTarget::GetBits(
        COffScreenRenderTarget *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3)
{
  int v3; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+3Ch] [rbp-1Ch]

  v3 = *((_DWORD *)this + 30);
  v9 = 0LL;
  v10 = v3;
  v11 = *((_DWORD *)this + 31);
  if ( **((_QWORD **)this + 286) )
  {
    v6 = 0;
    if ( TMilRect<int,tagRECT,Mil3DRectL,RectUniqueness::_CMilRectL_>::IntersectUnsafe((int *)&v9, &a2->left) )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, struct IBitmapDest *, _QWORD, _DWORD))(***((_QWORD ***)this
                                                                                                  + 286)
                                                                                              + 128LL))(
             **((_QWORD **)this + 286),
             &v9,
             a3,
             0LL,
             0);
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x1E7u, 0LL);
    }
  }
  else
  {
    v6 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304442, 0x1DFu, 0LL);
  }
  return v6;
}
