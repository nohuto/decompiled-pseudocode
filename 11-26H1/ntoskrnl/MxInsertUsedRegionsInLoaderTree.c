/*
 * XREFs of MxInsertUsedRegionsInLoaderTree @ 0x140CF7908
 * Callers:
 *     MxInsertAllUsedRegionsInLoaderTree @ 0x140CF71D0 (MxInsertAllUsedRegionsInLoaderTree.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1403774B0 (RtlRbInsertNodeEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MxExtractUnusedRegions @ 0x140CF6818 (MxExtractUnusedRegions.c)
 *     MxGetUsedSplitDescriptor @ 0x140CF703C (MxGetUsedSplitDescriptor.c)
 */

char __fastcall MxInsertUsedRegionsInLoaderTree(__int64 a1, _QWORD *a2)
{
  int v4; // r14d
  bool v5; // bl
  _OWORD *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rdi
  unsigned __int64 v10; // rbp
  _OWORD *UsedSplitDescriptor; // r9
  unsigned __int64 v12; // rdx
  bool v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  _OWORD *v17; // rax
  unsigned __int64 *v18; // r10
  unsigned __int64 v19; // r9
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
      v10 = v7 + v8;
      if ( v7 + v8 == *v9 )
      {
        v7 += v9[1];
      }
      else
      {
        UsedSplitDescriptor = MxGetUsedSplitDescriptor((__int64)a2, v6);
        *((_QWORD *)UsedSplitDescriptor + 4) = v10;
        *((_QWORD *)UsedSplitDescriptor + 5) = *v9 - v10;
        v12 = *(_QWORD *)(a1 + 352);
        if ( (*(_BYTE *)(a1 + 360) & 1) != 0 && v12 )
          v12 ^= a1 + 352;
        v13 = 0;
        if ( v12 )
        {
          while ( 1 )
          {
            if ( v10 < *(_QWORD *)(v12 + 32) )
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
        RtlRbInsertNodeEx(a1 + 352, v12, v13, (unsigned __int64)UsedSplitDescriptor);
        v8 = *v9;
        v7 = v9[1];
      }
      v9 += 6;
      --v4;
    }
    while ( v4 );
  }
  v15 = v7 + v8;
  v16 = a2[18] + a2[17];
  if ( v15 != v16 )
  {
    v17 = MxGetUsedSplitDescriptor((__int64)a2, v6);
    v18 = (unsigned __int64 *)(a1 + 352);
    v19 = (unsigned __int64)v17;
    *((_QWORD *)v17 + 4) = v15;
    *((_QWORD *)v17 + 5) = a2[18] + a2[17] - v15;
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
        if ( v15 < *(_QWORD *)(v20 + 32) )
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
    LOBYTE(v16) = RtlRbInsertNodeEx(a1 + 352, v20, v5, v19);
  }
  return v16;
}
