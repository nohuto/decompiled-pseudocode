/*
 * XREFs of sub_14002E5AC @ 0x14002E5AC
 * Callers:
 *     sub_14002E4EC @ 0x14002E4EC (sub_14002E4EC.c)
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140008E60 @ 0x140008E60 (sub_140008E60.c)
 *     sub_14000B210 @ 0x14000B210 (sub_14000B210.c)
 *     sub_14000B520 @ 0x14000B520 (sub_14000B520.c)
 */

char __fastcall sub_14002E5AC(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  unsigned __int16 v6; // bx
  __int64 v7; // r15
  __int64 v9; // rsi
  char v10; // r12
  __int64 v11; // rbx
  __int16 v12; // dx
  unsigned __int16 v13; // dx
  unsigned __int8 v14; // cl
  unsigned __int16 *v15; // rdx
  char v16; // al
  _WORD *v17; // r10
  _WORD *v18; // r9
  _OWORD *v19; // rdx
  int v20; // ecx
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // r8
  signed __int32 v29[8]; // [rsp+0h] [rbp-80h] BYREF
  _QWORD *v30; // [rsp+20h] [rbp-60h]
  int *v31; // [rsp+28h] [rbp-58h]
  __int16 *v32; // [rsp+30h] [rbp-50h]
  int v33; // [rsp+40h] [rbp-40h] BYREF
  _DWORD v34[3]; // [rsp+44h] [rbp-3Ch]
  _WORD *v35; // [rsp+50h] [rbp-30h]
  unsigned __int16 *v36; // [rsp+58h] [rbp-28h]
  _QWORD v37[2]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v38; // [rsp+70h] [rbp-10h]
  unsigned int v39; // [rsp+C8h] [rbp+48h] BYREF
  int v40; // [rsp+D0h] [rbp+50h]
  unsigned __int16 v41; // [rsp+D8h] [rbp+58h] BYREF

  v41 = a4;
  v37[1] = 0LL;
  v40 = 0;
  v37[0] = 1LL;
  v6 = 0;
  v7 = 0LL;
  v9 = a2;
  v30 = v37;
  v10 = 1;
  v38 = 0LL;
  StorPortExtendedFunction(93LL, a1, 1LL, a3 + 64);
  for ( ; v9; v9 = *(_QWORD *)(v9 + 40) )
  {
    v11 = sub_140005000(v9);
    if ( *(_WORD *)(a3 + 48) == v12 )
      _InterlockedAdd16((volatile signed __int16 *)(a1 + 976), 1u);
    v13 = *(_WORD *)(a3 + 48);
    v35 = (_WORD *)(v11 + 4216);
    v36 = (unsigned __int16 *)(v11 + 4214);
    if ( sub_14000B520(a1, v13, (_WORD *)(v11 + 4216), (unsigned __int16 *)(v11 + 4214)) )
    {
      if ( *(_BYTE *)(v9 + 2) == 40 )
        v14 = *(_BYTE *)(*(unsigned int *)(v9 + 52) + v9 + 10);
      else
        v14 = *(_BYTE *)(v9 + 7);
      v40 = v14;
      if ( *(_WORD *)(a3 + 48) )
        v7 = 392LL * *(unsigned __int16 *)(a3 + 58) + *(_QWORD *)(a1 + 944) - 392LL;
      *(_WORD *)(v11 + 4098) = *(_WORD *)(v11 + 4214);
      sub_14000B210(a1, v9, (_DWORD *)(v11 + 4096));
      v15 = v36;
      *(_QWORD *)(32LL * *v36 + *(_QWORD *)(a3 + 32) + 16) = v9;
      *(_WORD *)(32LL * *v15 + *(_QWORD *)(a3 + 32) + 24) = *v35;
      v16 = sub_140008E60(a1, a2);
      v17 = v35;
      v18 = v36;
      v19 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * (unsigned __int16)*v35);
      *v19 = *(_OWORD *)(v11 + 4096);
      v19[1] = *(_OWORD *)(v11 + 4112);
      v19[2] = *(_OWORD *)(v11 + 4128);
      v19[3] = *(_OWORD *)(v11 + 4144);
      *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * (unsigned __int16)*v17 + 8) = *v18;
      *(_DWORD *)(32LL * (unsigned __int16)*v18 + *(_QWORD *)(a3 + 32)) = (16 * ((16 * v40) | v16 & 1)) | 8;
      _InterlockedAdd16((volatile signed __int16 *)(a3 + 136), 1u);
      v6 = *v17 + 1;
      v40 = (unsigned __int16)*v17 + 1;
    }
    else
    {
      v6 = v40;
      v10 = 0;
      *(_BYTE *)(v9 + 3) = 5;
    }
  }
  v20 = 0;
  if ( v6 != v41 )
    v20 = v6;
  **(_DWORD **)(a3 + 16) = v20;
  _InterlockedOr(v29, 0);
  StorPortNotification(4100LL, a1, v37);
  if ( v7 && *(_BYTE *)(v7 + 248) )
  {
    v39 = 0;
    StorPortExtendedFunction(92LL, a1, &v39, v21);
    v22 = *(_QWORD *)(v7 + 256);
    if ( v22 )
    {
      v26 = -10LL * *(unsigned int *)(v7 + 252);
      LOBYTE(v41) = 0;
      v27 = *(_QWORD *)(v22 + 8LL * v39);
      v32 = (__int16 *)&v41;
      v31 = 0LL;
      v30 = 0LL;
      StorPortExtendedFunction(89LL, a1, v27, v26);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 3764) & 0x10) != 0 )
      {
        v23 = *(_QWORD *)(a1 + 264);
        v24 = *(_QWORD *)(v23 + 72LL * v39 + 8);
        if ( v24 )
        {
          v34[0] = 0;
          LOWORD(v34[0]) = *(_WORD *)(v23 + 72LL * v39 + 16);
          _BitScanForward64(&v25, v24);
          *(_DWORD *)((char *)v34 + 2) = v25;
          StorPortNotification(4107LL, a1, v7 + 264);
        }
      }
      v31 = &v33;
      v30 = 0LL;
      v33 = 0;
      StorPortNotification(4098LL, a1, v7 + 264);
    }
  }
  if ( !*(_WORD *)(a3 + 48) )
    _InterlockedDecrement16((volatile signed __int16 *)(a1 + 976));
  return v10;
}
