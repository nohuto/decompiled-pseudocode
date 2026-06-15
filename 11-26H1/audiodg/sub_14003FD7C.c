/*
 * XREFs of sub_14003FD7C @ 0x14003FD7C
 * Callers:
 *     sub_1400A7170 @ 0x1400A7170 (sub_1400A7170.c)
 *     sub_1400A7640 @ 0x1400A7640 (sub_1400A7640.c)
 * Callees:
 *     sub_1400AC500 @ 0x1400AC500 (sub_1400AC500.c)
 */

void __fastcall sub_14003FD7C(int *a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // eax

  if ( a4 >= 0 )
  {
    *a1 = 0;
    a1[1] = 1;
    return;
  }
  if ( a4 != -2005139358 )
    goto LABEL_7;
  v5 = *a1 + 1;
  *a1 = v5;
  if ( v5 == a1[1] )
  {
    sub_1400AC500(a2, 191LL);
    a1[1] *= 2;
    return;
  }
  if ( !(_BYTE)v5 )
LABEL_7:
    sub_1400AC500(a2, 191LL);
}
