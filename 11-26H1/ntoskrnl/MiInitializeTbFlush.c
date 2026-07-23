/*
 * XREFs of MiInitializeTbFlush @ 0x140D05A54
 * Callers:
 *     MiInitializeTbFlushing @ 0x140D05B90 (MiInitializeTbFlushing.c)
 * Callees:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiCalibrateTbFlush @ 0x140712BB4 (MiCalibrateTbFlush.c)
 */

unsigned __int64 __fastcall MiInitializeTbFlush(unsigned int a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r14
  int v7; // ebp
  unsigned __int64 ValidPte; // rax
  __int64 v9; // r8
  unsigned __int64 *v10; // rdx
  __int64 v11; // r9
  unsigned int v12; // r15d
  unsigned __int64 v13; // r12
  signed int v14; // ebx
  __int128 v15; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  result = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, a1, a3, a4);
  v6 = result;
  if ( result )
  {
    v7 = 1;
    ValidPte = MiMakeValidPte(result, qword_140E361B8, 1);
    v9 = (__int64)(v6 << 25) >> 16;
    if ( a1 )
    {
      v10 = (unsigned __int64 *)v6;
      v11 = a1;
      do
      {
        *v10++ = ValidPte;
        v9 += 4096LL;
        --v11;
      }
      while ( v11 );
    }
    MiCalibrateTbFlush((__int64)(v6 << 25) >> 16, 0, a1, &v15);
    v12 = a1 - 1;
    if ( (int)(a1 - 1) > 2 )
    {
      v13 = v15 + *((_QWORD *)&v15 + 1);
      do
      {
        v14 = (int)(v12 + v7) >> 1;
        MiCalibrateTbFlush((__int64)(v6 << 25) >> 16, v14, a1, &v16);
        if ( (_QWORD)v16 + *((_QWORD *)&v16 + 1) <= v13 )
        {
          v7 = (int)(v12 + v7) >> 1;
          v14 = v12;
        }
        v12 = v14;
      }
      while ( v14 > v7 + 1 );
    }
    qword_140E2D910 = v7;
    return MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, (unsigned __int64 *)v6, a1);
  }
  return result;
}
