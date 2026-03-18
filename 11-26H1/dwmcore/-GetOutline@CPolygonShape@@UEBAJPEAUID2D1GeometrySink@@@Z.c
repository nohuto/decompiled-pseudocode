/*
 * XREFs of ?GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x1800548C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CPolygonBuilder@@QEAA@XZ @ 0x180054AD8 (--0CPolygonBuilder@@QEAA@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCPolygonBuilder@@V1@@@SAPEAX_K@Z @ 0x180054B14 (-Alloc@-$CThreadLocalObjectCache@VCPolygonBuilder@@V1@@@SAPEAX_K@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180054D24 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@VCMilPoint2F@@@std@@@std@@YAPEAVCMilPoint2F@@PEAV1@_KAEAV?$allocator@VCMilPoint2F@@@0@@Z @ 0x18019A748 (--$_Uninitialized_value_construct_n@V-$allocator@VCMilPoint2F@@@std@@@std@@YAPEAVCMilPoint2F@@PE.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPolygonShape::GetOutline(CPolygonShape *this, struct ID2D1GeometrySink *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  unsigned int *v6; // rcx
  CPolygonBuilder *v8; // rax
  CPolygonBuilder *v9; // rax
  CPolygonBuilder *v10; // rbx
  __int64 v11; // r8
  int v12; // eax
  __int64 *v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  __int64 v17; // rax

  v2 = 0;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 24LL) == *(_QWORD *)(*((_QWORD *)this + 2) + 32LL) )
  {
    v8 = (CPolygonBuilder *)CThreadLocalObjectCache<CPolygonBuilder,CPolygonBuilder>::Alloc();
    if ( !v8 || (v9 = CPolygonBuilder::CPolygonBuilder(v8), (v10 = v9) == 0LL) )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Eu, 0LL);
      return v2;
    }
    (*(void (__fastcall **)(CPolygonBuilder *))(*(_QWORD *)v9 + 8LL))(v9);
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, CPolygonBuilder *))(**(_QWORD **)(*((_QWORD *)this + 2)
                                                                                              + 16LL)
                                                                                + 96LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
            0LL,
            v11,
            v10);
    v2 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x30u, 0LL);
      (*(void (__fastcall **)(CPolygonBuilder *))(*(_QWORD *)v10 + 16LL))(v10);
      return v2;
    }
    v13 = (__int64 *)(*((_QWORD *)this + 2) + 24LL);
    v14 = (unsigned int)((__int64)(*((_QWORD *)v10 + 3) - *((_QWORD *)v10 + 2)) >> 3);
    v15 = *v13;
    v16 = (*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) - *v13) >> 3;
    if ( v14 < v16 )
    {
      v17 = v15 + 8 * v14;
    }
    else
    {
      if ( v14 <= v16 )
      {
LABEL_12:
        memcpy_0(
          *(void **)(*((_QWORD *)this + 2) + 24LL),
          *((const void **)v10 + 2),
          8LL * (unsigned int)((__int64)(*((_QWORD *)v10 + 3) - *((_QWORD *)v10 + 2)) >> 3));
        (*(void (__fastcall **)(CPolygonBuilder *))(*(_QWORD *)v10 + 16LL))(v10);
        goto LABEL_2;
      }
      if ( v14 > (*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) - v15) >> 3 )
      {
        std::vector<CMilPoint2F>::_Resize_reallocate<std::_Value_init_tag>(*((_QWORD *)this + 2) + 24LL);
        goto LABEL_12;
      }
      v17 = std::_Uninitialized_value_construct_n<std::allocator<CMilPoint2F>>(
              *(_QWORD *)(*((_QWORD *)this + 2) + 32LL),
              v14 - v16);
    }
    v13[1] = v17;
    goto LABEL_12;
  }
LABEL_2:
  v5 = *((_QWORD *)this + 2);
  v6 = *(unsigned int **)(v5 + 24);
  if ( (unsigned __int64)((__int64)(*(_QWORD *)(v5 + 32) - (_QWORD)v6) >> 3) >= 3 )
  {
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(*(_QWORD *)a2 + 40LL))(
      a2,
      _mm_unpacklo_ps((__m128)*v6, (__m128)v6[1]).m128_u64[0],
      0LL);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64, _QWORD))(*(_QWORD *)a2 + 48LL))(
      a2,
      *(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 8LL,
      (unsigned int)((__int64)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) - *(_QWORD *)(*((_QWORD *)this + 2) + 24LL)) >> 3)
    - 1);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a2 + 64LL))(a2, 1LL);
  }
  return v2;
}
