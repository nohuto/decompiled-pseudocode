/*
 * XREFs of MxGetPage @ 0x140CFD0F0
 * Callers:
 *     MxCreateFreePageNode @ 0x140CFBE0C (MxCreateFreePageNode.c)
 *     MxGetPage @ 0x140CFD0F0 (MxGetPage.c)
 *     MxMapVa @ 0x140CFE330 (MxMapVa.c)
 * Callees:
 *     MxGetFreePageDescriptor @ 0x140CFD020 (MxGetFreePageDescriptor.c)
 *     MxGetPage @ 0x140CFD0F0 (MxGetPage.c)
 *     MxUpdateBootNodeFreePageCount @ 0x140CFE958 (MxUpdateBootNodeFreePageCount.c)
 */

__int64 __fastcall MxGetPage(unsigned int a1, int a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 *v6; // rdi
  unsigned int v7; // ebp
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int i; // r8d
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 *v18; // rax
  __int64 **v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 *v25; // rax
  __int64 **v26; // rdx

  v3 = 250LL * a1;
  v4 = -1LL;
  v6 = &MxBootState[v3];
  if ( !MxBootState[v3 + 16] )
  {
    if ( (a2 & 4) != 0 )
      return v4;
    if ( !MxGetFreePageDescriptor(a1) )
    {
      if ( (a2 & 2) == 0 )
      {
        v7 = a2 | 2;
        v8 = 0;
LABEL_6:
        if ( v8 >= 2 )
        {
          return -1LL;
        }
        else
        {
          v9 = a1;
          for ( i = 0; ; ++i )
          {
            if ( i >= (unsigned __int16)KeNumberNodes )
            {
              ++v8;
              goto LABEL_6;
            }
            v11 = v9 + 1;
            v12 = 0;
            if ( v11 != (unsigned __int16)KeNumberNodes )
              v12 = v11;
            v9 = v12;
            if ( MxBootState[250 * v12 + 22] )
              break;
          }
          return MxGetPage(v12, v7);
        }
      }
      return v4;
    }
  }
  if ( (a2 & 1) == 0 )
  {
    v20 = v6[19];
    if ( v20 == (v20 & 0xFFFFFFFFFFFFFE00uLL) || v20 == v6[17] )
    {
      v21 = v6[20];
      v22 = -1LL;
      v23 = MxBootState[v3 + 17];
      if ( v21 == -1 )
      {
        if ( v20 != v23 && v23 != (v23 & 0xFFFFFFFFFFFFFE00uLL) )
          v22 = v23 | 0x1FF;
        MxBootState[v3 + 19] = v22;
      }
      else
      {
        MxBootState[v3 + 19] = v21 + 511;
        if ( (unsigned __int64)(v21 - v23) < 0x200 )
          MxBootState[v3 + 20] = -1LL;
        else
          v6[20] = v21 - 512;
      }
    }
    else
    {
      v6[19] = v20 - 1;
    }
    --v6[16];
    MxUpdateBootNodeFreePageCount(&MxBootState[v3], 1LL, 0LL);
    if ( v6[16] == v24 )
    {
      v25 = (__int64 *)v6[24];
      v26 = (__int64 **)v6[13];
      if ( *v26 != v6 + 12 )
        goto LABEL_40;
      *v25 = (__int64)(v6 + 12);
      v25[1] = (__int64)v26;
      *v26 = v25;
      v6[13] = (__int64)v25;
      v6[24] = v24;
    }
    if ( (a2 & 8) != 0 )
      ++qword_14101FC10;
    ++qword_14101FC18;
    goto LABEL_45;
  }
  v14 = v6[20];
  if ( v14 == -1 )
    return v4;
  if ( (unsigned __int64)(v14 - v6[17]) >= 0x200 )
    v4 = v14 - 512;
  v6[16] -= 512LL;
  v6[20] = v4;
  MxUpdateBootNodeFreePageCount(&MxBootState[v3], 512LL, 0LL);
  if ( v6[16] != v17 )
    goto LABEL_24;
  v18 = (__int64 *)v6[24];
  v19 = (__int64 **)v6[13];
  if ( *v19 != v6 + 12 )
LABEL_40:
    __fastfail(3u);
  *v18 = (__int64)(v6 + 12);
  v18[1] = (__int64)v19;
  *v19 = v18;
  v6[13] = (__int64)v18;
  v6[24] = 0LL;
LABEL_24:
  if ( (a2 & 8) != 0 )
    qword_14101FC10 += v15;
  qword_14101FC18 += v15;
LABEL_45:
  ++qword_14101FC20;
  return v16;
}
