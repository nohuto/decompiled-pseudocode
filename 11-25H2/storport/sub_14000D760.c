/*
 * XREFs of sub_14000D760 @ 0x14000D760
 * Callers:
 *     sub_140004004 @ 0x140004004 (sub_140004004.c)
 *     sub_140009D88 @ 0x140009D88 (sub_140009D88.c)
 *     sub_14000D2F0 @ 0x14000D2F0 (sub_14000D2F0.c)
 *     sub_14000D4EC @ 0x14000D4EC (sub_14000D4EC.c)
 *     sub_14000D600 @ 0x14000D600 (sub_14000D600.c)
 *     sub_14001D220 @ 0x14001D220 (sub_14001D220.c)
 *     sub_140025E00 @ 0x140025E00 (sub_140025E00.c)
 *     sub_1400267A0 @ 0x1400267A0 (sub_1400267A0.c)
 *     sub_140028C24 @ 0x140028C24 (sub_140028C24.c)
 *     sub_14002A7F0 @ 0x14002A7F0 (sub_14002A7F0.c)
 *     sub_1400530F8 @ 0x1400530F8 (sub_1400530F8.c)
 *     sub_14006D53C @ 0x14006D53C (sub_14006D53C.c)
 *     sub_1400930B8 @ 0x1400930B8 (sub_1400930B8.c)
 *     sub_140095B74 @ 0x140095B74 (sub_140095B74.c)
 *     sub_14009DB74 @ 0x14009DB74 (sub_14009DB74.c)
 *     sub_1400A10B8 @ 0x1400A10B8 (sub_1400A10B8.c)
 *     sub_1401B1388 @ 0x1401B1388 (sub_1401B1388.c)
 * Callees:
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 *     sub_140090338 @ 0x140090338 (sub_140090338.c)
 *     sub_14009038C @ 0x14009038C (sub_14009038C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_14000D760(__int64 a1, int a2)
{
  __int64 v4; // rdx
  KIRQL v5; // si
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edi
  int v9; // edi
  int v10; // edi
  __int64 v11; // rcx
  int v12; // eax
  __int16 v13; // cx
  _DWORD *v14; // rax
  _DWORD *v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+30h] [rbp-38h]
  __int128 v18; // [rsp+40h] [rbp-28h]
  __int64 v19; // [rsp+50h] [rbp-18h]

  v16 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( *(_QWORD *)(a1 + 32) && (unsigned __int8)sub_1400215B0(a1, 31LL) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
    if ( a2 )
    {
      v8 = a2 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
              --*(_DWORD *)(*(_QWORD *)(a1 + 32) + 84LL);
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) &= ~0x80u;
          }
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) &= ~0x40u;
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) &= ~0x20u;
      }
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) &= ~0x100u;
    }
    v11 = *(_QWORD *)(a1 + 32);
    v12 = *(_DWORD *)(v11 + 80);
    if ( (v12 & 0x20) == 0 && (v12 & 0x40) == 0 && (v12 & 0x80u) == 0 && (v12 & 0x100) == 0 && *(int *)(v11 + 84) <= 0 )
    {
      DWORD2(v16) = 3;
      if ( (unsigned int)sub_140090338(v11, v4, v6, v7, 0x3800000038LL, *((_QWORD *)&v16 + 1), v17)
        || (unsigned int)sub_14009038C() )
      {
        HIDWORD(v18) = 4;
        WORD4(v18) = 1;
        v13 = *(_WORD *)(*(_QWORD *)(a1 + 24) + 56LL);
        LOWORD(v19) = *(_WORD *)(a1 + 104);
        BYTE2(v19) = *(_BYTE *)(a1 + 106);
        WORD5(v18) = v13;
      }
      v14 = *(_DWORD **)(a1 + 24);
      if ( *v14 == 1094997074 )
      {
        v15 = v14 + 94;
      }
      else if ( *v14 == 1314275652 )
      {
        v15 = v14 + 42;
      }
      else
      {
        v15 = 0LL;
      }
      sub_140021760(v15, 31LL, &v16);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v5);
  }
}
