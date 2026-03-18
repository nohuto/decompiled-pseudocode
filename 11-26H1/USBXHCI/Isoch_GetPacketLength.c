/*
 * XREFs of Isoch_GetPacketLength @ 0x140028AC0
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x140010510 (Isoch_RetrieveNextStage.c)
 *     Isoch_PrepareStage @ 0x140011770 (Isoch_PrepareStage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Isoch_GetPacketLength(__int64 a1, unsigned int a2)
{
  __int64 v2; // r9
  int v3; // eax

  v2 = *(_QWORD *)(a1 + 48) + 140LL;
  if ( a2 == *(_DWORD *)(a1 + 96) - 1 )
    v3 = *(_DWORD *)(a1 + 80);
  else
    v3 = *(_DWORD *)(v2 + 12LL * (a2 + 1));
  return (unsigned int)(v3 - *(_DWORD *)(v2 + 12LL * a2));
}
