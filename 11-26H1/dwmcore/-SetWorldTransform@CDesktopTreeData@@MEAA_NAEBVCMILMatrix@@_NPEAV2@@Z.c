/*
 * XREFs of ?SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1801E5BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18009E280 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180197928 (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     McTemplateU0pxffffffffffffffff_EventWriteTransfer @ 0x1801B86F8 (McTemplateU0pxffffffffffffffff_EventWriteTransfer.c)
 *     ?SetWorldTransform@CTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1801E5EC0 (-SetWorldTransform@CTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ @ 0x180226608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ.c)
 */

bool __fastcall CDesktopTreeData::SetWorldTransform(
        CVisual **this,
        const struct CMILMatrix *a2,
        bool a3,
        struct CMILMatrix *a4)
{
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r11
  bool v13; // si
  CVisual *v14; // r10
  __int64 v15; // rdx
  __int64 v16; // r11
  _QWORD v17[2]; // [rsp+A0h] [rbp-18h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Comp_Racy>::GetImpl'::`2'::impl) )
  {
    CTreeData::SetWorldTransform((CTreeData *)this, a2, a3, a4);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 && CVisual::GetInputHandle(this[31]) )
    {
      if ( !*((_BYTE *)this + 15) )
        return 0;
      if ( this[28] == *(CVisual **)(*(_QWORD *)(v8 + 24) + 880LL) )
      {
        CVisual::GetInputLuid(this[31], v17);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
          McTemplateU0pxffffffffffffffff_EventWriteTransfer(
            v10,
            v9,
            v11,
            LODWORD(v17[0]) | (unsigned __int64)((__int64)SHIDWORD(v17[0]) << 32),
            *(_DWORD *)a2,
            *((_DWORD *)a2 + 1),
            *((_DWORD *)a2 + 2),
            *((_DWORD *)a2 + 3),
            *((_DWORD *)a2 + 4),
            *((_DWORD *)a2 + 5),
            *((_DWORD *)a2 + 6),
            *((_DWORD *)a2 + 7),
            *((_DWORD *)a2 + 8),
            *((_DWORD *)a2 + 9),
            *((_DWORD *)a2 + 10),
            *((_DWORD *)a2 + 11),
            *((_DWORD *)a2 + 12),
            *((_DWORD *)a2 + 13),
            *((_DWORD *)a2 + 14),
            *((_DWORD *)a2 + 15));
      }
    }
    return *((_BYTE *)this + 15) && this[28] == *(CVisual **)(*((_QWORD *)this[31] + 3) + 880LL);
  }
  v13 = CTreeData::SetWorldTransform((CTreeData *)this, a2, a3, a4);
  if ( v13 )
  {
    LOBYTE(v17[0]) = BYTE1(Microsoft_Windows_Dwm_CoreEnableBits) & 0x40;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    {
      if ( CVisual::GetInputHandle(this[31]) )
      {
        CVisual::GetInputLuid(v14, v17);
        McTemplateU0pxffffffffffffffff_EventWriteTransfer(
          LODWORD(v17[0]),
          v15,
          v16,
          LODWORD(v17[0]) | (unsigned __int64)((__int64)SHIDWORD(v17[0]) << 32),
          *(_DWORD *)a2,
          *((_DWORD *)a2 + 1),
          *((_DWORD *)a2 + 2),
          *((_DWORD *)a2 + 3),
          *((_DWORD *)a2 + 4),
          *((_DWORD *)a2 + 5),
          *((_DWORD *)a2 + 6),
          *((_DWORD *)a2 + 7),
          *((_DWORD *)a2 + 8),
          *((_DWORD *)a2 + 9),
          *((_DWORD *)a2 + 10),
          *((_DWORD *)a2 + 11),
          *((_DWORD *)a2 + 12),
          *((_DWORD *)a2 + 13),
          *((_DWORD *)a2 + 14),
          *((_DWORD *)a2 + 15));
      }
    }
  }
  return v13;
}
