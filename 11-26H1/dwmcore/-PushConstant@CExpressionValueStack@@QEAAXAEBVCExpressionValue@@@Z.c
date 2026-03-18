/*
 * XREFs of ?PushConstant@CExpressionValueStack@@QEAAXAEBVCExpressionValue@@@Z @ 0x18010BF90
 * Callers:
 *     ?Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z @ 0x18010BE88 (-Reset@CKeyframeAnimation@@AEAAX_NPEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValueResult@@@Z @ 0x18026BC80 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@PEAUCalculateValue.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?resize@?$vector_facade@VCExpressionValue@@V?$buffer_impl@VCExpressionValue@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18010C430 (-resize@-$vector_facade@VCExpressionValue@@V-$buffer_impl@VCExpressionValue@@$00$00Vliberal_expa.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExpressionValueStack::PushConstant(
        CExpressionValueStack *this,
        const struct CExpressionValue *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // xmm6_4
  char v12; // di
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6 = *((unsigned int *)this + 24);
  if ( v6 == 0x8E38E38E38E38E39uLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3) )
  {
    if ( (unsigned int)~(_DWORD)v6 < 5 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x44,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvaluestack.cpp",
        a4);
    detail::vector_facade<CExpressionValue,detail::buffer_impl<CExpressionValue,1,1,detail::liberal_expansion_policy>>::resize(
      this,
      (unsigned int)(v6 + 5));
  }
  v7 = *((unsigned int *)this + 24);
  *((_DWORD *)this + 24) = v7 + 1;
  v8 = (_QWORD *)(*(_QWORD *)this + 72 * v7);
  v9 = *((_DWORD *)a2 + 16);
  switch ( v9 )
  {
    case 18:
      v11 = *(_DWORD *)a2;
      if ( *((_DWORD *)v8 + 16) == 11 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 16LL))(*v8);
      *(_DWORD *)v8 = v11;
      *((_DWORD *)v8 + 16) = 18;
      break;
    case 35:
      if ( *((_DWORD *)v8 + 16) == 11 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 16LL))(*v8);
      *((_DWORD *)v8 + 16) = 35;
      *v8 = *(_QWORD *)a2;
      break;
    case 11:
      a2 = *(const struct CExpressionValue **)a2;
      v10 = 0;
      goto LABEL_6;
    default:
      if ( v9 )
      {
        if ( v9 != 17 )
        {
          v10 = v9 - 11;
LABEL_6:
          switch ( v10 )
          {
            case 0:
              if ( *((_DWORD *)v8 + 16) == 11 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 16LL))(*v8);
              if ( !a2 )
                goto LABEL_19;
              *((_DWORD *)v8 + 16) = 11;
              *v8 = a2;
              (*(void (__fastcall **)(const struct CExpressionValue *))(*(_QWORD *)a2 + 8LL))(a2);
              break;
            case 31:
              CExpressionValue::DestroyCurrent((CExpressionValue *)v8);
              *((_DWORD *)v8 + 16) = 42;
              *(_DWORD *)v8 = *(_DWORD *)a2;
              return;
            case 41:
              if ( *((_DWORD *)v8 + 16) == 11 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 16LL))(*v8);
              *((_DWORD *)v8 + 16) = 52;
              *v8 = *(_QWORD *)a2;
              *((_DWORD *)v8 + 2) = *((_DWORD *)a2 + 2);
              return;
            case 58:
              CExpressionValue::DestroyCurrent((CExpressionValue *)v8);
              *((_DWORD *)v8 + 16) = 69;
              goto LABEL_23;
            case 59:
              if ( *((_DWORD *)v8 + 16) == 11 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 16LL))(*v8);
              *((_DWORD *)v8 + 16) = 70;
              goto LABEL_23;
            case 60:
              CExpressionValue::DestroyCurrent((CExpressionValue *)v8);
              *((_DWORD *)v8 + 16) = 71;
LABEL_23:
              *(_OWORD *)v8 = *(_OWORD *)a2;
              break;
            case 93:
              if ( *((_DWORD *)v8 + 16) == 11 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 16LL))(*v8);
              *((_DWORD *)v8 + 16) = 104;
              *(_OWORD *)v8 = *(_OWORD *)a2;
              v8[2] = *((_QWORD *)a2 + 2);
              break;
            case 254:
              CExpressionValue::DestroyCurrent((CExpressionValue *)v8);
              *((_DWORD *)v8 + 16) = 265;
              *(_OWORD *)v8 = *(_OWORD *)a2;
              *((_OWORD *)v8 + 1) = *((_OWORD *)a2 + 1);
              *((_OWORD *)v8 + 2) = *((_OWORD *)a2 + 2);
              *((_OWORD *)v8 + 3) = *((_OWORD *)a2 + 3);
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
        v12 = *(_BYTE *)a2;
        if ( *((_DWORD *)v8 + 16) == 11 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 16LL))(*v8);
        *((_DWORD *)v8 + 16) = 17;
        *(_BYTE *)v8 = v12;
      }
      else
      {
        if ( *((_DWORD *)v8 + 16) == 11 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 16LL))(*v8);
LABEL_19:
        *((_DWORD *)v8 + 16) = 0;
      }
      break;
  }
}
