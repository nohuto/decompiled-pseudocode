/*
 * XREFs of ?GetProperty@CComponentTransform2D@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x18013F910
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyCurrent@CExpressionValue@@AEAAXXZ @ 0x18004CE40 (-DestroyCurrent@CExpressionValue@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComponentTransform2D::GetProperty(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v5; // esi
  void **i; // rax
  _DWORD *v7; // r8
  int v8; // eax
  __int64 v9; // rbx
  int v11; // xmm6_4
  char v12; // bl
  void *retaddr; // [rsp+48h] [rbp+0h]

  v5 = 0;
  for ( i = (void **)&CComponentTransform2D::k_rgAnimDef; ; ++i )
  {
    if ( i == &CColorKeyBitmapRealization::`vftable'{for `IGDIBitmapRealization'} )
      goto LABEL_21;
    v7 = *i;
    if ( a2 == *(_DWORD *)*i )
      break;
  }
  if ( !v7 )
  {
LABEL_21:
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x58u, 0LL);
    return v5;
  }
  v8 = v7[1];
  v9 = *((_QWORD *)v7 + 1);
  if ( v8 == 35 )
  {
    if ( *((_DWORD *)a3 + 16) == 11 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
    *((_DWORD *)a3 + 16) = 35;
    *a3 = *(_QWORD *)(a1 + v9);
  }
  else
  {
    switch ( v8 )
    {
      case 17:
        v12 = *(_BYTE *)(a1 + v9);
        CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
        *((_DWORD *)a3 + 16) = 17;
        *(_BYTE *)a3 = v12;
        break;
      case 18:
        v11 = *(_DWORD *)(a1 + v9);
        if ( *((_DWORD *)a3 + 16) == 11 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
        *(_DWORD *)a3 = v11;
        *((_DWORD *)a3 + 16) = 18;
        break;
      case 42:
        CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
        *((_DWORD *)a3 + 16) = 42;
        *(_DWORD *)a3 = *(_DWORD *)(a1 + v9);
        break;
      case 52:
        if ( *((_DWORD *)a3 + 16) == 11 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
        *((_DWORD *)a3 + 16) = 52;
        *a3 = *(_QWORD *)(a1 + v9);
        *((_DWORD *)a3 + 2) = *(_DWORD *)(a1 + v9 + 8);
        break;
      case 69:
        CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
        *((_DWORD *)a3 + 16) = 69;
        *(_OWORD *)a3 = *(_OWORD *)(a1 + v9);
        break;
      case 70:
        if ( *((_DWORD *)a3 + 16) == 11 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
        *((_DWORD *)a3 + 16) = 70;
        *(_OWORD *)a3 = *(_OWORD *)(a1 + v9);
        break;
      case 71:
        CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
        *((_DWORD *)a3 + 16) = 71;
        *(_OWORD *)a3 = *(_OWORD *)(a1 + v9);
        break;
      case 104:
        CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
        *((_DWORD *)a3 + 16) = 104;
        *(_OWORD *)a3 = *(_OWORD *)(a1 + v9);
        a3[2] = *(_QWORD *)(a1 + v9 + 16);
        break;
      case 265:
        CExpressionValue::DestroyCurrent((CExpressionValue *)a3);
        *((_DWORD *)a3 + 16) = 265;
        *(_OWORD *)a3 = *(_OWORD *)(a1 + v9);
        *((_OWORD *)a3 + 1) = *(_OWORD *)(a1 + v9 + 16);
        *((_OWORD *)a3 + 2) = *(_OWORD *)(a1 + v9 + 32);
        *((_OWORD *)a3 + 3) = *(_OWORD *)(a1 + v9 + 48);
        break;
      default:
        ModuleFailFastForHRESULT(-2147024809, retaddr);
    }
  }
  return v5;
}
