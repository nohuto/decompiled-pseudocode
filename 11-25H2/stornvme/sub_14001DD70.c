/*
 * XREFs of sub_14001DD70 @ 0x14001DD70
 * Callers:
 *     sub_14001D49C @ 0x14001D49C (sub_14001D49C.c)
 *     sub_14001DB6C @ 0x14001DB6C (sub_14001DB6C.c)
 * Callees:
 *     sub_14001B750 @ 0x14001B750 (sub_14001B750.c)
 */

__int64 __fastcall sub_14001DD70(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  unsigned __int16 *v5; // r11
  __int16 v6; // r9
  __int64 result; // rax
  int v8; // ecx

  v4 = a2;
  v5 = a1;
  if ( a4 )
    *(_QWORD *)(a2 + 224) = a4;
  *(_QWORD *)(a2 + 212) = 0LL;
  if ( a1[166] )
  {
    *(_WORD *)(a2 + 232) = *(_QWORD *)(a2 + 224) != 0LL;
    v6 = sub_14001B750(a1);
    *(_WORD *)(v4 + 234) = v6;
  }
  else
  {
    v6 = *(_WORD *)(a2 + 234);
  }
  result = 0xFFFFFFFFLL;
  if ( *(_WORD *)(v4 + 232) )
    v8 = *((_DWORD *)v5 + 1022);
  else
    v8 = -1;
  *(_DWORD *)(v4 + 236) = v8;
  if ( v6 )
    result = *((unsigned int *)v5 + 1023);
  *(_DWORD *)(v4 + 240) = result;
  return result;
}
