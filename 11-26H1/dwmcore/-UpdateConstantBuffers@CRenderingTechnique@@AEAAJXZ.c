/*
 * XREFs of ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x1800FDBE0
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800FE020 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180069080 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?pop_back@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAXXZ @ 0x1800FDBC4 (-pop_back@-$vector@UFragmentStackEntry@CFragmentIterator@@V-$allocator@UFragmentStackEntry@CFrag.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800FDFB0 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1801513C8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x1802B39A4 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderingTechnique::UpdateConstantBuffers(
        CRenderingTechnique *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // r14
  _BYTE *v6; // rcx
  char *v7; // rdx
  unsigned int *v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned int v11; // r14d
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // r13
  int v17; // eax
  int v18; // r15d
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // r15d
  _OWORD *v23; // r15
  _BYTE *v24; // rcx
  char *v25; // rdx
  unsigned __int64 v26; // rdx
  unsigned int i; // r8d
  int v28; // eax
  __int64 v29; // rcx
  unsigned int *v30; // r12
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  unsigned int v35; // ecx
  __int128 v36; // [rsp+40h] [rbp-40h] BYREF
  void *v37[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v38; // [rsp+60h] [rbp-20h]
  void *v39[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v40; // [rsp+78h] [rbp-8h]
  unsigned __int64 v41; // [rsp+C0h] [rbp+40h] BYREF
  void *v42; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v43; // [rsp+D0h] [rbp+50h]

  v4 = *((_BYTE *)this + 276);
  if ( v4 )
    goto LABEL_16;
  *(_QWORD *)&v36 = *((_QWORD *)this + 1);
  v38 = 0LL;
  *(_OWORD *)v37 = 0LL;
  DWORD2(v36) = 0;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
    v37,
    &v36,
    a3,
    a4);
LABEL_3:
  CFragmentIterator::FindFirst((CFragmentIterator *)v37);
  v6 = v37[0];
  v7 = (char *)v37[1];
  while ( (v7 - v6) >> 4 )
  {
    v8 = (unsigned int *)*((_QWORD *)v7 - 2);
    if ( v8[5]
      && v8[6] != (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v8 + 80LL))(*(_QWORD *)v8, v8[4]) )
    {
      v6 = v37[0];
      v4 = 1;
      break;
    }
    std::vector<CFragmentIterator::FragmentStackEntry>::pop_back((__int64)v37);
    v7 = (char *)v37[1];
    v6 = v37[0];
    if ( ((char *)v37[1] - (char *)v37[0]) >> 4 )
    {
      ++*((_DWORD *)v37[1] - 2);
      goto LABEL_3;
    }
  }
  if ( v6 )
  {
    v42 = v6;
    v9 = (v38 - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL;
    v41 = v9;
    if ( v9 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v42, &v41);
      v9 = v41;
      v6 = v42;
    }
    operator delete(v6, v9);
  }
  if ( v4 )
  {
LABEL_16:
    v11 = 0;
    v12 = (__int64)(*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) >> 3;
    while ( v11 < (unsigned int)v12 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v11);
      v14 = *(_QWORD *)(v13 + 40);
      v15 = *(_QWORD *)(v13 + 120);
      v43 = v15;
      v16 = *(_QWORD *)(v14 + 80);
      v36 = 0LL;
      if ( *(_DWORD *)(v16 + 1124) )
      {
        v18 = -2003304307;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0xA2Au, 0LL);
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, __int128 *))(**(_QWORD **)(v16 + 552)
                                                                                              + 112LL))(
                *(_QWORD *)(v16 + 552),
                v15,
                0LL,
                4LL,
                0,
                &v36);
        v18 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0xA30u, 0LL);
      }
      v19 = CD3DDevice::TranslateDXGIorD3DErrorInContext(v16, v18, 0);
      v22 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x297u, 0LL);
        return v22;
      }
      v23 = (_OWORD *)v36;
      if ( *((_DWORD *)this + 64) )
      {
        v37[0] = *((void **)this + 1);
        v40 = 0LL;
        *(_OWORD *)v39 = 0LL;
        LODWORD(v37[1]) = 0;
        std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
          v39,
          v37,
          v20,
          v21);
LABEL_24:
        CFragmentIterator::FindFirst((CFragmentIterator *)v39);
        v24 = v39[0];
        v25 = (char *)v39[1];
        while ( (v25 - v24) >> 4 )
        {
          v30 = (unsigned int *)*((_QWORD *)v25 - 2);
          if ( v30[5] )
          {
            v31 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v30 + 80LL))(*(_QWORD *)v30, v30[4]);
            v32 = *(_QWORD *)v30;
            v33 = v30[5];
            v34 = v30[4];
            v30[6] = v31;
            (*(void (__fastcall **)(__int64, __int64, __int64, _OWORD *))(*(_QWORD *)v32 + 72LL))(v32, v34, v33, v23);
          }
          v35 = v30[5];
          if ( (v35 & 0xF) != 0 )
            v35 = v35 - (v30[5] & 0xF) + 16;
          v23 = (_OWORD *)((char *)v23 + v35);
          std::vector<CFragmentIterator::FragmentStackEntry>::pop_back((__int64)v39);
          v25 = (char *)v39[1];
          v24 = v39[0];
          if ( ((char *)v39[1] - (char *)v39[0]) >> 4 )
          {
            ++*((_DWORD *)v39[1] - 2);
            goto LABEL_24;
          }
        }
        if ( v24 )
        {
          v42 = v24;
          v26 = (v40 - (_QWORD)v24) & 0xFFFFFFFFFFFFFFF0uLL;
          v41 = v26;
          if ( v26 >= 0x1000 )
          {
            std::_Adjust_manually_vector_aligned(&v42, &v41);
            v26 = v41;
            v24 = v42;
          }
          operator delete(v24, v26);
        }
        v15 = v43;
      }
      if ( *((_DWORD *)this + 68) )
      {
        for ( i = 0; i < *((_DWORD *)this + 65); ++i )
        {
          v28 = *((_DWORD *)this + 67);
          if ( _bittest(&v28, i) )
          {
            v29 = 44LL * i;
            *v23 = *(_OWORD *)((char *)this + v29 + 92);
            v23[1] = *(_OWORD *)((char *)this + v29 + 108);
            v23 += 2;
          }
        }
      }
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v16 + 552) + 120LL))(
        *(_QWORD *)(v16 + 552),
        v15,
        0LL);
      ++v11;
    }
  }
  *((_BYTE *)this + 276) = 0;
  return 0LL;
}
