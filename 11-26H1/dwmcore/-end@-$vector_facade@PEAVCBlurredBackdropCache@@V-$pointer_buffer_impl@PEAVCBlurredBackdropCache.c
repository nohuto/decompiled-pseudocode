/*
 * XREFs of ?end@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCBlurredBackdropCache@@@2@XZ @ 0x18001879C
 * Callers:
 *     ?RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x1800185FC (-RegisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@IEAAPEAPEAVCBlurredBackdropCache@@_K0@Z @ 0x1800188D8 (-reserve_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBa.c)
 *     ?UnregisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z @ 0x18015992C (-UnregisterBlurCache@CBackdropVisualImage@@QEAAXPEAVCBlurredBackdropCache@@@Z.c)
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x1801D14CC (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z.c)
 * Callees:
 *     ?first@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdropCache@@XZ @ 0x18000E710 (-first@-$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEBAPEAPEAVCBlurredBackdrop.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall detail::vector_facade<CBlurredBackdropCache *,detail::pointer_buffer_impl<CBlurredBackdropCache *,0>>::end(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  v4 = *a1 & 3LL;
  if ( v4 )
  {
    if ( (*(_DWORD *)a1 & 3) == 1LL )
    {
      v5 = *a1 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_10:
      v2 = *(_QWORD *)(detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::first(a1) - 16);
      goto LABEL_11;
    }
    if ( (*(_DWORD *)a1 & 3) == 2LL )
    {
      v5 = 0LL;
      goto LABEL_11;
    }
    if ( (*(_DWORD *)a1 & 3) != 3LL )
      ModuleFailFastForHRESULT(-2147418113, retaddr);
  }
  v5 = (unsigned __int64)a1;
  if ( !v4 )
  {
    v2 = 1LL;
    goto LABEL_11;
  }
  v6 = v4 - 1;
  if ( !v6 )
    goto LABEL_10;
  if ( (unsigned __int64)(v6 - 1) >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
LABEL_11:
  *a2 = v5 + 8 * v2;
  return a2;
}
