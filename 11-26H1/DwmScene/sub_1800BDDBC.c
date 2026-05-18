/*
 * XREFs of sub_1800BDDBC @ 0x1800BDDBC
 * Callers:
 *     sub_1800C0910 @ 0x1800C0910 (sub_1800C0910.c)
 *     sub_1800C1050 @ 0x1800C1050 (sub_1800C1050.c)
 *     sub_1800C13F0 @ 0x1800C13F0 (sub_1800C13F0.c)
 *     sub_1800C1D80 @ 0x1800C1D80 (sub_1800C1D80.c)
 *     sub_1800C1FC0 @ 0x1800C1FC0 (sub_1800C1FC0.c)
 *     sub_1800C31E8 @ 0x1800C31E8 (sub_1800C31E8.c)
 *     sub_1800C37E0 @ 0x1800C37E0 (sub_1800C37E0.c)
 *     sub_1800C3C1C @ 0x1800C3C1C (sub_1800C3C1C.c)
 *     sub_1800C3E50 @ 0x1800C3E50 (sub_1800C3E50.c)
 *     sub_1800C4100 @ 0x1800C4100 (sub_1800C4100.c)
 *     sub_1800C4B58 @ 0x1800C4B58 (sub_1800C4B58.c)
 *     sub_1800C57C0 @ 0x1800C57C0 (sub_1800C57C0.c)
 *     sub_1800C5A60 @ 0x1800C5A60 (sub_1800C5A60.c)
 *     sub_1800C5DF0 @ 0x1800C5DF0 (sub_1800C5DF0.c)
 *     sub_1800C68A0 @ 0x1800C68A0 (sub_1800C68A0.c)
 *     sub_1800C8130 @ 0x1800C8130 (sub_1800C8130.c)
 *     sub_1800C8650 @ 0x1800C8650 (sub_1800C8650.c)
 *     sub_1800C8CD8 @ 0x1800C8CD8 (sub_1800C8CD8.c)
 *     sub_1800C8EA0 @ 0x1800C8EA0 (sub_1800C8EA0.c)
 *     sub_1800C9334 @ 0x1800C9334 (sub_1800C9334.c)
 *     sub_1800C9D40 @ 0x1800C9D40 (sub_1800C9D40.c)
 *     sub_1800CA0F0 @ 0x1800CA0F0 (sub_1800CA0F0.c)
 *     sub_1800CA8B0 @ 0x1800CA8B0 (sub_1800CA8B0.c)
 *     sub_1800CB160 @ 0x1800CB160 (sub_1800CB160.c)
 *     sub_1800CB5F4 @ 0x1800CB5F4 (sub_1800CB5F4.c)
 *     sub_1800CB8A8 @ 0x1800CB8A8 (sub_1800CB8A8.c)
 *     sub_1800CC3A0 @ 0x1800CC3A0 (sub_1800CC3A0.c)
 *     sub_1800CC5F0 @ 0x1800CC5F0 (sub_1800CC5F0.c)
 *     sub_1800CC850 @ 0x1800CC850 (sub_1800CC850.c)
 *     sub_1800CCAB0 @ 0x1800CCAB0 (sub_1800CCAB0.c)
 *     sub_1800CCE00 @ 0x1800CCE00 (sub_1800CCE00.c)
 *     sub_1800CD010 @ 0x1800CD010 (sub_1800CD010.c)
 *     sub_1800CD210 @ 0x1800CD210 (sub_1800CD210.c)
 *     sub_1800CD75C @ 0x1800CD75C (sub_1800CD75C.c)
 *     sub_1800CD8D4 @ 0x1800CD8D4 (sub_1800CD8D4.c)
 * Callees:
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_1800BC30C @ 0x1800BC30C (sub_1800BC30C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800BDDBC(__int64 a1, int a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h]

  if ( *(_DWORD *)(a1 + 4248) )
    return;
  *(_DWORD *)(a1 + 4252) = a2;
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 4248) = 0;
    goto LABEL_25;
  }
  if ( a2 == -2005270523 )
  {
    v3 = *(_QWORD *)(a1 + 4256);
    if ( v3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 312LL))(v3);
      switch ( v4 )
      {
        case -2005270527:
          *(_DWORD *)(a1 + 4248) = 5;
          break;
        case -2005270523:
          *(_DWORD *)(a1 + 4248) = 2;
          break;
        case -2005270522:
          *(_DWORD *)(a1 + 4248) = 1;
          break;
        case -2005270521:
          *(_DWORD *)(a1 + 4248) = 3;
          break;
        case -2005270496:
          *(_DWORD *)(a1 + 4248) = 4;
          break;
        default:
          if ( v4 )
          {
            *(_DWORD *)(a1 + 4248) = 2;
            goto LABEL_25;
          }
          *(_DWORD *)(a1 + 4248) = 0;
          break;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 4248) = 2;
    }
  }
  else
  {
    if ( a2 != -2005270521 )
    {
      if ( a2 == -2147024882 )
      {
        sub_18001DCFC(&qword_1801BD4C8, 3);
        sub_1800BC30C(a1);
      }
      goto LABEL_25;
    }
    *(_DWORD *)(a1 + 4248) = 3;
  }
  sub_18001DCFC(&qword_1801BD4C8, 3);
LABEL_25:
  if ( *(_DWORD *)(a1 + 4248) )
  {
    sub_18001DCFC(&qword_1801BD4C8, 3);
    v8 = a1 + 4168;
    sub_180012AC4(a1 + 4168);
    v5 = **(_QWORD **)(a1 + 4152);
    v7 = v5;
    while ( !*(_BYTE *)(v5 + 25) )
    {
      (***(void (__fastcall ****)(_QWORD, _QWORD))(v5 + 32))(*(_QWORD *)(v5 + 32), *(unsigned int *)(a1 + 4248));
      sub_18001D6F4(&v7, v6);
      v5 = v7;
    }
    Mtx_unlock((_Mtx_t)(a1 + 4168));
  }
}
