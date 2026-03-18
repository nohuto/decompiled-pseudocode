/*
 * XREFs of sub_1400181B0 @ 0x1400181B0
 * Callers:
 *     sub_1400073E0 @ 0x1400073E0 (sub_1400073E0.c)
 * Callees:
 *     sub_1400188B0 @ 0x1400188B0 (sub_1400188B0.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

char __fastcall sub_1400181B0(__int64 a1)
{
  unsigned __int16 v1; // si
  __int64 v2; // rbx
  unsigned __int16 v4; // bp
  _QWORD *v5; // r14
  unsigned int v6; // ecx
  unsigned int v7; // eax
  __int64 v8; // r8
  int v9; // ecx
  __int64 v10; // rdx
  _OWORD v12[2]; // [rsp+30h] [rbp-48h] BYREF

  v1 = 0;
  v2 = 0LL;
  memset(v12, 0, sizeof(v12));
  if ( *(_BYTE *)(a1 + 20) )
    return 1;
  sub_1400188B0(a1);
  if ( (unsigned int)(*(_DWORD *)(a1 + 16) - 2) <= 1 )
  {
    v4 = 0;
    if ( (unsigned int)StorPortExtendedFunction(13LL, a1, 0LL, v12) )
      goto LABEL_12;
    do
    {
      if ( v4 )
      {
        if ( v2 == *((_QWORD *)&v12[0] + 1) && *(_DWORD *)(a1 + 16) != 3 )
          *(_DWORD *)(a1 + 16) = 2;
      }
      else
      {
        v2 = *((_QWORD *)&v12[0] + 1);
      }
      ++v4;
    }
    while ( !(unsigned int)StorPortExtendedFunction(13LL, a1, v4, v12) );
    if ( !v4 )
    {
LABEL_12:
      v4 = 1;
      *(_DWORD *)(a1 + 16) = 1;
    }
  }
  else
  {
    v4 = 1;
  }
  v5 = (_QWORD *)(a1 + 280);
  *(_WORD *)(a1 + 272) = v4;
  StorPortExtendedFunction(0LL, a1, 24 * (unsigned int)v4, 1701672526LL);
  if ( *(_QWORD *)(a1 + 280) )
  {
    v6 = (24 * (unsigned int)*(unsigned __int16 *)(a1 + 272)) >> 2;
    if ( v6 )
      sub_140032C80(*v5, 0LL, 4LL * v6);
    StorPortExtendedFunction(0LL, a1, 16 * (unsigned int)*(unsigned __int16 *)(a1 + 272), 1701672526LL);
    if ( *(_QWORD *)(a1 + 288) )
    {
      v7 = (16 * (unsigned int)*(unsigned __int16 *)(a1 + 272)) >> 2;
      if ( v7 )
        sub_140032C80(*(_QWORD *)(a1 + 288), 0LL, 4LL * v7);
      if ( *(_WORD *)(a1 + 272) )
      {
        do
        {
          v8 = v1;
          v9 = v1++;
          v10 = 24 * v8;
          *(_DWORD *)(v10 + *v5) = v9;
          *(_QWORD *)(v10 + *v5 + 8) = *(_QWORD *)(a1 + 288) + 16 * v8;
        }
        while ( v1 < *(_WORD *)(a1 + 272) );
      }
      return 1;
    }
  }
  sub_1400188B0(a1);
  return 0;
}
