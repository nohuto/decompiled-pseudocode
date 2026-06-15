/*
 * XREFs of ?GetActiveRenderStreamCount@CApplication@@IEAAIK@Z @ 0x18002D5FC
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180015CB0 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x1800224E0 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::GetActiveRenderStreamCount(CApplication *this)
{
  unsigned int v2; // esi
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  _QWORD *v4; // rbx
  CProcess *v5; // rcx

  v2 = 0;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v4 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v4 )
  {
    v5 = (CProcess *)v4[2];
    v4 = (_QWORD *)*v4;
    if ( !*((_DWORD *)v5 + 104) )
      v2 += CProcess::GetActiveRenderStreamCount(v5, 2u);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v2;
}
