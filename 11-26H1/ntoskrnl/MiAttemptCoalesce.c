/*
 * XREFs of MiAttemptCoalesce @ 0x1402A3838
 * Callers:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiReleasePteMappings @ 0x1402A3050 (MiReleasePteMappings.c)
 *     MiAdjustPteBins @ 0x1402A51F0 (MiAdjustPteBins.c)
 * Callees:
 *     MiReturnSystemPtes @ 0x1402A2FA8 (MiReturnSystemPtes.c)
 *     RtlInterlockedSetClearRunEx @ 0x1402A3DC0 (RtlInterlockedSetClearRunEx.c)
 */

char __fastcall MiAttemptCoalesce(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r13d
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 *v12; // rdx
  __int64 v13; // r8
  __int64 *v14; // r9
  bool i; // zf

  v3 = *(_DWORD *)(a1 + 40) & 1;
  v5 = 0LL;
  v6 = (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFE20uLL) + 512;
  LOBYTE(v7) = (v3 != 0 ? 0x20 : 0) + a2;
  v8 = a2 & ~((-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFE20uLL) + 511);
  v9 = (~((-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFE20uLL) + 511) & (v6 + a2 + a3 - 1)) - v8;
  if ( v9 )
  {
    do
    {
      v7 = *(_QWORD *)a1;
      v10 = v8 + v5;
      if ( v8 + v5 < *(_QWORD *)a1 )
      {
        v7 -= v10;
        if ( v7 >= v6 )
        {
          v11 = *(_QWORD *)(a1 + 8);
          v12 = (__int64 *)(v11 + 8 * (v10 >> 6));
          v13 = *v12;
          v14 = (__int64 *)(v11 + 8 * ((v6 + v10 - 1) >> 6));
          if ( v12 == v14 )
          {
            v7 = 0xFFFFFFFFFFFFFFFFuLL >> (v3 != 0 ? -32 : -64) << v10;
LABEL_6:
            LOBYTE(v7) = (v7 & v13) == 0;
            if ( (_BYTE)v7 )
            {
              LODWORD(v7) = RtlInterlockedSetClearRunEx(a1, v8 + v5, v6);
              if ( (_DWORD)v7 )
              {
                _InterlockedAdd64(
                  (volatile signed __int64 *)(a1 + 88),
                  v6 * ((-(__int64)(v3 != 0) & 0xFFFFFFFFFFFFFFF1uLL) - 1));
                LOBYTE(v7) = MiReturnSystemPtes(a1, 0, v8 + v5, v6);
              }
            }
          }
          else
          {
            v7 = -1LL << v10;
            for ( i = ((-1LL << v10) & v13) == 0; i; i = v13 == 0 )
            {
              v13 = *++v12;
              if ( v12 == v14 )
              {
                v7 = 0xFFFFFFFFFFFFFFFFuLL >> ~((v3 != 0 ? 0x20 : 0) + (unsigned __int8)v10 - 1);
                goto LABEL_6;
              }
            }
          }
        }
      }
      v5 += v6;
    }
    while ( v5 < v9 );
  }
  return v7;
}
