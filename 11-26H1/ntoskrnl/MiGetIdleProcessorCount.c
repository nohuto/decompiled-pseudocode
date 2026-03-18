/*
 * XREFs of MiGetIdleProcessorCount @ 0x1403E987C
 * Callers:
 *     MiMoveZeroThreadsToOtherCores @ 0x1403E9690 (MiMoveZeroThreadsToOtherCores.c)
 * Callees:
 *     MiProcessorParked @ 0x1403E8774 (MiProcessorParked.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1403E9FB0 (KeFindFirstSetRightGroupAffinity.c)
 *     MiProcessorInEngineProcessAffinity @ 0x14070E9B8 (MiProcessorInEngineProcessAffinity.c)
 */

__int64 __fastcall MiGetIdleProcessorCount(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  __int64 i; // r12
  __int64 v6; // rbp
  unsigned int FirstSetRightGroupAffinity; // eax
  __int64 v8; // r15
  unsigned int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rsi
  _QWORD *v12; // rcx
  bool j; // zf
  __int64 v14; // r13
  __int128 v15; // xmm6
  __int128 v17; // [rsp+20h] [rbp-68h] BYREF
  __int128 v18; // [rsp+30h] [rbp-58h]
  __int128 v19; // [rsp+40h] [rbp-48h] BYREF

  v2 = 0;
  v3 = 0;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 48LL * a2); v3 < *(_DWORD *)(a1 + 16); ++v3 )
  {
    v18 = *(_OWORD *)(i + 16LL * v3);
    v17 = v18;
    v6 = v18;
LABEL_12:
    while ( v6 )
    {
      FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(&v17);
      v8 = FirstSetRightGroupAffinity;
      v9 = FirstSetRightGroupAffinity;
      v10 = *(_QWORD *)(KiProcessorBlock[FirstSetRightGroupAffinity] + 200) | v6 & *(_QWORD *)(KiProcessorBlock[FirstSetRightGroupAffinity]
                                                                                             + 36512);
      v11 = v10;
      v6 &= ~v10;
      *(_QWORD *)&v17 = v6;
      if ( v10 )
      {
        while ( 1 )
        {
          v12 = (_QWORD *)KiProcessorBlock[v9];
          if ( v12[1] != v12[3] )
            break;
          ++v9;
          v10 &= ~v12[25];
          if ( !v10 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        for ( j = v11 == 0; !j; j = v11 == 0 )
        {
          v14 = KiProcessorBlock[v8];
          *(_QWORD *)&v18 = *(_QWORD *)(v14 + 200);
          v15 = v18;
          v19 = v18;
          if ( !(unsigned int)MiProcessorParked((__int64)&v19) )
          {
            v19 = v15;
            if ( (unsigned int)MiProcessorInEngineProcessAffinity(a1, &v19) )
            {
              ++v2;
              goto LABEL_12;
            }
          }
          v8 = (unsigned int)(v8 + 1);
          v11 &= ~*(_QWORD *)(v14 + 200);
        }
      }
    }
  }
  return v2;
}
