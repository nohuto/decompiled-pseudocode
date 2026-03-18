/*
 * XREFs of ??$CalculateDetectedInteractions@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18017E874
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18017CFEC (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18017B44C (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18017DCF0 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?VectorInsideAngleThreshold@magic@@YA_NAEBUD2DVector3@@0@Z @ 0x18017E604 (-VectorInsideAngleThreshold@magic@@YA_NAEBUD2DVector3@@0@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x18017E738 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1801A0164 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        unsigned int *a7)
{
  char *v7; // r12
  int v9; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  bool v19; // r14
  const struct D2DMatrix *v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // edx
  __int64 v23; // r14
  unsigned int *v24; // rdx
  int *v26; // rdx
  const struct D2DMatrix *v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // edx
  bool v30; // si
  __int64 v31; // rax
  unsigned int v32; // edx
  int v33; // eax
  unsigned int v34; // edx
  __int64 v35; // rbx
  __int64 v36; // r13
  __int64 v37; // r14
  unsigned int v38; // r12d
  __int64 v39; // rsi
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // rsi
  const struct D2DMatrix *v43; // rcx
  unsigned int v44; // eax
  unsigned int v45; // edx
  int v46; // eax
  int v47; // eax
  int v48; // eax
  const struct D2DVector3 *v49; // rax
  const struct D2DVector3 *v50; // rax
  const struct D2DVector3 *v51; // rax
  char v52; // [rsp+60h] [rbp-A0h]
  int v53; // [rsp+70h] [rbp-90h] BYREF
  __int64 v54; // [rsp+78h] [rbp-88h]
  unsigned int v55; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v56; // [rsp+84h] [rbp-7Ch] BYREF
  _BYTE v57[12]; // [rsp+88h] [rbp-78h] BYREF
  int v58; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v59[12]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-50h]
  int *v61; // [rsp+B8h] [rbp-48h]
  __int64 v62; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v63; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v64[16]; // [rsp+D8h] [rbp-28h] BYREF
  float v65; // [rsp+E8h] [rbp-18h]
  int v66; // [rsp+ECh] [rbp-14h]
  int v67; // [rsp+118h] [rbp+18h] BYREF
  char v68; // [rsp+11Ch] [rbp+1Ch]

  v7 = a2;
  *(_QWORD *)v59 = a2;
  v9 = 0;
  *a5 = 0;
  v61 = a5;
  *a7 = 0;
  v62 = a6;
  v12 = *(_QWORD *)a2;
  v54 = a3;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 40LL))(v12, v64);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 40LL))(a3, &v67);
  v16 = *(_DWORD *)(a1 + 784);
  v60 = 3LL;
  if ( v16 != 2 && (unsigned int)(v16 - 3) > 1 && (v64[4] & 1) == 0 && (v68 & 1) == 0
    || (v17 = v67 == 2, *(_DWORD *)(a1 + 784) = 3, v17) )
  {
    if ( (v7[16] & 0x40) != 0 )
      *(_BYTE *)a4 = 1;
  }
  v18 = *(_DWORD *)(a1 + 784);
  if ( (v18 != 2 && (unsigned int)(v18 - 3) > 1 || v67 == 4) && v7[16] < 0 )
    *(_BYTE *)(a4 + 1) = 1;
  v19 = 0;
  v52 = 0;
  if ( (v7[16] & 3) != 0 )
  {
    *(_QWORD *)v57 = 1065353216LL;
    *(_DWORD *)&v57[8] = 0;
    *(_QWORD *)&v63 = 1065353216LL;
    DWORD2(v63) = 0;
    if ( !D2DMatrixIsIdentity((const struct D2DMatrix *)(a1 + 976)) )
    {
      v49 = D3DXVec3TransformCoord((struct D2DVector3 *)&v63, (const struct D2DVector3 *)v57, v20);
      D3DXVec3Normalize((struct D2DVector3 *)&v63, v49);
    }
    HIDWORD(v63) = *(_DWORD *)(a1 + 1344);
    v21 = *(_DWORD *)(a4 + 32);
    v22 = v21 + 1;
    if ( v21 + 1 < v21 )
      goto LABEL_9;
    if ( v22 > *(_DWORD *)(a4 + 28) )
    {
      v46 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 16, 1, &v63);
      v9 = v46;
      if ( v46 < 0 )
        goto LABEL_84;
    }
    else
    {
      v13 = 2LL * *(unsigned int *)(a4 + 32);
      *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16LL * *(unsigned int *)(a4 + 32)) = v63;
      *(_DWORD *)(a4 + 32) = v22;
    }
    v26 = v61;
    v19 = 1;
    ++*v61;
  }
  else
  {
    v26 = v61;
  }
  v17 = (v7[16] & 4) == 0;
  v53 = v9;
  if ( !v17 || (v7[16] & 8) != 0 )
  {
    *(_DWORD *)v57 = 0;
    *(_QWORD *)&v57[4] = 1065353216LL;
    LODWORD(v63) = 0;
    *(_QWORD *)((char *)&v63 + 4) = 1065353216LL;
    if ( !D2DMatrixIsIdentity((const struct D2DMatrix *)(a1 + 976)) )
    {
      v50 = D3DXVec3TransformCoord((struct D2DVector3 *)&v63, (const struct D2DVector3 *)v57, v27);
      D3DXVec3Normalize((struct D2DVector3 *)&v63, v50);
    }
    HIDWORD(v63) = *(_DWORD *)(a1 + 1344);
    v28 = *(_DWORD *)(a4 + 32);
    v29 = v28 + 1;
    if ( v28 + 1 < v28 )
    {
LABEL_9:
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
LABEL_10:
      v23 = a3;
      goto LABEL_11;
    }
    v9 = 0;
    v53 = 0;
    if ( v29 <= *(_DWORD *)(a4 + 28) )
    {
      v13 = 2LL * v28;
      *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16LL * v28) = v63;
      *(_DWORD *)(a4 + 32) = v29;
LABEL_26:
      v26 = v61;
      v30 = 1;
      ++*v61;
      goto LABEL_27;
    }
    v46 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 16, 1, &v63);
    v53 = v46;
    v9 = v46;
    if ( v46 >= 0 )
      goto LABEL_26;
LABEL_84:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v46, 0xC2u, 0LL);
    goto LABEL_10;
  }
  v30 = 0;
  if ( v9 < 0 )
    goto LABEL_33;
LABEL_27:
  if ( (v7[16] & 0x10) != 0 || (v7[16] & 0x20) != 0 )
  {
    HIDWORD(v63) = *(_DWORD *)(a1 + 1344);
    v31 = *(unsigned int *)(a4 + 32);
    *(_QWORD *)&v63 = 0LL;
    DWORD2(v63) = 1065353216;
    v32 = v31 + 1;
    if ( (int)v31 + 1 < (unsigned int)v31 )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
LABEL_33:
      v23 = v54;
      goto LABEL_11;
    }
    v9 = 0;
    v53 = 0;
    if ( v32 > *(_DWORD *)(a4 + 28) )
    {
      v47 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 16, 1, &v63);
      v53 = v47;
      v9 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v47, 0xC2u, 0LL);
        goto LABEL_33;
      }
    }
    else
    {
      v13 = 2 * v31;
      *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16 * v31) = v63;
      *(_DWORD *)(a4 + 32) = v32;
    }
    v26 = v61;
    LOBYTE(v13) = 1;
    v52 = 1;
    ++*v61;
  }
  else
  {
    LOBYTE(v13) = 0;
  }
  if ( v9 < 0 )
    goto LABEL_33;
  if ( *v26 > 0 )
  {
    v58 = *(_DWORD *)(a4 + 32) - *v26;
    v33 = v58;
    *(_QWORD *)(a1 + 812) = 0LL;
    *(_DWORD *)(a1 + 820) = 0;
    v34 = v33 + 1;
    if ( !v19 )
      v34 = v33;
    v56 = v34;
    v14 = v34 + 1;
    if ( !v30 )
      v14 = v34;
    v55 = v14;
    if ( v33 > 3LL )
    {
      v35 = v58;
      *(_QWORD *)v57 = 3LL;
      v36 = 48LL;
      while ( v19 )
      {
        v37 = *(_QWORD *)(a4 + 8);
        v38 = v60;
        if ( magic::VectorInsideAngleThreshold(
               (magic *)(v37 + 16LL * (unsigned int)v35),
               (const struct D2DVector3 *)(v37 + 16LL * (unsigned int)v60),
               (const struct D2DVector3 *)v14) )
        {
          *(_DWORD *)(a1 + 812) |= *(_DWORD *)(v37 + v36 + 12);
        }
        v19 = *(_DWORD *)(a1 + 812) != 7;
        if ( v30 )
          goto LABEL_50;
LABEL_53:
        LOBYTE(v13) = v52;
        if ( v52 )
        {
          v14 = v55;
LABEL_55:
          v40 = *(_QWORD *)(a4 + 8);
          if ( magic::VectorInsideAngleThreshold(
                 (magic *)(v40 + 16LL * (unsigned int)v14),
                 (const struct D2DVector3 *)(v40 + 16LL * (unsigned int)v60),
                 (const struct D2DVector3 *)v14) )
          {
            *(_DWORD *)(a1 + 820) |= *(_DWORD *)(v40 + v36 + 12);
          }
          LOBYTE(v13) = *(_DWORD *)(a1 + 820) != 7;
          v52 = v13;
        }
        v36 += 16LL;
        LODWORD(v60) = v60 + 1;
        v14 = v55;
        ++*(_QWORD *)v57;
        if ( *(__int64 *)v57 >= v35 )
          goto LABEL_59;
      }
      if ( !v30 )
      {
        if ( !(_BYTE)v13 )
        {
LABEL_59:
          v9 = v53;
          v7 = *(char **)v59;
          goto LABEL_60;
        }
        goto LABEL_55;
      }
      v38 = v60;
LABEL_50:
      v39 = *(_QWORD *)(a4 + 8);
      if ( magic::VectorInsideAngleThreshold(
             (magic *)(v39 + 16LL * v56),
             (const struct D2DVector3 *)(v39 + 16LL * v38),
             (const struct D2DVector3 *)v14) )
      {
        *(_DWORD *)(a1 + 816) |= *(_DWORD *)(v39 + v36 + 12);
      }
      v30 = *(_DWORD *)(a1 + 816) != 7;
      goto LABEL_53;
    }
  }
LABEL_60:
  v23 = v54;
  if ( *(_BYTE *)a4 || *(_BYTE *)(a4 + 1) || v54 == *(_QWORD *)v7 )
    goto LABEL_11;
  if ( (*(_BYTE *)(a1 + 808) & 4) != 0 || v65 != 1.0 )
  {
    v41 = v62;
    if ( (v7[16] & 0x30) != 0 )
      *(_BYTE *)(v62 + 2) = 1;
  }
  else
  {
    v41 = v62;
  }
  if ( *(_BYTE *)(v41 + 2) )
    goto LABEL_11;
  if ( v66 == 1 )
  {
    if ( (v7[16] & 1) == 0 && (v7[16] & 2) == 0 )
      goto LABEL_11;
    *(_QWORD *)v59 = 1065353216LL;
    *(_DWORD *)&v59[8] = 0;
    *(_QWORD *)&v63 = 1065353216LL;
    DWORD2(v63) = 0;
  }
  else
  {
    if ( v66 != 2 || (v7[16] & 4) == 0 && (v7[16] & 8) == 0 )
      goto LABEL_11;
    *(_DWORD *)v59 = 0;
    *(_QWORD *)&v59[4] = 1065353216LL;
    LODWORD(v63) = 0;
    *(_QWORD *)((char *)&v63 + 4) = 1065353216LL;
  }
  v42 = v41 + 8;
  if ( !D2DMatrixIsIdentity((const struct D2DMatrix *)(a1 + 976)) )
  {
    v51 = D3DXVec3TransformCoord((struct D2DVector3 *)&v63, (const struct D2DVector3 *)v59, v43);
    D3DXVec3Normalize((struct D2DVector3 *)&v63, v51);
  }
  HIDWORD(v63) = *(_DWORD *)(a1 + 1344);
  v44 = *(_DWORD *)(v42 + 24);
  v45 = v44 + 1;
  if ( v44 + 1 >= v44 )
  {
    v9 = 0;
    if ( v45 > *(_DWORD *)(v42 + 20) )
    {
      v48 = DynArrayImpl<0>::AddMultipleAndSet(v42, 16, 1, &v63);
      v9 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v48, 0xC2u, 0LL);
        goto LABEL_11;
      }
    }
    else
    {
      v13 = 2LL * v44;
      *(_OWORD *)(*(_QWORD *)v42 + 16LL * v44) = v63;
      *(_DWORD *)(v42 + 24) = v45;
    }
    v24 = a7;
    ++*a7;
    goto LABEL_12;
  }
  v9 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
LABEL_11:
  v24 = a7;
LABEL_12:
  if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
  {
    v56 = *v24;
    *(_QWORD *)v59 = v23;
    v62 = a1;
    v58 = *v61;
    v55 = *(_DWORD *)(a1 + 784);
    v53 = *(_DWORD *)(a1 + 788);
    *(_QWORD *)v57 = *(_QWORD *)v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      byte_1803B1B90,
      v14,
      v15,
      (__int64)&v62,
      (__int64)v57,
      (__int64)v59,
      (__int64)&v53,
      (__int64)&v55,
      (__int64)&v58,
      (__int64)&v56);
  }
  return (unsigned int)v9;
}
