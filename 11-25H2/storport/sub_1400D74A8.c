/*
 * XREFs of sub_1400D74A8 @ 0x1400D74A8
 * Callers:
 *     StorPortExtendedFunction @ 0x140046CC0 (StorPortExtendedFunction.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140037090 @ 0x140037090 (sub_140037090.c)
 *     sub_1400BCC38 @ 0x1400BCC38 (sub_1400BCC38.c)
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 *     sub_1400E7FA4 @ 0x1400E7FA4 (sub_1400E7FA4.c)
 *     sub_140194600 @ 0x140194600 (sub_140194600.c)
 */

__int64 __fastcall sub_1400D74A8(__int64 a1, int a2, _QWORD *a3)
{
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // eax
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  __int64 v13; // [rsp+50h] [rbp+20h] BYREF

  v13 = 0LL;
  if ( a1 && a3 )
  {
    *a3 = 0LL;
    if ( *(_DWORD *)(a1 + 84) == 1 )
    {
      v6 = sub_140194600(a1, 0, 0, 0, (__int64)&v13);
      if ( v6 >= 0 )
      {
        *(_BYTE *)(v13 + 1728) = 1;
        *(_DWORD *)(v13 + 976) = 0;
        v7 = sub_1400143E0(64LL, (unsigned int)(a2 + 64), 1380147538LL, *(_QWORD *)(a1 + 8));
        *(_QWORD *)(v13 + 1648) = v7;
        v8 = *(_QWORD *)(v13 + 1648);
        if ( v8 )
        {
          if ( (*(_DWORD *)(a1 + 144) & 0x1000LL) != 0 )
            v9 = *(_DWORD *)(a1 + 1008);
          else
            v9 = 0x80000000;
          *(_DWORD *)(v8 + 8) = v9;
          **(_QWORD **)(v13 + 1648) = v13;
          v6 = sub_1400E7FA4(v13, a1 + 176);
          if ( v6 < 0 || (v6 = sub_1400BCC38(v13), v6 < 0) )
          {
            sub_1400DEFC4(&v13);
          }
          else
          {
            KeEnterCriticalRegion();
            ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1176), 1u);
            v10 = *(_QWORD **)(a1 + 1296);
            v11 = (_QWORD *)(v13 + 112);
            if ( *v10 != a1 + 1288 )
              __fastfail(3u);
            *v11 = a1 + 1288;
            v11[1] = v10;
            *v10 = v11;
            *(_QWORD *)(a1 + 1296) = v11;
            ++*(_DWORD *)(a1 + 1304);
            ExReleaseResourceLite((PERESOURCE)(a1 + 1176));
            KeLeaveCriticalRegion();
            if ( a2 )
              *a3 = *(_QWORD *)(v13 + 1648) + 64LL;
          }
        }
        else
        {
          sub_1400DEFC4(&v13);
          v6 = -1073741670;
        }
      }
    }
    else
    {
      v6 = -1073741661;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  return sub_140037090(v6);
}
