/*
 * XREFs of ?HandleApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804E2C10
 * Callers:
 *     _lambda_c50edb546f97258990e484aed70b6f7b_::operator() @ 0x1804E1C44 (_lambda_c50edb546f97258990e484aed70b6f7b_--operator().c)
 *     ?HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ @ 0x1804E2EFC (-HandleViewRecovery@GamingPosturePositioner@@AEAAXXZ.c)
 * Callees:
 *     ?IsWin32ApplicationView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1804DE9E4 (-IsWin32ApplicationView@GamingPosturePositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?HandleUwpApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804E2D00 (-HandleUwpApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1804E31E0 (-HandleWin32ApplicationView@GamingPosturePositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 */

void __fastcall GamingPosturePositioner::HandleApplicationView(
        GamingPosturePositioner *this,
        struct IApplicationView *a2)
{
  if ( GamingPosturePositioner::IsWin32ApplicationView(this, a2) )
    GamingPosturePositioner::HandleWin32ApplicationView(this, a2);
  else
    GamingPosturePositioner::HandleUwpApplicationView(this, a2);
}
