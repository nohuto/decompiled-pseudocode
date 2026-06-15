/*
 * XREFs of ??$_Copy_vbool@V?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@std@@V12@@std@@YA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@0@V10@00@Z @ 0x180133220
 * Callers:
 *     ?erase@?$vector@_NV?$allocator@_N@std@@@std@@QEAA?AV?$_Vb_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@V?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@0@Z @ 0x18013FFF4 (-erase@-$vector@_NV-$allocator@_N@std@@@std@@QEAA-AV-$_Vb_iterator@U-$_Wrap_alloc@V-$allocator@I.c)
 * Callees:
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 */

_OWORD *__fastcall std::_Copy_vbool<std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>,std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int>>>>(
        _OWORD *a1,
        _DWORD **a2,
        __int64 a3,
        __int64 a4)
{
  _DWORD *v4; // r12
  _DWORD *v6; // r13
  unsigned __int64 *v7; // r9
  __int64 *v9; // rcx
  __int64 v10; // rsi
  __int64 *v11; // rdx
  unsigned __int64 v12; // rbx
  int *v13; // r8
  __int64 v14; // rcx
  bool v15; // sf
  __int64 v16; // rcx
  __int64 v17; // r10
  __int64 v18; // r11
  __int64 v19; // rax
  __int64 v20; // r11
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  int v23; // edx
  unsigned int v24; // r15d
  unsigned __int64 v25; // r9
  unsigned int v26; // esi
  int v27; // r10d
  int *v28; // rax
  int v29; // esi
  char v30; // cl
  unsigned int v31; // eax
  unsigned int v32; // edx
  unsigned int v33; // eax
  int v34; // eax
  char v35; // cl
  unsigned int v36; // eax
  unsigned int v37; // eax
  int v38; // r9d
  __int64 v39; // r10
  int v40; // r9d
  __int64 v41; // rax
  __int64 v42; // r11
  _BYTE *v43; // r9
  _BYTE *v44; // rdi
  __int64 v45; // r12
  _BYTE *v46; // r15
  int v47; // edx
  char v48; // al
  __int64 v49; // rbx
  unsigned int v50; // edx
  _DWORD *v51; // r11
  int v52; // r15d
  unsigned __int64 v53; // r9
  char v54; // bp
  unsigned int v55; // ebx
  unsigned int i; // edx
  unsigned __int64 v57; // rdi
  int v58; // eax
  int v59; // edx
  unsigned __int64 v60; // rdi
  unsigned __int64 v61; // rbp
  unsigned __int64 v62; // r9
  int v63; // r10d
  _DWORD *v65; // [rsp+20h] [rbp-48h]
  __int64 v66; // [rsp+78h] [rbp+10h]
  int *v67; // [rsp+78h] [rbp+10h]

  v4 = *(_DWORD **)a3;
  v6 = *a2;
  v7 = (unsigned __int64 *)(a2 + 1);
  v65 = *(_DWORD **)a3;
  v9 = (__int64 *)(a3 + 8);
  if ( *a2 == *(_DWORD **)a3 && *v7 == *v9 )
  {
    *a1 = *(_OWORD *)a4;
    return a1;
  }
  v10 = *v9;
  v11 = (__int64 *)a1 + 1;
  v12 = *v7;
  v13 = *(int **)a4;
  v14 = 32 * (v4 - v6) - *v7;
  v15 = v10 + v14 < 0;
  v16 = v10 + v14;
  *a1 = *(_OWORD *)a4;
  if ( v15 && (v17 = *v11, *v11 < (unsigned __int64)-v16) )
  {
    LOBYTE(v18) = v16 + v17;
    *v11 = v16 + v17;
    v19 = -4LL - 4 * ((unsigned __int64)~(v16 + v17) >> 5);
  }
  else
  {
    *v11 += v16;
    v18 = *v11;
    v19 = 4 * ((unsigned __int64)*v11 >> 5);
  }
  *(_QWORD *)a1 += v19;
  v20 = v18 & 0x1F;
  v21 = *(_QWORD *)a1;
  *v11 = v20;
  v22 = *(_QWORD *)(a4 + 8);
  v23 = -1 << v12;
  v66 = v21;
  if ( v22 )
    v24 = 0xFFFFFFFF >> (32 - v22);
  else
    v24 = 0;
  v25 = *v7;
  v26 = 0xFFFFFFFF >> (32 - v10);
  v27 = -1 << v20;
  v28 = (int *)((-(__int64)(v20 == 0) & 0xFFFFFFFFFFFFFFFCuLL) + v21);
  v67 = (int *)((-(__int64)(v20 == 0) & 0xFFFFFFFFFFFFFFFCuLL) + v66);
  if ( v6 == v4 )
  {
    v29 = v23 & v26;
    if ( v22 >= v25 )
      v30 = v22 - v25;
    else
      v30 = v25 - v22;
    v31 = *v6 & v29;
    v32 = v31 >> v30;
    v33 = v31 << v30;
    if ( v22 >= v25 )
      v32 = v33;
    if ( v13 != v67 )
    {
      *v13 = v32 | v24 & *v13;
      v13[1] = v13[1] & v27 | ((*v6 & (unsigned int)v29) >> (*(_BYTE *)(a3 + 8) - v20));
      return a1;
    }
    v34 = *v13 & (v24 | (v20 != 0 ? v27 : 0));
LABEL_51:
    *v13 = v32 | v34;
    return a1;
  }
  if ( v13 == v28 )
  {
    if ( v22 >= v25 )
      v35 = v22 - v25;
    else
      v35 = v25 - v22;
    v36 = *v6 & v23;
    v32 = v36 >> v35;
    v37 = v36 << v35;
    if ( v22 >= v25 )
      v32 = v37;
    v38 = v20 != 0 ? v27 : 0;
    v39 = *(_QWORD *)(a3 + 8);
    v40 = *v13 & (v24 | v38);
    if ( v39 )
      v34 = v40 | ((v26 & *v4) << (v20 - v39));
    else
      v34 = v40;
    goto LABEL_51;
  }
  v41 = v25 & 7;
  v42 = v22 & 7;
  if ( v41 == v42 )
  {
    v43 = (char *)v6 + ((v25 - v41) >> 3);
    v44 = (char *)v13 + ((v22 - v42) >> 3);
    v45 = *(_QWORD *)(a3 + 8) & 7LL;
    v46 = (char *)v65 + ((unsigned __int64)(*(_QWORD *)(a3 + 8) - v45) >> 3);
    if ( v41 )
    {
      v47 = 255 >> (8 - v41);
      v48 = *v43++ & (-1 << v41);
      *v44 = v48 | *v44 & v47;
      ++v44;
    }
    v49 = v46 - v43;
    memmove_0(v44, v43, v46 - v43);
    if ( v45 )
      v44[v49] = v44[v49] & (-1 << v45) | *v46 & (255 >> (8 - v45));
  }
  else
  {
    v50 = *v6 & v23;
    v51 = v6 + 1;
    v52 = *v13 & v24;
    if ( v22 >= v25 )
    {
      v60 = v22 - v25;
      v61 = 32 - v60;
      *v13 = v52 | (v50 << v60);
      v32 = *v6 >> (32 - v60);
      ++v13;
      while ( v51 != v4 )
      {
        *v13++ = v32 | (*v51 << v60);
        v32 = *v51++ >> v61;
      }
      v62 = *(_QWORD *)(a3 + 8);
      if ( v62 < v61 )
      {
        v63 = *v13 & v27;
        if ( !v62 )
        {
          *v13 = v32 | v63;
          return a1;
        }
        v34 = v63 | ((v26 & *v51) << v60);
        goto LABEL_51;
      }
      *v13 = v32 | (*v51 << v60);
      if ( v62 != v61 )
        v13[1] = v13[1] & v27 | ~v27 & (*v51 >> v61);
    }
    else
    {
      v53 = v25 - v22;
      v54 = 32 - v53;
      v55 = 0xFFFFFFFF >> v53;
      for ( i = v52 | (v50 >> v53); ; i = (*v51++ >> v53) | ~(0xFFFFFFFF >> v53) & *v13 )
      {
        *v13 = i;
        if ( v51 == v4 )
          break;
        *v13++ = (*v51 << v54) | v55 & i;
      }
      v57 = *(_QWORD *)(a3 + 8);
      if ( v57 )
      {
        v58 = *v13;
        v59 = (v26 & *v51) << v54;
        if ( v57 < v53 )
        {
          *v13 = v59 | v58 & (v27 | v55);
        }
        else
        {
          *v13 = v59 | v55 & v58;
          if ( v57 != v53 )
            v13[1] = v13[1] & v27 | ((v26 & *v51) >> v53);
        }
      }
    }
  }
  return a1;
}
