/*
 * XREFs of sub_180047740 @ 0x180047740
 * Callers:
 *     sub_18004AD40 @ 0x18004AD40 (sub_18004AD40.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180029154 @ 0x180029154 (sub_180029154.c)
 *     sub_180038FE0 @ 0x180038FE0 (sub_180038FE0.c)
 *     sub_1800390E0 @ 0x1800390E0 (sub_1800390E0.c)
 *     sub_180046AD0 @ 0x180046AD0 (sub_180046AD0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_180047740(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int *v6; // rbx
  __int128 *v7; // rdx
  _QWORD **v8; // rdi
  unsigned int v9; // ebx
  _QWORD **v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h]
  __int64 v14; // [rsp+40h] [rbp-C0h]
  __int64 v15; // [rsp+48h] [rbp-B8h]
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h]
  __int64 v18; // [rsp+60h] [rbp-A0h]
  int v19; // [rsp+68h] [rbp-98h]
  __int64 v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  int v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  int v25; // [rsp+98h] [rbp-68h]
  __int64 v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  int v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C0h] [rbp-40h]
  int v31; // [rsp+C8h] [rbp-38h]
  __int64 v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  int v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  __int64 v36; // [rsp+F0h] [rbp-10h]
  int v37; // [rsp+F8h] [rbp-8h]
  __int128 v38; // [rsp+100h] [rbp+0h] BYREF
  __int128 v39; // [rsp+110h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a1 + 120) )
  {
    sub_180012A94(*a2 + 72, &v12);
    if ( !sub_180029154(a1, *(_DWORD *)(v12 + 244)) )
    {
      if ( (*(_BYTE *)(a1 + 40) & 4) == 0 )
      {
LABEL_14:
        if ( v13 )
          sub_180010EC8(v13);
        return;
      }
      sub_180046AD0(a1, &v12);
    }
    v38 = 0LL;
    v14 = a1 + 144;
    v15 = 1LL;
    v16 = 0;
    v17 = a1 + 160;
    v18 = 2LL;
    v19 = 1;
    v20 = a1 + 176;
    v21 = 16LL;
    v22 = 4;
    v23 = a1 + 192;
    v24 = 4LL;
    v25 = 2;
    v26 = a1 + 240;
    v27 = 32LL;
    v28 = 5;
    v29 = a1 + 256;
    v30 = 64LL;
    v31 = 6;
    v32 = a1 + 208;
    v33 = 512LL;
    v34 = 9;
    v35 = a1 + 224;
    v36 = 1024LL;
    v37 = 10;
    v6 = (unsigned int *)&v16;
    do
    {
      v7 = (__int128 *)*((_QWORD *)v6 - 2);
      if ( !*(_QWORD *)v7 || (a3 & *((_QWORD *)v6 - 1)) == 0 )
        v7 = &v38;
      sub_1800390E0(*a2, v7, *v6);
      v6 += 6;
    }
    while ( v6 - 4 != (unsigned int *)&v38 );
    *(_DWORD *)(*(_QWORD *)(*a2 + 96) + 9832LL) = *(_DWORD *)(a1 + 300);
    if ( *(_QWORD *)(a1 + 272) )
    {
      sub_180038FE0(*a2, (_QWORD *)(a1 + 272));
      v8 = (_QWORD **)*a2;
      v9 = *(_DWORD *)(a1 + 112);
      (*(void (__fastcall **)(_QWORD *, _QWORD **))(*v8[12] + 8LL))(v8[12], v8);
      ((void (__fastcall *)(_QWORD **, _QWORD, _QWORD, _QWORD))(*v8)[26])(v8, v9, 0LL, 0LL);
      ((void (__fastcall *)(_QWORD **))(*v8)[37])(v8);
      _InterlockedAdd64(qword_1801C8670, *(unsigned int *)(a1 + 112));
    }
    else
    {
      v39 = 0LL;
      sub_180038FE0(*a2, &v39);
      v10 = (_QWORD **)*a2;
      v11 = *(_DWORD *)(a1 + 120);
      (*(void (__fastcall **)(_QWORD *, _QWORD **))(*v10[12] + 8LL))(v10[12], v10);
      ((void (__fastcall *)(_QWORD **, _QWORD, _QWORD))(*v10)[25])(v10, v11, 0LL);
    }
    _InterlockedAdd64(qword_1801C85D0, *(unsigned int *)(a1 + 120));
    _InterlockedIncrement64(qword_1801C8D50);
    goto LABEL_14;
  }
}
