/*
 * XREFs of ?GetTrustLevel@UndockedSearchAppExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1803AC050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UndockedSearchAppExperienceManager::GetTrustLevel(__int64 a1, int *a2)
{
  return StubImmersiveApplication::IsRunning((StubImmersiveApplication *)(a1 - 24), a2);
}
