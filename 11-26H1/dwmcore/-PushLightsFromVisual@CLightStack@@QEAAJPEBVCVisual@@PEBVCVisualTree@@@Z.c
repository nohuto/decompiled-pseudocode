/*
 * XREFs of ?PushLightsFromVisual@CLightStack@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z @ 0x180134900
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071BF0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLightStack::PushLightsFromVisual(
        CLightStack *this,
        const struct CVisual *a2,
        const struct CVisualTree *a3)
{
  __int128 *v7; // r12
  unsigned int v8; // r15d
  __int64 i; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE *v12; // r14
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v15; // r13d
  unsigned int v16; // eax
  __int64 v17; // rax
  _DWORD v18[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+38h] [rbp-40h] BYREF

  if ( !(unsigned int)((__int64)(*((_QWORD *)a2 + 34) - *((_QWORD *)a2 + 33)) >> 3)
    && !(unsigned int)((__int64)(*((_QWORD *)a2 + 37) - *((_QWORD *)a2 + 36)) >> 3) )
  {
    return 0LL;
  }
  v18[0] = 0;
  v7 = (__int128 *)v18;
  v18[1] = 1;
LABEL_5:
  if ( v7 == &v19 )
    return 0LL;
  v8 = *(_DWORD *)v7;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( v8 )
      v10 = *((_QWORD *)a2 + 37) - *((_QWORD *)a2 + 36);
    else
      v10 = *((_QWORD *)a2 + 34) - *((_QWORD *)a2 + 33);
    if ( (unsigned int)i >= (unsigned int)(v10 >> 3) )
    {
      v7 = (__int128 *)((char *)v7 + 4);
      goto LABEL_5;
    }
    v11 = v8 ? *((_QWORD *)a2 + 37) - *((_QWORD *)a2 + 36) : *((_QWORD *)a2 + 34) - *((_QWORD *)a2 + 33);
    if ( (unsigned int)i < (unsigned int)(v11 >> 3) )
    {
      v17 = v8 ? *((_QWORD *)a2 + 36) : *((_QWORD *)a2 + 33);
      v12 = *(_BYTE **)(8 * i + v17);
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12[80]
      && (*(unsigned __int8 (__fastcall **)(_BYTE *, const struct CVisualTree *, const struct CVisual *))(*(_QWORD *)v12 + 248LL))(
           v12,
           a3,
           a2) )
    {
      break;
    }
LABEL_20:
    ;
  }
  *(_QWORD *)&v19 = v12;
  v13 = *((_DWORD *)this + 8);
  *((_QWORD *)&v19 + 1) = v8;
  v14 = v13 + 1;
  if ( v13 + 1 < v13 )
  {
    v15 = -2147024362;
    v16 = 183;
    goto LABEL_25;
  }
  if ( v14 <= *((_DWORD *)this + 7) )
  {
    *(_OWORD *)(*((_QWORD *)this + 1) + 16LL * v13) = v19;
    *((_DWORD *)this + 8) = v14;
LABEL_19:
    (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v12 + 8LL))(v12);
    goto LABEL_20;
  }
  v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 8, 16, 1, &v19);
  if ( v15 >= 0 )
    goto LABEL_19;
  v16 = 194;
LABEL_25:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, v16, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x20u, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x4Bu, 0LL);
  return (unsigned int)v15;
}
