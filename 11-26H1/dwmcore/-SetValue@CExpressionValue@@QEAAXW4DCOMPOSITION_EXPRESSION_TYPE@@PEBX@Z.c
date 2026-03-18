/*
 * XREFs of ?SetValue@CExpressionValue@@QEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180049AB0
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180048510 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180049EC0 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 *     ?ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@@Z @ 0x18004B7D0 (-ResolveReferenceWithCache@CExpression@@AEBAJPEBUExpressionReferenceNode@@PEAVCExpressionValue@@.c)
 *     ??0CExpressionValue@@QEAA@$$QEAV0@@Z @ 0x1801DEB80 (--0CExpressionValue@@QEAA@$$QEAV0@@Z.c)
 *     ??4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z @ 0x18021B54C (--4CExpressionValue@@QEAAAEAV0@$$QEAV0@@Z.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CExpressionValue::SetValue(int **a1, int a2, int *a3, const char *a4)
{
  char v6; // di
  int v7; // xmm6_4
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == 18 )
  {
    v7 = *a3;
    if ( *((_DWORD *)a1 + 16) == 11 )
      (*(void (__fastcall **)(int *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *(_DWORD *)a1 = v7;
    *((_DWORD *)a1 + 16) = 18;
  }
  else if ( a2 == 35 )
  {
    if ( *((_DWORD *)a1 + 16) == 11 )
      (*(void (__fastcall **)(int *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *((_DWORD *)a1 + 16) = 35;
    *a1 = *(int **)a3;
  }
  else if ( a2 )
  {
    if ( a2 == 17 )
    {
      v6 = *(_BYTE *)a3;
      if ( *((_DWORD *)a1 + 16) == 11 )
        (*(void (__fastcall **)(int *))(*(_QWORD *)*a1 + 16LL))(*a1);
      *((_DWORD *)a1 + 16) = 17;
      *(_BYTE *)a1 = v6;
    }
    else
    {
      switch ( a2 )
      {
        case 11:
          if ( *((_DWORD *)a1 + 16) == 11 )
            (*(void (**)(void))(*(_QWORD *)*a1 + 16LL))();
          if ( !a3 )
            goto LABEL_16;
          *((_DWORD *)a1 + 16) = 11;
          *a1 = a3;
          (*(void (__fastcall **)(int *))(*(_QWORD *)a3 + 8LL))(a3);
          break;
        case 42:
          CExpressionValue::DestroyCurrent((CExpressionValue *)a1);
          *((_DWORD *)a1 + 16) = 42;
          *(_DWORD *)a1 = *a3;
          return;
        case 52:
          if ( *((_DWORD *)a1 + 16) == 11 )
            (*(void (**)(void))(*(_QWORD *)*a1 + 16LL))();
          *((_DWORD *)a1 + 16) = 52;
          *a1 = *(int **)a3;
          *((_DWORD *)a1 + 2) = a3[2];
          return;
        case 69:
          CExpressionValue::DestroyCurrent((CExpressionValue *)a1);
          *((_DWORD *)a1 + 16) = 69;
          *(_OWORD *)a1 = *(_OWORD *)a3;
          return;
        case 70:
          if ( *((_DWORD *)a1 + 16) == 11 )
            (*(void (**)(void))(*(_QWORD *)*a1 + 16LL))();
          *((_DWORD *)a1 + 16) = 70;
          *(_OWORD *)a1 = *(_OWORD *)a3;
          return;
        case 71:
          CExpressionValue::DestroyCurrent((CExpressionValue *)a1);
          *((_DWORD *)a1 + 16) = 71;
          *(_OWORD *)a1 = *(_OWORD *)a3;
          return;
        case 104:
          if ( *((_DWORD *)a1 + 16) == 11 )
            (*(void (**)(void))(*(_QWORD *)*a1 + 16LL))();
          *((_DWORD *)a1 + 16) = 104;
          *(_OWORD *)a1 = *(_OWORD *)a3;
          a1[2] = (int *)*((_QWORD *)a3 + 2);
          return;
        case 265:
          CExpressionValue::DestroyCurrent((CExpressionValue *)a1);
          *((_DWORD *)a1 + 16) = 265;
          *(_OWORD *)a1 = *(_OWORD *)a3;
          *((_OWORD *)a1 + 1) = *((_OWORD *)a3 + 1);
          *((_OWORD *)a1 + 2) = *((_OWORD *)a3 + 2);
          *((_OWORD *)a1 + 3) = *((_OWORD *)a3 + 3);
          return;
        default:
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x2D6,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvalue.cpp",
            a4);
      }
    }
  }
  else
  {
    if ( *((_DWORD *)a1 + 16) == 11 )
      (*(void (__fastcall **)(int *))(*(_QWORD *)*a1 + 16LL))(*a1);
LABEL_16:
    *((_DWORD *)a1 + 16) = 0;
  }
}
