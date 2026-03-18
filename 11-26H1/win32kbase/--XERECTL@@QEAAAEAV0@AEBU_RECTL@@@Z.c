/*
 * XREFs of ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x140133E68
 * Callers:
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140013030 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

int *__fastcall ERECTL::operator*=(int *a1, int *a2)
{
  int v2; // r8d
  int v4; // eax
  int v5; // r9d
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // r11d

  v2 = *a1;
  v4 = *a2;
  if ( *a2 > *a1 )
  {
    *a1 = v4;
    v2 = v4;
  }
  v5 = a1[1];
  v6 = a2[1];
  if ( v6 > v5 )
  {
    a1[1] = v6;
    v5 = v6;
  }
  v7 = a1[2];
  v8 = a2[2];
  if ( v8 < v7 )
  {
    a1[2] = v8;
    v7 = v8;
  }
  v9 = a1[3];
  v10 = a2[3];
  if ( v10 < v9 )
  {
    a1[3] = v10;
    v9 = v10;
  }
  if ( v7 < v2 )
  {
    *a1 = v7;
  }
  else if ( v9 < v5 )
  {
    a1[1] = v9;
  }
  return a1;
}
