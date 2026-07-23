/*
 * XREFs of MxInsertUsedRegionsInLoaderTree @ 0x140CFDC88
 * Callers:
 *     MxInsertAllUsedRegionsInLoaderTree @ 0x140CFD550 (MxInsertAllUsedRegionsInLoaderTree.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140379260 (RtlRbInsertNodeEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MxExtractUnusedRegions @ 0x140CFCB98 (MxExtractUnusedRegions.c)
 *     MxGetUsedSplitDescriptor @ 0x140CFD3BC (MxGetUsedSplitDescriptor.c)
 */

char __fastcall MxInsertUsedRegionsInLoaderTree(__int64 a1, _QWORD *a2)
{
  int v4; // r14d
  BOOLEAN v5; // bl
  _OWORD *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rdi
  _RTL_BALANCED_NODE *v10; // rbp
  _RTL_BALANCED_NODE *UsedSplitDescriptor; // r9
  unsigned __int64 v12; // rdx
  BOOLEAN v13; // r8
  unsigned __int64 v14; // rax
  _RTL_BALANCED_NODE *v15; // rdi
  _RTL_BALANCED_NODE *v16; // rax
  _RTL_BALANCED_NODE *v17; // rax
  unsigned __int64 *v18; // r10
  _RTL_BALANCED_NODE *v19; // r9
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  int v23[10]; // [rsp+20h] [rbp-1C8h] BYREF
  char v24; // [rsp+48h] [rbp-1A0h] BYREF

  v23[1] = 0;
  memset_0(v23, 0, 0x184uLL);
  MxExtractUnusedRegions(a2, v23);
  v4 = v23[0];
  v5 = 0;
  v6 = (_OWORD *)a2[24];
  v7 = 0LL;
  v8 = a2[17];
  if ( v23[0] )
  {
    v9 = (__int64 *)&v24;
    do
    {
      v10 = (_RTL_BALANCED_NODE *)(v7 + v8);
      if ( v7 + v8 == *v9 )
      {
        v7 += v9[1];
      }
      else
      {
        UsedSplitDescriptor = (_RTL_BALANCED_NODE *)MxGetUsedSplitDescriptor((__int64)a2, v6);
        UsedSplitDescriptor[1].Children[1] = v10;
        UsedSplitDescriptor[1].ParentValue = *v9 - (_QWORD)v10;
        v12 = *(_QWORD *)(a1 + 352);
        if ( (*(_BYTE *)(a1 + 360) & 1) != 0 && v12 )
          v12 ^= a1 + 352;
        v13 = 0;
        if ( v12 )
        {
          while ( 1 )
          {
            if ( (unsigned __int64)v10 < *(_QWORD *)(v12 + 32) )
            {
              v14 = *(_QWORD *)v12;
              if ( (*(_BYTE *)(a1 + 360) & 1) != 0 )
              {
                if ( !v14 )
                  break;
                v14 ^= v12;
              }
              if ( !v14 )
                break;
            }
            else
            {
              v14 = *(_QWORD *)(v12 + 8);
              if ( (*(_BYTE *)(a1 + 360) & 1) != 0 )
              {
                if ( !v14 )
                  goto LABEL_14;
                v14 ^= v12;
              }
              if ( !v14 )
              {
LABEL_14:
                v13 = 1;
                break;
              }
            }
            v12 = v14;
          }
        }
        RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 352), (PRTL_BALANCED_NODE)v12, v13, UsedSplitDescriptor);
        v8 = *v9;
        v7 = v9[1];
      }
      v9 += 6;
      --v4;
    }
    while ( v4 );
  }
  v15 = (_RTL_BALANCED_NODE *)(v7 + v8);
  v16 = (_RTL_BALANCED_NODE *)(a2[18] + a2[17]);
  if ( v15 != v16 )
  {
    v17 = (_RTL_BALANCED_NODE *)MxGetUsedSplitDescriptor((__int64)a2, v6);
    v18 = (unsigned __int64 *)(a1 + 352);
    v19 = v17;
    v17[1].Children[1] = v15;
    v17[1].ParentValue = a2[18] + a2[17] - (_QWORD)v15;
    if ( (*(_BYTE *)(a1 + 360) & 1) != 0 )
    {
      if ( *v18 )
        v20 = *v18 ^ (unsigned __int64)v18;
      else
        v20 = 0LL;
    }
    else
    {
      v20 = *v18;
    }
    if ( v20 )
    {
      while ( 1 )
      {
        if ( (unsigned __int64)v15 < *(_QWORD *)(v20 + 32) )
        {
          v21 = *(_QWORD *)v20;
          if ( (*(_BYTE *)(a1 + 360) & 1) != 0 )
          {
            if ( !v21 )
              break;
            v21 ^= v20;
          }
          if ( !v21 )
            break;
        }
        else
        {
          v21 = *(_QWORD *)(v20 + 8);
          if ( (*(_BYTE *)(a1 + 360) & 1) != 0 )
          {
            if ( !v21 )
              goto LABEL_34;
            v21 ^= v20;
          }
          if ( !v21 )
          {
LABEL_34:
            v5 = 1;
            break;
          }
        }
        v20 = v21;
      }
    }
    LOBYTE(v16) = RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 352), (PRTL_BALANCED_NODE)v20, v5, v19);
  }
  return (char)v16;
}
