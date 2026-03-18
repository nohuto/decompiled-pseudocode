/*
 * XREFs of ?DxEngSetPaletteState@@YAHPEAUHPALETTE__@@K_K@Z @ 0x1401AAB58
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1401A9910 (DxgkEngBltViaGDI.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1401AA4B0 (NtGdiDdDDICreateDCFromMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxEngSetPaletteState(Gre::Base *a1)
{
  unsigned int v2; // edi
  struct Gre::Base::SESSION_GLOBALS *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  Gre::Base *v6; // rcx
  __int64 v7; // rbx
  struct Gre::Base::SESSION_GLOBALS *v8; // rax

  v2 = 0;
  v3 = Gre::Base::Globals(a1);
  LOBYTE(v4) = 8;
  v5 = HmgShareLock(v3, a1, v4, 0LL);
  v7 = v5;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 24) |= 0x8000u;
    v2 = 1;
    v8 = Gre::Base::Globals(v6);
    DEC_SHARE_REF_CNT(v8, v7);
  }
  return v2;
}
