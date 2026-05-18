/*
 * XREFs of sub_1800996C0 @ 0x1800996C0
 * Callers:
 *     sub_18009A710 @ 0x18009A710 (sub_18009A710.c)
 * Callees:
 *     sub_18009980C @ 0x18009980C (sub_18009980C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1800996C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rsi
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-68h] BYREF
  __int128 v13; // [rsp+28h] [rbp-60h]
  __int128 v14; // [rsp+38h] [rbp-50h]
  __int128 v15; // [rsp+48h] [rbp-40h]
  __int128 v16; // [rsp+58h] [rbp-30h]
  __int128 v17; // [rsp+68h] [rbp-20h]
  __int64 v18; // [rsp+78h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, int *, _QWORD))(*(_QWORD *)v4 + 96LL))(v4, &v12, 0LL);
    v6 = v12;
    v5 = (_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 36) = v12;
    if ( v6 == 2 )
    {
      v7 = v14;
      *(_OWORD *)(a1 + 56) = v13;
      v8 = v15;
      *(_OWORD *)(a1 + 72) = v7;
      v9 = v16;
      *(_OWORD *)(a1 + 88) = v8;
      v10 = v17;
      *(_OWORD *)(a1 + 104) = v9;
      *(_QWORD *)&v9 = v18;
      *(_OWORD *)(a1 + 120) = v10;
      *(_QWORD *)(a1 + 136) = v9;
    }
    else if ( v6 != 5 )
    {
      goto LABEL_8;
    }
    sub_18009980C(a1);
    goto LABEL_8;
  }
  v5 = (_DWORD *)(a1 + 36);
LABEL_8:
  *(_DWORD *)a2 = 4;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a2 + 72) = 0LL;
  *(_QWORD *)(a2 + 80) = 0LL;
  *(_QWORD *)(a2 + 88) = 0LL;
  *(_DWORD *)a2 = *v5;
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 56);
  *(_OWORD *)(a2 + 24) = *(_OWORD *)(a1 + 72);
  *(_OWORD *)(a2 + 40) = *(_OWORD *)(a1 + 88);
  *(_OWORD *)(a2 + 56) = *(_OWORD *)(a1 + 104);
  *(_OWORD *)(a2 + 72) = *(_OWORD *)(a1 + 120);
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(a1 + 136);
  return result;
}
