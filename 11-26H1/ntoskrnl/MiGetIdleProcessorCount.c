/*
 * XREFs of MiGetIdleProcessorCount @ 0x1402F675C
 * Callers:
 *     MiMoveZeroThreadsToOtherCores @ 0x1402F6570 (MiMoveZeroThreadsToOtherCores.c)
 * Callees:
 *     MiProcessorParked @ 0x1402F5654 (MiProcessorParked.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402F6E90 (KeFindFirstSetRightGroupAffinity.c)
 *     MiProcessorInEngineProcessAffinity @ 0x1407136B8 (MiProcessorInEngineProcessAffinity.c)
 */

__int64 __fastcall MiGetIdleProcessorCount(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  __int64 i; // r12
  __int64 v6; // rbp
  __int64 FirstSetRightGroupAffinity; // r15
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rsi
  _QWORD *v11; // rcx
  bool j; // zf
  __int64 v13; // r13
  __int128 v14; // xmm6
  __int128 v16; // [rsp+20h] [rbp-68h] BYREF
  __int128 v17; // [rsp+30h] [rbp-58h]
  __int128 v18; // [rsp+40h] [rbp-48h] BYREF

  v2 = 0;
  v3 = 0;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 48LL * a2); v3 < *(_DWORD *)(a1 + 16); ++v3 )
  {
    v17 = *(_OWORD *)(i + 16LL * v3);
    v16 = v17;
    v6 = v17;
LABEL_12:
    while ( v6 )
    {
      FirstSetRightGroupAffinity = (unsigned int)KeFindFirstSetRightGroupAffinity(&v16);
      v8 = FirstSetRightGroupAffinity;
      v9 = *(_QWORD *)(KiProcessorBlock[FirstSetRightGroupAffinity] + 200) | v6 & *(_QWORD *)(KiProcessorBlock[FirstSetRightGroupAffinity]
                                                                                            + 36512);
      v10 = v9;
      v6 &= ~v9;
      *(_QWORD *)&v16 = v6;
      if ( v9 )
      {
        while ( 1 )
        {
          v11 = (_QWORD *)KiProcessorBlock[v8];
          if ( v11[1] != v11[3] )
            break;
          ++v8;
          v9 &= ~v11[25];
          if ( !v9 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        for ( j = v10 == 0; !j; j = v10 == 0 )
        {
          v13 = KiProcessorBlock[FirstSetRightGroupAffinity];
          *(_QWORD *)&v17 = *(_QWORD *)(v13 + 200);
          v14 = v17;
          v18 = v17;
          if ( !(unsigned int)MiProcessorParked((__int64)&v18) )
          {
            v18 = v14;
            if ( (unsigned int)MiProcessorInEngineProcessAffinity(a1, &v18) )
            {
              ++v2;
              goto LABEL_12;
            }
          }
          FirstSetRightGroupAffinity = (unsigned int)(FirstSetRightGroupAffinity + 1);
          v10 &= ~*(_QWORD *)(v13 + 200);
        }
      }
    }
  }
  return v2;
}
