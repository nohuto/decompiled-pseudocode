/*
 * XREFs of sub_140049900 @ 0x140049900
 * Callers:
 *     sub_1400497F0 @ 0x1400497F0 (sub_1400497F0.c)
 *     sub_14004982C @ 0x14004982C (sub_14004982C.c)
 * Callees:
 *     <none>
 */

int sub_140049900()
{
  if ( qword_1400E7D18 )
    return sub_1400B6010(&unk_1400E7CD8);
  SetEvent(hEvent);
  return ResetEvent(hEvent);
}
