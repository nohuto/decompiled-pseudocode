/*
 * XREFs of ?consume@?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@QEAAX_J@Z @ 0x1800182D0
 * Callers:
 *     ?clear_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@IEAAX_K0@Z @ 0x1800181E8 (-clear_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBack.c)
 *     ?reserve_region@?$vector_facade@PEAVCBlurredBackdropCache@@V?$pointer_buffer_impl@PEAVCBlurredBackdropCache@@$0A@@detail@@@detail@@IEAAPEAPEAVCBlurredBackdropCache@@_K0@Z @ 0x1800188D8 (-reserve_region@-$vector_facade@PEAVCBlurredBackdropCache@@V-$pointer_buffer_impl@PEAVCBlurredBa.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

void __fastcall detail::pointer_buffer_impl<CBlurredBackdropCache *,0>::consume(_QWORD *a1, __int64 a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    if ( (*a1 & 3) == 0 )
      goto LABEL_8;
    if ( (*a1 & 3LL) == 1 )
    {
      *(_QWORD *)((*a1 & 0xFFFFFFFFFFFFFFFCuLL) - 16) += a2;
      return;
    }
    if ( (*a1 & 3LL) != 2 )
    {
      if ( (*a1 & 3LL) != 3 )
        ModuleFailFastForHRESULT(-2147418113, retaddr);
      if ( a2 != 1 )
LABEL_8:
        *a1 = 2LL;
    }
  }
}
