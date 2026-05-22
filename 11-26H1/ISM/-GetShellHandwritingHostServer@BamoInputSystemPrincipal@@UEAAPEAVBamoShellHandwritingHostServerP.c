/*
 * XREFs of ?GetShellHandwritingHostServer@BamoInputSystemPrincipal@@UEAAPEAVBamoShellHandwritingHostServerPrincipal@@XZ @ 0x1801310B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoShellHandwritingHostServerPrincipal *__fastcall BamoInputSystemPrincipal::GetShellHandwritingHostServer(
        BamoInputSystemPrincipal *this)
{
  return (struct BamoShellHandwritingHostServerPrincipal *)*((_QWORD *)this + 18);
}
