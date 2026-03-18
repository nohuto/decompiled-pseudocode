/*
 * XREFs of ProcessUpdateKeyStateEvent @ 0x1400DAD10
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void __fastcall ProcessUpdateKeyStateEvent(__int64 a1, char *a2, _BYTE *a3)
{
  _BYTE *v3; // rsi
  char *v4; // rbp
  __int64 v5; // r14
  _BYTE *v6; // r13
  int i; // r12d
  int v8; // r11d
  char v9; // r15
  char v10; // r9
  unsigned __int64 v11; // rax
  char v12; // cl
  __int64 v13; // r10
  int v14; // r8d
  int v15; // r8d
  char v16; // cl
  int v17; // r8d
  unsigned __int64 v18; // r8
  char v19; // bl
  char *v20; // rdi
  char v21; // cl
  __int64 v22; // r10
  int v23; // r8d
  int v24; // r8d
  char v25; // cl
  int v26; // r8d
  unsigned __int64 v27; // r8
  char v28; // bl
  char *v29; // rdi
  char v30; // cl
  __int64 v31; // r10
  int v32; // r8d
  int v33; // r8d
  char v34; // cl
  int v35; // r8d
  unsigned __int8 v36; // r9
  unsigned __int64 v37; // r8
  int v38; // r10d
  char *v39; // rbx
  char v40; // cl
  __int64 v41; // r9
  int v42; // r8d
  int v43; // r8d
  int v44; // eax
  int v45; // eax
  __int64 v46; // rcx
  int v47; // edx
  int v48; // r8d
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = a3;
  for ( i = 0; i < 32; ++i )
  {
    if ( *v6 )
    {
      v8 = 0;
      v9 = 8 * i;
      do
      {
        v10 = v8 + v9;
        if ( ((unsigned __int8)(1 << ((v8 + v9) & 7)) & v3[(unsigned __int64)(unsigned __int8)(v8 + v9) >> 3]) != 0 )
        {
          v11 = (unsigned __int64)(unsigned __int8)(v8 + v9) >> 2;
          v12 = 2 * (v10 & 3);
          v13 = v11 + v5;
          v14 = *(unsigned __int8 *)(v11 + v5 + 280);
          if ( ((unsigned __int8)(1 << v12) & (unsigned __int8)v4[v11]) != 0 )
            v15 = v14 | (1 << v12);
          else
            v15 = v14 & ~(1 << v12);
          v16 = 2 * (v10 & 3) + 1;
          *(_BYTE *)(v13 + 280) = v15;
          if ( ((unsigned __int8)(1 << v16) & (unsigned __int8)v4[v11]) != 0 )
            v17 = (unsigned __int8)v15 | (1 << v16);
          else
            v17 = (unsigned __int8)v15 & ~(1 << v16);
          *(_BYTE *)(v13 + 280) = v17;
        }
        if ( ((unsigned __int8)(1 << ((v10 + 1) & 7)) & v3[(unsigned __int64)(unsigned __int8)(v10 + 1) >> 3]) != 0 )
        {
          v18 = (unsigned __int64)(unsigned __int8)(v10 + 1) >> 2;
          v19 = (v10 + 1) & 3;
          v20 = &v4[v18];
          v21 = 2 * v19;
          v22 = v18 + v5;
          v23 = *(unsigned __int8 *)(v18 + v5 + 280);
          if ( ((unsigned __int8)(1 << (2 * v19)) & (unsigned __int8)*v20) != 0 )
            v24 = v23 | (1 << v21);
          else
            v24 = v23 & ~(1 << v21);
          v25 = 2 * v19 + 1;
          *(_BYTE *)(v22 + 280) = v24;
          if ( ((unsigned __int8)(1 << v25) & (unsigned __int8)*v20) != 0 )
            v26 = (unsigned __int8)v24 | (1 << v25);
          else
            v26 = (unsigned __int8)v24 & ~(1 << v25);
          *(_BYTE *)(v22 + 280) = v26;
        }
        if ( ((unsigned __int8)(1 << ((v10 + 2) & 7)) & v3[(unsigned __int64)(unsigned __int8)(v10 + 2) >> 3]) != 0 )
        {
          v27 = (unsigned __int64)(unsigned __int8)(v10 + 2) >> 2;
          v28 = (v10 + 2) & 3;
          v29 = &v4[v27];
          v30 = 2 * v28;
          v31 = v27 + v5;
          v32 = *(unsigned __int8 *)(v27 + v5 + 280);
          if ( ((unsigned __int8)(1 << (2 * v28)) & (unsigned __int8)*v29) != 0 )
            v33 = v32 | (1 << v30);
          else
            v33 = v32 & ~(1 << v30);
          v34 = 2 * v28 + 1;
          *(_BYTE *)(v31 + 280) = v33;
          if ( ((unsigned __int8)(1 << v34) & (unsigned __int8)*v29) != 0 )
            v35 = (unsigned __int8)v33 | (1 << v34);
          else
            v35 = (unsigned __int8)v33 & ~(1 << v34);
          *(_BYTE *)(v31 + 280) = v35;
        }
        v36 = v10 + 3;
        LODWORD(a3) = v36;
        LODWORD(a1) = v36 & 7;
        LODWORD(a2) = 1 << a1;
        if ( ((unsigned __int8)(1 << a1) & v3[(unsigned __int64)v36 >> 3]) != 0 )
        {
          v37 = (unsigned __int64)v36 >> 2;
          v38 = v36 & 3;
          v39 = &v4[v37];
          v40 = 2 * v38;
          v41 = v37 + v5;
          v42 = *(unsigned __int8 *)(v37 + v5 + 280);
          if ( ((unsigned __int8)(1 << (2 * v38)) & (unsigned __int8)*v39) != 0 )
            v43 = v42 | (1 << v40);
          else
            v43 = v42 & ~(1 << v40);
          v44 = (unsigned __int8)v43;
          LODWORD(a3) = 2 * v38 + 1;
          *(_BYTE *)(v41 + 280) = v44;
          LODWORD(a1) = (_DWORD)a3;
          LODWORD(a2) = 1 << (2 * v38 + 1);
          if ( ((unsigned __int8)a2 & (unsigned __int8)*v39) != 0 )
            v45 = v44 | (1 << (char)a3);
          else
            v45 = v44 & ~(1 << (char)a3);
          *(_BYTE *)(v41 + 280) = v45;
        }
        v8 += 4;
      }
      while ( v8 < 8 );
    }
    ++v6;
  }
  v46 = *(_QWORD *)(W32GetUserSessionState(a1, (_DWORD)a2, (_DWORD)a3) + 19904);
  ++*(_DWORD *)(v46 + 6984);
  if ( v4 != (char *)(W32GetUserSessionState(v46, v47, v48) + 14328) )
    GreDeleteFastMutex(v4, v49, v50, v51);
}
