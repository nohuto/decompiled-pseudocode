/*
 * XREFs of ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1403B5DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkUnreferenceDxgResource(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection(a1 + 9);
}
