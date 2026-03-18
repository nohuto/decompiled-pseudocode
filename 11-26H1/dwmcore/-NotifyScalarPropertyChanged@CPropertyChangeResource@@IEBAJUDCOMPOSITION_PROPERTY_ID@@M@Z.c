/*
 * XREFs of ?NotifyScalarPropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@M@Z @ 0x18011115C
 * Callers:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18002320C (-NotifyPropertyValue@CPropertySet@@AEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYP.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x180110FA0 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801110C0 (-SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetRotationAngle@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18019F1CC (-SetRotationAngle@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1801C1BC0 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyScalarPropertyChanged(__int64 a1, unsigned int a2, float a3)
{
  __int64 v3; // rax
  int v6; // edi
  int v7; // eax
  __int64 v9; // r10
  __int64 v10; // rcx
  unsigned int v11; // edx
  int v12; // eax
  _QWORD v13[2]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 56);
  v6 = 0;
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 116) )
    {
      if ( *(_DWORD *)(a1 + 72) )
      {
        v7 = *(_DWORD *)(a1 + 76);
        if ( _bittest(&v7, a2) )
        {
          v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 6384LL) + 72LL))(
                 *(_QWORD *)(*(_QWORD *)(a1 + 24) + 6384LL),
                 9LL);
          if ( v9 )
          {
            v10 = *(_QWORD *)(a1 + 56);
            if ( v10 )
              v11 = *(_DWORD *)(v10 + 116);
            else
              v11 = 0;
            v13[0] = v11;
            v13[1] = *(unsigned int *)(a1 + 72);
            v12 = CoreUICallSend(v9, v13, 2LL, 9LL, 0, &unk_1802F5B27, a2, a3, v11);
            if ( v12 != -2018375675 )
              v6 = v12;
            if ( v6 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xC8u, 0LL);
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
