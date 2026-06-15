/*
 * XREFs of sub_14009ECD0 @ 0x14009ECD0
 * Callers:
 *     sub_1400A3BB0 @ 0x1400A3BB0 (sub_1400A3BB0.c)
 * Callees:
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     sub_14009E814 @ 0x14009E814 (sub_14009E814.c)
 */

char __fastcall sub_14009ECD0(_QWORD *a1, _OWORD *a2)
{
  __int32 v2; // ebx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int32 v7; // edx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  bool v12; // zf
  volatile __int32 *v13; // rcx
  __int64 v14; // rax
  unsigned int v16; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-Ch] BYREF
  __int64 v18; // [rsp+38h] [rbp-8h] BYREF
  char v19; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v20; // [rsp+78h] [rbp+38h] BYREF

  v2 = 0;
  v20 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0LL;
  v19 = 0;
  sub_14009E814(a1, &v18, &v20, &v16, &v17, &v19);
  if ( v20 != v16 )
  {
    if ( v20 < v17 )
    {
      v5 = v18;
      v6 = (unsigned __int64)v20 << 6;
      v7 = v20 + 1;
      v8 = *(_OWORD *)(v6 + v18 + 16);
      *a2 = *(_OWORD *)(v6 + v18);
      v9 = *(_OWORD *)(v6 + v5 + 32);
      a2[1] = v8;
      v10 = *(_OWORD *)(v6 + v5 + 48);
      v11 = a1[11];
      a2[2] = v9;
      a2[3] = v10;
      v12 = *(_DWORD *)(v11 + 180) == -1;
      v13 = (volatile __int32 *)a1[11];
      v14 = a1[12];
      if ( v12 )
      {
        if ( v7 != *(_DWORD *)(v14 + 132) )
          v2 = v7;
      }
      else if ( v7 == *(_DWORD *)(v14 + 148) )
      {
        _InterlockedExchange(v13 + 45, -1);
        _InterlockedExchange((volatile __int32 *)(a1[11] + 184LL), 0);
        v13 = (volatile __int32 *)(a1[11] + 188LL);
      }
      else
      {
        v13 += 46;
        v2 = v7;
      }
      _InterlockedExchange(v13, v2);
      LOBYTE(v2) = 1;
    }
    else
    {
      sub_140048108();
      sub_140048108();
    }
  }
  return v2;
}
