/*
 * XREFs of ?WriteInstruction@CDrawNineGridInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x18001FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentRect@CDrawNineGridInstruction@@SAXIAEAUNineGridLayout@@PEAUD2D_POINTANDSIZE_L@@@Z @ 0x1800204B0 (-GetCurrentRect@CDrawNineGridInstruction@@SAXIAEAUNineGridLayout@@PEAUD2D_POINTANDSIZE_L@@@Z.c)
 *     ?GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUD2D_POINTANDSIZE_L@@PEAUNineGridLayout@@@Z @ 0x18002097C (-GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUD2D_POINTANDSIZE_L@@PEAUNineGridL.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawNineGridInstruction::WriteInstruction(
        struct _MARGINS *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  int v5; // r8d
  int v6; // edx
  int v7; // r9d
  int v8; // eax
  int v9; // edx
  struct _MARGINS v11; // xmm0
  unsigned int v12; // edi
  unsigned int i; // ebx
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(struct IRenderDataBuilder *, struct _MARGINS *, _QWORD); // r9
  int v16; // eax
  __int128 v18; // [rsp+30h] [rbp-50h] BYREF
  struct _MARGINS v19; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v20[2]; // [rsp+50h] [rbp-30h] BYREF

  v5 = -this[2].cyTopHeight;
  v6 = *((_DWORD *)a3 + 19) + this[2].cyBottomHeight;
  v7 = -this[2].cxLeftWidth;
  v8 = *((_DWORD *)a3 + 18) + this[2].cxRightWidth + this[2].cxLeftWidth;
  DWORD1(v18) = v5;
  v20[0] = 0LL;
  if ( v8 < 0 )
    v8 = 0;
  LODWORD(v18) = v7;
  v9 = v6 - v5;
  DWORD2(v18) = v8;
  v20[1] = 0LL;
  if ( v9 < 0 )
    v9 = 0;
  v11 = this[1];
  HIDWORD(v18) = v9;
  v12 = 0;
  v19 = v11;
  CDrawNineGridInstruction::GetNineGridLayout(
    &v19,
    (const struct D2D_POINTANDSIZE_L *)&v18,
    (struct NineGridLayout *)v20);
  for ( i = 0; i < 9; ++i )
  {
    v14 = *((_QWORD *)&this[3].cxLeftWidth + i);
    if ( v14 )
    {
      v18 = 0LL;
      CDrawNineGridInstruction::GetCurrentRect(i, (struct NineGridLayout *)v20, (struct D2D_POINTANDSIZE_L *)&v18);
      v15 = *(__int64 (__fastcall **)(struct IRenderDataBuilder *, struct _MARGINS *, _QWORD))(*(_QWORD *)a2 + 56LL);
      *(float *)&v19.cxLeftWidth = (float)(int)v18;
      *(float *)&v19.cxRightWidth = (float)SDWORD1(v18);
      *(float *)&v19.cyTopHeight = (float)SDWORD2(v18) + (float)(int)v18;
      *(float *)&v19.cyBottomHeight = (float)SHIDWORD(v18) + (float)SDWORD1(v18);
      v16 = v15(a2, &v19, *(unsigned int *)(*(_QWORD *)(v14 + 16) + 24LL));
      v12 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x119u, 0LL);
        return v12;
      }
    }
  }
  return v12;
}
