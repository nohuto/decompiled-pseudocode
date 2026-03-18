/*
 * XREFs of sub_140022F24 @ 0x140022F24
 * Callers:
 *     sub_140003520 @ 0x140003520 (sub_140003520.c)
 * Callees:
 *     sub_14000B900 @ 0x14000B900 (sub_14000B900.c)
 *     sub_14001F8F8 @ 0x14001F8F8 (sub_14001F8F8.c)
 *     sub_140029394 @ 0x140029394 (sub_140029394.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140022F24(__int64 a1, __int64 a2)
{
  bool v3; // zf
  int v5; // r12d
  unsigned __int8 v6; // cl
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r8
  unsigned __int16 v10; // r9
  __int64 v11; // r14
  unsigned int v12; // ebp
  __int16 v13; // ax
  int v14; // r13d
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  _DWORD *v20; // [rsp+D8h] [rbp-70h] BYREF
  __int128 v21; // [rsp+E0h] [rbp-68h] BYREF
  __int128 v22; // [rsp+F0h] [rbp-58h]

  v3 = *(_BYTE *)(a2 + 2) == 40;
  v20 = 0LL;
  v5 = 0;
  if ( v3 )
    v6 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v6 = *(_BYTE *)(a2 + 7);
  v7 = v6;
  v8 = *(_QWORD *)(a1 + 8LL * v6 + 1672);
  if ( v6 == 255 || !v8 )
  {
    *(_BYTE *)(a2 + 3) = 32;
    v12 = -1056964602;
    v11 = 0LL;
    if ( v6 == 255 )
      goto LABEL_29;
    goto LABEL_27;
  }
  v11 = sub_14000B900(a2, &v20);
  if ( *v20 >= 0x4Cu )
  {
    if ( *(_DWORD *)(v11 + 28) == 1 )
    {
      if ( (*(_BYTE *)(a1 + 3728) & 7) == 3 && *(_BYTE *)(a1 + 3729) == (_BYTE)v7 && *(_WORD *)(a1 + 3732) > v10 )
      {
        v21 = 0LL;
        v22 = 0LL;
        v12 = sub_140029394(a1, (unsigned int)v9, v9, &v21);
        if ( v12 )
        {
          v12 = 0;
          *(_WORD *)(a1 + 3734) = -1;
          v13 = -1;
        }
        else
        {
          v13 = WORD1(v21) + WORD3(v22);
          *(_WORD *)(a1 + 3734) = WORD4(v22);
        }
        *(_WORD *)(a1 + 3736) = v13;
      }
      else
      {
        v12 = sub_14001F8F8(a1, v7, v9);
      }
      v14 = *(_DWORD *)(v8 + 52);
      if ( v12 )
      {
        *(_BYTE *)(a2 + 3) = 4;
      }
      else
      {
        v5 = 48;
        *(_OWORD *)(v11 + 28) = 0LL;
        *(_OWORD *)(v11 + 44) = 0LL;
        *(_OWORD *)(v11 + 60) = 0LL;
        *(_DWORD *)(v11 + 28) = 1;
        *(_DWORD *)(v11 + 32) = 48;
        *(_DWORD *)(v11 + 36) = v14;
        v15 = *(_DWORD *)(a1 + 3740) * v14;
        *(_DWORD *)(v11 + 40) = v15;
        *(_DWORD *)(v11 + 44) = *(_DWORD *)(a1 + 3744) * v15;
        v16 = *(unsigned __int16 *)(a1 + 3732);
        *(_DWORD *)(v11 + 72) = v16;
        *(_DWORD *)(v11 + 52) = v16;
        *(_DWORD *)(v11 + 48) = 1;
        *(_DWORD *)(v11 + 56) = v15;
        *(_DWORD *)(v11 + 60) = *(unsigned __int16 *)(a1 + 3732);
        v17 = -1;
        v18 = *(unsigned __int16 *)(a1 + 3734);
        if ( (_WORD)v18 == 0xFFFF )
          v18 = -1;
        *(_DWORD *)(v11 + 68) = v18;
        if ( *(_WORD *)(a1 + 3736) != 0xFFFF )
          v17 = *(unsigned __int16 *)(a1 + 3736);
        *(_DWORD *)(v11 + 64) = v17;
        *(_BYTE *)(a2 + 3) = 1;
      }
      goto LABEL_27;
    }
    goto LABEL_8;
  }
  if ( *v20 < 0x24u )
  {
LABEL_8:
    *(_BYTE *)(a2 + 3) = 6;
    v12 = -1056964602;
    goto LABEL_27;
  }
  *(_DWORD *)(v11 + 28) = 1;
  v5 = 8;
  *(_DWORD *)(v11 + 32) = 48;
  v12 = -1056964604;
  *(_BYTE *)(a2 + 3) = 18;
LABEL_27:
  if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
    StorPortExtendedFunction(87LL, a1, *(_QWORD *)(a1 + 8 * v7 + 1672), 0LL);
LABEL_29:
  *(_DWORD *)(v11 + 24) = v5;
  return v12;
}
