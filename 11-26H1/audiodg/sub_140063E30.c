/*
 * XREFs of sub_140063E30 @ 0x140063E30
 * Callers:
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 * Callees:
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_140063C34 @ 0x140063C34 (sub_140063C34.c)
 *     sub_140063F54 @ 0x140063F54 (sub_140063F54.c)
 */

void __fastcall sub_140063E30(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // r8
  _DWORD *v5; // rsi
  __int64 v6; // rbx
  __int64 *v7; // r10
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r14
  _QWORD *v12; // rcx
  __int64 v13; // rbp
  _QWORD *v14; // rax
  _QWORD *v15; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+70h] [rbp+18h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  if ( a1[1] )
  {
    v4 = 0LL;
    v5 = a1 + 2;
    while ( (unsigned int)v4 < *v5 )
    {
      if ( *(_QWORD *)(*a1 + 8 * v4) )
      {
        _mm_lfence();
        v6 = *(_QWORD *)(*a1 + 8 * v4);
        while ( v6 )
        {
          v7 = (__int64 *)v6;
          v8 = v6;
          if ( *(_QWORD *)(v6 + 56) )
          {
            v6 = *(_QWORD *)(v6 + 56);
          }
          else
          {
            LODWORD(v9) = *(_DWORD *)(v6 + 64) % *v5;
            do
            {
              v9 = (unsigned int)(v9 + 1);
              v6 = 0LL;
              if ( (unsigned int)v9 >= *v5 )
                break;
              v6 = *(_QWORD *)(*a1 + 8 * v9);
            }
            while ( !v6 );
          }
          v10 = *v7;
          LODWORD(v16) = 0;
          LODWORD(v15) = 0;
          v11 = sub_140063C34(a2, v10, &v16, &v15, &v17);
          if ( v11 )
          {
            v12 = *(_QWORD **)(v8 + 8);
            v16 = v12;
            while ( v16 )
            {
              v13 = *sub_1400265D8((__int64)v12, &v16);
              v15 = *(_QWORD **)(v11 + 8);
              while ( v15 )
              {
                v14 = sub_1400265D8((__int64)v12, &v15);
                sub_140063F54(*v14, v13);
              }
            }
          }
        }
        return;
      }
      v4 = (unsigned int)(v4 + 1);
    }
  }
}
