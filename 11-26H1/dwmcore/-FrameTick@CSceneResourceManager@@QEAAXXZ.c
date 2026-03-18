/*
 * XREFs of ?FrameTick@CSceneResourceManager@@QEAAXXZ @ 0x180192218
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x180046630 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSceneResourceManager::FrameTick(CSceneResourceManager *this)
{
  __int64 v1; // rbx
  __int64 v3; // rbx
  unsigned __int64 FrameTargetTime; // rax
  _QWORD *v5; // rsi
  unsigned __int64 v6; // rbp
  _QWORD *i; // rdi

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 120);
    if ( v3 )
    {
      FrameTargetTime = CComposition::GetFrameTargetTime(*((CComposition **)this + 1));
      v5 = (_QWORD *)*((_QWORD *)this + 6);
      v6 = FrameTargetTime;
      for ( i = (_QWORD *)*((_QWORD *)this + 5); i != v5; ++i )
        (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)*i + 16LL))(*i, v3, v6);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 96LL))(v3);
    }
  }
}
