/*
 * XREFs of ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x14000AE70
 * Callers:
 *     xxxMenuDraw @ 0x14000A708 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x14000B428 (xxxDrawMenuItem.c)
 * Callees:
 *     GrePolyPatBlt @ 0x140126C64 (GrePolyPatBlt.c)
 */

void __fastcall MNDrawInsertionBar(HDC a1, struct tagITEM *a2)
{
  int v3; // r14d
  int v4; // ebx
  int v5; // r13d
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r15d
  int v9; // esi
  __int64 v10; // r12
  int v11; // ebx
  int v12; // ecx
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // rax
  _DWORD *v16; // rdi
  unsigned int v17; // edx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rt2
  __int64 v21; // rcx
  int v22; // eax
  int v23; // ebx
  int v24; // edi
  __int64 UserSessionState; // rax
  __int64 v26; // rdx
  _DWORD v28[4]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v29; // [rsp+58h] [rbp-9h]
  int v30; // [rsp+60h] [rbp-1h]
  int v31; // [rsp+64h] [rbp+3h]
  int v32; // [rsp+68h] [rbp+7h]
  unsigned int v33; // [rsp+6Ch] [rbp+Bh]
  __int64 v34; // [rsp+70h] [rbp+Fh]
  int v35; // [rsp+78h] [rbp+17h]
  int v36; // [rsp+7Ch] [rbp+1Bh]
  int v37; // [rsp+80h] [rbp+1Fh]
  int v38; // [rsp+84h] [rbp+23h]
  __int64 v39; // [rsp+88h] [rbp+27h]

  v3 = *(_DWORD *)(*(_QWORD *)a2 + 4LL);
  if ( v3 < 0 || (v3 & 0x40000000) != 0 )
  {
    v4 = *(_DWORD *)(*(_QWORD *)a2 + 64LL);
    v28[0] = v4 + *(_DWORD *)(*(_QWORD *)(((__int64 (*)(void))W32GetUserSessionState)() + 19904) + 2168LL);
    v5 = *(_DWORD *)(*(_QWORD *)(((__int64 (*)(void))W32GetUserSessionState)() + 19904) + 2168LL);
    v28[2] = v5;
    v6 = *(_QWORD *)(((__int64 (*)(void))W32GetUserSessionState)() + 19904);
    v7 = *(_QWORD *)a2;
    v8 = *(_DWORD *)(v6 + 2172);
    v28[3] = v8;
    if ( v3 >= 0 )
      v9 = *(_DWORD *)(v7 + 68) + *(_DWORD *)(v7 + 76) - v8;
    else
      v9 = *(_DWORD *)(v7 + 68);
    v28[1] = v9;
    v10 = *(_QWORD *)(*(_QWORD *)(((__int64 (*)(void))W32GetUserSessionState)() + 19904) + 4800LL);
    v11 = *(_DWORD *)(*(_QWORD *)a2 + 64LL);
    v29 = v10;
    v12 = v11 + 2 * *(_DWORD *)(*(_QWORD *)(((__int64 (*)(void))W32GetUserSessionState)() + 19904) + 2168LL);
    v13 = *(_QWORD *)a2;
    v30 = v12;
    v14 = *(_DWORD *)(v13 + 72);
    v32 = v14 - 4 * *(_DWORD *)(*(_QWORD *)(((__int64 (*)(void))W32GetUserSessionState)() + 19904) + 2168LL);
    v15 = ((__int64 (*)(void))W32GetUserSessionState)();
    v16 = *(_DWORD **)a2;
    v17 = *(int *)(*(_QWORD *)(v15 + 19904) + 2172LL) >> 31;
    LODWORD(v15) = *(_DWORD *)(*(_QWORD *)(v15 + 19904) + 2172LL);
    v19 = v17;
    v20 = __SPAIR64__(v17, v15) % 2;
    v18 = __SPAIR64__(v17, v15) / 2;
    LODWORD(v19) = v20;
    v33 = v18;
    v21 = v18;
    if ( v3 >= 0 )
      v22 = v16[17] + v16[19] - v18;
    else
      v22 = v16[17];
    v23 = v16[16];
    v24 = v16[18];
    v31 = v22;
    v34 = v10;
    UserSessionState = W32GetUserSessionState(v21, v19);
    v37 = v5;
    v38 = v8;
    v26 = *(_QWORD *)(UserSessionState + 19904);
    v36 = v9;
    v39 = v10;
    v35 = v23 + v24 - 2 * *(_DWORD *)(v26 + 2168);
    GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v28, 3u);
  }
}
