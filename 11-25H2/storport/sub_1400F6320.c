/*
 * XREFs of sub_1400F6320 @ 0x1400F6320
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

__int64 __fastcall sub_1400F6320(_DWORD *SystemArgument2)
{
  __int64 v2; // rsi
  __int64 v3; // r8
  int v5; // r14d
  unsigned int v6; // ecx
  unsigned int v7; // ebp
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // r9
  _BYTE *v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // [rsp+20h] [rbp-68h]
  __int128 Dst; // [rsp+50h] [rbp-38h] BYREF

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
          sub_1400BC9C0((__int64)SystemArgument2, *(_QWORD *)v2 + 4096LL, 3, v10, v15, 0, *((__int64 *)&Dst + 1), v7, 0);
          memset_0((void *)Dst, 0, 0x1000uLL);
          v5 = sub_1400BD378(SystemArgument2, v2);
          if ( v5 >= 0 )
          {
            v11 = (_BYTE *)Dst;
            v12 = 0;
            while ( *v11 && v12 < 0x1000 )
            {
              if ( *v11 == 4 )
              {
                if ( v11[4] == 2 )
                {
                  *(_DWORD *)(v9 + 208) |= 0x100u;
                  *((_QWORD *)SystemArgument2 + 121) |= 0x2000uLL;
                  *(_QWORD *)(v9 + 200) |= 1uLL;
                }
                break;
              }
              v13 = (unsigned __int8)v11[1];
              v12 += v13 + 4;
              v11 += v13 + 4;
            }
          }
        }
        ++v7;
        --v8;
      }
      while ( v8 );
    }
  }
  sub_140122C20(SystemArgument2, v2);
  sub_1400F5FEC((__int64)SystemArgument2, 0x1000u, v14, Dst, *((__int64 *)&Dst + 1));
  return (unsigned int)v5;
}
