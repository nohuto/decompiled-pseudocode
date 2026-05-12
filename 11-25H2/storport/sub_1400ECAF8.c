/*
 * XREFs of sub_1400ECAF8 @ 0x1400ECAF8
 * Callers:
 *     sub_1400D0FF0 @ 0x1400D0FF0 (sub_1400D0FF0.c)
 *     sub_1400ED16C @ 0x1400ED16C (sub_1400ED16C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1401225EC @ 0x1401225EC (sub_1401225EC.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_1400ECAF8(PVOID SystemArgument2)
{
  __int64 v2; // rsi
  __int64 v3; // r8
  int v5; // edi
  void *v6; // rax
  __int64 v7; // rcx
  void *v8; // rax
  int v9; // r8d
  void *Src[3]; // [rsp+30h] [rbp-18h] BYREF

  *(_OWORD *)Src = 0LL;
  v2 = sub_1401225EC(SystemArgument2);
  if ( !v2 )
    return 3221225626LL;
  v5 = sub_1400E736C((__int64)SystemArgument2, 0x1000u, v3, Src, &Src[1], 0);
  if ( v5 >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)v2 + 4256LL) |= 1u;
    *(_DWORD *)(*(_QWORD *)v2 + 4256LL) |= 0x20u;
    *(_DWORD *)(*(_QWORD *)v2 + 4256LL) |= 2u;
    *(_DWORD *)(*(_QWORD *)v2 + 4256LL) |= 0x40u;
    *(_WORD *)(*(_QWORD *)v2 + 4252LL) = 0;
    *(_QWORD *)(*(_QWORD *)v2 + 4184LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)v2 + 4192LL) = sub_1400E90F0;
    *(_QWORD *)(*(_QWORD *)v2 + 4200LL) = v2;
    *(void **)(*(_QWORD *)v2 + 4160LL) = Src[0];
    *(void **)(*(_QWORD *)v2 + 4168LL) = Src[1];
    *(_DWORD *)(*(_QWORD *)v2 + 4248LL) = 4096;
    v6 = Src[1];
    v7 = *(_QWORD *)v2 + 4096LL;
    *(_BYTE *)v7 = 6;
    *(_DWORD *)(v7 + 4) = 0;
    *(_QWORD *)(v7 + 24) = v6;
    *(_BYTE *)(v7 + 40) = 1;
    v5 = sub_1400BD378(SystemArgument2, v2);
    if ( v5 >= 0 )
    {
      v8 = (void *)*((_QWORD *)SystemArgument2 + 74);
      if ( v8
        || (v8 = (void *)sub_1400143E0(64LL, 4096LL, 1380147538LL, *(_QWORD *)(*((_QWORD *)SystemArgument2 + 16) + 8LL)),
            (*((_QWORD *)SystemArgument2 + 74) = v8) != 0LL) )
      {
        memmove(v8, Src[0], 0x1000uLL);
      }
      else
      {
        v5 = -1073741670;
      }
    }
  }
  sub_140122C20(SystemArgument2, v2);
  sub_1400F5FEC((_DWORD)SystemArgument2, 4096, v9, Src[0], (__int64)Src[1]);
  return (unsigned int)v5;
}
