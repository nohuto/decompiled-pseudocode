/*
 * XREFs of KiBuildShareCountListForSubNodeByAffinity @ 0x14043F3F0
 * Callers:
 *     KiConfigureSubNodeShareCounts @ 0x1405ED748 (KiConfigureSubNodeShareCounts.c)
 *     KiCompleteKernelInit @ 0x140BF96A8 (KiCompleteKernelInit.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int8 __fastcall KiBuildShareCountListForSubNodeByAffinity(
        void *a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v6; // ebp
  unsigned __int8 result; // al
  unsigned __int8 i; // r10
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  _BYTE *v15; // rdx
  __int64 v16; // rax

  v6 = a2;
  result = (unsigned __int8)memset_0(a1, 0, 0x40uLL);
  for ( i = 0; i < 0x40u; ++i )
  {
    if ( _bittest64(&a4, i) )
    {
      v11 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v6].Flink
                             + (unsigned int)i)];
      v12 = *(unsigned __int8 *)(v11 + 208);
      if ( a5 )
      {
        if ( a5 == 1 )
        {
          v13 = *(_QWORD *)(v11 + 36512);
        }
        else
        {
          switch ( a5 )
          {
            case 2:
              v16 = 40784LL;
              break;
            case 3:
              v16 = 40192LL;
              break;
            case 4:
              v16 = 35920LL;
              break;
            case 5:
              v16 = 47424LL;
              break;
            default:
              __fastfail(5u);
          }
          if ( (unsigned __int16)v12 >= *(_WORD *)(v11 + v16) )
            v13 = 0LL;
          else
            v13 = *(_QWORD *)(v11 + v16 + 8 * v12 + 8);
        }
      }
      else
      {
        v13 = *(_QWORD *)(v11 + 200);
      }
      v14 = a3 & v13;
      v15 = a1;
      for ( result = 0; result < 0x40u; ++result )
      {
        if ( _bittest64(&v14, result) )
          ++*v15;
        ++v15;
      }
    }
  }
  return result;
}
