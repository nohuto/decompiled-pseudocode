/*
 * XREFs of ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180079CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180079BA4 (-SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180079E90 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ @ 0x18007A0F8 (-GetDropShadow@CSpriteVisual@@IEBAPEAVCDropShadow@@XZ.c)
 *     ?RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18007A6F0 (-RenderContentWorker@CVisual@@KAJPEAV1@PEAVCContent@@IIPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyFrameContainsProtectedContent@CDrawingContext@@QEAAXXZ @ 0x1801A5BAC (-NotifyFrameContainsProtectedContent@CDrawingContext@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVisual::RenderContent(CSpriteVisual *this, struct CDrawingContext *a2, bool *a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  struct CContent *v9; // rax
  unsigned int v10; // r9d
  const struct D2D_SIZE_F *v11; // r10
  CDropShadow *DropShadow; // rax
  int v13; // eax
  __int64 v14; // r9
  float v15; // xmm1_4
  _BYTE *v16; // r8
  struct D2D_RECT_F v17; // [rsp+30h] [rbp-38h] BYREF

  if ( (*((_BYTE *)this + 102) & 0x40) != 0
    && (CDrawingContext::NotifyFrameContainsProtectedContent(a2), *(_BYTE *)(*((_QWORD *)this + 3) + 6458LL)) )
  {
    *v16 = 1;
    return 0LL;
  }
  else
  {
    if ( (**((_DWORD **)this + 28) & 0x40000) != 0 )
    {
      v8 = *((_QWORD *)this + 31);
      if ( v8 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 64LL))(v8, 16LL) )
      {
        v13 = *((_DWORD *)a2 + 790);
        v14 = *((_QWORD *)this + 31);
        v17 = 0LL;
        if ( v13 )
          v15 = *(float *)(*((_QWORD *)a2 + 394) + 4LL * (unsigned int)(v13 - 1));
        else
          v15 = FLOAT_1_0;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 1.0) & _xmm) >= 0.0000011920929
          || !(*(unsigned __int8 (__fastcall **)(__int64, char *, struct D2D_RECT_F *))(*(_QWORD *)v14 + 328LL))(
                v14,
                (char *)this + 140,
                &v17) )
        {
          v17 = 0LL;
        }
        DropShadow = CSpriteVisual::GetDropShadow(this);
        CDropShadow::SetOcclusionRect(DropShadow, &v17);
      }
      v9 = CSpriteVisual::GetDropShadow(this);
      CVisual::RenderContentWorker(this, v9, 1u, v10, a2, v11);
    }
    result = CVisual::RenderContent(this, a2, a3);
    v7 = result;
    if ( (int)result < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0xB5u, 0LL);
      return v7;
    }
  }
  return result;
}
