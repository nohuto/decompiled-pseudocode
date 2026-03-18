/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCOMPOSITION_INPUT_SINK_TRANSFORM@@$0A@@@QEAAJPEFBUCOMPOSITION_INPUT_SINK_TRANSFORM@@I@Z @ 0x18018C190
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18007F840 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<COMPOSITION_INPUT_SINK_TRANSFORM,0>::AddMultipleAndSet(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v9; // eax
  __int64 v10; // rcx
  _OWORD *v11; // rax
  __int64 v12; // rdx
  _OWORD *v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB7u, 0LL);
  }
  else
  {
    v5 = 0;
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v13 = (_OWORD *)a2;
      v9 = DynArrayImpl<0>::Grow(a1, 0x48u, 1, 0, (unsigned __int64 *)&v13);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xC2u, 0LL);
      }
      else
      {
        v10 = *(_QWORD *)a1;
        v11 = v13;
        v12 = (unsigned int)(72 * *(_DWORD *)(a1 + 24));
        *(_OWORD *)(v12 + v10) = *v13;
        *(_OWORD *)(v12 + v10 + 16) = v11[1];
        *(_OWORD *)(v12 + v10 + 32) = v11[2];
        *(_OWORD *)(v12 + v10 + 48) = v11[3];
        *(_QWORD *)(v12 + v10 + 64) = *((_QWORD *)v11 + 8);
        ++*(_DWORD *)(a1 + 24);
      }
    }
    else
    {
      v6 = 9 * v2;
      v7 = *(_QWORD *)a1;
      *(_OWORD *)(v7 + 8 * v6) = *(_OWORD *)a2;
      *(_OWORD *)(v7 + 8 * v6 + 16) = *(_OWORD *)(a2 + 16);
      *(_OWORD *)(v7 + 8 * v6 + 32) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(v7 + 8 * v6 + 48) = *(_OWORD *)(a2 + 48);
      *(_QWORD *)(v7 + 8 * v6 + 64) = *(_QWORD *)(a2 + 64);
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  return v5;
}
