/*
 * XREFs of ReadFieldObj @ 0x140004180
 * Callers:
 *     <none>
 * Callees:
 *     PushAccFieldObj @ 0x1400010C0 (PushAccFieldObj.c)
 *     AccessFieldData @ 0x1400047D0 (AccessFieldData.c)
 *     HeapFree @ 0x14000C1E0 (HeapFree.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall ReadFieldObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v6; // r9d
  int *v7; // rdx
  int v8; // eax
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // rdi
  size_t v12; // r15
  unsigned __int64 v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rcx
  size_t v16; // r9
  __int64 v17; // r8
  int (__fastcall *v18)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v19; // rax
  int *v20; // rcx
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  unsigned int v29; // ecx
  __int64 v30; // rax
  size_t v31; // r12
  __int64 v32; // r9
  unsigned __int64 v33; // r15
  __int64 v34; // rdi
  __int64 v35; // rcx
  size_t v36; // r8
  __int64 v37; // r13
  int (__fastcall *v38)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v39; // rax
  int *v40; // rcx
  int v41; // r8d
  unsigned int v42; // edx
  unsigned int v43; // r9d
  __int64 v44; // r13
  int v45; // eax
  __int64 v46; // rcx
  signed __int32 v47[8]; // [rsp+0h] [rbp-69h] BYREF
  __int64 v48; // [rsp+20h] [rbp-49h]
  __int64 v49; // [rsp+30h] [rbp-39h]
  __int64 v50; // [rsp+38h] [rbp-31h]
  __int64 v51; // [rsp+40h] [rbp-29h]
  __int64 v52; // [rsp+48h] [rbp-21h]
  __int64 v53; // [rsp+50h] [rbp-19h]
  __int64 v54; // [rsp+58h] [rbp-11h]
  __int64 v55; // [rsp+60h] [rbp-9h]
  __int64 v56; // [rsp+68h] [rbp-1h]
  __int64 v57; // [rsp+70h] [rbp+7h]
  __int64 v58; // [rsp+78h] [rbp+Fh]
  __int64 v59; // [rsp+80h] [rbp+17h]
  int v60; // [rsp+E0h] [rbp+77h] BYREF
  __int64 Src; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = a3;
  if ( a3 )
  {
LABEL_54:
    *(_QWORD *)(a1 + 416) = *(_QWORD *)(*(_QWORD *)(a1 + 416) + 8LL);
    HeapFree();
    return v3;
  }
  v6 = *(_DWORD *)(a2 + 16);
  v7 = (int *)(a2 + 16);
  v8 = v6 & 0xF;
  if ( v8 == 1 )
    goto LABEL_27;
  if ( (v6 & 0xF) == 0 )
    goto LABEL_24;
  v9 = v8 - 2;
  if ( !v9 )
  {
    while ( 1 )
    {
      if ( !*(_DWORD *)(a2 + 80) )
        goto LABEL_49;
      v28 = 0LL;
      v29 = *(_DWORD *)(a2 + 72);
      if ( *(_DWORD *)(a2 + 76) < 0x40u )
        v28 = 1LL << *(_DWORD *)(a2 + 76);
      if ( v29 >= 0x40 )
        v30 = 0LL;
      else
        v30 = *(_QWORD *)(a2 + 88) << v29;
      v31 = *(unsigned int *)(a2 + 56);
      v32 = v30 & *(_QWORD *)(a2 + 64);
      v33 = *(_QWORD *)(a2 + 40);
      v34 = (v28 - 1) << v29;
      v35 = 0LL;
      Src = 0LL;
      v55 = 0xFFFFFFFFLL;
      v49 = v32;
      v60 = 0;
      v51 = 0LL;
      v52 = 255LL;
      v53 = 0xFFFFLL;
      v54 = 0LL;
      v56 = 0LL;
      v57 = 0LL;
      v58 = 0LL;
      v59 = -1LL;
      if ( (unsigned int)v31 > 8 )
        goto LABEL_48;
      v36 = (unsigned int)v31;
      v37 = *(&v51 + v31);
      if ( BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
      {
        v38 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144);
        if ( v38 )
          break;
      }
LABEL_42:
      if ( v33 % v36 )
      {
        if ( v34 != v37 )
        {
          memmove(&Src, (const void *)v33, v36);
          v35 = Src;
          v36 = v31;
          v32 = v49;
        }
        Src = v32 | v35 & ~v34;
        memmove((void *)v33, &Src, v36);
      }
      else
      {
        switch ( (_DWORD)v31 )
        {
          case 1:
            if ( v34 != v37 )
              v35 = *(unsigned __int8 *)v33;
            Src = v32 | v35 & ~v34;
            *(_BYTE *)v33 = Src;
LABEL_47:
            _InterlockedOr(v47, 0);
            break;
          case 4:
            if ( v34 != v37 )
              v35 = *(unsigned int *)v33;
            Src = v32 | v35 & ~v34;
            *(_DWORD *)v33 = Src;
            goto LABEL_47;
          case 2:
            if ( v34 != v37 )
              v35 = *(unsigned __int16 *)v33;
            Src = v32 | v35 & ~v34;
            *(_WORD *)v33 = Src;
            goto LABEL_47;
          case 8:
            if ( v34 != v37 )
              v35 = *(_QWORD *)v33;
            Src = v32 | v35 & ~v34;
            *(_QWORD *)v33 = Src;
            KeFlushWriteBuffer();
            break;
        }
      }
LABEL_48:
      *(_QWORD *)(a2 + 40) += *(unsigned int *)(a2 + 56);
      if ( *(_QWORD *)(a2 + 40) >= *(_QWORD *)(a2 + 48) )
      {
        ++*(_DWORD *)(a2 + 16);
        goto LABEL_54;
      }
LABEL_49:
      v41 = *(_DWORD *)(a2 + 76);
      v42 = *(_DWORD *)(a2 + 72);
      v43 = *(_DWORD *)(a2 + 104);
      v44 = *(_QWORD *)(a2 + 88) >> v41;
      *(_QWORD *)(a2 + 88) = v44;
      if ( v43 < v42 )
      {
        v46 = 0LL;
        if ( v43 < 0x40 )
          v46 = 1LL << v43;
        v44 &= v46 - 1;
        *(_QWORD *)(a2 + 88) = v44;
      }
      if ( v42 >= 0x40 )
        v11 = 0LL;
      else
        v11 = 1LL << v42;
      v12 = *(unsigned int *)(a2 + 56);
      v13 = *(_QWORD *)(a2 + 40);
      v14 = (v11 - 1) >> v41;
      v60 = 0;
      v15 = 0LL;
      Src = 0LL;
      v51 = 0LL;
      v52 = 255LL;
      v53 = 0xFFFFLL;
      v54 = 0LL;
      v55 = 0xFFFFFFFFLL;
      v56 = 0LL;
      v57 = 0LL;
      v58 = 0LL;
      v59 = -1LL;
      if ( (unsigned int)v12 > 8 )
        goto LABEL_22;
      v16 = (unsigned int)v12;
      v17 = *(&v51 + v12);
      v50 = v17;
      if ( BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) )
      {
        v18 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144);
        if ( v18 )
        {
          if ( v14 == v17 )
          {
LABEL_14:
            v19 = v44 | v15 & ~v14;
            v20 = &v60;
            Src = v19;
            LOBYTE(v20) = 1;
            if ( (*(int (__fastcall **)(int *, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144))(
                   v20,
                   v13,
                   &Src,
                   (unsigned int)v12,
                   &v60) >= 0 )
              goto LABEL_22;
          }
          else if ( v18(0LL, v13, &Src, (unsigned int)v12, &v60) >= 0 )
          {
            v15 = Src;
            goto LABEL_14;
          }
          v15 = Src;
          v16 = v12;
          v17 = v50;
        }
      }
      if ( v13 % v16 )
      {
        if ( v14 != v17 )
        {
          memmove(&Src, (const void *)v13, v16);
          v15 = Src;
          v16 = v12;
        }
        Src = v44 | v15 & ~v14;
        memmove((void *)v13, &Src, v16);
      }
      else
      {
        switch ( (_DWORD)v12 )
        {
          case 1:
            if ( v14 != v17 )
              v15 = *(unsigned __int8 *)v13;
            Src = v44 | v15 & ~v14;
            *(_BYTE *)v13 = Src;
LABEL_21:
            _InterlockedOr(v47, 0);
            break;
          case 4:
            if ( v14 != v17 )
              v15 = *(unsigned int *)v13;
            Src = v44 | v15 & ~v14;
            *(_DWORD *)v13 = Src;
            goto LABEL_21;
          case 2:
            if ( v14 != v17 )
              v15 = *(unsigned __int16 *)v13;
            Src = v44 | v15 & ~v14;
            *(_WORD *)v13 = Src;
            goto LABEL_21;
          case 8:
            if ( v14 != v17 )
              v15 = *(_QWORD *)v13;
            Src = v44 | v15 & ~v14;
            *(_QWORD *)v13 = Src;
            KeFlushWriteBuffer();
            break;
        }
      }
LABEL_22:
      v21 = *(_DWORD *)(a2 + 56);
      v7 = (int *)(a2 + 16);
      *(_DWORD *)(a2 + 96) += v21;
      v22 = *(_DWORD *)(a2 + 104) - 8 * v21;
      v23 = *(_DWORD *)(a2 + 80) + 1;
      *(_DWORD *)(a2 + 104) = *(_DWORD *)(a2 + 100) + v22;
      v24 = *(_DWORD *)(a2 + 16);
      *(_DWORD *)(a2 + 100) = 0;
      *(_DWORD *)(a2 + 80) = v23;
      if ( v23 >= *(_DWORD *)(a2 + 60) )
      {
        v45 = v24 + 1;
LABEL_53:
        *v7 = v45;
        goto LABEL_54;
      }
      *v7 = v24 - 2;
LABEL_24:
      v25 = *v7;
      if ( *(_DWORD *)(a2 + 80) >= *(_DWORD *)(a2 + 60) )
      {
        v45 = v25 + 3;
        goto LABEL_53;
      }
      v26 = *(_QWORD *)(a2 + 32);
      v6 = v25 + 1;
      *v7 = v25 + 1;
      if ( *(_WORD *)(v26 + 2) == 5 )
      {
        v27 = **(_QWORD **)(v26 + 32);
        if ( *(_WORD *)(v27 + 66) == 132 )
          return PushAccFieldObj(
                   a1,
                   (__int64)WriteFieldObj,
                   **(_QWORD **)(v27 + 96) + 64LL,
                   (_DWORD *)(*(_QWORD *)(**(_QWORD **)(v27 + 96) + 96LL) + 8LL),
                   a2 + 96,
                   4u);
      }
LABEL_27:
      LOBYTE(v48) = 1;
      *v7 = v6 + 1;
      result = AccessFieldData(a1, *(_QWORD *)(a2 + 32), (int)a2 + 96, (int)a2 + 88, v48);
      v3 = result;
      if ( (_DWORD)result || a2 != *(_QWORD *)(a1 + 416) )
        return result;
    }
    if ( v34 != v37 )
    {
      if ( v38(0LL, v33, &Src, (unsigned int)v31, &v60) < 0 )
      {
LABEL_41:
        v35 = Src;
        v36 = v31;
        v32 = v49;
        goto LABEL_42;
      }
      v35 = Src;
      v32 = v49;
    }
    v39 = v35 & ~v34;
    v40 = &v60;
    Src = v32 | v39;
    LOBYTE(v40) = 1;
    if ( (*(int (__fastcall **)(int *, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144))(
           v40,
           v33,
           &Src,
           (unsigned int)v31,
           &v60) >= 0 )
      goto LABEL_48;
    goto LABEL_41;
  }
  if ( v9 == 1 )
    goto LABEL_54;
  return 0LL;
}
