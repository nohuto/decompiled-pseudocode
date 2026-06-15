/*
 * XREFs of sub_140005D50 @ 0x140005D50
 * Callers:
 *     sub_140004F70 @ 0x140004F70 (sub_140004F70.c)
 *     sub_140009AD0 @ 0x140009AD0 (sub_140009AD0.c)
 * Callees:
 *     sub_140002220 @ 0x140002220 (sub_140002220.c)
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_140006898 @ 0x140006898 (sub_140006898.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140005D50(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rsi
  _DWORD *v5; // rax
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rbx
  int v9; // r15d
  __int64 v10; // rbx
  __int64 v12; // rbx
  _DWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  double v16; // [rsp+60h] [rbp+30h] BYREF
  __int64 v17; // [rsp+70h] [rbp+40h]
  __int64 v18; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0LL;
  v4 = *(_QWORD **)(a1 + 16);
  while ( v4 )
  {
    v17 = 0LL;
    v8 = v4[2];
    v4 = (_QWORD *)*v4;
    v9 = sub_1400B6010(v8);
    if ( v9 < 0 )
    {
      if ( *(_DWORD *)(v8 + 40) == 2 )
      {
        v12 = *(_QWORD *)(v8 + 32);
        if ( *(_DWORD *)(v12 + 4) )
        {
          v13 = (_DWORD *)sub_140006470();
          if ( *v13 > 2u )
          {
            LODWORD(v16) = v9;
            v18 = v12 + 8;
            sub_140002220((int)v13, (int)&unk_1400D2474, v14, v15, &v18, (__int64)&v16);
          }
        }
      }
    }
    else
    {
      v3 += v17;
      if ( *(_DWORD *)(v8 + 40) == 2 )
      {
        v10 = *(_QWORD *)(v8 + 32);
        if ( *(_DWORD *)(v10 + 4) )
        {
          v5 = (_DWORD *)sub_140006470();
          if ( *v5 > 4u )
          {
            v16 = (double)(int)v17 / 10000000.0;
            v18 = v10 + 8;
            sub_140006898((_DWORD)v5, (unsigned int)&unk_1400D24A8, v6, v7, (__int64)&v18, (__int64)&v16);
          }
        }
      }
    }
  }
  *a2 = v3;
  return 0LL;
}
