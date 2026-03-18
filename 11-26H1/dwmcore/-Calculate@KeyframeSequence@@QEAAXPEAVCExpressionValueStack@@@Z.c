/*
 * XREFs of ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180048510
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x180046660 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResu.c)
 *     ?Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z @ 0x18010BE88 (-Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180046058 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800496C0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180049AB0 (-SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z @ 0x180080910 (-CalculateValue@CBaseExpression@@IEAAJPEAVCExpressionValueStack@@_KPEAUCalculateValueResult@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetPathValue@CExpressionValue@@QEAAXPEBVCPathData@@@Z @ 0x18011008C (-SetPathValue@CExpressionValue@@QEAAXPEBVCPathData@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall KeyframeSequence::Calculate(KeyframeSequence *this, struct CExpressionValueStack *a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r9d
  char v7; // r11
  int v8; // r8d
  int v9; // r10d
  unsigned int v10; // edx
  bool v11; // cc
  float v12; // xmm1_4
  int v13; // ecx
  int v14; // edx
  int *v15; // rcx
  int v16; // r11d
  unsigned int v17; // r11d
  int v18; // esi
  __int64 v19; // r8
  int v20; // r10d
  const char *v21; // r9
  __int64 v22; // r8
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int16 *v26; // r8
  int v27; // ecx
  int v28; // eax
  __int64 *v29; // r14
  int v30; // eax
  _DWORD *v31; // r14
  int v32; // ecx
  int v33; // eax
  int *v34; // r14
  int v35; // eax
  int v36; // xmm7_4
  const char *v37; // r9
  int v38; // eax
  int v39; // ecx
  struct CPathData **v40; // rdi
  char v41; // di
  int v42; // xmm6_4
  int v43; // eax
  int v44; // r15d
  unsigned int v45; // eax
  int v46; // ebx
  int v47; // ecx
  int v48; // ecx
  int v49; // eax
  _QWORD *v50; // r8
  unsigned __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // r14
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r14
  _QWORD *v57; // r8
  unsigned __int64 v58; // r14
  __int64 v59; // rcx
  __int64 v60; // r14
  __int64 v61; // r8
  int v62; // r15d
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r14
  int v66; // eax
  unsigned int v67; // eax
  int v68; // ebx
  __int64 v69; // rdx
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // rdx
  char v73; // r14
  int v74; // [rsp+28h] [rbp-E0h]
  __int64 v75; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v76; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v77[3]; // [rsp+68h] [rbp-A0h]
  unsigned int v78; // [rsp+98h] [rbp-70h]
  __int128 v79; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v80; // [rsp+B8h] [rbp-50h]
  __int128 v81; // [rsp+C8h] [rbp-40h]
  __int128 v82; // [rsp+D8h] [rbp-30h]
  int v83; // [rsp+E8h] [rbp-20h]
  struct CPathData *v84[8]; // [rsp+F8h] [rbp-10h] BYREF
  int v85; // [rsp+138h] [rbp+30h]
  void *retaddr; // [rsp+1B0h] [rbp+A8h]

  if ( *((_DWORD *)this + 26) < 2u )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  v4 = *((_DWORD *)this + 18);
  v5 = *((_DWORD *)this + 21);
  if ( v5 < v4 )
  {
    v6 = v4;
  }
  else
  {
    v6 = v5;
    if ( v5 > *((_DWORD *)this + 19) )
      v6 = *((_DWORD *)this + 19);
  }
  v7 = *((_BYTE *)this + 132);
  if ( (v7 & 8) != 0 )
    v6 = *((_DWORD *)this + 28) - v6;
  v8 = v6 - *((_DWORD *)this + 29);
  if ( *((_BYTE *)this + 88) )
  {
    v11 = v5 < v4;
    if ( v5 <= v4 )
      goto LABEL_15;
    if ( v5 > *((_DWORD *)this + 19) )
    {
LABEL_16:
      v4 = *((_DWORD *)this + 21);
      if ( v4 > *((_DWORD *)this + 19) )
        v4 = *((_DWORD *)this + 19);
      goto LABEL_18;
    }
  }
  else
  {
    if ( v5 < v4 )
      goto LABEL_18;
    if ( v5 >= *((_DWORD *)this + 19) )
      goto LABEL_16;
  }
  if ( v8 >= 0 )
  {
    v9 = *((_DWORD *)this + 30);
    if ( v8 <= v9 && (v7 & 0x20) == 0 )
    {
      v10 = *((_DWORD *)this + 27);
      goto LABEL_29;
    }
  }
  v11 = v5 < v4;
LABEL_15:
  if ( !v11 )
    goto LABEL_16;
LABEL_18:
  v12 = (float)*((int *)this + 20);
  if ( (float)((float)v4 / v12) == 0.0 )
  {
    if ( (*((_BYTE *)this + 132) & 8) != 0 )
    {
      v70 = *((_DWORD *)this + 28);
      v10 = *((_DWORD *)this + 26) - 1;
      *((_DWORD *)this + 27) = v10;
      *((_DWORD *)this + 29) = v70;
    }
    else
    {
      v10 = 0;
      *((_DWORD *)this + 27) = 0;
      *((_DWORD *)this + 29) = 0;
    }
    *((_DWORD *)this + 30) = 0;
  }
  else
  {
    v13 = *((_DWORD *)this + 18);
    v14 = *((_DWORD *)this + 21);
    if ( v14 >= v13 )
    {
      v13 = *((_DWORD *)this + 21);
      if ( v14 > *((_DWORD *)this + 19) )
        v13 = *((_DWORD *)this + 19);
    }
    if ( (float)((float)v13 / v12) == 1.0 )
    {
      if ( (*((_BYTE *)this + 132) & 8) != 0 )
      {
        v10 = 0;
        *((_DWORD *)this + 27) = 0;
        *((_DWORD *)this + 29) = 0;
      }
      else
      {
        v49 = *((_DWORD *)this + 28);
        v10 = *((_DWORD *)this + 26) - 1;
        *((_DWORD *)this + 27) = v10;
        *((_DWORD *)this + 29) = v49;
      }
      *((_DWORD *)this + 30) = 0;
    }
    else
    {
      v15 = (int *)*((_QWORD *)this + 12);
      v10 = 0;
      v16 = *((_DWORD *)this + 26);
      *((_DWORD *)this + 27) = 0;
      v17 = v16 - 1;
      *(_QWORD *)((char *)this + 116) = 0LL;
      v18 = *v15;
      while ( v10 < v17 )
      {
        v19 = v10 + 1;
        if ( v15[6 * v19] > v18 + v6 )
        {
          *((_DWORD *)this + 27) = v10;
          *((_DWORD *)this + 29) = v15[6 * v10] - v18;
          v20 = v15[6 * v19] - v15[6 * v10];
          *((_DWORD *)this + 30) = v20;
          goto LABEL_28;
        }
        ++v10;
      }
      v10 = 0;
    }
  }
LABEL_28:
  *((_BYTE *)this + 132) &= ~0x20u;
LABEL_29:
  v83 = 0;
  v21 = 0LL;
  v78 = 0;
  v85 = 0;
  v22 = *((_QWORD *)this + 12);
  v23 = v22 + 24LL * v10;
  if ( v10 >= *((_DWORD *)this + 26) - 1 )
  {
    v24 = v22 + 24LL * (v10 - 1);
  }
  else
  {
    v24 = v22 + 24LL * v10;
    v23 = v22 + 24LL * (v10 + 1);
  }
  v25 = *(_QWORD *)(v24 + 8);
  v26 = &_ImageBase;
  v27 = *(_DWORD *)(v25 + 20);
  if ( v27 == 1 )
  {
    v28 = *(_DWORD *)(v25 + 88);
    v29 = (__int64 *)(v25 + 24);
    switch ( v28 )
    {
      case 18:
        LODWORD(v79) = *(_DWORD *)v29;
        v83 = 18;
        goto LABEL_39;
      case 35:
        v83 = 35;
        LODWORD(v79) = *(_DWORD *)v29;
        DWORD1(v79) = *(_DWORD *)(v25 + 28);
        goto LABEL_39;
      case 11:
        v29 = (__int64 *)*v29;
        v30 = 0;
        break;
      case 0:
        goto LABEL_39;
      case 17:
        LOBYTE(v79) = *(_BYTE *)v29;
        v83 = 17;
        goto LABEL_39;
      default:
        v30 = v28 - 11;
        break;
    }
    switch ( v30 )
    {
      case 0:
        if ( !v29 )
          goto LABEL_39;
        v83 = 11;
        *(_QWORD *)&v79 = v29;
        (*(void (__fastcall **)(__int64 *, __int64, __int16 *, _QWORD))(*v29 + 8))(v29, v25, &_ImageBase, 0LL);
        break;
      case 31:
        CExpressionValue::DestroyCurrent((CExpressionValue *)&v79);
        v83 = 42;
        LODWORD(v79) = *(_DWORD *)v29;
        goto LABEL_121;
      case 41:
        v83 = 52;
        *(_QWORD *)&v79 = *v29;
        DWORD2(v79) = *((_DWORD *)v29 + 2);
        goto LABEL_39;
      case 58:
        CExpressionValue::DestroyCurrent((CExpressionValue *)&v79);
        v83 = 69;
        v79 = *(_OWORD *)v29;
        goto LABEL_121;
      case 59:
        v83 = 70;
        v79 = *(_OWORD *)v29;
        goto LABEL_39;
      case 60:
        CExpressionValue::DestroyCurrent((CExpressionValue *)&v79);
        v83 = 71;
        v79 = *(_OWORD *)v29;
        goto LABEL_121;
      case 93:
        v83 = 104;
        v79 = *(_OWORD *)v29;
        *(_QWORD *)&v80 = v29[2];
        goto LABEL_39;
      case 254:
        v83 = 265;
        v79 = *(_OWORD *)v29;
        v80 = *((_OWORD *)v29 + 1);
        v81 = *((_OWORD *)v29 + 2);
        v82 = *((_OWORD *)v29 + 3);
        goto LABEL_39;
      default:
        wil::details::in1diag3::_FailFast_Unexpected(
          (wil::details::in1diag3 *)retaddr,
          (void *)0x2D6,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvalue.cpp",
          0LL);
    }
    goto LABEL_121;
  }
  v47 = v27 - 2;
  if ( !v47 )
  {
    v50 = *(_QWORD **)(v25 + 24);
    v51 = *(unsigned int *)(v25 + 32);
    v52 = v50[39];
    if ( v51 >= (v50[40] - v52) >> 3 )
    {
      v44 = -2147467259;
      v71 = 1788LL;
      v55 = 2147500037LL;
    }
    else
    {
      v53 = *(_QWORD *)(v52 + 8 * v51);
      v54 = v50[3];
      v75 = 0LL;
      v44 = CBaseExpression::CalculateValue(
              (CBaseExpression *)v53,
              a2,
              *(_QWORD *)(v54 + 880),
              (struct CalculateValueResult *)&v75);
      v55 = (unsigned int)v44;
      if ( v44 >= 0 )
      {
        CExpressionValue::CopyFrom((CExpressionValue *)&v79, (const struct CExpressionValue *)(v53 + 80));
LABEL_121:
        v21 = (const char *)v78;
        v26 = &_ImageBase;
        goto LABEL_39;
      }
      v71 = 1798LL;
    }
    v46 = v44;
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)v71,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
      (const char *)v55,
      v74);
    v45 = 74;
    goto LABEL_70;
  }
  if ( v47 != 1 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  v56 = *(_QWORD *)(v25 + 24);
  if ( *(_DWORD *)(v56 + 152) == 11 )
  {
    if ( *(_QWORD *)(v56 + 296) )
      goto LABEL_129;
  }
  else if ( *(_QWORD *)(v56 + 288) )
  {
    goto LABEL_129;
  }
  v43 = CKeyframeAnimation::SampleStartingValue(*(CKeyframeAnimation **)(v25 + 24));
  v44 = v43;
  if ( v43 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x725,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
      (const char *)(unsigned int)v43,
      v74);
    v45 = 80;
    v46 = v44;
LABEL_70:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, v45, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x1CDu, 0LL);
    goto LABEL_71;
  }
LABEL_129:
  v64 = *(unsigned int *)(v56 + 152);
  if ( (_DWORD)v64 == 11 )
  {
    CExpressionValue::SetPathValue((CExpressionValue *)&v79, *(const struct CPathData **)(v56 + 296));
    goto LABEL_121;
  }
  CExpressionValue::SetValue(&v79, v64, *(_QWORD *)(v56 + 288));
  v21 = (const char *)v78;
  v26 = &_ImageBase;
LABEL_39:
  v31 = *(_DWORD **)(v23 + 8);
  v32 = v31[5];
  if ( v32 != 1 )
  {
    v48 = v32 - 2;
    if ( !v48 )
    {
      v57 = (_QWORD *)*((_QWORD *)v31 + 3);
      v58 = (unsigned int)v31[8];
      v59 = v57[39];
      if ( v58 >= (v57[40] - v59) >> 3 )
      {
        v62 = -2147467259;
        v72 = 1788LL;
        v63 = 2147500037LL;
      }
      else
      {
        v60 = *(_QWORD *)(v59 + 8 * v58);
        v61 = v57[3];
        v75 = 0LL;
        v62 = CBaseExpression::CalculateValue(
                (CBaseExpression *)v60,
                a2,
                *(_QWORD *)(v61 + 880),
                (struct CalculateValueResult *)&v75);
        v63 = (unsigned int)v62;
        if ( v62 >= 0 )
        {
          CExpressionValue::CopyFrom((CExpressionValue *)&v76, (const struct CExpressionValue *)(v60 + 80));
          goto LABEL_52;
        }
        v72 = 1798LL;
      }
      v68 = v62;
      wil::details::in1diag3::Return_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)v72,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
        (const char *)v63,
        v74);
      v67 = 74;
LABEL_135:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, v67, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0x1CEu, 0LL);
      goto LABEL_71;
    }
    if ( v48 != 1 )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
    v65 = *((_QWORD *)v31 + 3);
    if ( *(_DWORD *)(v65 + 152) == 11 )
    {
      if ( *(_QWORD *)(v65 + 296) )
        goto LABEL_138;
    }
    else if ( *(_QWORD *)(v65 + 288) )
    {
      goto LABEL_138;
    }
    v66 = CKeyframeAnimation::SampleStartingValue((CKeyframeAnimation *)v65);
    v62 = v66;
    if ( v66 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        (wil::details::in1diag3 *)retaddr,
        (void *)0x725,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\keyframeanimation.cpp",
        (const char *)(unsigned int)v66,
        v74);
      v67 = 80;
      v68 = v62;
      goto LABEL_135;
    }
LABEL_138:
    v69 = *(unsigned int *)(v65 + 152);
    if ( (_DWORD)v69 == 11 )
      CExpressionValue::SetPathValue((CExpressionValue *)&v76, *(const struct CPathData **)(v65 + 296));
    else
      CExpressionValue::SetValue(&v76, v69, *(_QWORD *)(v65 + 288));
    goto LABEL_52;
  }
  v33 = v31[22];
  v34 = v31 + 6;
  switch ( v33 )
  {
    case 18:
      v36 = *v34;
      if ( (_DWORD)v21 == 11 )
        (*(void (__fastcall **)(_QWORD, __int64, __int16 *))(*(_QWORD *)v76 + 16LL))(v76, v25, &_ImageBase);
      LODWORD(v76) = v36;
      v78 = 18;
      break;
    case 35:
      if ( (_DWORD)v21 == 11 )
        (*(void (__fastcall **)(_QWORD, __int64, __int16 *))(*(_QWORD *)v76 + 16LL))(v76, v25, &_ImageBase);
      v78 = 35;
      *(_QWORD *)&v76 = *(_QWORD *)v34;
      break;
    case 11:
      v34 = *(int **)v34;
      v35 = 0;
      goto LABEL_44;
    case 0:
      if ( (_DWORD)v21 == 11 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int16 *))(*(_QWORD *)v76 + 16LL))(v76, v25, &_ImageBase);
        v78 = 0;
      }
      else
      {
LABEL_96:
        v78 = 0;
      }
      break;
    case 17:
      v73 = *(_BYTE *)v34;
      if ( (_DWORD)v21 == 11 )
        (*(void (__fastcall **)(_QWORD, __int64, __int16 *))(*(_QWORD *)v76 + 16LL))(v76, v25, &_ImageBase);
      v78 = 17;
      LOBYTE(v76) = v73;
      break;
    default:
      v35 = v33 - 11;
LABEL_44:
      switch ( v35 )
      {
        case 0:
          if ( (_DWORD)v21 == 11 )
            (*(void (__fastcall **)(_QWORD, __int64, __int16 *))(*(_QWORD *)v76 + 16LL))(v76, v25, &_ImageBase);
          if ( !v34 )
            goto LABEL_96;
          v78 = 11;
          *(_QWORD *)&v76 = v34;
          (*(void (__fastcall **)(int *, __int64, __int16 *))(*(_QWORD *)v34 + 8LL))(v34, v25, v26);
          break;
        case 31:
          CExpressionValue::DestroyCurrent((CExpressionValue *)&v76);
          v78 = 42;
          LODWORD(v76) = *v34;
          goto LABEL_52;
        case 41:
          if ( (_DWORD)v21 == 11 )
            (*(void (__fastcall **)(_QWORD, __int64, __int16 *))(*(_QWORD *)v76 + 16LL))(v76, v25, &_ImageBase);
          v78 = 52;
          *(_QWORD *)&v76 = *(_QWORD *)v34;
          DWORD2(v76) = v34[2];
          goto LABEL_52;
        case 58:
          CExpressionValue::DestroyCurrent((CExpressionValue *)&v76);
          v78 = 69;
          v76 = *(_OWORD *)v34;
          goto LABEL_52;
        case 59:
          if ( (_DWORD)v21 == 11 )
            (*(void (__fastcall **)(_QWORD, __int64, __int16 *))(*(_QWORD *)v76 + 16LL))(v76, v25, &_ImageBase);
          v78 = 70;
          v76 = *(_OWORD *)v34;
          goto LABEL_52;
        case 60:
          CExpressionValue::DestroyCurrent((CExpressionValue *)&v76);
          v78 = 71;
          v76 = *(_OWORD *)v34;
          goto LABEL_52;
        case 93:
          if ( (_DWORD)v21 == 11 )
            (*(void (__fastcall **)(_QWORD, __int64, __int16 *))(*(_QWORD *)v76 + 16LL))(v76, v25, &_ImageBase);
          v78 = 104;
          v76 = *(_OWORD *)v34;
          *(_QWORD *)&v77[0] = *((_QWORD *)v34 + 2);
          goto LABEL_52;
        case 254:
          if ( (_DWORD)v21 == 11 )
            (*(void (__fastcall **)(_QWORD, __int64, __int16 *))(*(_QWORD *)v76 + 16LL))(v76, v25, &_ImageBase);
          v78 = 265;
          v76 = *(_OWORD *)v34;
          v77[0] = *((_OWORD *)v34 + 1);
          v77[1] = *((_OWORD *)v34 + 2);
          v77[2] = *((_OWORD *)v34 + 3);
          goto LABEL_52;
        default:
          wil::details::in1diag3::_FailFast_Unexpected(
            (wil::details::in1diag3 *)retaddr,
            (void *)0x2D6,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvalue.cpp",
            v21);
      }
      break;
  }
LABEL_52:
  (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD, __int128 *, __int128 *, struct CPathData **))(**(_QWORD **)(v23 + 16)
                                                                                                  + 32LL))(
    *(_QWORD *)(v23 + 16),
    &v76,
    *(unsigned int *)(*(_QWORD *)(v24 + 8) + 16LL),
    &v79,
    &v76,
    v84);
  v38 = *((_DWORD *)this + 21);
  v39 = *((_DWORD *)this + 18);
  if ( *((_BYTE *)this + 88) )
  {
    if ( v38 > v39 && v38 <= *((_DWORD *)this + 19) )
      goto LABEL_56;
  }
  else if ( v38 >= v39 && v38 < *((_DWORD *)this + 19) )
  {
    goto LABEL_56;
  }
  *((_BYTE *)this + 132) &= ~2u;
LABEL_56:
  v40 = v84;
  if ( v85 == 11 )
    v40 = (struct CPathData **)v84[0];
  if ( v85 == 18 )
  {
    v42 = *(_DWORD *)v40;
    if ( *((_DWORD *)this + 16) == 11 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    *(_DWORD *)this = v42;
    *((_DWORD *)this + 16) = 18;
  }
  else if ( v85 == 35 )
  {
    if ( *((_DWORD *)this + 16) == 11 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    *((_DWORD *)this + 16) = 35;
    *(_QWORD *)this = *v40;
  }
  else if ( v85 )
  {
    if ( v85 == 17 )
    {
      v41 = *(_BYTE *)v40;
      if ( *((_DWORD *)this + 16) == 11 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
      *((_DWORD *)this + 16) = 17;
      *(_BYTE *)this = v41;
    }
    else
    {
      switch ( v85 )
      {
        case 11:
          CExpressionValue::SetPathValue(this, (const struct CPathData *)v40);
          break;
        case 42:
          CExpressionValue::DestroyCurrent(this);
          *((_DWORD *)this + 16) = 42;
          *(_DWORD *)this = *(_DWORD *)v40;
          break;
        case 52:
          if ( *((_DWORD *)this + 16) == 11 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
          *((_DWORD *)this + 16) = 52;
          *(_QWORD *)this = *v40;
          *((_DWORD *)this + 2) = *((_DWORD *)v40 + 2);
          break;
        case 69:
          CExpressionValue::DestroyCurrent(this);
          *((_DWORD *)this + 16) = 69;
          *(_OWORD *)this = *(_OWORD *)v40;
          break;
        case 70:
          if ( *((_DWORD *)this + 16) == 11 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
          *((_DWORD *)this + 16) = 70;
          *(_OWORD *)this = *(_OWORD *)v40;
          break;
        case 71:
          CExpressionValue::DestroyCurrent(this);
          *((_DWORD *)this + 16) = 71;
          *(_OWORD *)this = *(_OWORD *)v40;
          break;
        case 104:
          CExpressionValue::DestroyCurrent(this);
          *((_DWORD *)this + 16) = 104;
          *(_OWORD *)this = *(_OWORD *)v40;
          *((_QWORD *)this + 2) = v40[2];
          break;
        case 265:
          CExpressionValue::DestroyCurrent(this);
          *((_DWORD *)this + 16) = 265;
          *(_OWORD *)this = *(_OWORD *)v40;
          *((_OWORD *)this + 1) = *((_OWORD *)v40 + 1);
          *((_OWORD *)this + 2) = *((_OWORD *)v40 + 2);
          *((_OWORD *)this + 3) = *((_OWORD *)v40 + 3);
          break;
        default:
          wil::details::in1diag3::_FailFast_Unexpected(
            (wil::details::in1diag3 *)retaddr,
            (void *)0x2D6,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvalue.cpp",
            v37);
      }
    }
  }
  else
  {
    if ( *((_DWORD *)this + 16) == 11 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    *((_DWORD *)this + 16) = 0;
  }
LABEL_71:
  if ( v85 == 11 )
    (*(void (__fastcall **)(struct CPathData *))(*(_QWORD *)v84[0] + 16LL))(v84[0]);
  if ( v78 == 11 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v76 + 16LL))(v76);
  if ( v83 == 11 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v79 + 16LL))(v79);
}
