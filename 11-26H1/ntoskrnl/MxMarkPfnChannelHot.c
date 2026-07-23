/*
 * XREFs of MxMarkPfnChannelHot @ 0x140CFE504
 * Callers:
 *     MxMapVa @ 0x140CFE330 (MxMapVa.c)
 * Callees:
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiPageToChannel @ 0x140294DD0 (MiPageToChannel.c)
 */

void __fastcall MxMarkPfnChannelHot(ULONG_PTR a1)
{
  __int64 v2; // rbx

  if ( qword_140E2D868 )
  {
    v2 = (unsigned int)MiPageToNode(a1);
    LOBYTE(qword_141000FB8[250 * v2]) |= 1 << MiPageToChannel(a1);
  }
}
