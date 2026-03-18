/*
 * XREFs of ApiSetEditionIsCompositionInputWindow @ 0x1400CE2DC
 * Callers:
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1400CE2AC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x140108F24 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAXPEAUTELEMETRY_POINTER_FRAME_TIMES@@H.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionIsCompositionInputWindow(__int64 a1)
{
  unsigned int v2; // ebx
  int (*v3)(void); // rax
  __int64 v4; // rcx
  unsigned int (__fastcall *v5)(__int64); // rax

  v2 = 0;
  v3 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4864LL);
  if ( v3 )
  {
    if ( v3() >= 0 )
    {
      v5 = *(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v4) + 48) + 4872LL);
      if ( v5 )
        return v5(a1);
    }
  }
  return v2;
}
