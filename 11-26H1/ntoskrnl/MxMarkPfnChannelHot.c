/*
 * XREFs of MxMarkPfnChannelHot @ 0x140CF8184
 * Callers:
 *     MxMapVa @ 0x140CF7FB0 (MxMapVa.c)
 * Callees:
 *     MiPageToNode @ 0x140289710 (MiPageToNode.c)
 *     MiPageToChannel @ 0x140295870 (MiPageToChannel.c)
 */

void __fastcall MxMarkPfnChannelHot(ULONG_PTR a1)
{
  __int64 v2; // rbx

  if ( qword_140E2D6E8 )
  {
    v2 = (unsigned int)MiPageToNode(a1);
    LOBYTE(qword_140FFFFB8[250 * v2]) |= 1 << MiPageToChannel(a1);
  }
}
