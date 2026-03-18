/*
 * XREFs of ??$CalculateHandledInteractions@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18017BA88
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18017A7F8 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18017C16C (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UAxisWithType@@$0A@@@@Z @ 0x18017C6DC (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UAxisWi.c)
 *     ?AxisContainsMotion@magic@@YA_NAEBUInteractionAxis@@@Z @ 0x18017C91C (-AxisContainsMotion@magic@@YA_NAEBUInteractionAxis@@@Z.c)
 *     ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18017CC58 (-ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA-AUInteractionAxis@@AEBUD2DVecto.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>(
        __int64 a1,
        char *a2,
        __int128 *a3,
        _BYTE *a4,
        __int64 a5,
        _DWORD *a6,
        magic *a7,
        _OWORD *a8,
        _OWORD *a9,
        _OWORD *a10)
{
  __int128 v11; // xmm4
  __int128 v13; // xmm8
  unsigned int v14; // ebx
  __int128 v15; // xmm12
  __int128 v17; // xmm4
  __int128 v18; // xmm8
  __int128 v19; // xmm12
  __int64 v20; // rax
  char v21; // al
  char v22; // cl
  const struct InteractionAxis *v24; // rdx
  _QWORD v25[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 *v26; // [rsp+48h] [rbp-C0h]
  _OWORD *v27; // [rsp+50h] [rbp-B8h]
  _OWORD *v28; // [rsp+58h] [rbp-B0h]
  _BYTE v29[64]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v30; // [rsp+A8h] [rbp-60h] BYREF
  int v31; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-48h] BYREF
  int v33; // [rsp+C8h] [rbp-40h]
  _DWORD v34[16]; // [rsp+F8h] [rbp-10h] BYREF

  v11 = *(_OWORD *)((char *)&qword_1803DD48C + 4);
  v13 = *(_OWORD *)ymmword_1803DD4A0.m256_f32;
  v14 = 0;
  v15 = *(_OWORD *)&ymmword_1803DD4A0.m256_f32[4];
  v25[0] = a8;
  *a8 = CMILMatrix::Identity;
  v27 = a9;
  a8[1] = v11;
  v26 = a3;
  a8[2] = v13;
  v28 = a10;
  a8[3] = v15;
  v17 = *(_OWORD *)((char *)&qword_1803DD48C + 4);
  v18 = *(_OWORD *)ymmword_1803DD4A0.m256_f32;
  v19 = *(_OWORD *)&ymmword_1803DD4A0.m256_f32[4];
  *a9 = CMILMatrix::Identity;
  a9[1] = v17;
  a9[2] = v18;
  a9[3] = v19;
  *a10 = xmmword_1803AD770;
  a10[1] = xmmword_1803AD780;
  a10[2] = xmmword_1803AD790;
  a10[3] = xmmword_1803AD7A0;
  if ( !*(_QWORD *)a2 )
    return (unsigned int)-2147019873;
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2, &v31);
  v20 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2, &v30);
  v32 = *(_QWORD *)v20;
  v33 = *(_DWORD *)(v20 + 8);
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a5 + 40LL))(a5, v34);
  v30 = *v26;
  if ( *(_QWORD *)a2 == a5 )
  {
    v21 = 0;
    v22 = 0;
  }
  else
  {
    v22 = BYTE1(v30);
    v21 = v30;
  }
  if ( v34[0] != 2 )
  {
    if ( v34[0] == 4 && !v22 )
    {
      if ( a2[16] < 0 )
      {
        *((_BYTE *)a7 + 1) = 1;
        *a6 = 2;
        *(_BYTE *)(a1 + 1249) = 1;
      }
      return v14;
    }
    goto LABEL_14;
  }
  if ( v21 )
  {
LABEL_14:
    if ( v31 == 1 && !a4[1] && !*a4 )
    {
      CInteractionProcessor::ConstructLocalToGlobalTransform(a1, v29, a4 + 8);
      CInteractionProcessor::ConvertGlobalMotionToLocalMotion(a1, v25, &v32, v29, v25[0], v27);
      *(_OWORD *)a7 = *(_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal(a1, &v30, v25, v28);
      if ( magic::AxisContainsMotion(a7, v24) )
        *a6 = 2;
    }
    return v14;
  }
  if ( (a2[16] & 0x40) != 0 )
  {
    *(_BYTE *)a7 = 1;
    *a6 = 2;
    *(_BYTE *)(a1 + 1248) = 1;
  }
  return v14;
}
