/*
 * XREFs of sub_14002AA60 @ 0x14002AA60
 * Callers:
 *     sub_140054B60 @ 0x140054B60 (sub_140054B60.c)
 *     sub_140054B70 @ 0x140054B70 (sub_140054B70.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14002AAF4 @ 0x14002AAF4 (sub_14002AAF4.c)
 */

__int64 __fastcall sub_14002AA60(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // ebx
  int v5; // edx
  __int64 v7; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    v4 = -2147467261;
    v5 = 135;
    goto LABEL_6;
  }
  v3 = *a2 - 0x47081745698F0107LL;
  if ( *a2 == 0x47081745698F0107LL )
    v3 = a2[1] - 0x652AA67844D8A595LL;
  if ( !v3 )
    goto LABEL_5;
  v7 = *a2 - 0x4B57955BACD65E2FLL;
  if ( *a2 == 0x4B57955BACD65E2FLL )
    v7 = a2[1] + 0x36AD4884D6534047LL;
  if ( !v7 )
  {
LABEL_5:
    v4 = -2147467262;
    v5 = 137;
LABEL_6:
    sub_14000C2A8((int)retaddr, v5, (int)"avcore\\audiocore\\server\\audiodg\\exe\\aposerviceprovider.cpp", v4);
    return (unsigned int)v4;
  }
  v4 = sub_14002AAF4(a1, a2, a3);
  if ( v4 < 0 )
  {
    v5 = 139;
    goto LABEL_6;
  }
  return 0LL;
}
