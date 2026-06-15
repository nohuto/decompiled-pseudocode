/*
 * XREFs of sub_1400B4600 @ 0x1400B4600
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004671C @ 0x14004671C (sub_14004671C.c)
 */

__int64 sub_1400B4600()
{
  if ( dword_1400E8870 == 72 )
  {
    sub_14004671C(&qword_1400E88A8);
    DeleteCriticalSection(&stru_1400E8878);
    dword_1400E8870 = 0;
  }
  return sub_14004671C(&qword_1400E88A8);
}
