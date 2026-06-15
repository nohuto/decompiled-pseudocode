/*
 * XREFs of sub_14004855C @ 0x14004855C
 * Callers:
 *     sub_1400B076A @ 0x1400B076A (sub_1400B076A.c)
 *     sub_1400B35FA @ 0x1400B35FA (sub_1400B35FA.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_14004855C(char *a1)
{
  char v1; // al

  v1 = *a1;
  *a1 = 0;
  if ( v1 )
    CoUninitialize();
}
