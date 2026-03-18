/*
 * XREFs of ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x1801221F0
 * Callers:
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800D4AA0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const struct CTreeData *__fastcall CVisual::GetParentTreeData(
        CVisual *this,
        const struct CVisualTree *a2,
        struct CTreeData *a3,
        bool *a4)
{
  const struct CTreeData *v4; // rbx
  bool v5; // bp
  _DWORD *v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD **v13; // rcx
  _QWORD *v14; // rcx
  __int64 **v15; // rcx
  __int64 v16; // rsi
  const struct CTreeData *result; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  _BYTE *v20; // r8
  __int64 v21; // rcx
  __int64 ****v22; // rdx
  __int64 ***v23; // rdx
  __int64 **j; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  _BYTE *v27; // r8
  __int64 v28; // rcx
  __int64 ****v29; // rcx
  __int64 ***v30; // rcx
  __int64 **k; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  _BYTE *v34; // r8
  __int64 v35; // rcx
  __int64 ****v36; // rcx
  __int64 ***v37; // rcx
  __int64 **i; // rax

  v4 = 0LL;
  v5 = 0;
  if ( this == *((CVisual **)a2 + 9) )
    goto LABEL_15;
  v9 = (_DWORD *)*((_QWORD *)this + 28);
  v10 = 0LL;
  if ( (*v9 & 0x4000000) != 0 )
  {
    v11 = (unsigned int)v9[1];
    a3 = (struct CTreeData *)(v9 + 2);
    v12 = 0LL;
    if ( (_DWORD)v11 )
    {
      while ( *(_BYTE *)a3 != 6 )
      {
        v12 = (unsigned int)(v12 + 1);
        a3 = (struct CTreeData *)((char *)a3 + 1);
        if ( (unsigned int)v12 >= (unsigned int)v11 )
          goto LABEL_37;
      }
    }
    else
    {
LABEL_37:
      if ( (unsigned int)v12 >= (unsigned int)v11 )
      {
        v13 = 0LL;
LABEL_6:
        v14 = *v13;
        if ( v14 )
          v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 192LL))(*v14);
        goto LABEL_8;
      }
    }
    v13 = (_QWORD **)((char *)&v9[2 * v12] + ((v11 + 15) & 0xFFFFFFFFFFFFFFF8uLL));
    goto LABEL_6;
  }
LABEL_8:
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *, _DWORD *, struct CTreeData *))(*(_QWORD *)a2 + 192LL))(
         a2,
         v9,
         a3) )
  {
    v15 = (__int64 **)((char *)this + 320);
LABEL_10:
    if ( !v15 || !*((_BYTE *)v15 + 12) || !v10 )
      goto LABEL_13;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2) )
    {
      v4 = (const struct CTreeData *)(v10 + 320);
LABEL_48:
      v5 = 1;
      goto LABEL_15;
    }
    v32 = *(_QWORD *)(v10 + 224);
    if ( *(int *)v32 >= 0 )
      goto LABEL_48;
    v33 = *(unsigned int *)(v32 + 4);
    v34 = (_BYTE *)(v32 + 8);
    v35 = 0LL;
    if ( (_DWORD)v33 )
    {
      while ( *v34 != 1 )
      {
        v35 = (unsigned int)(v35 + 1);
        ++v34;
        if ( (unsigned int)v35 >= (unsigned int)v33 )
          goto LABEL_60;
      }
    }
    else
    {
LABEL_60:
      if ( (unsigned int)v35 >= (unsigned int)v33 )
      {
        v36 = 0LL;
LABEL_53:
        v37 = *v36;
        if ( v37 )
        {
          for ( i = *v37; i != (__int64 **)v37; i = (__int64 **)*i )
          {
            if ( i[4] == (__int64 *)a2 )
            {
              v4 = (const struct CTreeData *)(i - 44);
              goto LABEL_48;
            }
          }
        }
        goto LABEL_48;
      }
    }
    v36 = (__int64 ****)(v32 + ((v33 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v35);
    goto LABEL_53;
  }
  v18 = *((_QWORD *)this + 28);
  if ( *(int *)v18 >= 0 )
    goto LABEL_13;
  v19 = *(unsigned int *)(v18 + 4);
  v20 = (_BYTE *)(v18 + 8);
  v21 = 0LL;
  if ( (_DWORD)v19 )
  {
    while ( *v20 != 1 )
    {
      v21 = (unsigned int)(v21 + 1);
      ++v20;
      if ( (unsigned int)v21 >= (unsigned int)v19 )
        goto LABEL_41;
    }
    goto LABEL_21;
  }
LABEL_41:
  if ( (unsigned int)v21 < (unsigned int)v19 )
  {
LABEL_21:
    v22 = (__int64 ****)(v18 + ((v19 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v21);
    goto LABEL_22;
  }
  v22 = 0LL;
LABEL_22:
  v23 = *v22;
  if ( v23 )
  {
    for ( j = *v23; j != (__int64 **)v23; j = (__int64 **)*j )
    {
      v15 = j - 44;
      if ( j[4] == (__int64 *)a2 )
        goto LABEL_10;
    }
  }
LABEL_13:
  v16 = *((_QWORD *)this + 11);
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 192LL))(a2) )
  {
    v4 = (const struct CTreeData *)(v16 + 320);
    goto LABEL_15;
  }
  v25 = *(_QWORD *)(v16 + 224);
  if ( *(int *)v25 < 0 )
  {
    v26 = *(unsigned int *)(v25 + 4);
    v27 = (_BYTE *)(v25 + 8);
    v28 = 0LL;
    if ( (_DWORD)v26 )
    {
      while ( *v27 != 1 )
      {
        v28 = (unsigned int)(v28 + 1);
        ++v27;
        if ( (unsigned int)v28 >= (unsigned int)v26 )
          goto LABEL_44;
      }
    }
    else
    {
LABEL_44:
      if ( (unsigned int)v28 >= (unsigned int)v26 )
      {
        v29 = 0LL;
LABEL_31:
        v30 = *v29;
        if ( v30 )
        {
          for ( k = *v30; k != (__int64 **)v30; k = (__int64 **)*k )
          {
            if ( k[4] == (__int64 *)a2 )
            {
              v4 = (const struct CTreeData *)(k - 44);
              goto LABEL_15;
            }
          }
        }
        goto LABEL_15;
      }
    }
    v29 = (__int64 ****)(v25 + ((v26 + 15) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * v28);
    goto LABEL_31;
  }
LABEL_15:
  result = v4;
  if ( a4 )
    *a4 = v5;
  return result;
}
