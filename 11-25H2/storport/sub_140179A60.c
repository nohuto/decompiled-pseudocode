/*
 * XREFs of sub_140179A60 @ 0x140179A60
 * Callers:
 *     sub_14017F720 @ 0x14017F720 (sub_14017F720.c)
 * Callees:
 *     sub_1400567A0 @ 0x1400567A0 (sub_1400567A0.c)
 *     sub_140179544 @ 0x140179544 (sub_140179544.c)
 */

__int64 __fastcall sub_140179A60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  int v4; // ebx
  _QWORD *v8; // rcx
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  v4 = 0;
  P = 0LL;
  if ( !*(_QWORD *)(v3 + 64) )
  {
    if ( !*(_BYTE *)(a1 + 4370) || (*(_DWORD *)(*(_QWORD *)(a1 + 608) + 184LL) & 0x1000) != 0 )
    {
      if ( (unsigned int)sub_1400567A0() && (v4 = sub_140179544(a1, a3, a2, 0, &P), v4 >= 0)
        || (v4 = sub_140179544(a1, a3, a2, 1, &P), v4 >= 0) )
      {
        v8 = P;
        if ( !P )
          return (unsigned int)v4;
        *(_QWORD *)(v3 + 64) = *((_QWORD *)P + 2);
        *(_QWORD *)(v3 + 136) = v8[2];
      }
      else
      {
        v8 = P;
      }
      if ( v8 )
        ExFreePoolWithTag(v8, 0x44436152u);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)v4;
}
