/*
 * XREFs of sub_140AA1E68 @ 0x140AA1E68
 * Callers:
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140AA1E68(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int v6; // ebx
  __int64 *v7; // rdx
  int v8; // r8d
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  unsigned int i; // r9d
  __int64 v12; // r11
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r10
  __int64 v15; // r9
  int v16; // r12d
  unsigned int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // edx
  __int64 Pool2; // rax
  char **v21; // rdx
  char *v22; // rdx
  unsigned int v23; // edx
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int j; // r8d
  char *v27; // r13
  unsigned int v28; // eax
  unsigned int v29; // r9d
  char *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r8
  char *v33; // rdx
  unsigned int v34; // ecx
  unsigned int v35; // eax
  unsigned int k; // r8d
  char *v37; // r11
  unsigned int v38; // eax
  unsigned int v39; // edi
  char *v40; // rcx
  __int64 v41; // rax
  __int64 v44; // [rsp+90h] [rbp+8h]

  v44 = 0LL;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v7 = 0LL;
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = -1LL;
  if ( v9 && *(_DWORD *)a1 > 3u )
  {
    for ( i = 0; ; ++i )
    {
      v12 = *(unsigned int *)v9;
      v13 = v9 + 4;
      if ( i >= 3 )
        break;
      v14 = -1LL;
      if ( v13 >= v9 )
        v14 = v9 + 4;
      v6 = v13 < v9 ? 0xC0000095 : 0;
      if ( v13 < v9 )
        goto LABEL_22;
      v9 = -1LL;
      if ( v14 + v12 >= v14 )
        v9 = v14 + v12;
      v6 = v14 + v12 < v14 ? 0xC0000095 : 0;
      if ( v14 + v12 < v14 )
        goto LABEL_22;
    }
    v15 = -1LL;
    if ( v13 >= v9 )
      v15 = v9 + 4;
    v6 = v13 < v9 ? 0xC0000095 : 0;
    if ( v13 >= v9 )
    {
      v8 = *(_DWORD *)v9;
      if ( (_DWORD)v12 )
        v7 = (__int64 *)v15;
    }
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_22:
  if ( v6 >= 0 )
  {
    if ( v8 == 8 )
      v44 = *v7;
    else
      v6 = -1073741789;
    if ( v6 >= 0 )
    {
      KeReleaseMutex(&Mutex, 0);
      v16 = -1;
      v17 = -1;
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
        v17 = *(_DWORD *)(a2 + 16) + 48;
      v6 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
      {
        v18 = v17 + 4;
        v19 = -1;
        if ( v17 + 4 >= v17 )
          v19 = v17 + 4;
        v6 = v18 < v17 ? 0xC0000095 : 0;
        if ( v18 >= v17 )
          v6 = v19 + *(_DWORD *)(a2 + 32) < v19 ? 0xC0000095 : 0;
      }
      if ( v6 >= 0 )
      {
        *(_DWORD *)(a4 + 4) = 20;
        v6 = 0;
        Pool2 = ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          v21 = (char **)(a4 + 8);
          *(_QWORD *)(a4 + 8) = Pool2;
        }
        else
        {
          v6 = -1073741801;
          v21 = (char **)(a4 + 8);
        }
        if ( v6 >= 0 )
        {
          *(_DWORD *)a4 = 0;
          v22 = *v21;
          if ( v22 )
          {
            for ( j = 0; ; ++j )
            {
              v27 = v22;
              if ( j >= *(_DWORD *)a4 )
                break;
              v28 = -1;
              if ( *(_DWORD *)v22 < 0xFFFFFFFC )
                v28 = *(_DWORD *)v22 + 4;
              v6 = *(_DWORD *)v22 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v22 + 4) < 4 )
                goto LABEL_60;
              v29 = v28;
              v30 = &v22[v28];
              v31 = -1LL;
              if ( v30 >= v22 )
                v31 = (__int64)&v22[v29];
              v22 = (char *)v31;
              v6 = v30 < v27 ? 0xC0000095 : 0;
              if ( v30 < v27 )
                goto LABEL_60;
            }
            v32 = -1LL;
            if ( v22 + 4 >= v22 )
              v32 = (__int64)(v22 + 4);
            v6 = v22 + 4 < v22 ? 0xC0000095 : 0;
            if ( v22 + 4 >= v22 )
            {
              if ( (unsigned __int64)(v22 + 8) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                v6 = -1073741789;
                goto LABEL_60;
              }
              *(_DWORD *)v22 = 4;
              *(_DWORD *)v32 = 0;
              goto LABEL_59;
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
            v6 = v24 < v23 ? 0xC0000095 : 0;
            if ( v24 >= v23 )
            {
              v6 = 0;
LABEL_59:
              ++*(_DWORD *)a4;
            }
          }
LABEL_60:
          if ( v6 >= 0 )
          {
            v33 = *(char **)(a4 + 8);
            if ( v33 )
            {
              for ( k = 0; ; ++k )
              {
                v37 = v33;
                if ( k >= *(_DWORD *)a4 )
                  break;
                v38 = -1;
                if ( *(_DWORD *)v33 < 0xFFFFFFFC )
                  v38 = *(_DWORD *)v33 + 4;
                v6 = *(_DWORD *)v33 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v33 + 4) < 4 )
                  return (unsigned int)v6;
                v39 = v38;
                v40 = &v33[v38];
                v41 = -1LL;
                if ( v40 >= v33 )
                  v41 = (__int64)&v33[v39];
                v33 = (char *)v41;
                v6 = v40 < v37 ? 0xC0000095 : 0;
                if ( v40 < v37 )
                  return (unsigned int)v6;
              }
              if ( v33 + 4 >= v33 )
                v10 = (__int64)(v33 + 4);
              v6 = v33 + 4 < v33 ? 0xC0000095 : 0;
              if ( v33 + 4 >= v33 )
              {
                if ( (unsigned __int64)(v33 + 12) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *(_DWORD *)v33 = 8;
                  *(_QWORD *)v10 = v44;
                  goto LABEL_81;
                }
                return (unsigned int)-1073741789;
              }
            }
            else
            {
              v34 = *(_DWORD *)(a4 + 4);
              v35 = v34 + 12;
              if ( v34 + 12 >= v34 )
                v16 = v34 + 12;
              *(_DWORD *)(a4 + 4) = v16;
              v6 = v35 < v34 ? 0xC0000095 : 0;
              if ( v35 >= v34 )
              {
                v6 = 0;
LABEL_81:
                ++*(_DWORD *)a4;
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
