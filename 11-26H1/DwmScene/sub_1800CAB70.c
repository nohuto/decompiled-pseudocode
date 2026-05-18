/*
 * XREFs of sub_1800CAB70 @ 0x1800CAB70
 * Callers:
 *     sub_1800CEA90 @ 0x1800CEA90 (sub_1800CEA90.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1800CAB70(_DWORD *a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx

  a1[1] = a2;
  *a1 = 0;
  a1[2] = 0;
  v2 = a2 - 1;
  if ( !v2 )
    goto LABEL_7;
  v3 = v2 - 1;
  if ( !v3 )
    goto LABEL_9;
  v4 = v3 - 1;
  if ( !v4 )
  {
LABEL_7:
    a1[3] = 0;
    return a1;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
LABEL_9:
    *(_QWORD *)(a1 + 3) = 0LL;
    a1[5] = -1;
    return a1;
  }
  if ( v5 == 2 )
  {
    a1[4] = -1;
    goto LABEL_7;
  }
  return a1;
}
