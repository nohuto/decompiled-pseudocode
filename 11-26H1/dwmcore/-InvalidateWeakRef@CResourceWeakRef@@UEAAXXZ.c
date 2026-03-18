/*
 * XREFs of ?InvalidateWeakRef@CResourceWeakRef@@UEAAXXZ @ 0x1800E8A10
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800E8B50 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CResourceWeakRef::InvalidateWeakRef(CResourceWeakRef *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  _QWORD *v3; // r14
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rbx
  char *v6; // rsi
  _QWORD *i; // rbx
  SIZE_T size_of; // rax
  char *v9; // rax
  __int64 v10; // rdi
  void *v11; // rbx

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v3 = 0LL;
  v4 = 0LL;
  v5 = (__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) >> 3;
  v6 = 0LL;
  if ( v5 )
  {
    if ( v5 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
    size_of = std::_Get_size_of_n<8>((__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) >> 3);
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
    v10 = *((_QWORD *)this + 10);
    v3 = v9;
    v6 = &v9[8 * v5];
    v11 = (void *)*((_QWORD *)this + 9);
    std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
      v11,
      v10,
      v9);
    v4 = &v3[(v10 - (__int64)v11) >> 3];
  }
  EnterCriticalSection(v1);
  *((_QWORD *)this + 7) = 0LL;
  if ( v1 )
    LeaveCriticalSection(v1);
  *((_QWORD *)this + 8) = 0LL;
  LeaveCriticalSection(v1);
  for ( i = v3; i != v4; ++i )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 80LL))(*i, 0LL, 0LL);
  if ( v3 )
    std::_Deallocate<16>(v3, (v6 - (char *)v3) & 0xFFFFFFFFFFFFFFF8uLL);
}
