/*
 * XREFs of sub_14001C554 @ 0x14001C554
 * Callers:
 *     sub_1400073E0 @ 0x1400073E0 (sub_1400073E0.c)
 * Callees:
 *     sub_14001F48C @ 0x14001F48C (sub_14001F48C.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

char __fastcall sub_14001C554(__int64 a1)
{
  int v1; // eax
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  unsigned int v5; // edx
  unsigned int v6; // eax

  v1 = *(unsigned __int16 *)(a1 + 982);
  if ( !(_WORD)v1 )
    return 0;
  v3 = (_QWORD *)(a1 + 968);
  StorPortExtendedFunction(0LL, a1, (unsigned int)(48 * v1), 1701672526LL);
  v4 = (_QWORD *)(a1 + 960);
  StorPortExtendedFunction(0LL, a1, *(unsigned __int16 *)(a1 + 982) << 6, 1701672526LL);
  if ( !*v3 || !*v4 )
  {
    sub_14001F48C(a1, *v3);
    sub_14001F48C(a1, *v4);
    return 0;
  }
  v5 = (48 * (unsigned int)*(unsigned __int16 *)(a1 + 982)) >> 2;
  if ( v5 )
    sub_140032C80(*v3, 0LL, 4LL * v5);
  v6 = (unsigned int)(*(unsigned __int16 *)(a1 + 982) << 6) >> 2;
  if ( v6 )
    sub_140032C80(*v4, 0LL, 4LL * v6);
  return 1;
}
