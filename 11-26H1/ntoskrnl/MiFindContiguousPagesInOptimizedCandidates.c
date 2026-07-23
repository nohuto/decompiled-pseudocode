/*
 * XREFs of MiFindContiguousPagesInOptimizedCandidates @ 0x14028E0B8
 * Callers:
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 * Callees:
 *     MiPfnsWorthTrying @ 0x140290280 (MiPfnsWorthTrying.c)
 *     MiClaimPhysicalRun @ 0x140290C60 (MiClaimPhysicalRun.c)
 *     MiAdjustCachedStacks @ 0x1402A7914 (MiAdjustCachedStacks.c)
 *     MiFindBestLargePageStealCandidates @ 0x14041A958 (MiFindBestLargePageStealCandidates.c)
 *     qsort @ 0x140539380 (qsort.c)
 */

__int64 __fastcall MiFindContiguousPagesInOptimizedCandidates(__int64 **a1, _QWORD *a2)
{
  __int64 *v2; // rdi
  unsigned int v3; // r11d
  __int64 *v4; // r15
  __int64 v6; // rbx
  __int64 v7; // r10
  __int64 v9; // r8
  unsigned int v10; // r14d
  volatile signed __int32 *v11; // r12
  volatile signed __int32 *v12; // rax
  volatile signed __int32 *v13; // r13
  volatile signed __int32 *v14; // rbp
  __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned int v17; // r9d
  __int64 v18; // rcx
  __int64 v19; // r15
  _QWORD *v20; // rax
  int v21; // [rsp+50h] [rbp-88h]
  int v22; // [rsp+54h] [rbp-84h]
  __int64 v23; // [rsp+58h] [rbp-80h]
  int v24; // [rsp+60h] [rbp-78h]
  volatile signed __int32 *v25; // [rsp+68h] [rbp-70h]
  __int64 v26; // [rsp+70h] [rbp-68h]
  __int64 v27; // [rsp+78h] [rbp-60h]
  int v28; // [rsp+80h] [rbp-58h]
  int v29; // [rsp+E0h] [rbp+8h] BYREF
  _QWORD *v30; // [rsp+E8h] [rbp+10h]
  int v31; // [rsp+F0h] [rbp+18h]
  int v32; // [rsp+F8h] [rbp+20h]

  v30 = a2;
  v2 = *a1;
  v3 = 0;
  v4 = a1[30];
  v28 = (int)v4;
  v6 = (*a1)[10];
  v7 = **a1;
  v23 = v7;
  if ( v6 )
  {
    if ( !*((_BYTE *)a1 + 96)
      && byte_140E2D898 == 1
      && v4 == *(__int64 **)(v7 + 32)
      && (*(_QWORD *)(v6 + 16) != -1LL || *(_DWORD *)(v6 + 8) < *(_DWORD *)(v6 + 4)) )
    {
      v9 = v2[5];
      v31 = *((_DWORD *)v2 + 15);
      v27 = v2[1];
      v26 = v2[2];
      v22 = *((_DWORD *)v2 + 13);
      v32 = 2;
      v29 = 0;
      v24 = v9;
      if ( v9 == 16 )
      {
        v10 = 2;
        v11 = (volatile signed __int32 *)&unk_140EF9208;
        v12 = (volatile signed __int32 *)&unk_140EF9220;
        v13 = (volatile signed __int32 *)&unk_140EF91FC;
        v14 = (volatile signed __int32 *)&unk_140EF9214;
      }
      else if ( v9 == 512 )
      {
        v10 = 1;
        v11 = (volatile signed __int32 *)&unk_140EF9204;
        v13 = (volatile signed __int32 *)&unk_140EF91F8;
        v14 = (volatile signed __int32 *)&unk_140EF9210;
        v12 = (volatile signed __int32 *)&unk_140EF921C;
      }
      else
      {
        v10 = 0;
        v11 = (volatile signed __int32 *)&unk_140EF9200;
        v13 = (volatile signed __int32 *)&unk_140EF91F4;
        v14 = (volatile signed __int32 *)&unk_140EF920C;
        v12 = (volatile signed __int32 *)&unk_140EF9218;
      }
      v25 = v12;
      v15 = v10;
      _InterlockedAdd(&MiCont[v10 + 127], 1u);
      v16 = *(_DWORD *)(v6 + 4);
      v17 = 1;
      v21 = 1;
      LODWORD(v18) = *(_DWORD *)(v6 + 8);
      if ( (unsigned int)v18 < v16 )
      {
        if ( *(_QWORD *)(v6 + 16) != -1LL )
          v17 = v32;
        v21 = v17;
      }
      while ( 1 )
      {
        v32 = v3;
        if ( v3 >= v17 )
          break;
        if ( (_DWORD)v18 == v16 )
        {
          _InterlockedIncrement(&MiCont[v15 + 130]);
          *(_DWORD *)(v6 + 8) = 0;
          MiFindBestLargePageStealCandidates(v7, (_DWORD)v4, v10, v27, v26, v22, v6);
          LODWORD(v7) = v23;
          LODWORD(v9) = v24;
          v15 = v10;
          if ( *(_DWORD *)(v6 + 4) )
            _InterlockedIncrement(v13);
          else
            _InterlockedIncrement(v11);
        }
        while ( 1 )
        {
          v18 = *(unsigned int *)(v6 + 8);
          v16 = *(_DWORD *)(v6 + 4);
          if ( (unsigned int)v18 >= v16 )
            break;
          v19 = *(_QWORD *)(v6 + 8 * v18 + 24);
          *(_DWORD *)(v6 + 8) = v18 + 1;
          if ( MiPfnsWorthTrying(v7, 48 * (int)v19, v9, v31, (__int64)&v29) )
          {
            v15 = v10;
            _InterlockedIncrement(&MiCont[v10 + 142]);
            LODWORD(v7) = v23;
            LODWORD(v9) = v24;
          }
          else
          {
            if ( (v29 & 1) != 0 )
            {
              _InterlockedIncrement(dword_140EF91D8);
              MiAdjustCachedStacks(v23, 1LL);
            }
            if ( !MiClaimPhysicalRun(
                    v23,
                    v19,
                    v24,
                    v26,
                    (__int64)(a1 + 14),
                    v31,
                    *((_DWORD *)a1 + 3),
                    v2[9],
                    0LL,
                    (__int64)&v29) )
            {
              _InterlockedIncrement(v14);
              v20 = v30;
              *(_DWORD *)(v6 + 12) = 1;
              *v20 = v19;
              return 0LL;
            }
            _InterlockedIncrement(v25);
            LODWORD(v7) = v23;
            LODWORD(v9) = v24;
            v15 = v10;
            if ( (v29 & 2) != 0 )
            {
              *((_DWORD *)a1 + 8) |= 1u;
              v15 = v10;
            }
          }
        }
        v17 = v21;
        v3 = v32 + 1;
        LODWORD(v4) = v28;
      }
      _InterlockedIncrement(&MiCont[v10 + 145]);
      qsort((void *)(v6 + 24), *(unsigned int *)(v6 + 4), 8uLL, MiSortBestStealCandidates);
      *((_BYTE *)a1 + 10) = 1;
    }
    else
    {
      *(_QWORD *)(v6 + 4) = 0LL;
    }
  }
  return 3221225473LL;
}
