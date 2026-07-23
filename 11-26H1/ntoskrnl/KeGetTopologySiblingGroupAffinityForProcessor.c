/*
 * XREFs of KeGetTopologySiblingGroupAffinityForProcessor @ 0x140484898
 * Callers:
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetTopologySiblingGroupAffinityForProcessor(__int64 a1, int a2, _OWORD *a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 result; // rax
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int128 v9; // [rsp+0h] [rbp-18h]

  v3 = *(unsigned __int8 *)(a1 + 208);
  v4 = 0LL;
  v9 = 0LL;
  if ( !a2 )
  {
    result = *(_QWORD *)(a1 + 200);
    goto LABEL_4;
  }
  if ( a2 == 1 )
  {
    result = *(_QWORD *)(a1 + 36512);
LABEL_4:
    *(_QWORD *)&v9 = result;
    goto LABEL_5;
  }
  v6 = a2 - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
          __fastfail(5u);
        result = 47424LL;
      }
      else
      {
        result = 35920LL;
      }
    }
    else
    {
      result = 40192LL;
    }
  }
  else
  {
    result = 40784LL;
  }
  if ( (unsigned __int16)v3 < *(_WORD *)(result + a1) )
    v4 = *(_QWORD *)(result + a1 + 8 * v3 + 8);
  *(_QWORD *)&v9 = v4;
LABEL_5:
  WORD4(v9) = *(unsigned __int8 *)(a1 + 208);
  *a3 = v9;
  return result;
}
