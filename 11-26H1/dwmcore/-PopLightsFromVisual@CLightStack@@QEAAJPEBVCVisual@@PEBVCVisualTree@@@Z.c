/*
 * XREFs of ?PopLightsFromVisual@CLightStack@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z @ 0x180134B50
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088B00 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A01C4 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLightStack::PopLightsFromVisual(
        CLightStack *this,
        const struct CVisual *a2,
        const struct CVisualTree *a3)
{
  char *v7; // r14
  int v8; // r15d
  __int64 i; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  _BYTE *v12; // rcx
  __int128 v13; // xmm0
  __int64 v14; // rax
  _DWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  char v16; // [rsp+28h] [rbp-20h] BYREF

  if ( (unsigned int)((__int64)(*((_QWORD *)a2 + 34) - *((_QWORD *)a2 + 33)) >> 3)
    || (unsigned int)((__int64)(*((_QWORD *)a2 + 37) - *((_QWORD *)a2 + 36)) >> 3) )
  {
    v7 = (char *)v15;
    v15[0] = 0;
    v15[1] = 1;
    while ( v7 != &v16 )
    {
      v8 = *(_DWORD *)v7;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v10 = v8 ? *((_QWORD *)a2 + 37) - *((_QWORD *)a2 + 36) : *((_QWORD *)a2 + 34) - *((_QWORD *)a2 + 33);
        if ( (unsigned int)i >= (unsigned int)(v10 >> 3) )
          break;
        if ( v8 )
          v11 = *((_QWORD *)a2 + 37) - *((_QWORD *)a2 + 36);
        else
          v11 = *((_QWORD *)a2 + 34) - *((_QWORD *)a2 + 33);
        if ( (unsigned int)i < (unsigned int)(v11 >> 3) )
        {
          if ( v8 )
            v14 = *((_QWORD *)a2 + 36);
          else
            v14 = *((_QWORD *)a2 + 33);
          v12 = *(_BYTE **)(8 * i + v14);
        }
        else
        {
          v12 = 0LL;
        }
        if ( v12[80] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, const struct CVisualTree *, const struct CVisual *))(*(_QWORD *)v12 + 248LL))(
                 v12,
                 a3,
                 a2) )
          {
            v13 = *(_OWORD *)(*((_QWORD *)this + 1) + 16LL * (unsigned int)--*((_DWORD *)this + 8));
            if ( (_QWORD)v13 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 16LL))(v13);
          }
        }
      }
      v7 += 4;
    }
  }
  return 0LL;
}
