/*
 * XREFs of sub_14000C5E0 @ 0x14000C5E0
 * Callers:
 *     sub_14000A67C @ 0x14000A67C (sub_14000A67C.c)
 *     sub_140032480 @ 0x140032480 (sub_140032480.c)
 * Callees:
 *     sub_14000C7BC @ 0x14000C7BC (sub_14000C7BC.c)
 *     sub_14000C894 @ 0x14000C894 (sub_14000C894.c)
 *     sub_14000D8D0 @ 0x14000D8D0 (sub_14000D8D0.c)
 *     sub_14000DC7C @ 0x14000DC7C (sub_14000DC7C.c)
 *     sub_14000DD74 @ 0x14000DD74 (sub_14000DD74.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall sub_14000C5E0(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 *v10; // r14
  __int64 *v11; // rcx
  __int64 *v12; // rax
  int v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+24h] [rbp-24h] BYREF

  while ( a2[2] )
  {
    v5 = sub_14000D8D0(a2);
    if ( v5 )
      sub_14000DC7C(v5);
  }
  v6 = *(_QWORD *)(a3 + 8);
  while ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    v6 = *(_QWORD *)(v6 + 8);
    v8 = sub_14000C7BC();
    v9 = v8;
    if ( v8 )
    {
      *(_QWORD *)v8 = 0LL;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = 0LL;
      *(_QWORD *)(v8 + 24) = 0LL;
      *(_QWORD *)(v8 + 32) = 0LL;
      *(_QWORD *)(v8 + 40) = 0LL;
      *(_BYTE *)(v8 + 48) = 0;
      *(_QWORD *)(v8 + 56) = 0LL;
      *(_QWORD *)(v8 + 64) = 0LL;
      *(_QWORD *)(v8 + 72) = 0LL;
      *(_DWORD *)(v8 + 80) = 0;
      *(_QWORD *)(v8 + 88) = 0LL;
      *(_QWORD *)(v8 + 96) = 0LL;
      *(_QWORD *)(v8 + 104) = 0LL;
      *(_DWORD *)(v8 + 112) = 0;
      *(_QWORD *)(v8 + 120) = 0LL;
      *(_QWORD *)(v8 + 128) = 0LL;
      *(_QWORD *)(v8 + 136) = 0LL;
      *(_DWORD *)(v8 + 144) = 0;
      *(_QWORD *)(v8 + 152) = 0LL;
      *(_QWORD *)(v8 + 160) = 0LL;
      *(_QWORD *)(v8 + 168) = 0LL;
      *(_DWORD *)(v8 + 176) = 0;
      *(_QWORD *)(v8 + 184) = 0LL;
      *(_QWORD *)(v8 + 192) = 0LL;
      *(_QWORD *)(v8 + 200) = 0LL;
      *(_DWORD *)(v8 + 208) = 0;
      *(_QWORD *)(v8 + 216) = 0LL;
      *(_QWORD *)(v8 + 224) = 0LL;
      *(_QWORD *)(v8 + 232) = 0LL;
      *(_DWORD *)(v8 + 240) = 0;
      *(_QWORD *)(v8 + 248) = 0LL;
      *(_QWORD *)(v8 + 256) = 0LL;
      *(_QWORD *)(v8 + 264) = 0LL;
      *(_DWORD *)(v8 + 272) = 0;
      *(_QWORD *)(v8 + 280) = 0LL;
      *(_QWORD *)(v8 + 288) = 0LL;
      *(_QWORD *)(v8 + 296) = 0LL;
      *(_DWORD *)(v8 + 304) = 0;
      memset((void *)(v8 + 328), 0, 0x70uLL);
      sub_14000C894(v9, v7);
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
    {
      try
      {
        v10 = *a2;
        sub_14000DD74(a2);
        v11 = a2[4];
        v12 = (__int64 *)*v11;
        v11[2] = v9;
        a2[4] = v12;
        v11[1] = 0LL;
        *v11 = (__int64)v10;
        a2[2] = (__int64 *)((char *)a2[2] + 1);
        if ( *a2 )
          (*a2)[1] = (__int64)v11;
        else
          a2[1] = v11;
        *a2 = v11;
      }
      catch ( ATL::CAtlException v14 )
      {
        sub_14000DC7C(v9);
        v13 = v14;
        throw (ATL::CAtlException *)&v13;
      }
    }
  }
}
