/*
 * XREFs of CalculateTrimIntervals @ 0x14010CB90
 * Callers:
 *     ?VidMmHandleTrimWnf@@YAXPEAVVIDMM_GLOBAL@@_N@Z @ 0x14010C844 (-VidMmHandleTrimWnf@@YAXPEAVVIDMM_GLOBAL@@_N@Z.c)
 * Callees:
 *     ??1DXGAUTOEXPUSHLOCK@@QEAA@XZ @ 0x140035F30 (--1DXGAUTOEXPUSHLOCK@@QEAA@XZ.c)
 */

__int64 __fastcall CalculateTrimIntervals(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // rsi
  __int64 v6; // rdi
  unsigned int v7; // r14d
  unsigned __int16 v8; // r9
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r11
  _BYTE *v12; // rsi
  __int64 v13; // r10
  struct _RTL_BALANCED_NODE *v14; // rax
  unsigned __int64 v15; // r8
  _QWORD **v16; // rcx
  unsigned __int64 v17; // rax
  _QWORD *i; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // r9d
  unsigned int v25; // r11d
  __int64 result; // rax
  _BYTE v27[8]; // [rsp+20h] [rbp-48h] BYREF
  void *v28; // [rsp+28h] [rbp-40h]
  int v29; // [rsp+30h] [rbp-38h]

  v28 = &VIDMM_PARTITION::_PartitionLock;
  v4 = a2;
  v6 = 100LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v7 = *(_DWORD *)(a1 + 6952);
  v29 = 1;
  v8 = 0;
  if ( v7 )
  {
    do
    {
      v9 = 2LL;
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 40320) + 8LL * v8);
      v11 = v10 + 664;
      v12 = (_BYTE *)(v10 + 632);
      do
      {
        v13 = 0LL;
        if ( (*v12 & 2) != 0 )
        {
          if ( (*v12 & 1) != 0 )
          {
            v14 = VIDMM_PARTITION::_PartitionTree;
            v15 = 0LL;
            while ( v14 )
            {
              v15 = (unsigned __int64)v14;
              v14 = v14->Children[0];
            }
            while ( v15 )
            {
              if ( !*(_DWORD *)(v15 + 32) )
              {
                v13 = *(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(a1 + 24) + 240LL) + *(_QWORD *)(v15 + 40) + 24)
                    + 344LL * v8;
                break;
              }
              v16 = *(_QWORD ***)(v15 + 8);
              v17 = v15;
              if ( v16 )
              {
                v15 = *(_QWORD *)(v15 + 8);
                for ( i = *v16; i; i = (_QWORD *)*i )
                  v15 = (unsigned __int64)i;
              }
              else
              {
                while ( 1 )
                {
                  v15 = *(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( !v15 || *(_QWORD *)v15 == v17 )
                    break;
                  v17 = v15;
                }
              }
            }
          }
          else
          {
            v13 = v11;
          }
          v19 = (unsigned __int64)(100LL * *(_QWORD *)(v13 + 120)) / *(_QWORD *)(v13 + 16);
          if ( (__int64)(100 - v19) < v6 )
            v6 = 100 - v19;
        }
        v12 += 24;
        v11 += 344LL;
        --v9;
      }
      while ( v9 );
      ++v8;
    }
    while ( v8 < v7 );
    v4 = a2;
  }
  DXGAUTOEXPUSHLOCK::~DXGAUTOEXPUSHLOCK((DXGAUTOEXPUSHLOCK *)v27);
  v20 = *(_QWORD *)(a1 + 7008);
  if ( v20 )
  {
    v21 = *(_QWORD *)(a1 + 6992);
    v22 = *(_QWORD *)(a1 + 7000);
    v23 = *(_QWORD *)(a1 + 7016);
    v24 = *(_DWORD *)(a1 + 7024);
    v25 = *(_DWORD *)(a1 + 7028);
  }
  else
  {
    v20 = (unsigned int)dword_14008A554;
    v21 = (unsigned int)dword_14008A560;
    v22 = (unsigned int)dword_14008A55C;
    v23 = (unsigned int)dword_14008A558;
    v24 = dword_14008A54C;
    v25 = dword_14008A550;
  }
  result = v24;
  if ( v6 <= v24 )
  {
    result = v25;
    if ( v6 > v25 )
    {
      result = (v22 - v21) * (v6 - v25) / (v24 - v25);
      v20 = v21 + result;
    }
    else
    {
      v20 = v21;
      v23 = v22;
    }
  }
  *v4 = v20;
  *a3 = v23;
  return result;
}
