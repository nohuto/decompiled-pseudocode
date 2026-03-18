/*
 * XREFs of ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x18010FD94
 * Callers:
 *     ?AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace@@@Z @ 0x18010F380 (-AddKeyframeData@CKeyframeAnimation@@AEAAJHMPEBUKeyframeData@@W4KeyframeAnimationCoordinateSpace.c)
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?SetPathValue@CExpressionValue@@QEAAXPEBVCPathData@@@Z @ 0x18011008C (-SetPathValue@CExpressionValue@@QEAAXPEBVCPathData@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall KeyframeValue::CreateConstantKeyframeValue(
        const struct CExpressionValue *a1,
        struct KeyframeValue **a2)
{
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v5; // rax
  const char *v6; // r9
  volatile signed __int32 *v7; // rsi
  int v8; // ecx
  _QWORD *v9; // rbx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // xmm6_4
  int v14; // ecx
  char v15; // di
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  ProcessHeap = GetProcessHeap();
  v5 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 8u, 0x60uLL);
  v7 = v5;
  if ( !v5 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *((_DWORD *)v5 + 2) = 0;
  *(_QWORD *)v5 = &KeyframeValue::`vftable';
  if ( _InterlockedIncrement(v5 + 2) <= 0 )
    wil::details::in1diag3::Log_Hr(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v20);
  *((_DWORD *)v7 + 5) = 1;
  v8 = *((_DWORD *)a1 + 16);
  v9 = v7 + 6;
  if ( v8 == 11 )
  {
    a1 = *(const struct CExpressionValue **)a1;
    goto LABEL_20;
  }
  if ( v8 == 52 )
  {
    CExpressionValue::DestroyCurrent((CExpressionValue *)(v7 + 6));
    *((_DWORD *)v7 + 22) = 52;
    *v9 = *(_QWORD *)a1;
    *((_DWORD *)v7 + 8) = *((_DWORD *)a1 + 2);
    goto LABEL_14;
  }
  if ( v8 > 52 )
  {
    v16 = v8 - 69;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 33;
          if ( !v19 )
          {
            CExpressionValue::DestroyCurrent((CExpressionValue *)(v7 + 6));
            *((_DWORD *)v7 + 22) = 104;
            *(_OWORD *)v9 = *(_OWORD *)a1;
            *((_QWORD *)v7 + 5) = *((_QWORD *)a1 + 2);
            goto LABEL_14;
          }
          if ( v19 == 161 )
          {
            CExpressionValue::DestroyCurrent((CExpressionValue *)(v7 + 6));
            *((_DWORD *)v7 + 22) = 265;
            *(_OWORD *)v9 = *(_OWORD *)a1;
            *(_OWORD *)(v7 + 10) = *((_OWORD *)a1 + 1);
            *(_OWORD *)(v7 + 14) = *((_OWORD *)a1 + 2);
            *(_OWORD *)(v7 + 18) = *((_OWORD *)a1 + 3);
            goto LABEL_14;
          }
          goto LABEL_38;
        }
        CExpressionValue::DestroyCurrent((CExpressionValue *)(v7 + 6));
        *((_DWORD *)v7 + 22) = 71;
      }
      else
      {
        CExpressionValue::DestroyCurrent((CExpressionValue *)(v7 + 6));
        *((_DWORD *)v7 + 22) = 70;
      }
    }
    else
    {
      CExpressionValue::DestroyCurrent((CExpressionValue *)(v7 + 6));
      *((_DWORD *)v7 + 22) = 69;
    }
    *(_OWORD *)v9 = *(_OWORD *)a1;
    goto LABEL_14;
  }
  if ( !v8 )
  {
    if ( *((_DWORD *)v7 + 22) == 11 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 16LL))(*v9);
    *((_DWORD *)v7 + 22) = 0;
    goto LABEL_14;
  }
  v10 = v8 - 11;
  if ( !v10 )
  {
LABEL_20:
    CExpressionValue::SetPathValue((CExpressionValue *)(v7 + 6), a1);
    goto LABEL_14;
  }
  v11 = v10 - 6;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( !v12 )
    {
      v13 = *(_DWORD *)a1;
      if ( *((_DWORD *)v7 + 22) == 11 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 16LL))(*v9);
      *(_DWORD *)v9 = v13;
      *((_DWORD *)v7 + 22) = 18;
      goto LABEL_14;
    }
    v14 = v12 - 17;
    if ( !v14 )
    {
      if ( *((_DWORD *)v7 + 22) == 11 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 16LL))(*v9);
      *((_DWORD *)v7 + 22) = 35;
      *v9 = *(_QWORD *)a1;
      goto LABEL_14;
    }
    if ( v14 == 7 )
    {
      CExpressionValue::DestroyCurrent((CExpressionValue *)(v7 + 6));
      *((_DWORD *)v7 + 22) = 42;
      *(_DWORD *)v9 = *(_DWORD *)a1;
      goto LABEL_14;
    }
LABEL_38:
    wil::details::in1diag3::_FailFast_Unexpected(
      (wil::details::in1diag3 *)retaddr,
      (void *)0x2D6,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionvalue.cpp",
      v6);
  }
  v15 = *(_BYTE *)a1;
  if ( *((_DWORD *)v7 + 22) == 11 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 16LL))(*v9);
  *((_DWORD *)v7 + 22) = 17;
  *(_BYTE *)v9 = v15;
LABEL_14:
  *((_DWORD *)v7 + 4) = *((_DWORD *)v7 + 22);
  *a2 = (struct KeyframeValue *)v7;
}
