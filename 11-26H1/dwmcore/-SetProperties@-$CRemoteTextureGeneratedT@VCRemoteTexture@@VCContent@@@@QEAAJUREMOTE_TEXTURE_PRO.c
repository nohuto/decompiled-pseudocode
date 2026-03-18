/*
 * XREFs of ?SetProperties@?$CRemoteTextureGeneratedT@VCRemoteTexture@@VCContent@@@@QEAAJUREMOTE_TEXTURE_PROPERTIES@@@Z @ 0x18021F7AC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRemoteTextureGeneratedT<CRemoteTexture,CContent>::SetProperties(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 80) = v2;
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, 0LL, 0LL);
  return 0LL;
}
