/*
 * XREFs of ?SetWorldTransform@CTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1801E5EC0
 * Callers:
 *     ?SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1801E5BA0 (-SetWorldTransform@CDesktopTreeData@@MEAA_NAEBVCMILMatrix@@_NPEAV2@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCMILMatrix@@U?$default_delete@VCMILMatrix@@@std@@@std@@QEAAXPEAVCMILMatrix@@@Z @ 0x1800D1F30 (-reset@-$unique_ptr@VCMILMatrix@@U-$default_delete@VCMILMatrix@@@std@@@std@@QEAAXPEAVCMILMatrix@.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??9CMILMatrix@@QEBA_NAEBV0@@Z @ 0x180148AB0 (--9CMILMatrix@@QEBA_NAEBV0@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ @ 0x180226608 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Comp_Racy@@@details@wil@@QEAA_NXZ.c)
 */

bool __fastcall CTreeData::SetWorldTransform(
        CTreeData *this,
        const struct CMILMatrix *a2,
        char a3,
        struct CMILMatrix *a4)
{
  float *v8; // rbp
  bool v9; // al
  const char *v10; // r9
  __int64 *v11; // rsi
  __int64 v12; // rcx
  int v13; // eax
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  _OWORD *v17; // rax
  void *v18; // rdx
  __int64 v19; // rdx
  bool result; // al
  char v21; // r12
  __int64 v22; // r14
  __int64 v23; // rcx
  _OWORD *v24; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (float *)((char *)this + 280);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Comp_Racy>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Comp_Racy>::GetImpl'::`2'::impl) )
  {
    v9 = CMILMatrix::operator!=(v8, (float *)a2);
    *((_BYTE *)this + 15) = v9;
    if ( v9 )
    {
      *(_OWORD *)v8 = *(_OWORD *)a2;
      *((_OWORD *)v8 + 1) = *((_OWORD *)a2 + 1);
      *((_OWORD *)v8 + 2) = *((_OWORD *)a2 + 2);
      *((_OWORD *)v8 + 3) = *((_OWORD *)a2 + 3);
      v8[16] = *((float *)a2 + 16);
    }
    *((_BYTE *)this + 11) = a3;
    v11 = (__int64 *)((char *)this + 264);
    if ( a4 )
    {
      v12 = *v11;
      if ( *v11 )
      {
        v13 = *((_DWORD *)a4 + 16);
        v14 = *((_OWORD *)a4 + 1);
        v15 = *((_OWORD *)a4 + 2);
        v16 = *((_OWORD *)a4 + 3);
        *(_OWORD *)v12 = *(_OWORD *)a4;
        *(_OWORD *)(v12 + 16) = v14;
        *(_OWORD *)(v12 + 32) = v15;
        *(_OWORD *)(v12 + 48) = v16;
        *(_DWORD *)(v12 + 64) = v13;
LABEL_12:
        v19 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 24LL) + 880LL);
        if ( *((_QWORD *)this + 28) == v19 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xB9,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\treedata.cpp",
            v10);
        result = *((_BYTE *)this + 15);
        *((_QWORD *)this + 28) = v19;
        return result;
      }
      v17 = operator new(0x44uLL);
      if ( v17 )
      {
        *v17 = *(_OWORD *)a4;
        v17[1] = *((_OWORD *)a4 + 1);
        v17[2] = *((_OWORD *)a4 + 2);
        v17[3] = *((_OWORD *)a4 + 3);
        *((_DWORD *)v17 + 16) = *((_DWORD *)a4 + 16);
      }
      v18 = v17;
    }
    else
    {
      v18 = 0LL;
    }
    std::unique_ptr<CMILMatrix>::reset((void **)this + 33, v18);
    goto LABEL_12;
  }
  v21 = 0;
  v22 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 24LL) + 880LL);
  if ( CMILMatrix::operator!=(v8, (float *)a2) )
  {
    v21 = 1;
    *(_OWORD *)v8 = *(_OWORD *)a2;
    *((_OWORD *)v8 + 1) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v8 + 2) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v8 + 3) = *((_OWORD *)a2 + 3);
    v8[16] = *((float *)a2 + 16);
  }
  *((_BYTE *)this + 11) = a3;
  if ( a4 )
  {
    v23 = *((_QWORD *)this + 32);
    if ( v23 )
    {
      *(_OWORD *)v23 = *(_OWORD *)a4;
      *(_OWORD *)(v23 + 16) = *((_OWORD *)a4 + 1);
      *(_OWORD *)(v23 + 32) = *((_OWORD *)a4 + 2);
      *(_OWORD *)(v23 + 48) = *((_OWORD *)a4 + 3);
      *(_DWORD *)(v23 + 64) = *((_DWORD *)a4 + 16);
    }
    else
    {
      v24 = operator new(0x44uLL);
      if ( v24 )
      {
        *v24 = *(_OWORD *)a4;
        v24[1] = *((_OWORD *)a4 + 1);
        v24[2] = *((_OWORD *)a4 + 2);
        v24[3] = *((_OWORD *)a4 + 3);
        *((_DWORD *)v24 + 16) = *((_DWORD *)a4 + 16);
      }
      *((_QWORD *)this + 32) = v24;
    }
  }
  if ( v21 || !*((_QWORD *)this + 28) )
    *((_QWORD *)this + 28) = v22;
  return *((_QWORD *)this + 28) == v22;
}
