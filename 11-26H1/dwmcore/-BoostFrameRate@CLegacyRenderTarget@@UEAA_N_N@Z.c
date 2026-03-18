/*
 * XREFs of ?BoostFrameRate@CLegacyRenderTarget@@UEAA_N_N@Z @ 0x1801E7D70
 * Callers:
 *     <none>
 * Callees:
 *     ?BoostVBlankForGameContent@COverlayContext@@QEBA_NXZ @ 0x180239270 (-BoostVBlankForGameContent@COverlayContext@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CLegacyRenderTarget::BoostFrameRate(CLegacyRenderTarget *this, char a2)
{
  __int64 v2; // r8
  char v4; // al
  __int64 v6; // r8
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 5);
  if ( !v2 )
    return 0;
  if ( a2 )
  {
    v7 = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(v2 + 24) + 264LL))(v2 + 24, &v7)
      || v7 <= 1 )
    {
      return 0;
    }
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 5) + 24LL) + 280LL))(
           *((_QWORD *)this + 5) + 24LL,
           v7,
           0LL);
  }
  else
  {
    if ( COverlayContext::BoostVBlankForGameContent((CLegacyRenderTarget *)((char *)this + 56)) )
      return 0;
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v6 + 24) + 280LL))(v6 + 24, 0LL, 0LL);
  }
  if ( !v4 )
    return 0;
  *((_BYTE *)this + 32352) = 1;
  return 1;
}
