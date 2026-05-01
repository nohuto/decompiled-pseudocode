/*
 * XREFs of ?AllowClose@GamingPosturePositioner@@UEAAJPEAUIApplicationView@@PEAE@Z @ 0x1804E1EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GamingPosturePositioner::AllowClose(
        GamingPosturePositioner *this,
        struct IApplicationView *a2,
        bool *a3)
{
  *a3 = *((_BYTE *)this + 584) == 0;
  return 0LL;
}
