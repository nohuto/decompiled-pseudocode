/*
 * XREFs of ?IsRunning@StubImmersiveApplication@@UEAAJPEAH@Z @ 0x180306840
 * Callers:
 *     ?GetTrustLevel@CortanaSharedExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180372EC0 (-GetTrustLevel@CortanaSharedExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@UndockedSearchAppExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1803B4A80 (-GetTrustLevel@UndockedSearchAppExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StubImmersiveApplication::IsRunning(StubImmersiveApplication *this, int *a2)
{
  *a2 = 1;
  return 0LL;
}
