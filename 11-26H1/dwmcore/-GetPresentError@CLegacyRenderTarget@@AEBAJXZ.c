/*
 * XREFs of ?GetPresentError@CLegacyRenderTarget@@AEBAJXZ @ 0x1801A1D34
 * Callers:
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1801FBF80 (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?Present@CLegacyRenderTarget@@IEAAJXZ @ 0x18025303C (-Present@CLegacyRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetPresentError(CLegacyRenderTarget *this)
{
  char v1; // bl
  __int64 v2; // rax
  int v3; // ecx
  __int64 result; // rax

  v1 = *((_BYTE *)this + 32513);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 25) + 24LL) + 40LL))(*((_QWORD *)this + 25) + 24LL);
  if ( v1 )
    return 2291663061LL;
  v3 = *(_DWORD *)(v2 + 904);
  switch ( v3 )
  {
    case 32902:
      return 2291663057LL;
    case 4318:
      return 2291663059LL;
    case 4098:
      return 2291663058LL;
  }
  result = 2291663060LL;
  if ( v3 != 1297040209 )
    return 2291663056LL;
  return result;
}
