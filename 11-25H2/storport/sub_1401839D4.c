/*
 * XREFs of sub_1401839D4 @ 0x1401839D4
 * Callers:
 *     sub_140178190 @ 0x140178190 (sub_140178190.c)
 * Callees:
 *     sub_1400BB2E0 @ 0x1400BB2E0 (sub_1400BB2E0.c)
 */

void sub_1401839D4()
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx

  if ( byte_140168DD0 == 1 )
  {
    v0 = qword_140168208;
    qword_140168208 = 0LL;
    dword_1401681E8 = 0;
    EtwUnregister(v0);
    byte_140168DD0 = 0;
  }
  if ( byte_140168DD1 == 1 )
  {
    v1 = qword_1401681D0;
    qword_1401681D0 = 0LL;
    dword_1401681B0 = 0;
    EtwUnregister(v1);
    byte_140168DD1 = 0;
  }
  if ( byte_140168DD2 == 1 )
  {
    KeCancelTimer(&stru_140168E60);
    KeCancelTimer(&stru_140168F60);
    if ( dword_1401684A8 || dword_140168478 )
      KeCancelTimer(&stru_140168EE0);
    if ( dword_140168498 )
      KeCancelTimer(&stru_140169020);
    KeCancelTimer(&Timer);
    v2 = qword_140168198;
    qword_140168198 = 0LL;
    dword_140168178 = 0;
    EtwUnregister(v2);
    sub_1400BB2E0();
    byte_140168DD2 = 0;
    KeFlushQueuedDpcs();
  }
}
