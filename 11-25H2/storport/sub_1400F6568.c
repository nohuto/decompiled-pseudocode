/*
 * XREFs of sub_1400F6568 @ 0x1400F6568
 * Callers:
 *     sub_1400ED16C @ 0x1400ED16C (sub_1400ED16C.c)
 * Callees:
 *     sub_1400BC9C0 @ 0x1400BC9C0 (sub_1400BC9C0.c)
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400EC40C @ 0x1400EC40C (sub_1400EC40C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400F6568(_DWORD *SystemArgument2)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  int v5; // ebp
  unsigned int v6; // ecx
  unsigned int v7; // esi
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // [rsp+20h] [rbp-58h]
  __int128 Dst; // [rsp+50h] [rbp-28h] BYREF

  Dst = 0LL;
  v2 = sub_1401225EC(SystemArgument2);
  if ( !v2 )
    return 3221225626LL;
  v5 = sub_1400E736C((__int64)SystemArgument2, 0x1000u, v3, (void **)&Dst, (_QWORD *)&Dst + 1, 0);
  if ( v5 >= 0 )
  {
    v6 = SystemArgument2[164];
    if ( v6 )
    {
      v7 = 1;
      v8 = v6;
      do
      {
        v9 = sub_1400EC40C((__int64)SystemArgument2, v7);
        if ( v9 )
        {
          if ( (*(_DWORD *)(v9 + 208) & 0x100) != 0 )
          {
            *(_DWORD *)(*(_QWORD *)v2 + 4256LL) |= 1u;
            *(_DWORD *)(*(_QWORD *)v2 + 4256LL) |= 0x20u;
            *(_DWORD *)(*(_QWORD *)v2 + 4256LL) |= 2u;
            *(_DWORD *)(*(_QWORD *)v2 + 4256LL) |= 0x40u;
            *(_WORD *)(*(_QWORD *)v2 + 4252LL) = 0;
            *(_QWORD *)(*(_QWORD *)v2 + 4184LL) = 0LL;
            *(_OWORD *)(*(_QWORD *)v2 + 4160LL) = Dst;
            *(_DWORD *)(*(_QWORD *)v2 + 4248LL) = 4096;
            *(_QWORD *)(*(_QWORD *)v2 + 4192LL) = sub_1400E90F0;
            *(_QWORD *)(*(_QWORD *)v2 + 4200LL) = v2;
            sub_1400BC9C0(
              (__int64)SystemArgument2,
              *(_QWORD *)v2 + 4096LL,
              5,
              v10,
              v12,
              2,
              *((__int64 *)&Dst + 1),
              v7,
              0);
            memset_0((void *)Dst, 0, 0x1000uLL);
            v5 = sub_1400BD378(SystemArgument2, v2);
          }
        }
        ++v7;
        --v8;
      }
      while ( v8 );
    }
  }
  sub_140122C20(SystemArgument2, v2);
  sub_1400F5FEC((__int64)SystemArgument2, 0x1000u, v11, Dst, *((__int64 *)&Dst + 1));
  return (unsigned int)v5;
}
