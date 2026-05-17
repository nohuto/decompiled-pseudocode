/*
 * XREFs of RtlMakeSelfRelativeSD @ 0x1800C8340
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800C7758 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1800C8320 (RtlAbsoluteToSelfRelativeSD.c)
 * Callees:
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlMakeSelfRelativeSD(__int64 a1, char *a2, unsigned int *a3)
{
  __int16 v5; // cx
  int v6; // r13d
  __int16 v8; // r9
  unsigned __int8 *v9; // rax
  unsigned int v10; // r8d
  unsigned int *v11; // rax
  unsigned __int16 *v12; // r15
  size_t v13; // rbx
  unsigned __int8 *v14; // rax
  unsigned int v15; // r12d
  unsigned int v16; // ebp
  unsigned int v17; // ecx
  char *v18; // rsi
  int v19; // eax
  unsigned __int16 *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int Size; // [rsp+70h] [rbp+8h]
  unsigned __int16 *v27; // [rsp+78h] [rbp+10h]
  unsigned __int8 *Src; // [rsp+80h] [rbp+18h]
  unsigned __int8 *v29; // [rsp+88h] [rbp+20h]

  v5 = *(_WORD *)(a1 + 2);
  v6 = 0;
  v8 = v5 & 0x8000;
  if ( v5 < 0 )
  {
    v23 = *(unsigned int *)(a1 + 4);
    if ( !(_DWORD)v23 )
    {
      Src = 0LL;
      goto LABEL_41;
    }
    v9 = (unsigned __int8 *)(a1 + v23);
  }
  else
  {
    v9 = *(unsigned __int8 **)(a1 + 8);
  }
  Src = v9;
  if ( !v9 )
  {
LABEL_41:
    v10 = 0;
    goto LABEL_5;
  }
  v10 = (4 * v9[1] + 11) & 0xFFFFFFFC;
LABEL_5:
  Size = v10;
  v11 = (unsigned int *)(a1 + 16);
  if ( (v5 & 4) == 0 )
    goto LABEL_44;
  if ( !v8 )
  {
    v12 = *(unsigned __int16 **)(a1 + 32);
    goto LABEL_8;
  }
  v24 = *v11;
  if ( !(_DWORD)v24 )
  {
LABEL_44:
    v12 = 0LL;
    goto LABEL_45;
  }
  v12 = (unsigned __int16 *)(a1 + v24);
LABEL_8:
  if ( v12 )
  {
    v13 = (v12[1] + 3) & 0xFFFFFFFC;
    goto LABEL_10;
  }
LABEL_45:
  v13 = 0LL;
LABEL_10:
  if ( v8 )
  {
    v22 = *(unsigned int *)(a1 + 8);
    if ( !(_DWORD)v22 )
    {
      v29 = 0LL;
      goto LABEL_35;
    }
    v14 = (unsigned __int8 *)(a1 + v22);
  }
  else
  {
    v14 = *(unsigned __int8 **)v11;
  }
  v29 = v14;
  if ( v14 )
  {
    v15 = (4 * v14[1] + 11) & 0xFFFFFFFC;
    goto LABEL_14;
  }
LABEL_35:
  v15 = 0;
LABEL_14:
  if ( (v5 & 0x10) == 0 )
  {
LABEL_15:
    v27 = 0LL;
LABEL_16:
    v16 = 0;
    goto LABEL_17;
  }
  if ( v8 )
  {
    v25 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v25 )
      goto LABEL_15;
    v21 = (unsigned __int16 *)(a1 + v25);
  }
  else
  {
    v21 = *(unsigned __int16 **)(a1 + 24);
  }
  v27 = v21;
  if ( !v21 )
    goto LABEL_16;
  v16 = (v21[1] + 3) & 0xFFFFFFFC;
LABEL_17:
  v17 = v13 + v16 + v15 + v10 + 20;
  if ( v17 > *a3 )
  {
    *a3 = v17;
    return 3221225507LL;
  }
  else if ( a2 )
  {
    memset_thunk_772440563353939046(a2, 0, v17);
    v18 = a2 + 20;
    *(_DWORD *)a2 = *(_DWORD *)a1;
    if ( v16 )
    {
      memmove(a2 + 20, v27, v16);
      v19 = 20;
      v18 += v16;
    }
    else
    {
      v19 = 0;
    }
    *((_DWORD *)a2 + 3) = v19;
    if ( (_DWORD)v13 )
    {
      memmove(v18, v12, v13);
      v6 = (_DWORD)v18 - (_DWORD)a2;
      v18 += v13;
    }
    *((_DWORD *)a2 + 4) = v6;
    if ( Size )
    {
      memmove(v18, Src, Size);
      *((_DWORD *)a2 + 1) = (_DWORD)v18 - (_DWORD)a2;
      v18 += Size;
    }
    if ( v15 )
    {
      memmove(v18, v29, v15);
      *((_DWORD *)a2 + 2) = (_DWORD)v18 - (_DWORD)a2;
    }
    *((_WORD *)a2 + 1) |= 0x8000u;
    return 0LL;
  }
  else
  {
    return 3221225485LL;
  }
}
