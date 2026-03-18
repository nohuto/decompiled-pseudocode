/*
 * XREFs of ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x180119FE0
 * Callers:
 *     ?GetProperty@CRectangleGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180119F60 (-GetProperty@CRectangleGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1802615A0 (-GetProperty@CGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CVisualSurface@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180263560 (-GetProperty@CVisualSurface@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CDropShadow@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18026D3F0 (-GetProperty@CDropShadow@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CEllipseGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18026ECB0 (-GetProperty@CEllipseGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CLineGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18027A9A0 (-GetProperty@CLineGeometry@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CSpriteVectorShape@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180282910 (-GetProperty@CSpriteVectorShape@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 *     ?GetProperty@CViewBox@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180285F70 (-GetProperty@CViewBox@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CResource::GetPropertyImpl(
        CResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        struct CExpressionValue *a3)
{
  int v3; // eax
  __int64 v5; // rsi
  int v7; // xmm6_4
  char v8; // bl
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *((_DWORD *)a2 + 1);
  v5 = *((_QWORD *)a2 + 1);
  if ( v3 == 35 )
  {
    if ( *((_DWORD *)a3 + 16) == 11 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3);
    *((_DWORD *)a3 + 16) = 35;
    *(_QWORD *)a3 = *(_QWORD *)((char *)this + v5);
  }
  else
  {
    switch ( v3 )
    {
      case 17:
        v8 = *((_BYTE *)this + v5);
        CExpressionValue::DestroyCurrent(a3);
        *((_DWORD *)a3 + 16) = 17;
        *(_BYTE *)a3 = v8;
        break;
      case 18:
        v7 = *(_DWORD *)((char *)this + v5);
        if ( *((_DWORD *)a3 + 16) == 11 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3);
        *(_DWORD *)a3 = v7;
        *((_DWORD *)a3 + 16) = 18;
        break;
      case 42:
        CExpressionValue::DestroyCurrent(a3);
        *((_DWORD *)a3 + 16) = 42;
        *(_DWORD *)a3 = *(_DWORD *)((char *)this + v5);
        break;
      case 52:
        if ( *((_DWORD *)a3 + 16) == 11 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3);
        *((_DWORD *)a3 + 16) = 52;
        *(_QWORD *)a3 = *(_QWORD *)((char *)this + v5);
        *((_DWORD *)a3 + 2) = *(_DWORD *)((char *)this + v5 + 8);
        break;
      case 69:
        CExpressionValue::DestroyCurrent(a3);
        *((_DWORD *)a3 + 16) = 69;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v5);
        break;
      case 70:
        if ( *((_DWORD *)a3 + 16) == 11 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3);
        *((_DWORD *)a3 + 16) = 70;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v5);
        break;
      case 71:
        CExpressionValue::DestroyCurrent(a3);
        *((_DWORD *)a3 + 16) = 71;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v5);
        break;
      case 104:
        CExpressionValue::DestroyCurrent(a3);
        *((_DWORD *)a3 + 16) = 104;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v5);
        *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + v5 + 16);
        break;
      case 265:
        if ( *((_DWORD *)a3 + 16) == 11 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a3 + 16LL))(*(_QWORD *)a3);
        *((_DWORD *)a3 + 16) = 265;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + v5);
        *((_OWORD *)a3 + 1) = *(_OWORD *)((char *)this + v5 + 16);
        *((_OWORD *)a3 + 2) = *(_OWORD *)((char *)this + v5 + 32);
        *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)this + v5 + 48);
        break;
      default:
        ModuleFailFastForHRESULT(-2147024809, retaddr);
    }
  }
}
