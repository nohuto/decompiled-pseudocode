/*
 * XREFs of sub_14002A930 @ 0x14002A930
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14002AAF4 @ 0x14002AAF4 (sub_14002AAF4.c)
 */

__int64 __fastcall sub_14002A930(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // edx
  int v7; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a4 )
  {
    v7 = -2147467261;
    v6 = 19;
    goto LABEL_10;
  }
  *a4 = 0LL;
  v4 = *a2 - 0x456E09F98B8008AFLL;
  if ( *a2 == 0x456E09F98B8008AFLL )
    v4 = a2[1] + 0x1843667B4A428C5FLL;
  if ( v4 )
  {
    v5 = *a2 - 0x4C126899458C1A1FLL;
    if ( *a2 == 0x4C126899458C1A1FLL )
      v5 = a2[1] - 0x43125ACE6E2AC99LL;
    if ( v5 )
    {
      v6 = 35;
LABEL_9:
      v7 = -2147418113;
LABEL_10:
      sub_14000C2A8((int)retaddr, v6, (int)"avcore\\audiocore\\server\\audiodg\\exe\\aposerviceprovider.cpp", v7);
      return (unsigned int)v7;
    }
    v10 = *a3 - 0x4B57955BACD65E2FLL;
    if ( *a3 == 0x4B57955BACD65E2FLL )
      v10 = a3[1] + 0x36AD4884D6534047LL;
    if ( v10 )
    {
      v6 = 30;
      goto LABEL_9;
    }
    v7 = sub_14002AAF4(a1, a3, a4);
    if ( v7 < 0 )
    {
      v6 = 31;
      goto LABEL_10;
    }
  }
  else
  {
    v9 = *a3 - 0x47081745698F0107LL;
    if ( *a3 == 0x47081745698F0107LL )
      v9 = a3[1] - 0x652AA67844D8A595LL;
    if ( v9 )
    {
      v6 = 25;
      goto LABEL_9;
    }
    v7 = sub_14002AAF4(a1, a3, a4);
    if ( v7 < 0 )
    {
      v6 = 26;
      goto LABEL_10;
    }
  }
  return 0LL;
}
