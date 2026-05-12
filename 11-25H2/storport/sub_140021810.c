/*
 * XREFs of sub_140021810 @ 0x140021810
 * Callers:
 *     sub_140004290 @ 0x140004290 (sub_140004290.c)
 *     sub_1400099A0 @ 0x1400099A0 (sub_1400099A0.c)
 *     sub_140009D88 @ 0x140009D88 (sub_140009D88.c)
 *     sub_14000E060 @ 0x14000E060 (sub_14000E060.c)
 *     sub_14000E940 @ 0x14000E940 (sub_14000E940.c)
 *     sub_14000EF0C @ 0x14000EF0C (sub_14000EF0C.c)
 *     sub_14000F4A0 @ 0x14000F4A0 (sub_14000F4A0.c)
 *     sub_14001FE70 @ 0x14001FE70 (sub_14001FE70.c)
 *     sub_140020210 @ 0x140020210 (sub_140020210.c)
 *     sub_140027FB4 @ 0x140027FB4 (sub_140027FB4.c)
 *     sub_140031B18 @ 0x140031B18 (sub_140031B18.c)
 *     sub_14009D9B4 @ 0x14009D9B4 (sub_14009D9B4.c)
 *     sub_1400A10B8 @ 0x1400A10B8 (sub_1400A10B8.c)
 *     sub_14017E628 @ 0x14017E628 (sub_14017E628.c)
 *     sub_140185144 @ 0x140185144 (sub_140185144.c)
 * Callees:
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 *     sub_140090338 @ 0x140090338 (sub_140090338.c)
 *     sub_14009038C @ 0x14009038C (sub_14009038C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_140021810(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  KIRQL v7; // bp
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // eax
  _DWORD *v14; // rax
  PKDPC Dpc; // [rsp+20h] [rbp-58h]

  v2 = 0LL;
  if ( *(_QWORD *)(a1 + 32) && sub_1400215B0(a1, 31) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
    if ( a2 )
    {
      v10 = a2 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 == 1 )
              ++*(_DWORD *)(*(_QWORD *)(a1 + 32) + 84LL);
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x80u;
          }
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x40u;
        }
      }
      else
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x20u;
      }
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 32) + 80LL) |= 0x100u;
      v6 = *(_QWORD *)(a1 + 32);
      v13 = *(_DWORD *)(v6 + 80);
      if ( (v13 & 1) != 0 && (v13 & 0x200) == 0 )
      {
        *(_DWORD *)(v6 + 80) = v13 | 0x200;
        KeSetCoalescableTimer(
          (PKTIMER)(*(_QWORD *)(a1 + 32) + 88LL),
          (LARGE_INTEGER)-20000000LL,
          0,
          0x12Cu,
          (PKDPC)(*(_QWORD *)(a1 + 32) + 152LL));
      }
    }
    if ( !(unsigned int)sub_140090338(v6, v5, v8, v9, Dpc) )
      sub_14009038C();
    v14 = *(_DWORD **)(a1 + 24);
    if ( *v14 == 1094997074 )
    {
      v2 = (__int64)(v14 + 94);
    }
    else if ( *v14 == 1314275652 )
    {
      v2 = (__int64)(v14 + 42);
    }
    sub_140021760(v2);
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v7);
  }
}
