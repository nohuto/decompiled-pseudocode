/*
 * XREFs of ExRngInitializeSystem @ 0x140CED1C0
 * Callers:
 *     KiInitializeBootStructures @ 0x140BFB890 (KiInitializeBootStructures.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int128 *ExRngInitializeSystem()
{
  _DWORD *v0; // r8
  __int64 v1; // rdi
  unsigned int v2; // r9d
  __int64 v3; // r10
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int64 v33; // rsi
  _BYTE *v34; // rbx
  __int128 *result; // rax
  __int128 v36; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v37; // [rsp+30h] [rbp-E8h]
  __int128 v38; // [rsp+40h] [rbp-D8h]
  __int128 v39; // [rsp+50h] [rbp-C8h]
  __int128 v40; // [rsp+60h] [rbp-B8h]
  __int128 v41; // [rsp+70h] [rbp-A8h]
  __int128 v42; // [rsp+80h] [rbp-98h]
  __int128 v43; // [rsp+90h] [rbp-88h]
  __int128 v44; // [rsp+A0h] [rbp-78h]
  __int128 v45; // [rsp+B0h] [rbp-68h]
  __int128 v46; // [rsp+C0h] [rbp-58h]
  __int128 v47; // [rsp+D0h] [rbp-48h]
  __int128 v48; // [rsp+E0h] [rbp-38h]
  __int64 v49; // [rsp+F0h] [rbp-28h]
  int v50; // [rsp+F8h] [rbp-20h]

  v0 = &ExpLFGRngState;
  v1 = 220LL;
  WheapConfigTableLock.SchedulerApc.SystemArgument1 = 0LL;
  v2 = 220;
  v3 = 2LL;
  v4 = *(_QWORD *)(KeLoaderBlock_0 + 240) + 344LL;
  do
  {
    v5 = v2 + 1096LL;
    v2 += 220;
    v6 = v4 + v5;
    v7 = *(_OWORD *)(v6 + 16);
    v36 = *(_OWORD *)v6;
    v8 = *(_OWORD *)(v6 + 32);
    v37 = v7;
    v9 = *(_OWORD *)(v6 + 48);
    v38 = v8;
    v10 = *(_OWORD *)(v6 + 64);
    v39 = v9;
    v11 = *(_OWORD *)(v6 + 80);
    v40 = v10;
    v12 = *(_OWORD *)(v6 + 96);
    v41 = v11;
    v13 = *(_OWORD *)(v6 + 112);
    v6 += 128LL;
    v42 = v12;
    v14 = *(_QWORD *)(v6 + 80);
    v15 = *(_OWORD *)v6;
    v43 = v13;
    v16 = *(_OWORD *)(v6 + 16);
    v44 = v15;
    v17 = *(_OWORD *)(v6 + 32);
    v45 = v16;
    v18 = *(_OWORD *)(v6 + 48);
    v46 = v17;
    v19 = *(_OWORD *)(v6 + 64);
    v47 = v18;
    v48 = v19;
    v49 = v14;
    v50 = *(_DWORD *)(v6 + 88);
    v20 = v36;
    v0[55] = 1;
    v21 = v37;
    v0[56] = 32;
    *(_OWORD *)v0 = v20;
    v22 = v38;
    *((_OWORD *)v0 + 1) = v21;
    v23 = v39;
    *((_OWORD *)v0 + 2) = v22;
    v24 = v40;
    *((_OWORD *)v0 + 3) = v23;
    v25 = v41;
    *((_OWORD *)v0 + 4) = v24;
    v26 = v42;
    *((_OWORD *)v0 + 5) = v25;
    v27 = v43;
    *((_OWORD *)v0 + 6) = v26;
    *((_OWORD *)v0 + 7) = v27;
    v28 = v49;
    v29 = v45;
    *((_OWORD *)v0 + 8) = v44;
    v30 = v46;
    *((_OWORD *)v0 + 9) = v29;
    v31 = v47;
    *((_OWORD *)v0 + 10) = v30;
    v32 = v48;
    *((_OWORD *)v0 + 11) = v31;
    *((_OWORD *)v0 + 12) = v32;
    *((_QWORD *)v0 + 26) = v28;
    v0[54] = v50;
    *v0 |= 1u;
    v0 += 57;
    --v3;
  }
  while ( v3 );
  v33 = 1024LL;
  *(_DWORD *)&WheapConfigTableLock.SchedulerApcFill5[72] = (1024 - v2) >> 2;
  memmove(&WheapConfigTableLock.SuspendEvent, (const void *)(v4 + v2 + 1096LL), 4LL * ((1024 - v2) >> 2));
  v34 = (_BYTE *)(v4 + 1096);
  do
  {
    *v34++ = 0;
    --v33;
  }
  while ( v33 );
  result = &v36;
  do
  {
    *(_BYTE *)result = 0;
    result = (__int128 *)((char *)result + 1);
    --v1;
  }
  while ( v1 );
  return result;
}
