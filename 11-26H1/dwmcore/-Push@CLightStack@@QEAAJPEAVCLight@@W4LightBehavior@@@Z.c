/*
 * XREFs of ?Push@CLightStack@@QEAAJPEAVCLight@@W4LightBehavior@@@Z @ 0x18020A804
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180089340 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLightStack::Push(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int v5; // r8d
  int v6; // ebx
  unsigned int v7; // eax
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  *((_QWORD *)&v9 + 1) = a3;
  v3 = *(_DWORD *)(a1 + 32);
  *(_QWORD *)&v9 = a2;
  v5 = v3 + 1;
  if ( v3 + 1 < v3 )
  {
    v6 = -2147024362;
    v7 = 183;
    goto LABEL_8;
  }
  v6 = 0;
  if ( v5 > *(_DWORD *)(a1 + 28) )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 8, 16, 1, &v9);
    if ( v6 >= 0 )
      goto LABEL_5;
    v7 = 194;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v7, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x20u, 0LL);
    return (unsigned int)v6;
  }
  *(_OWORD *)(*(_QWORD *)(a1 + 8) + 16LL * v3) = v9;
  *(_DWORD *)(a1 + 32) = v5;
LABEL_5:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return (unsigned int)v6;
}
