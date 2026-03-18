/*
 * XREFs of ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x18009CCB0
 * Callers:
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x18009DB08 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18027DD10 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CMilRectLFromD2D_RECT_F@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18009DFF0 (-CMilRectLFromD2D_RECT_F@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRe.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1800E9F54 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x180167238 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x1801A4F68 (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ??R?$default_delete@VCRegion@@@std@@QEBAXPEAVCRegion@@@Z @ 0x1801B31E4 (--R-$default_delete@VCRegion@@@std@@QEBAXPEAVCRegion@@@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

const struct CRegion *__fastcall CPrimitiveGroupDrawListGenerator::GetContentRegion(
        CPrimitiveGroupDrawListGenerator *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 *v6; // rcx
  unsigned int i; // edi
  __int64 v8; // rsi
  __int64 v9; // r11
  struct tagRECT *v10; // rax
  CRegion *v11; // rcx
  struct tagRECT v13; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v15[8]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h]

  if ( !*((_QWORD *)this + 12) )
  {
    v2 = MIDL_user_allocate(0x48uLL);
    v3 = v2;
    if ( v2 )
    {
      memset_0(v2, 0, 0x48uLL);
      *v3 = v3 + 1;
    }
    else
    {
      v3 = 0LL;
    }
    v4 = *((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = v3;
    if ( v4 )
      std::default_delete<CRegion>::operator()();
    if ( *((_QWORD *)this + 12) )
    {
      v6 = (__int64 *)*((_QWORD *)this + 2);
      for ( i = 0; i < *((_DWORD *)v6 + 2); ++i )
      {
        v8 = *v6;
        CPrimitiveGroupDrawListGenerator::GetIteratorForState(this, v15, i);
        if ( (*(_BYTE *)(v8 + 8 * v9 + 4) & 2) == 0
          && *(_DWORD *)(v8 + 8 * v9)
          && *(_DWORD *)(v8 + 8 * v9 + 40) < *((_DWORD *)this + 8) )
        {
          do
          {
            v10 = (struct tagRECT *)CMilRectLFromD2D_RECT_F(v14, v16);
            v11 = (CRegion *)*((_QWORD *)this + 12);
            v13 = *v10;
            CRegion::AddRectangle(v11, &v13);
          }
          while ( CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v15) );
        }
        v6 = (__int64 *)*((_QWORD *)this + 2);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x220u, 0LL);
      v5 = *((_QWORD *)this + 12);
      *((_QWORD *)this + 12) = 0LL;
      if ( v5 )
        std::default_delete<CRegion>::operator()();
    }
  }
  return (const struct CRegion *)*((_QWORD *)this + 12);
}
