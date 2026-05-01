/*
 * XREFs of ?IsRunning@StubImmersiveApplication@@UEAAJPEAH@Z @ 0x18030AAD0
 * Callers:
 *     ?GetTrustLevel@CortanaSharedExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x18036BD10 (-GetTrustLevel@CortanaSharedExperienceManager@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@UndockedSearchAppExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1803AC050 (-GetTrustLevel@UndockedSearchAppExperienceManager@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StubImmersiveApplication::IsRunning(StubImmersiveApplication *this, int *a2)
{
  *a2 = 1;
  return 0LL;
}
