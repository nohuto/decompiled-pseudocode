/*
 * XREFs of MiRescanPageFileBitmapPortion @ 0x140444C08
 * Callers:
 *     MiRescanPagefileBitmaps @ 0x1404441FC (MiRescanPagefileBitmaps.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140444400 (MiCoalescePageFileBitmapsCache.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     RtlFindNextClearRunUlong @ 0x140444EC4 (RtlFindNextClearRunUlong.c)
 */

__int64 __fastcall MiRescanPageFileBitmapPortion(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  __int64 v5; // rax
  __int64 *v7; // r15
  int v8; // edx
  __int64 v9; // rbx
  int v10; // r13d
  __int64 result; // rax
  int v12; // r8d
  unsigned int v13; // esi
  unsigned int *v14; // rdi
  unsigned int v15; // eax
  unsigned int v16; // r14d
  int v17; // r12d
  unsigned int v18; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  BOOLEAN v23; // r8
  unsigned __int64 v24; // rax
  _RTL_RB_TREE *v25; // rcx
  __int64 v26; // rdx
  BOOLEAN v27; // r8
  __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rax
  _DWORD v31[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v32; // [rsp+38h] [rbp-30h]
  int v33; // [rsp+80h] [rbp+18h] BYREF

  v5 = *(_QWORD *)(a2 + 8);
  v7 = a5;
  v31[1] = 0;
  v33 = 0;
  v8 = a3 & 0x1F;
  v9 = *a5;
  v10 = a3 - v8;
  v32 = v5 + 4 * ((unsigned __int64)(unsigned int)(a3 - v8) >> 5);
  v31[0] = v8 + a4;
  result = RtlFindNextClearRunUlong((unsigned int)v31, v8, a3, -1, (__int64)&v33);
  v13 = result;
  if ( (_DWORD)result )
  {
    v14 = (unsigned int *)(a1 + 108);
    do
    {
      v15 = *(_DWORD *)(v9 + 52);
      v16 = v33 + v10;
      v17 = v33 + v13;
      if ( v13 > v15 )
      {
        if ( v15 )
        {
          v21 = a1 + 112;
          RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 112), (PRTL_BALANCED_NODE)v9);
          RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 128), (PRTL_BALANCED_NODE)(v9 + 24));
          v29 = *(_DWORD *)(a1 + 108);
          if ( v29 <= *(_DWORD *)(v9 + 52) )
            v29 = *(_DWORD *)(v9 + 52);
          *(_DWORD *)(a1 + 108) = v29;
        }
        else
        {
          v19 = *(_QWORD *)v9;
          if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 || (v20 = *(_QWORD **)(v9 + 8), *v20 != v9) )
            __fastfail(3u);
          *v20 = v19;
          v21 = a1 + 112;
          *(_QWORD *)(v19 + 8) = v20;
        }
        *(_DWORD *)(v9 + 52) = v13;
        *(_DWORD *)(v9 + 48) = v16;
        v22 = *(_QWORD *)v21;
        if ( (*(_BYTE *)(v21 + 8) & 1) != 0 && v22 )
          v22 ^= v21;
        v23 = 0;
        if ( v22 )
        {
          while ( 1 )
          {
            if ( __PAIR64__(v13, v16) >= *(_QWORD *)(v22 + 48) )
            {
              v24 = *(_QWORD *)(v22 + 8);
              if ( (*(_BYTE *)(v21 + 8) & 1) != 0 )
              {
                if ( !v24 )
                  goto LABEL_23;
                v24 ^= v22;
              }
              if ( !v24 )
              {
LABEL_23:
                v23 = 1;
                break;
              }
            }
            else
            {
              v24 = *(_QWORD *)v22;
              if ( (*(_BYTE *)(v21 + 8) & 1) != 0 )
              {
                if ( !v24 )
                  break;
                v24 ^= v22;
              }
              if ( !v24 )
                break;
            }
            v22 = v24;
          }
        }
        RtlRbInsertNodeEx((PRTL_RB_TREE)v21, (PRTL_BALANCED_NODE)v22, v23, (PRTL_BALANCED_NODE)v9);
        v25 = (_RTL_RB_TREE *)(a1 + 128);
        v26 = *(_QWORD *)(a1 + 128);
        if ( (*(_BYTE *)(a1 + 136) & 1) != 0 && v26 )
          v26 ^= (unsigned __int64)v25;
        v27 = 0;
        if ( v26 )
        {
          while ( 1 )
          {
            if ( *(_DWORD *)(v9 + 48) < *(_DWORD *)(v26 + 24) )
            {
              v28 = *(_QWORD *)v26;
              if ( (*(_BYTE *)(a1 + 136) & 1) != 0 )
              {
                if ( !v28 )
                  goto LABEL_58;
                v28 ^= v26;
              }
              if ( !v28 )
              {
LABEL_58:
                v27 = 0;
                break;
              }
            }
            else
            {
              v28 = *(_QWORD *)(v26 + 8);
              if ( (*(_BYTE *)(a1 + 136) & 1) != 0 )
              {
                if ( !v28 )
                  goto LABEL_29;
                v28 ^= v26;
              }
              if ( !v28 )
              {
LABEL_29:
                v27 = 1;
                break;
              }
            }
            v26 = v28;
          }
        }
        RtlRbInsertNodeEx(v25, (PRTL_BALANCED_NODE)v26, v27, (PRTL_BALANCED_NODE)(v9 + 24));
        ++*(_DWORD *)(a1 + 96);
        v9 = *(_QWORD *)(a1 + 144);
        if ( v9 == a1 + 144 )
        {
          v30 = *(_QWORD *)(a1 + 120);
          if ( (v30 & 1) != 0 )
          {
            if ( v30 == 1 )
              v9 = 0LL;
            else
              v9 = v30 ^ ((a1 + 112) | 1);
          }
          else
          {
            v9 = *(_QWORD *)(a1 + 120);
          }
        }
        v14 = (unsigned int *)(a1 + 108);
      }
      else
      {
        v18 = *v14;
        if ( *v14 <= v13 )
          v18 = v13;
        *v14 = v18;
      }
      result = RtlFindNextClearRunUlong((unsigned int)v31, v17, v12, -1, (__int64)&v33);
      v13 = result;
    }
    while ( (_DWORD)result );
  }
  *v7 = v9;
  return result;
}
