/*
 * XREFs of ??$CalculateDetectedInteractions@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18017F098
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18017CFEC (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18017B44C (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     _anonymous_namespace_::TransformAndNormalize @ 0x18017D4B8 (_anonymous_namespace_--TransformAndNormalize.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18017DCF0 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?VectorInsideAngleThreshold@magic@@YA_NAEBUD2DVector3@@0@Z @ 0x18017E604 (-VectorInsideAngleThreshold@magic@@YA_NAEBUD2DVector3@@0@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x18017E738 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     ?D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z @ 0x1801A0164 (-D3DXVec3Normalize@@YAPEAUD2DVector3@@PEAU1@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        unsigned int *a7)
{
  int v8; // ebx
  char *v9; // r12
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
  int *v23; // rdx
  const struct D2DMatrix *v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // edx
  __int64 v27; // r14
  unsigned int *v28; // rdx
  bool v30; // si
  unsigned int v31; // eax
  unsigned int v32; // edx
  int v33; // eax
  unsigned int v34; // edx
  __int64 v35; // rax
  int v36; // eax
  int v37; // eax
  __int64 v38; // rbx
  __int64 v39; // r13
  __int64 v40; // r14
  unsigned int v41; // r12d
  __int64 v42; // rsi
  __int64 v43; // r12
  const struct D2DVector3 *v44; // rax
  const struct D2DVector3 *v45; // rax
  __int64 v46; // rsi
  unsigned int v47; // eax
  unsigned int v48; // edx
  int v49; // eax
  char v50; // [rsp+60h] [rbp-A0h]
  int v51; // [rsp+70h] [rbp-90h] BYREF
  __int64 v52; // [rsp+78h] [rbp-88h]
  unsigned int v53; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v54; // [rsp+84h] [rbp-7Ch] BYREF
  _BYTE v55[12]; // [rsp+88h] [rbp-78h] BYREF
  int v56; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v57[12]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-50h]
  int *v59; // [rsp+B8h] [rbp-48h]
  __int64 v60; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v61; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v62[16]; // [rsp+D8h] [rbp-28h] BYREF
  float v63; // [rsp+E8h] [rbp-18h]
  int v64; // [rsp+ECh] [rbp-14h]
  int v65; // [rsp+118h] [rbp+18h] BYREF
  char v66; // [rsp+11Ch] [rbp+1Ch]

  v8 = 0;
  v60 = a6;
  v9 = a2;
  *a5 = 0;
  v59 = a5;
  *a7 = 0;
  v12 = *(_QWORD *)a2;
  *(_QWORD *)v57 = a2;
  v52 = a3;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 40LL))(v12, v62);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 40LL))(a3, &v65);
  v16 = *(_DWORD *)(a1 + 784);
  v58 = 3LL;
  if ( v16 != 2 && (unsigned int)(v16 - 3) > 1 && (v62[4] & 1) == 0 && (v66 & 1) == 0
    || (v17 = v65 == 2, *(_DWORD *)(a1 + 784) = 3, v17) )
  {
    if ( (v9[16] & 0x40) != 0 )
      *(_BYTE *)a4 = 1;
  }
  v18 = *(_DWORD *)(a1 + 784);
  if ( (v18 != 2 && (unsigned int)(v18 - 3) > 1 || v65 == 4) && v9[16] < 0 )
    *(_BYTE *)(a4 + 1) = 1;
  v19 = 0;
  v50 = 0;
  if ( (v9[16] & 3) == 0 )
  {
    v23 = v59;
    goto LABEL_12;
  }
  *(_QWORD *)v55 = 1065353216LL;
  *(_DWORD *)&v55[8] = 0;
  *(_QWORD *)&v61 = 1065353216LL;
  DWORD2(v61) = 0;
  if ( !D2DMatrixIsIdentity((const struct D2DMatrix *)(a1 + 976)) )
  {
    v44 = D3DXVec3TransformCoord((struct D2DVector3 *)&v61, (const struct D2DVector3 *)v55, v20);
    D3DXVec3Normalize((struct D2DVector3 *)&v61, v44);
  }
  HIDWORD(v61) = *(_DWORD *)(a1 + 1344);
  v21 = *(_DWORD *)(a4 + 32);
  v22 = v21 + 1;
  if ( v21 + 1 >= v21 )
  {
    if ( v22 > *(_DWORD *)(a4 + 28) )
    {
      v36 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 16, 1, &v61);
      v8 = v36;
      if ( v36 < 0 )
        goto LABEL_54;
    }
    else
    {
      v13 = 2LL * v21;
      *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16LL * v21) = v61;
      *(_DWORD *)(a4 + 32) = v22;
    }
    v23 = v59;
    v19 = 1;
    ++*v59;
LABEL_12:
    v17 = (v9[16] & 4) == 0;
    v51 = v8;
    if ( v17 && (v9[16] & 8) == 0 )
    {
      v30 = 0;
      if ( v8 < 0 )
        goto LABEL_50;
LABEL_24:
      if ( (v9[16] & 0x10) != 0 || (v9[16] & 0x20) != 0 )
      {
        HIDWORD(v61) = *(_DWORD *)(a1 + 1344);
        v31 = *(_DWORD *)(a4 + 32);
        *(_QWORD *)&v61 = 0LL;
        DWORD2(v61) = 1065353216;
        v32 = v31 + 1;
        if ( v31 + 1 < v31 )
        {
          v8 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
          goto LABEL_50;
        }
        v8 = 0;
        v51 = 0;
        if ( v32 > *(_DWORD *)(a4 + 28) )
        {
          v37 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 16, 1, &v61);
          v51 = v37;
          v8 = v37;
          if ( v37 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v37, 0xC2u, 0LL);
            goto LABEL_50;
          }
        }
        else
        {
          v13 = 2LL * v31;
          *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16LL * v31) = v61;
          *(_DWORD *)(a4 + 32) = v32;
        }
        v23 = v59;
        LOBYTE(v13) = 1;
        v50 = 1;
        ++*v59;
      }
      else
      {
        LOBYTE(v13) = 0;
      }
      if ( v8 >= 0 )
      {
        if ( *v23 <= 0 )
          goto LABEL_36;
        v56 = *(_DWORD *)(a4 + 32) - *v23;
        v33 = v56;
        *(_QWORD *)(a1 + 812) = 0LL;
        *(_DWORD *)(a1 + 820) = 0;
        v34 = v33 + 1;
        if ( !v19 )
          v34 = v33;
        v54 = v34;
        v14 = v34 + 1;
        if ( !v30 )
          v14 = v34;
        v53 = v14;
        if ( v33 <= 3LL )
        {
LABEL_36:
          v27 = v52;
          if ( *(_BYTE *)a4 || *(_BYTE *)(a4 + 1) || v52 == *(_QWORD *)v9 )
            goto LABEL_18;
          if ( (*(_BYTE *)(a1 + 808) & 4) != 0 || v63 != 1.0 )
          {
            v35 = v60;
            if ( (v9[16] & 0x30) != 0 )
              *(_BYTE *)(v60 + 2) = 1;
          }
          else
          {
            v35 = v60;
          }
          if ( *(_BYTE *)(v35 + 2) )
            goto LABEL_18;
          if ( v64 == 1 )
          {
            if ( (v9[16] & 1) == 0 && (v9[16] & 2) == 0 )
              goto LABEL_18;
            *(_QWORD *)v57 = 1065353216LL;
            *(_DWORD *)&v57[8] = 0;
          }
          else
          {
            if ( v64 != 2 || (v9[16] & 4) == 0 && (v9[16] & 8) == 0 )
              goto LABEL_18;
            *(_DWORD *)v57 = 0;
            *(_QWORD *)&v57[4] = 1065353216LL;
          }
          v46 = v35 + 8;
          anonymous_namespace_::TransformAndNormalize(
            (struct D2DVector3 *)&v61,
            (__int64)v57,
            (const struct D2DMatrix *)(a1 + 976));
          HIDWORD(v61) = *(_DWORD *)(a1 + 1344);
          v47 = *(_DWORD *)(v46 + 24);
          v48 = v47 + 1;
          if ( v47 + 1 < v47 )
          {
            v8 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
            goto LABEL_18;
          }
          v8 = 0;
          if ( v48 > *(_DWORD *)(v46 + 20) )
          {
            v49 = DynArrayImpl<0>::AddMultipleAndSet(v46, 16, 1, &v61);
            v8 = v49;
            if ( v49 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v49, 0xC2u, 0LL);
              goto LABEL_18;
            }
          }
          else
          {
            v13 = 2LL * v47;
            *(_OWORD *)(*(_QWORD *)v46 + 16LL * v47) = v61;
            *(_DWORD *)(v46 + 24) = v48;
          }
          v28 = a7;
          ++*a7;
          goto LABEL_19;
        }
        v38 = v56;
        *(_QWORD *)v55 = 3LL;
        v39 = 48LL;
        while ( v19 )
        {
          v40 = *(_QWORD *)(a4 + 8);
          v41 = v58;
          if ( magic::VectorInsideAngleThreshold(
                 (magic *)(v40 + 16LL * (unsigned int)v38),
                 (const struct D2DVector3 *)(v40 + 16LL * (unsigned int)v58),
                 (const struct D2DVector3 *)v14) )
          {
            *(_DWORD *)(a1 + 812) |= *(_DWORD *)(v40 + v39 + 12);
          }
          v19 = *(_DWORD *)(a1 + 812) != 7;
          if ( v30 )
            goto LABEL_64;
LABEL_67:
          LOBYTE(v13) = v50;
          if ( v50 )
          {
            v14 = v53;
LABEL_77:
            v43 = *(_QWORD *)(a4 + 8);
            if ( magic::VectorInsideAngleThreshold(
                   (magic *)(v43 + 16LL * (unsigned int)v14),
                   (const struct D2DVector3 *)(v43 + 16LL * (unsigned int)v58),
                   (const struct D2DVector3 *)v14) )
            {
              *(_DWORD *)(a1 + 820) |= *(_DWORD *)(v43 + v39 + 12);
            }
            LOBYTE(v13) = *(_DWORD *)(a1 + 820) != 7;
            v50 = v13;
          }
          v39 += 16LL;
          LODWORD(v58) = v58 + 1;
          v14 = v53;
          ++*(_QWORD *)v55;
          if ( *(__int64 *)v55 >= v38 )
            goto LABEL_69;
        }
        if ( !v30 )
        {
          if ( !(_BYTE)v13 )
          {
LABEL_69:
            v8 = v51;
            v9 = *(char **)v57;
            goto LABEL_36;
          }
          goto LABEL_77;
        }
        v41 = v58;
LABEL_64:
        v42 = *(_QWORD *)(a4 + 8);
        if ( magic::VectorInsideAngleThreshold(
               (magic *)(v42 + 16LL * v54),
               (const struct D2DVector3 *)(v42 + 16LL * v41),
               (const struct D2DVector3 *)v14) )
        {
          *(_DWORD *)(a1 + 816) |= *(_DWORD *)(v42 + v39 + 12);
        }
        v30 = *(_DWORD *)(a1 + 816) != 7;
        goto LABEL_67;
      }
LABEL_50:
      v27 = v52;
      goto LABEL_18;
    }
    *(_DWORD *)v55 = 0;
    *(_QWORD *)&v55[4] = 1065353216LL;
    LODWORD(v61) = 0;
    *(_QWORD *)((char *)&v61 + 4) = 1065353216LL;
    if ( !D2DMatrixIsIdentity((const struct D2DMatrix *)(a1 + 976)) )
    {
      v45 = D3DXVec3TransformCoord((struct D2DVector3 *)&v61, (const struct D2DVector3 *)v55, v24);
      D3DXVec3Normalize((struct D2DVector3 *)&v61, v45);
    }
    HIDWORD(v61) = *(_DWORD *)(a1 + 1344);
    v25 = *(unsigned int *)(a4 + 32);
    v26 = v25 + 1;
    if ( (int)v25 + 1 < (unsigned int)v25 )
      goto LABEL_16;
    v8 = 0;
    v51 = 0;
    if ( v26 <= *(_DWORD *)(a4 + 28) )
    {
      v13 = 2 * v25;
      *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16 * v25) = v61;
      *(_DWORD *)(a4 + 32) = v26;
LABEL_23:
      v23 = v59;
      v30 = 1;
      ++*v59;
      goto LABEL_24;
    }
    v36 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 16, 1, &v61);
    v51 = v36;
    v8 = v36;
    if ( v36 >= 0 )
      goto LABEL_23;
LABEL_54:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0xC2u, 0LL);
    goto LABEL_17;
  }
LABEL_16:
  v8 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
LABEL_17:
  v27 = a3;
LABEL_18:
  v28 = a7;
LABEL_19:
  if ( (unsigned int)dword_1803DC880 > 4 && (qword_1803DC890 & 2) != 0 && (qword_1803DC898 & 2) == qword_1803DC898 )
  {
    v54 = *v28;
    *(_QWORD *)v57 = v27;
    v60 = a1;
    v56 = *v59;
    v53 = *(_DWORD *)(a1 + 784);
    v51 = *(_DWORD *)(a1 + 788);
    *(_QWORD *)v55 = *(_QWORD *)v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v13,
      byte_1803B1AC2,
      v14,
      v15,
      (__int64)&v60,
      (__int64)v55,
      (__int64)v57,
      (__int64)&v51,
      (__int64)&v53,
      (__int64)&v56,
      (__int64)&v54);
  }
  return (unsigned int)v8;
}
