/*
 * XREFs of ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800496C0
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180048510 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180049EC0 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18004B094 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180080E30 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?resize@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBVCExpressionValue@@@Z @ 0x18010C490 (-resize@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00_ea_18010C490.c)
 *     ?InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x1801A9780 (-InterpolateHsl@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x18026B8E0 (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 *     ?ReplaceLastKeyframeValueConstant@CKeyframeAnimation@@IEAAXPEAVCExpressionValue@@@Z @ 0x180279EF0 (-ReplaceLastKeyframeValueConstant@CKeyframeAnimation@@IEAAXPEAVCExpressionValue@@@Z.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x18028A77C (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExpressionValue::CopyFrom(
        CExpressionValue *this,
        const struct CExpressionValue *a2,
        __int64 a3,
        const char *a4)
{
  int v4; // eax
  const struct CExpressionValue *v5; // rdi
  int v7; // eax
  int v8; // xmm6_4
  char v9; // di
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_DWORD *)a2 + 16);
  v5 = a2;
  switch ( v4 )
  {
    case 18:
      v8 = *(_DWORD *)a2;
      if ( *((_DWORD *)this + 16) == 11 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
      *(_DWORD *)this = v8;
      *((_DWORD *)this + 16) = 18;
      break;
    case 35:
      if ( *((_DWORD *)this + 16) == 11 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
      *((_DWORD *)this + 16) = 35;
      *(_QWORD *)this = *(_QWORD *)v5;
      break;
    case 11:
      v5 = *(const struct CExpressionValue **)a2;
      v7 = 0;
      goto LABEL_5;
    default:
      if ( v4 )
      {
        if ( v4 != 17 )
        {
          v7 = v4 - 11;
LABEL_5:
          switch ( v7 )
          {
            case 0:
              if ( *((_DWORD *)this + 16) == 11 )
                (*(void (**)(void))(**(_QWORD **)this + 16LL))();
              if ( !v5 )
                goto LABEL_18;
              *((_DWORD *)this + 16) = 11;
              *(_QWORD *)this = v5;
              (*(void (__fastcall **)(const struct CExpressionValue *))(*(_QWORD *)v5 + 8LL))(v5);
              break;
            case 31:
              CExpressionValue::DestroyCurrent(this);
              *((_DWORD *)this + 16) = 42;
              *(_DWORD *)this = *(_DWORD *)v5;
              return;
            case 41:
              if ( *((_DWORD *)this + 16) == 11 )
                (*(void (**)(void))(**(_QWORD **)this + 16LL))();
              *((_DWORD *)this + 16) = 52;
              *(_QWORD *)this = *(_QWORD *)v5;
              *((_DWORD *)this + 2) = *((_DWORD *)v5 + 2);
              return;
            case 58:
              CExpressionValue::DestroyCurrent(this);
              *((_DWORD *)this + 16) = 69;
              goto LABEL_22;
            case 59:
              if ( *((_DWORD *)this + 16) == 11 )
                (*(void (**)(void))(**(_QWORD **)this + 16LL))();
              *((_DWORD *)this + 16) = 70;
              goto LABEL_22;
            case 60:
              CExpressionValue::DestroyCurrent(this);
              *((_DWORD *)this + 16) = 71;
LABEL_22:
              *(_OWORD *)this = *(_OWORD *)v5;
              break;
            case 93:
              if ( *((_DWORD *)this + 16) == 11 )
                (*(void (**)(void))(**(_QWORD **)this + 16LL))();
              *((_DWORD *)this + 16) = 104;
              *(_OWORD *)this = *(_OWORD *)v5;
              *((_QWORD *)this + 2) = *((_QWORD *)v5 + 2);
              break;
            case 254:
              CExpressionValue::DestroyCurrent(this);
              *((_DWORD *)this + 16) = 265;
              *(_OWORD *)this = *(_OWORD *)v5;
              *((_OWORD *)this + 1) = *((_OWORD *)v5 + 1);
              *((_OWORD *)this + 2) = *((_OWORD *)v5 + 2);
              *((_OWORD *)this + 3) = *((_OWORD *)v5 + 3);
              break;
            default:
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x2D6,
                (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvalue.cpp",
                a4);
          }
          return;
        }
        v9 = *(_BYTE *)a2;
        if ( *((_DWORD *)this + 16) == 11 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
        *((_DWORD *)this + 16) = 17;
        *(_BYTE *)this = v9;
      }
      else
      {
        if ( *((_DWORD *)this + 16) == 11 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
LABEL_18:
        *((_DWORD *)this + 16) = 0;
      }
      break;
  }
}
