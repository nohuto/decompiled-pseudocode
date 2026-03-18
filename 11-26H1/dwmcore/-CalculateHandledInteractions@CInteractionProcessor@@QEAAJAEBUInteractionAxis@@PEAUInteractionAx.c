/*
 * XREFs of ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18017A7F8
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18017A370 (-CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGro.c)
 *     ?CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18017A760 (-CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444444444444@Z @ 0x1800A9810 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_1800A9810.c)
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1801797F0 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180179C38 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18017AFC4 (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18017B0A4 (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18017B788 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     ??$CalculateHandledInteractions@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18017BA88 (--$CalculateHandledInteractions@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsEnu.c)
 *     ??$CalculateHandledInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18017BD90 (--$CalculateHandledInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions(
        __int64 a1,
        int a2,
        int a3,
        struct InteractionAxisGroup *a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        _OWORD *a8)
{
  int v9; // r12d
  char v11; // r14
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  unsigned __int8 v17; // al
  unsigned __int8 v18; // r15
  unsigned __int8 v19; // r14
  unsigned __int8 v20; // si
  _BYTE *v21; // rax
  _BYTE *v22; // rdx
  int v23; // edi
  unsigned int v24; // ecx
  __int64 v25; // rcx
  __int128 v26; // xmm0
  int v28; // ecx
  int v29; // ecx
  bool v30; // zf
  __int64 v31; // [rsp+C8h] [rbp-80h] BYREF
  __int128 v32; // [rsp+D0h] [rbp-78h] BYREF
  _BYTE v33[12]; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v34; // [rsp+F4h] [rbp-54h]
  int v35; // [rsp+FCh] [rbp-4Ch]
  __int64 v36; // [rsp+100h] [rbp-48h]
  __m256 v37; // [rsp+108h] [rbp-40h]
  _BYTE v38[12]; // [rsp+128h] [rbp-20h] BYREF
  __int64 v39; // [rsp+134h] [rbp-14h]
  int v40; // [rsp+13Ch] [rbp-Ch]
  __int64 v41; // [rsp+140h] [rbp-8h]
  __m256i v42; // [rsp+148h] [rbp+0h]
  int v43; // [rsp+168h] [rbp+20h]
  int v44; // [rsp+16Ch] [rbp+24h]
  int v45; // [rsp+170h] [rbp+28h]
  int v46; // [rsp+174h] [rbp+2Ch]
  int v47; // [rsp+178h] [rbp+30h]
  int v48; // [rsp+17Ch] [rbp+34h]
  int v49; // [rsp+180h] [rbp+38h]
  int v50; // [rsp+184h] [rbp+3Ch]
  int v51; // [rsp+188h] [rbp+40h]
  int v52; // [rsp+18Ch] [rbp+44h]
  int v53; // [rsp+190h] [rbp+48h]
  int v54; // [rsp+194h] [rbp+4Ch]
  int v55; // [rsp+198h] [rbp+50h]
  int v56; // [rsp+19Ch] [rbp+54h]
  int v57; // [rsp+1A0h] [rbp+58h]
  int v58; // [rsp+1A4h] [rbp+5Ch]
  __int64 v59; // [rsp+1A8h] [rbp+60h]
  __int64 v60[2]; // [rsp+1B8h] [rbp+70h] BYREF
  __int128 v61; // [rsp+1C8h] [rbp+80h]
  __int128 v62; // [rsp+1D8h] [rbp+90h]
  __int128 v63; // [rsp+1E8h] [rbp+A0h]

  v9 = 0;
  v11 = 0;
  v12 = *(_DWORD *)(a1 + 784);
  v13 = *(_DWORD *)(a1 + 788);
  v42 = (__m256i)ymmword_1803DD4A0;
  v37 = ymmword_1803DD4A0;
  *(_OWORD *)v60 = xmmword_1803AD770;
  v61 = xmmword_1803AD780;
  *(_QWORD *)v38 = CMILMatrix::Identity;
  *(_DWORD *)&v38[8] = unk_1803DD488;
  v39 = qword_1803DD48C;
  v40 = unk_1803DD494;
  v41 = qword_1803DD498;
  *(_QWORD *)v33 = CMILMatrix::Identity;
  *(_DWORD *)&v33[8] = unk_1803DD488;
  v34 = qword_1803DD48C;
  v35 = unk_1803DD494;
  v36 = qword_1803DD498;
  LODWORD(v31) = v12;
  v32 = 0uLL;
  v62 = xmmword_1803AD790;
  v63 = xmmword_1803AD7A0;
  v14 = v13 - 2;
  if ( !v14 )
  {
    v16 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            a1,
            a1,
            a2,
            a3,
            a6,
            (__int64)&v31,
            (magic *)&v32,
            (__int64)v38,
            (__int64)v33,
            (__int64)v60);
    goto LABEL_4;
  }
  v15 = v14 - 1;
  if ( !v15 )
    goto LABEL_3;
  v28 = v15 - 1;
  if ( v28 )
  {
    v29 = v28 - 1;
    if ( !v29 )
    {
      v30 = *(_DWORD *)(a1 + 640) == -805306369;
      if ( *(_DWORD *)(a1 + 640) == -805306369 )
        LOWORD(v32) = 257;
      *(__int64 *)((char *)&v42.m256i_i64[2] + 4) = 0LL;
      *(__int64 *)((char *)&v42.m256i_i64[1] + 4) = 0LL;
      v42.m256i_i64[0] = 0LL;
      LODWORD(v31) = !v30 + 2;
      v41 = 0LL;
      v39 = 0LL;
      *(_QWORD *)&v38[4] = 0LL;
      v42.m256i_i32[7] = 1065353216;
      v42.m256i_i32[2] = 1065353216;
      v40 = 1065353216;
      *(_DWORD *)v38 = 1065353216;
      *(_QWORD *)&v37.m256_f32[5] = 0LL;
      *(_QWORD *)&v37.m256_f32[3] = 0LL;
      *(_QWORD *)v37.m256_f32 = 0LL;
      v36 = 0LL;
      v34 = 0LL;
      *(_QWORD *)&v33[4] = 0LL;
      v37.m256_f32[7] = 1.0;
      v37.m256_f32[2] = 1.0;
      v35 = 1065353216;
      *(_DWORD *)v33 = 1065353216;
      goto LABEL_6;
    }
    if ( v29 != 1 )
      goto LABEL_6;
    v16 = CInteractionProcessor::CalculateHandledInteractions<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>(
            a1,
            (int)a1 + 480,
            a2,
            a3,
            a6,
            (__int64)&v31,
            (magic *)&v32,
            (__int64)v38,
            (__int64)v33,
            (__int64)v60);
    goto LABEL_4;
  }
  if ( CInteractionProcessor::AllowPenGestureDetection((CInteractionProcessor *)a1) )
  {
LABEL_3:
    v16 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
            a1,
            a6,
            (__int64)&v31,
            (magic *)&v32,
            (__int64)v38,
            (__int64)v33,
            (struct D2DMatrix *)v60);
LABEL_4:
    v9 = v16;
    goto LABEL_5;
  }
  LODWORD(v31) = 2;
  v11 = 1;
  LOWORD(v32) = 257;
  *(__int64 *)((char *)&v42.m256i_i64[2] + 4) = 0LL;
  *(__int64 *)((char *)&v42.m256i_i64[1] + 4) = 0LL;
  v42.m256i_i64[0] = 0LL;
  v41 = 0LL;
  v39 = 0LL;
  *(_QWORD *)&v38[4] = 0LL;
  v42.m256i_i32[7] = 1065353216;
  v42.m256i_i32[2] = 1065353216;
  v40 = 1065353216;
  *(_DWORD *)v38 = 1065353216;
  *(_QWORD *)&v37.m256_f32[5] = 0LL;
  *(_QWORD *)&v37.m256_f32[3] = 0LL;
  *(_QWORD *)v37.m256_f32 = 0LL;
  v36 = 0LL;
  v34 = 0LL;
  *(_QWORD *)&v33[4] = 0LL;
  v37.m256_f32[7] = 1.0;
  v37.m256_f32[2] = 1.0;
  v35 = 1065353216;
  *(_DWORD *)v33 = 1065353216;
LABEL_5:
  if ( v9 < 0 )
    return (unsigned int)v9;
LABEL_6:
  v17 = CInteractionProcessor::ResolveProhibitedMotion(a1, a5, &v32, &v31);
  v18 = v17;
  if ( v11 )
  {
    if ( v17 )
      goto LABEL_10;
  }
  else
  {
    if ( v17
      && CInteractionProcessor::ResolveMustHandleMotion(
           (CInteractionProcessor *)a1,
           (const struct D2DMatrix *)v33,
           (const struct D2DMatrix *)v60,
           a4,
           (struct InteractionAxis *)&v32,
           (enum InteractionState *)&v31) )
    {
      v18 = 1;
LABEL_10:
      v19 = v32;
      v20 = BYTE1(v32);
      if ( *(_BYTE *)(a1 + 1248) )
        v19 = 1;
      if ( *(_BYTE *)(a1 + 1249) )
        v20 = 1;
      LOBYTE(v32) = v19;
      BYTE1(v32) = v20;
      v21 = (_BYTE *)(a1 + 808);
      if ( *((float *)&v32 + 1) != 0.0 )
        *(_BYTE *)(a1 + 808) |= 1u;
      if ( *((float *)&v32 + 2) != 0.0 )
        *v21 |= 2u;
      v22 = (_BYTE *)(a1 + 808);
      if ( *((float *)&v32 + 3) != 0.0 )
      {
        *v21 |= 4u;
        v22 = (_BYTE *)(a1 + 808);
      }
      if ( v19 || (v21 = v22, v20) )
        *v21 |= 8u;
      goto LABEL_22;
    }
    v18 = 0;
  }
  v20 = BYTE1(v32);
  v19 = v32;
LABEL_22:
  v23 = v31;
  if ( (_DWORD)v31 == 3
    && (*(_BYTE *)(a1 + 1264) & 4) != 0
    && (unsigned int)CInteractionProcessor::SupportsPointerType((_DWORD *)a1, *(_DWORD *)(a1 + 788), 0) )
  {
    v23 = 4;
  }
  if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
  {
    v24 = *(unsigned __int8 *)(a1 + 808);
    LODWORD(v31) = *(_DWORD *)(a1 + 1256);
    v43 = *(_DWORD *)(a1 + 1252);
    v44 = *(unsigned __int8 *)(a1 + 1249);
    v45 = *(unsigned __int8 *)(a1 + 1248);
    v46 = HIDWORD(v32);
    v47 = DWORD2(v32);
    v48 = DWORD1(v32);
    v49 = v20;
    v50 = v19;
    v51 = v18;
    v56 = v23;
    v52 = (v24 >> 3) & 1;
    v59 = a1;
    v53 = (v24 >> 2) & 1;
    v54 = (v24 >> 1) & 1;
    v25 = v24 & 1;
    v57 = *(_DWORD *)(a1 + 784);
    v58 = *(_DWORD *)(a1 + 788);
    v55 = v25;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v25,
      (__int64)&unk_1803B228D);
  }
  v26 = v32;
  *(_DWORD *)(a1 + 784) = v23;
  *a7 = v23;
  *a8 = v26;
  return (unsigned int)v9;
}
