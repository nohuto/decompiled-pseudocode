/*
 * XREFs of ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x14014D950
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEventEx @ 0x140123104 (xxxKeyEventEx.c)
 *     ApiSetEditionIsSAS @ 0x1401BEACC (ApiSetEditionIsSAS.c)
 */

__int64 __fastcall xxxNumpadCursor(struct tagKE *a1, int a2, int a3)
{
  signed __int16 *v4; // r14
  int v5; // edx
  __int64 v6; // rcx
  int v7; // r8d
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  signed __int16 *v12; // rbx
  int v13; // edx
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r8d
  _BYTE *i; // rdx
  __int16 v21; // cx
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // rcx
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // ecx
  int v36; // edx
  int v37; // r8d
  void *v38; // rsi
  unsigned int v39; // ebp
  unsigned __int16 v40; // di
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  __int64 UserSessionState; // rax
  int v45; // edx
  int v46; // ecx
  int v47; // r8d
  char v48; // bl
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  int v52; // edx
  int v53; // ecx
  int v54; // r8d
  int v55; // edx
  int v56; // r8d
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  int v60; // edx
  int v61; // r8d
  void *v62; // rsi
  unsigned int v63; // ebp
  unsigned __int16 v64; // di
  int v65; // edx
  int v66; // ecx
  int v67; // r8d
  __int64 v68; // rax
  int v69; // [rsp+88h] [rbp+10h] BYREF

  v4 = (signed __int16 *)((char *)a1 + 2);
  if ( *(_BYTE *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 14046) )
  {
    LOBYTE(v25) = *(_BYTE *)(W32GetUserSessionState(v6, v5, v7) + 14046);
    if ( (_BYTE)v25 == *(_BYTE *)v4 )
    {
      v28 = (unsigned __int16)*v4;
      if ( (v28 & 0x8000u) != 0LL )
      {
        xxxKeyEventEx(
          v28,
          *(unsigned __int8 *)a1,
          *((_DWORD *)a1 + 1),
          0LL,
          *((void **)a1 + 1),
          (unsigned __int16 *)a1 + 8,
          0,
          0,
          0LL,
          0LL);
        *(_BYTE *)(W32GetUserSessionState(v30, v29, v31) + 14046) = 0;
        v35 = *(unsigned __int16 *)(W32GetUserSessionState(v33, v32, v34) + 14048);
        *v4 = v35;
        *(_BYTE *)a1 = *(_BYTE *)(W32GetUserSessionState(v35, v36, v37) + 14050);
      }
      return 1LL;
    }
    v38 = (void *)*((_QWORD *)a1 + 1);
    v39 = *((_DWORD *)a1 + 1);
    v40 = *(unsigned __int8 *)(W32GetUserSessionState(v26, v25, v27) + 14050) | 0x200;
    UserSessionState = W32GetUserSessionState(v42, v41, v43);
    xxxKeyEventEx(
      *(unsigned __int16 *)(UserSessionState + 14048),
      v40,
      v39,
      0LL,
      v38,
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL,
      0LL);
    *(_BYTE *)(W32GetUserSessionState(v46, v45, v47) + 14046) = 0;
  }
  if ( _bittest16(v4, 0xBu) )
  {
    LOBYTE(v6) = *(_BYTE *)v4;
    v69 = 0;
    if ( !(unsigned int)ApiSetEditionIsSAS(v6, &v69) )
    {
      v12 = v4;
      if ( (*(_BYTE *)(W32GetUserSessionState(v10, v9, v11) + 14428) & 2) == 0 )
      {
        if ( !*(_QWORD *)(W32GetUserSessionState(v14, v13, v15) + 18944) )
          return 1LL;
        v14 = *(_QWORD *)(W32GetUserSessionState(v23, v22, v24) + 18944);
        if ( (*(_DWORD *)(v14 + 1360) & 0x800000) == 0 )
          return 1LL;
        v12 = (signed __int16 *)((char *)a1 + 2);
      }
      if ( (*(_BYTE *)(W32GetUserSessionState(v14, v13, v15) + 14396) & 1) != 0 )
      {
        v48 = *(_BYTE *)v4;
        *(_BYTE *)(W32GetUserSessionState(v17, v16, v18) + 14046) = v48;
        if ( (*(_BYTE *)(W32GetUserSessionState(v50, v49, v51) + 14432) & 4) != 0 )
        {
          *(_WORD *)(W32GetUserSessionState(v53, v52, v54) + 14048) = 417;
          *(_BYTE *)(W32GetUserSessionState(417, v55, v56) + 14050) = 54;
        }
        else
        {
          *(_WORD *)(W32GetUserSessionState(v53, v52, v54) + 14048) = 160;
          *(_BYTE *)(W32GetUserSessionState(160, v60, v61) + 14050) = 42;
        }
        v62 = (void *)*((_QWORD *)a1 + 1);
        v63 = *((_DWORD *)a1 + 1);
        v64 = *(unsigned __int8 *)(W32GetUserSessionState(v58, v57, v59) + 14050) | 0x200;
        v68 = W32GetUserSessionState(v66, v65, v67);
        xxxKeyEventEx(*(_WORD *)(v68 + 14048) | 0x8000u, v64, v63, 0LL, v62, (unsigned __int16 *)a1 + 8, 0, 0, 0LL, 0LL);
      }
      else if ( (*v4 & 0x2000) == 0 )
      {
        v19 = 0;
        for ( i = ausNumPadCvt; *(_WORD *)i; i += 2 )
        {
          if ( *i == *(_BYTE *)v12 )
          {
            v21 = *v4 & 0xFF00;
            *((_WORD *)a1 + 1) = v21;
            *((_WORD *)a1 + 1) = v21 | HIBYTE(ausNumPadCvt[v19]);
            return 1LL;
          }
          ++v19;
        }
      }
    }
  }
  return 1LL;
}
