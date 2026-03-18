/*
 * XREFs of ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z @ 0x180081420
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18004B094 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseExpression::MergeValueWithMask(
        const struct CExpressionValue *a1,
        const struct CExpressionValue *a2,
        const struct SubchannelMaskInfo *a3,
        struct CExpressionValue *a4)
{
  int *v5; // r14
  const struct CExpressionValue *v6; // rsi
  int v7; // ecx
  int v10; // r8d
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // xmm6_4
  __int64 v14; // rdx
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  __int64 v18; // r9
  int v19; // r8d
  int v20; // eax
  int v21; // ecx
  char v22; // si
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v5 = (int *)((char *)a1 + 64);
  v6 = a1;
  v7 = *((_DWORD *)a1 + 16);
  v10 = *(_DWORD *)a3 - 1;
  if ( v10 )
  {
    if ( v10 != 1 )
    {
      v16 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x776u, 0LL);
      return v16;
    }
    if ( v7 != 104 && v7 != 265 )
    {
      v16 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x76Cu, 0LL);
      return v16;
    }
  }
  else
  {
    v11 = (unsigned int)(v7 - 18);
    if ( (unsigned int)v11 > 0x33 || (v12 = 0x8000400020001LL, !_bittest64(&v12, v11)) )
    {
      v16 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x763u, 0LL);
      return v16;
    }
    if ( v7 == 11 )
    {
      v6 = *(const struct CExpressionValue **)v6;
      v21 = 0;
LABEL_26:
      switch ( v21 )
      {
        case 0:
          if ( *((_DWORD *)a4 + 16) == 11 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a4 + 16LL))(*(_QWORD *)a4);
          if ( !v6 )
            goto LABEL_35;
          *((_DWORD *)a4 + 16) = 11;
          *(_QWORD *)a4 = v6;
          (*(void (__fastcall **)(const struct CExpressionValue *))(*(_QWORD *)v6 + 8LL))(v6);
          break;
        case 31:
          CExpressionValue::DestroyCurrent(a4);
          *((_DWORD *)a4 + 16) = 42;
          *(_DWORD *)a4 = *(_DWORD *)v6;
          goto LABEL_13;
        case 41:
          if ( *((_DWORD *)a4 + 16) == 11 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a4 + 16LL))(*(_QWORD *)a4);
          *((_DWORD *)a4 + 16) = 52;
          *(_QWORD *)a4 = *(_QWORD *)v6;
          *((_DWORD *)a4 + 2) = *((_DWORD *)v6 + 2);
          goto LABEL_13;
        case 58:
          CExpressionValue::DestroyCurrent(a4);
          *((_DWORD *)a4 + 16) = 69;
          *(_OWORD *)a4 = *(_OWORD *)v6;
          goto LABEL_13;
        case 59:
          if ( *((_DWORD *)a4 + 16) == 11 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a4 + 16LL))(*(_QWORD *)a4);
          *((_DWORD *)a4 + 16) = 70;
          *(_OWORD *)a4 = *(_OWORD *)v6;
          goto LABEL_13;
        case 60:
          CExpressionValue::DestroyCurrent(a4);
          *((_DWORD *)a4 + 16) = 71;
          *(_OWORD *)a4 = *(_OWORD *)v6;
          goto LABEL_13;
        case 93:
          if ( *((_DWORD *)a4 + 16) == 11 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a4 + 16LL))(*(_QWORD *)a4);
          *((_DWORD *)a4 + 16) = 104;
          *(_OWORD *)a4 = *(_OWORD *)v6;
          *((_QWORD *)a4 + 2) = *((_QWORD *)v6 + 2);
          goto LABEL_13;
        case 254:
          CExpressionValue::DestroyCurrent(a4);
          *((_DWORD *)a4 + 16) = 265;
          *(_OWORD *)a4 = *(_OWORD *)v6;
          *((_OWORD *)a4 + 1) = *((_OWORD *)v6 + 1);
          *((_OWORD *)a4 + 2) = *((_OWORD *)v6 + 2);
          *((_OWORD *)a4 + 3) = *((_OWORD *)v6 + 3);
          goto LABEL_13;
        default:
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x2D6,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvalue.cpp",
            (const char *)a4);
      }
      goto LABEL_13;
    }
  }
  if ( v7 != 18 )
  {
    switch ( v7 )
    {
      case 35:
        if ( *((_DWORD *)a4 + 16) == 11 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a4 + 16LL))(*(_QWORD *)a4);
        *((_DWORD *)a4 + 16) = 35;
        *(_QWORD *)a4 = *(_QWORD *)v6;
        goto LABEL_13;
      case 0:
        if ( *((_DWORD *)a4 + 16) == 11 )
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a4 + 16LL))(*(_QWORD *)a4);
          *((_DWORD *)a4 + 16) = 0;
        }
        else
        {
LABEL_35:
          *((_DWORD *)a4 + 16) = 0;
        }
        goto LABEL_13;
      case 17:
        v22 = *(_BYTE *)v6;
        if ( *((_DWORD *)a4 + 16) == 11 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a4 + 16LL))(*(_QWORD *)a4);
        *((_DWORD *)a4 + 16) = 17;
        *(_BYTE *)a4 = v22;
        goto LABEL_13;
    }
    v21 = v7 - 11;
    goto LABEL_26;
  }
  v13 = *(_DWORD *)v6;
  if ( *((_DWORD *)a4 + 16) == 11 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)a4 + 16LL))(*(_QWORD *)a4);
  *(_DWORD *)a4 = v13;
  *((_DWORD *)a4 + 16) = 18;
LABEL_13:
  v14 = 0LL;
  while ( 1 )
  {
    v15 = *((unsigned __int8 *)a3 + 4);
    if ( (unsigned int)v14 >= v15 )
      return 0;
    if ( *(_DWORD *)a3 == 1 )
    {
      LODWORD(v18) = (*((unsigned __int8 *)a3 + 8) >> (2 * (v15 - v14) - 2)) & 3;
    }
    else if ( *(_DWORD *)a3 == 2 )
    {
      v18 = (*((_QWORD *)a3 + 1) >> (4 * ((unsigned __int8)v15 - (unsigned __int8)v14) - 4)) & 0xFLL;
    }
    else
    {
      LODWORD(v18) = -1;
    }
    v19 = *v5;
    if ( *v5 != 42 )
    {
      switch ( v19 )
      {
        case 17:
        case 18:
        case 35:
        case 52:
        case 69:
        case 70:
        case 71:
        case 104:
        case 265:
          break;
        default:
          goto LABEL_43;
      }
    }
    if ( (unsigned int)v18 >= v19 >> 4 || (unsigned int)v18 >= 0x10 )
      break;
    v20 = *((_DWORD *)a2 + v14);
    v14 = (unsigned int)(v14 + 1);
    *((_DWORD *)a4 + (unsigned int)v18) = v20;
  }
LABEL_43:
  v16 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467259, 0x79Du, 0LL);
  return v16;
}
