/*
 * XREFs of ?InitializePagingHistory@VIDMM_GLOBAL@@QEAAXK@Z @ 0x1400AC318
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x14009E770 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140037CC0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::InitializePagingHistory(VIDMM_GLOBAL *this, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  if ( a2 )
  {
    v4 = 360LL * a2;
    if ( !is_mul_ok(a2, 0x168uLL) )
      v4 = -1LL;
    v5 = operator new[](v4, 0x6D4D6956u, 64LL);
    *((_QWORD *)this + 979) = v5;
    if ( v5 )
    {
      *((_DWORD *)this + 1956) = a2;
      *((_QWORD *)this + 980) = 0LL;
    }
  }
}
