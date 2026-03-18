/*
 * XREFs of ?xxxNumpadCursor@@YAHPEAUtagKE@@@Z @ 0x140110600
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsSAS @ 0x14011094C (ApiSetEditionIsSAS.c)
 *     xxxKeyEventEx @ 0x140150824 (xxxKeyEventEx.c)
 */

__int64 __fastcall xxxNumpadCursor(struct tagKE *a1, __int64 a2)
{
  signed __int16 *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  signed __int16 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edx
  _BYTE *i; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdi
  int v28; // esi
  unsigned __int16 v29; // bx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 UserSessionState; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  char v35; // bl
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdi
  int v45; // esi
  unsigned __int16 v46; // bx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // [rsp+88h] [rbp+10h] BYREF

  v3 = (signed __int16 *)((char *)a1 + 2);
  if ( *(_BYTE *)(W32GetUserSessionState(a1, a2) + 14054) )
  {
    LOBYTE(v18) = *(_BYTE *)(W32GetUserSessionState(v5, v4) + 14054);
    if ( (_BYTE)v18 == *(_BYTE *)v3 )
    {
      v20 = (unsigned __int16)*v3;
      if ( (v20 & 0x8000u) != 0 )
      {
        xxxKeyEventEx(
          v20,
          *(unsigned __int8 *)a1,
          *((_DWORD *)a1 + 1),
          0,
          *((_QWORD *)a1 + 1),
          (__int64)a1 + 16,
          0,
          0,
          0LL,
          0LL);
        *(_BYTE *)(W32GetUserSessionState(v22, v21) + 14054) = 0;
        v25 = *(unsigned __int16 *)(W32GetUserSessionState(v24, v23) + 14056);
        *v3 = v25;
        *(_BYTE *)a1 = *(_BYTE *)(W32GetUserSessionState(v25, v26) + 14058);
      }
      return 1LL;
    }
    v27 = *((_QWORD *)a1 + 1);
    v28 = *((_DWORD *)a1 + 1);
    v29 = *(unsigned __int8 *)(W32GetUserSessionState(v19, v18) + 14058) | 0x200;
    UserSessionState = W32GetUserSessionState(v31, v30);
    xxxKeyEventEx(*(unsigned __int16 *)(UserSessionState + 14056), v29, v28, 0, v27, (__int64)a1 + 16, 0, 0, 0LL, 0LL);
    *(_BYTE *)(W32GetUserSessionState(v34, v33) + 14054) = 0;
  }
  if ( _bittest16(v3, 0xBu) )
  {
    LOBYTE(v5) = *(_BYTE *)v3;
    v50 = 0;
    if ( !(unsigned int)ApiSetEditionIsSAS(v5, &v50) )
    {
      v9 = v3;
      if ( (*(_BYTE *)(W32GetUserSessionState(v8, v7) + 14436) & 2) == 0 )
      {
        if ( !*(_QWORD *)(W32GetUserSessionState(v11, v10) + 18904) )
          return 1LL;
        v11 = *(_QWORD *)(W32GetUserSessionState(v17, v16) + 18904);
        if ( (*(_DWORD *)(v11 + 1360) & 0x800000) == 0 )
          return 1LL;
        v9 = (signed __int16 *)((char *)a1 + 2);
      }
      if ( (*(_BYTE *)(W32GetUserSessionState(v11, v10) + 14404) & 1) != 0 )
      {
        v35 = *(_BYTE *)v3;
        *(_BYTE *)(W32GetUserSessionState(v13, v12) + 14054) = v35;
        if ( (*(_BYTE *)(W32GetUserSessionState(v37, v36) + 14440) & 4) != 0 )
        {
          *(_WORD *)(W32GetUserSessionState(v39, v38) + 14056) = 417;
          *(_BYTE *)(W32GetUserSessionState(417LL, v40) + 14058) = 54;
        }
        else
        {
          *(_WORD *)(W32GetUserSessionState(v39, v38) + 14056) = 160;
          *(_BYTE *)(W32GetUserSessionState(160LL, v43) + 14058) = 42;
        }
        v44 = *((_QWORD *)a1 + 1);
        v45 = *((_DWORD *)a1 + 1);
        v46 = *(unsigned __int8 *)(W32GetUserSessionState(v42, v41) + 14058) | 0x200;
        v49 = W32GetUserSessionState(v48, v47);
        xxxKeyEventEx(*(_WORD *)(v49 + 14056) | 0x8000, v46, v45, 0, v44, (__int64)a1 + 16, 0, 0, 0LL, 0LL);
      }
      else if ( !_bittest16(v3, 0xDu) )
      {
        v14 = 0;
        for ( i = ausNumPadCvt; *(_WORD *)i; i += 2 )
        {
          if ( *i == *(_BYTE *)v9 )
          {
            *((_BYTE *)a1 + 2) = 0;
            *((_WORD *)a1 + 1) |= HIBYTE(ausNumPadCvt[v14]);
            return 1LL;
          }
          ++v14;
        }
      }
    }
  }
  return 1LL;
}
