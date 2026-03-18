/*
 * XREFs of ?CheckAccess@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0@Z @ 0x14016C410
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x14006D78C (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 */

char __fastcall UIPrivilegeIsolation::CheckAccess(
        UIPrivilegeIsolation *this,
        const struct tagUIPI_INFO *a2,
        const struct tagUIPI_INFO *a3)
{
  return UIPrivilegeIsolation::CheckAccessEx(this, a2, 0LL);
}
