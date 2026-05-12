/*
 * XREFs of sub_1400BB2E0 @ 0x1400BB2E0
 * Callers:
 *     sub_1400AF078 @ 0x1400AF078 (sub_1400AF078.c)
 *     sub_1401839D4 @ 0x1401839D4 (sub_1401839D4.c)
 * Callees:
 *     <none>
 */

void sub_1400BB2E0()
{
  if ( xmmword_1401690E8 )
    ExFreePoolWithTag(xmmword_1401690E8, 0x65546152u);
  if ( *(&xmmword_1401690E8 + 1) )
    ExFreePoolWithTag(*(&xmmword_1401690E8 + 1), 0x65546152u);
  if ( xmmword_1401690F8 )
    ExFreePoolWithTag(xmmword_1401690F8, 0x65546152u);
  if ( *(&xmmword_1401690F8 + 1) )
    ExFreePoolWithTag(*(&xmmword_1401690F8 + 1), 0x65546152u);
  if ( *((_QWORD *)&xmmword_140169110 + 1) )
    ExFreePoolWithTag(*((PVOID *)&xmmword_140169110 + 1), 0x65546152u);
  if ( xmmword_140169120 )
    ExFreePoolWithTag(xmmword_140169120, 0x65546152u);
  if ( *(&xmmword_140169120 + 1) )
    ExFreePoolWithTag(*(&xmmword_140169120 + 1), 0x65546152u);
  if ( xmmword_140169130 )
    ExFreePoolWithTag(xmmword_140169130, 0x65546152u);
  if ( *((_QWORD *)&xmmword_140169140 + 1) )
    ExFreePoolWithTag(*((PVOID *)&xmmword_140169140 + 1), 0x65546152u);
  if ( xmmword_140169150 )
    ExFreePoolWithTag(xmmword_140169150, 0x65546152u);
  if ( *(&xmmword_140169150 + 1) )
    ExFreePoolWithTag(*(&xmmword_140169150 + 1), 0x65546152u);
  if ( xmmword_140169160 )
    ExFreePoolWithTag(xmmword_140169160, 0x65546152u);
}
