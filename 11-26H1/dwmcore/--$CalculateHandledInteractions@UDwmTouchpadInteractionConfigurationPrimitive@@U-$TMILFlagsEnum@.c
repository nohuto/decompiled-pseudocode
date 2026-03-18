/*
 * XREFs of ??$CalculateHandledInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18017BD90
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18017A7F8 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180179C38 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x180179D7C (--$ComputeHandledInteractionsFromLocal@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILF.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18017A074 (--$ComputeHandledInteractionsFromLocal@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnu.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18017A45C (--$ComputeHandledInteractionsFromLocal@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsE.c)
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18017C16C (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UAxisWithType@@$0A@@@@Z @ 0x18017C6DC (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UAxisWi.c)
 *     ?AxisContainsMotion@magic@@YA_NAEBUInteractionAxis@@@Z @ 0x18017C91C (-AxisContainsMotion@magic@@YA_NAEBUInteractionAxis@@@Z.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18017C954 (--$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFla.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
        __int64 a1,
        char *a2,
        _OWORD *a3,
        _BYTE *a4,
        __int64 a5,
        _DWORD *a6,
        magic *a7,
        _OWORD *a8,
        _OWORD *a9,
        struct D2DMatrix *a10)
{
  __int128 v11; // xmm4
  __int128 v13; // xmm8
  unsigned int v14; // edi
  __int128 v15; // xmm12
  __int128 v17; // xmm4
  __int128 v18; // xmm8
  __int128 v19; // xmm12
  __int64 v20; // rax
  char v21; // al
  char v22; // cl
  int v24; // edx
  int v25; // edx
  int v26; // edx
  __int128 *v27; // rax
  const struct InteractionAxis *v28; // rdx
  __int128 v29; // xmm0
  int v30[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-C0h]
  _OWORD *v32; // [rsp+50h] [rbp-B8h]
  _OWORD *v33; // [rsp+58h] [rbp-B0h]
  _BYTE v34[64]; // [rsp+68h] [rbp-A0h] BYREF
  int v35[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v36; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-48h] BYREF
  int v38; // [rsp+C8h] [rbp-40h]
  _DWORD v39[16]; // [rsp+F8h] [rbp-10h] BYREF

  v11 = *(_OWORD *)((char *)&qword_1803DD48C + 4);
  v13 = *(_OWORD *)ymmword_1803DD4A0.m256_f32;
  v14 = 0;
  v15 = *(_OWORD *)&ymmword_1803DD4A0.m256_f32[4];
  *(_QWORD *)v30 = a8;
  *a8 = CMILMatrix::Identity;
  v32 = a3;
  a8[1] = v11;
  v33 = a9;
  a8[2] = v13;
  v31 = a5;
  a8[3] = v15;
  v17 = *(_OWORD *)((char *)&qword_1803DD48C + 4);
  v18 = *(_OWORD *)ymmword_1803DD4A0.m256_f32;
  v19 = *(_OWORD *)&ymmword_1803DD4A0.m256_f32[4];
  *a9 = CMILMatrix::Identity;
  a9[1] = v17;
  a9[2] = v18;
  a9[3] = v19;
  *(_OWORD *)a10 = xmmword_1803AD770;
  *((_OWORD *)a10 + 1) = xmmword_1803AD780;
  *((_OWORD *)a10 + 2) = xmmword_1803AD790;
  *((_OWORD *)a10 + 3) = xmmword_1803AD7A0;
  if ( !*(_QWORD *)a2 )
    return (unsigned int)-2147019873;
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2, &v36);
  v20 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2, v35);
  v37 = *(_QWORD *)v20;
  v38 = *(_DWORD *)(v20 + 8);
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v31 + 40LL))(v31, v39);
  *(_OWORD *)v35 = *v32;
  if ( *(_QWORD *)a2 == v31 )
  {
    v21 = 0;
    v22 = 0;
  }
  else
  {
    v22 = BYTE1(v35[0]);
    v21 = v35[0];
  }
  if ( v39[0] != 2 )
  {
    if ( v39[0] == 4 && !v22 )
    {
      if ( a2[16] < 0 )
      {
        *((_BYTE *)a7 + 1) = 1;
        *a6 = 2;
        *(_BYTE *)(a1 + 1249) = 1;
      }
      return v14;
    }
LABEL_14:
    if ( v36 != 1 || a4[1] || *a4 )
      return v14;
    CInteractionProcessor::ConstructLocalToGlobalTransform(a1, v34, a4 + 8);
    CInteractionProcessor::ConvertGlobalMotionToLocalMotion(a1, v30, &v37, v34, *(_QWORD *)v30, v33);
    *(_OWORD *)a10 = xmmword_1803AD770;
    *((_OWORD *)a10 + 1) = xmmword_1803AD780;
    *((_OWORD *)a10 + 2) = xmmword_1803AD790;
    *((_OWORD *)a10 + 3) = xmmword_1803AD7A0;
    v24 = *(_DWORD *)(a1 + 788);
    memset(v35, 0, sizeof(v35));
    v25 = v24 - 2;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        v28 = (const struct InteractionAxis *)(unsigned int)(v26 - 1);
        if ( (_DWORD)v28 )
        {
          if ( (_DWORD)v28 == 2 )
          {
            v27 = (__int128 *)CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>(
                                a1,
                                (__int64)v35,
                                (__int64 *)(a1 + 480),
                                (__int64)v30,
                                a10);
            goto LABEL_20;
          }
        }
        else if ( CInteractionProcessor::AllowPenGestureDetection((CInteractionProcessor *)a1) )
        {
          v27 = (__int128 *)CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>(
                              a1,
                              (__int64)v35,
                              (__int64 *)(a1 + 320),
                              (__int64)v30,
                              a10);
          goto LABEL_20;
        }
        v29 = *(_OWORD *)v35;
LABEL_21:
        *(_OWORD *)a7 = v29;
        if ( magic::AxisContainsMotion(a7, v28) )
          *a6 = 2;
        return v14;
      }
      v27 = (__int128 *)CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
                          a1,
                          (int)v35,
                          (int)a1 + 160,
                          (int)v30,
                          a10);
    }
    else
    {
      v27 = (__int128 *)CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
                          a1,
                          (__int64)v35,
                          (__int64 *)a1,
                          (__int64)v30,
                          a10);
    }
LABEL_20:
    v29 = *v27;
    goto LABEL_21;
  }
  if ( v21 )
    goto LABEL_14;
  if ( (a2[16] & 0x40) != 0 )
  {
    *(_BYTE *)a7 = 1;
    *a6 = 2;
    *(_BYTE *)(a1 + 1248) = 1;
  }
  return v14;
}
