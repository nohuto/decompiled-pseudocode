/*
 * XREFs of sub_180039384 @ 0x180039384
 * Callers:
 *     sub_180039550 @ 0x180039550 (sub_180039550.c)
 * Callees:
 *     sub_180039294 @ 0x180039294 (sub_180039294.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180039384(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 (__fastcall *a8)(__int64, unsigned __int64))
{
  int v9; // r13d
  __int64 v10; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // rdi
  int v19; // [rsp+C0h] [rbp+18h]
  int v20; // [rsp+C8h] [rbp+20h]

  v20 = a4;
  v19 = a3;
  v9 = a4;
  v10 = a5;
  if ( a4 > a5 )
  {
    v16 = a5 >> 1;
    v17 = (a2 - a1) >> 4;
    v15 = a1;
    v14 = a2 + 16 * (a5 >> 1);
    if ( v17 > 0 )
    {
      do
      {
        if ( a8(v14, v15 + 16 * ((unsigned __int64)v17 >> 1)) )
        {
          v17 = (unsigned __int64)v17 >> 1;
        }
        else
        {
          v15 += 16 * ((unsigned __int64)v17 >> 1) + 16;
          v17 += -1LL - ((unsigned __int64)v17 >> 1);
        }
      }
      while ( v17 > 0 );
      v9 = v20;
      v10 = a5;
      LODWORD(a3) = v19;
    }
    v12 = (v15 - a1) >> 4;
  }
  else
  {
    v12 = a4 >> 1;
    v13 = (a3 - a2) >> 4;
    v14 = a2;
    v15 = a1 + 16 * (a4 >> 1);
    if ( v13 > 0 )
    {
      do
      {
        if ( a8(v14 + 16 * ((unsigned __int64)v13 >> 1), v15) )
        {
          v14 += 16 * ((unsigned __int64)v13 >> 1) + 16;
          v13 += -1LL - ((unsigned __int64)v13 >> 1);
        }
        else
        {
          v13 = (unsigned __int64)v13 >> 1;
        }
      }
      while ( v13 > 0 );
      v9 = v20;
      v10 = a5;
      LODWORD(a3) = v19;
    }
    v16 = (v14 - a2) >> 4;
  }
  return sub_180039294(a1, a2, a3, v9, v10, a6, a7, (__int64)a8, v15, v14, v12, v16);
}
