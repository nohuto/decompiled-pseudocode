/*
 * XREFs of ?IsValid@CSwapChainRealization@@UEBAJXZ @ 0x1802ADE60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSwapChainRealization::IsValid(CSwapChainRealization *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx

  v1 = *((_QWORD *)this + 33);
  if ( v1 )
  {
    return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292412, 0x4Bu, 0LL);
  }
  return v2;
}
