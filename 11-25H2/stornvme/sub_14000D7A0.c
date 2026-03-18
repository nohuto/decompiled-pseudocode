/*
 * XREFs of sub_14000D7A0 @ 0x14000D7A0
 * Callers:
 *     sub_140006F00 @ 0x140006F00 (sub_140006F00.c)
 * Callees:
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14000D7A0(__int64 a1)
{
  __int64 v1; // r15
  _QWORD *v2; // r14
  __int64 v3; // rbx
  unsigned int v4; // esi
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v11; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v12; // [rsp+C8h] [rbp+10h]

  v1 = *(_QWORD *)(a1 + 1560);
  v2 = (_QWORD *)(a1 + 1392);
  v3 = 0LL;
  v11 = 0LL;
  v4 = 4;
  v12 = 0LL;
  if ( (unsigned int)*(unsigned __int8 *)(v1 + 259) + 1 < 4 )
    v4 = *(unsigned __int8 *)(v1 + 259) + 1;
  if ( (unsigned int)StorPortExtendedFunction(0LL, a1, v4 << 7, 1701672526LL) || !*v2 )
  {
    v8 = v11;
    v6 = v4 << 13;
  }
  else
  {
    v6 = v4 << 13;
    v7 = sub_140006100(a1, v4 << 13);
    v8 = v11;
    if ( !v7 && v11 )
    {
      if ( v6 >> 2 )
      {
        sub_140032C80(v11, 0LL, 4LL * (v6 >> 2));
        v8 = v11;
      }
      if ( v4 )
      {
        v9 = v4;
        do
        {
          v3 += 128LL;
          *(_QWORD *)(v3 + *v2 - 32) = v8;
          *(_QWORD *)(v3 + *v2 - 24) = v12;
          v12 += 0x2000LL;
          v8 = v11 + 0x2000;
          v11 += 0x2000LL;
          --v9;
        }
        while ( v9 );
        return v4;
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
  {
    StorPortExtendedFunction(86LL, a1, 0LL, 1LL);
    v8 = v11;
  }
  if ( *v2 )
  {
    StorPortExtendedFunction(1LL, a1, *v2, v8);
    v8 = v11;
    *v2 = 0LL;
  }
  if ( v8 )
    sub_14000CF50(a1, v6, &v11, v12);
  return 0LL;
}
