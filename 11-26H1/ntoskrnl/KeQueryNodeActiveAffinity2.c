/*
 * XREFs of KeQueryNodeActiveAffinity2 @ 0x140507BA0
 * Callers:
 *     MiCombineAllPhysicalMemory @ 0x140880C48 (MiCombineAllPhysicalMemory.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140D037E8 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     KeCountSetBitsGroupMask @ 0x1402007F0 (KeCountSetBitsGroupMask.c)
 *     KeFindFirstSetRightGroupMask @ 0x140200980 (KeFindFirstSetRightGroupMask.c)
 *     KiQuerySubNodeActiveAffinity @ 0x140461720 (KiQuerySubNodeActiveAffinity.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x14046A570 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KeQueryNodeActiveAffinity2(
        unsigned __int16 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int16 v11; // di
  unsigned __int16 v12; // r12
  __int64 v13; // r13
  unsigned __int16 FirstSetRightGroupMask; // ax
  unsigned int v15; // eax
  __int64 v17; // [rsp+20h] [rbp-69h] BYREF
  _QWORD v18[2]; // [rsp+28h] [rbp-61h] BYREF
  __int128 v19; // [rsp+38h] [rbp-51h] BYREF
  __int64 v20[3]; // [rsp+48h] [rbp-41h] BYREF
  _WORD v21[32]; // [rsp+60h] [rbp-29h] BYREF

  v4 = 0;
  v17 = 0LL;
  *(_OWORD *)v20 = 0LL;
  if ( a1 < (unsigned __int16)KeNumberNodes )
  {
    v8 = KeNodeBlock[a1];
    if ( v8 )
    {
      RtlCopyVolatileMemory(v20, (const void *)(v8 + 16), 0x10uLL);
      v11 = KeCountSetBitsGroupMask((__int64)v20, v9, v10);
      if ( a3 >= v11 )
      {
        memset_0(v21, 255, sizeof(v21));
        v12 = 0;
        if ( v11 )
        {
          v13 = a2;
          do
          {
            FirstSetRightGroupMask = KeFindFirstSetRightGroupMask(v20);
            v21[FirstSetRightGroupMask] = v12++;
            *((_BYTE *)v20 + ((unsigned __int64)FirstSetRightGroupMask >> 3)) &= ~(1 << (FirstSetRightGroupMask & 7));
            *(_OWORD *)v13 = 0LL;
            *(_WORD *)(v13 + 8) = FirstSetRightGroupMask;
            v13 += 16LL;
          }
          while ( v12 < v11 );
        }
        v18[1] = 0LL;
        v18[0] = v8;
        while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((unsigned int *)v18, &v17) )
        {
          v19 = 0LL;
          KiQuerySubNodeActiveAffinity(v17, (__int64)&v19, 0LL);
          v15 = (unsigned __int16)v21[WORD4(v19)];
          if ( (_WORD)v15 != 0xFFFF )
            *(_QWORD *)(16LL * v15 + a2) |= v19;
        }
      }
      else
      {
        v4 = -1073741789;
      }
      *a4 = v11;
    }
    else
    {
      *a4 = 0;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
