/*
 * XREFs of KiIntSteerCalculateUniformDistribution @ 0x1404C4608
 * Callers:
 *     KiIntSteerCalculateDistribution @ 0x140256910 (KiIntSteerCalculateDistribution.c)
 * Callees:
 *     KiIntPartGetLowestClassProcessorInMask @ 0x140256D68 (KiIntPartGetLowestClassProcessorInMask.c)
 */

unsigned __int64 __fastcall KiIntSteerCalculateUniformDistribution(_QWORD **a1, __int64 *a2)
{
  unsigned __int64 result; // rax
  _QWORD *v3; // rbx
  unsigned __int16 v5; // bp
  __int64 i; // rdi
  unsigned int LowestClassProcessorInMask; // eax
  __int64 v9; // rcx
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v3 = *a1;
  v5 = *((_WORD *)a2 + 4);
  for ( i = *a2; v3 != a1; v3 = (_QWORD *)*v3 )
  {
    result = *(v3 - 18);
    if ( (result & *a2) != 0 )
    {
      *((_QWORD *)&v12 + 1) = v5;
      *(_QWORD *)&v12 = i & result;
      if ( (i & result) == 0
        || (LowestClassProcessorInMask = KiIntPartGetLowestClassProcessorInMask((__int64)&v12),
            LowestClassProcessorInMask == -1) )
      {
        v9 = *(v3 - 18);
        v12 = 0LL;
        WORD4(v12) = v5;
        i |= *a2 & v9;
        *(_QWORD *)&v12 = v9 & i;
        if ( (v9 & i) != 0 )
          LowestClassProcessorInMask = KiIntPartGetLowestClassProcessorInMask((__int64)&v12);
        else
          LowestClassProcessorInMask = -1;
      }
      v10 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + LowestClassProcessorInMask);
      i &= ~(1LL << (v10 & 0x3F));
      *(_DWORD *)((char *)v3 - 22) = 0;
      *((_WORD *)v3 - 9) = 0;
      *((_WORD *)v3 - 12) = v10 >> 6;
      *(v3 - 4) = 1LL << v10;
      v11 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (result = v3[1], *(_QWORD **)result != v3) )
        __fastfail(3u);
      *(_QWORD *)result = v11;
      *(_QWORD *)(v11 + 8) = result;
    }
  }
  return result;
}
