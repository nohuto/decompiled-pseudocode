/*
 * XREFs of SPCallServerHandleCallbackPaintComplete @ 0x140B23E70
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall SPCallServerHandleCallbackPaintComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rdx
  int v7; // r11d
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  unsigned int i; // r9d
  __int64 v11; // r10
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  signed int v14; // ebx
  int v15; // r12d
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // edx
  __int64 Pool2; // rcx
  char **v21; // rax
  char *v22; // r9
  unsigned int v23; // edx
  unsigned int v24; // ecx
  int v25; // eax
  char *v26; // rdx
  unsigned int j; // r8d
  char *v28; // r13
  unsigned int v29; // eax
  unsigned int v30; // r10d
  char *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r8
  unsigned int v35; // ecx
  unsigned int v36; // eax
  char *v37; // rdx
  unsigned int k; // r9d
  char *v39; // r13
  unsigned int v40; // eax
  unsigned int v41; // edi
  char *v42; // rcx
  __int64 v43; // rax
  __int64 v45; // [rsp+80h] [rbp+8h]

  v45 = 0LL;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v6 = 0LL;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = -1LL;
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    for ( i = 0; ; ++i )
    {
      v11 = *(unsigned int *)v8;
      v12 = v8 + 4;
      v13 = -1LL;
      if ( i >= 3 )
        break;
      if ( v12 >= v8 )
        v13 = v8 + 4;
      v14 = v12 < v8 ? 0xC0000095 : 0;
      if ( v12 < v8 )
        goto LABEL_20;
      v8 = -1LL;
      if ( v13 + v11 >= v13 )
        v8 = v13 + v11;
      v14 = v13 + v11 < v13 ? 0xC0000095 : 0;
      if ( v13 + v11 < v13 )
        goto LABEL_20;
    }
    if ( v12 >= v8 )
      v13 = v8 + 4;
    v14 = v12 < v8 ? 0xC0000095 : 0;
    if ( v12 >= v8 )
    {
      v7 = *(_DWORD *)v8;
      if ( (_DWORD)v11 )
        v6 = (__int64 *)v13;
    }
  }
  else
  {
    v14 = -1073741811;
  }
LABEL_20:
  if ( v14 >= 0 )
  {
    if ( v7 == 8 )
      v45 = *v6;
    else
      v14 = -1073741789;
    if ( v14 >= 0 )
    {
      KeReleaseMutex(&Mutex, 0);
      v15 = -1;
      v16 = -1;
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
        v16 = *(_DWORD *)(a2 + 16) + 48;
      v14 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
      {
        v17 = v16 + 4;
        v18 = -1;
        if ( v16 + 4 >= v16 )
          v18 = v16 + 4;
        v14 = v17 < v16 ? 0xC0000095 : 0;
        if ( v17 >= v16 )
          v14 = v18 + *(_DWORD *)(a2 + 32) < v18 ? 0xC0000095 : 0;
      }
      if ( v14 >= 0 )
      {
        *(_DWORD *)(a4 + 4) = 20;
        v14 = 0;
        Pool2 = ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          v21 = (char **)(a4 + 8);
          *(_QWORD *)(a4 + 8) = Pool2;
        }
        else
        {
          v14 = -1073741801;
          v21 = (char **)(a4 + 8);
        }
        if ( v14 >= 0 )
        {
          *(_DWORD *)a4 = 0;
          v22 = *v21;
          if ( *v21 )
          {
            v26 = *v21;
            for ( j = 0; ; ++j )
            {
              v28 = v26;
              if ( j >= *(_DWORD *)a4 )
                break;
              v29 = -1;
              if ( *(_DWORD *)v26 < 0xFFFFFFFC )
                v29 = *(_DWORD *)v26 + 4;
              v14 = *(_DWORD *)v26 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v26 + 4) < 4 )
                goto LABEL_61;
              v30 = v29;
              v31 = &v26[v29];
              v32 = -1LL;
              if ( v31 >= v26 )
                v32 = (__int64)&v26[v30];
              v26 = (char *)v32;
              v14 = v31 < v28 ? 0xC0000095 : 0;
              if ( v31 < v28 )
                goto LABEL_61;
            }
            v33 = -1LL;
            if ( v26 + 4 >= v26 )
              v33 = (__int64)(v26 + 4);
            v14 = v26 + 4 < v26 ? 0xC0000095 : 0;
            if ( v26 + 4 >= v26 )
            {
              if ( v26 + 8 > &v22[*(unsigned int *)(a4 + 4)] )
              {
                v14 = -1073741789;
                goto LABEL_61;
              }
              *(_DWORD *)v26 = 4;
              *(_DWORD *)v33 = 0;
              goto LABEL_60;
            }
          }
          else
          {
            v23 = *(_DWORD *)(a4 + 4);
            v24 = v23 + 8;
            v25 = -1;
            if ( v23 + 8 >= v23 )
              v25 = v23 + 8;
            *(_DWORD *)(a4 + 4) = v25;
            v14 = v24 < v23 ? 0xC0000095 : 0;
            if ( v24 >= v23 )
            {
              v14 = 0;
LABEL_60:
              ++*(_DWORD *)a4;
            }
          }
LABEL_61:
          if ( v14 >= 0 )
          {
            v34 = *(_QWORD *)(a4 + 8);
            if ( v34 )
            {
              v37 = *(char **)(a4 + 8);
              for ( k = 0; ; ++k )
              {
                v39 = v37;
                if ( k >= *(_DWORD *)a4 )
                  break;
                v40 = -1;
                if ( *(_DWORD *)v37 < 0xFFFFFFFC )
                  v40 = *(_DWORD *)v37 + 4;
                v14 = *(_DWORD *)v37 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v37 + 4) < 4 )
                  return (unsigned int)v14;
                v41 = v40;
                v42 = &v37[v40];
                v43 = -1LL;
                if ( v42 >= v37 )
                  v43 = (__int64)&v37[v41];
                v37 = (char *)v43;
                v14 = v42 < v39 ? 0xC0000095 : 0;
                if ( v42 < v39 )
                  return (unsigned int)v14;
              }
              if ( v37 + 4 >= v37 )
                v9 = (__int64)(v37 + 4);
              v14 = v37 + 4 < v37 ? 0xC0000095 : 0;
              if ( v37 + 4 >= v37 )
              {
                if ( (unsigned __int64)(v37 + 12) <= v34 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *(_DWORD *)v37 = 8;
                  *(_QWORD *)v9 = v45;
                  goto LABEL_82;
                }
                return (unsigned int)-1073741789;
              }
            }
            else
            {
              v35 = *(_DWORD *)(a4 + 4);
              v36 = v35 + 12;
              if ( v35 + 12 >= v35 )
                v15 = v35 + 12;
              *(_DWORD *)(a4 + 4) = v15;
              v14 = v36 < v35 ? 0xC0000095 : 0;
              if ( v36 >= v35 )
              {
                v14 = 0;
LABEL_82:
                ++*(_DWORD *)a4;
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v14;
}
