/*
 * XREFs of KsepEngineGetShimsFromRegistry @ 0x140A25360
 * Callers:
 *     KsepGetShimsForDriver @ 0x140A255BC (KsepGetShimsForDriver.c)
 * Callees:
 *     KsepLogError @ 0x1404CCBBC (KsepLogError.c)
 *     KsepPoolAllocatePaged @ 0x1404DE51C (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404E2A70 (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x14050EC24 (KsepDebugPrint.c)
 *     KsepDbGetShimInfo @ 0x1407BCA3C (KsepDbGetShimInfo.c)
 *     KsepStringSplitMultiString @ 0x1407BE83C (KsepStringSplitMultiString.c)
 *     KsepRegistryQueryDriverShims @ 0x1409E4314 (KsepRegistryQueryDriverShims.c)
 *     KsepStringFree @ 0x1409E5588 (KsepStringFree.c)
 *     KsepStringDuplicate @ 0x1409E5E2C (KsepStringDuplicate.c)
 */

__int64 __fastcall KsepEngineGetShimsFromRegistry(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  char *v4; // rsi
  void *Paged; // rax
  void *v9; // r8
  void *v10; // r14
  int ShimInfo; // ebx
  int v13; // eax
  _WORD **v14; // r15
  __int64 v15; // rdi
  __int64 i; // rbx
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rbp
  unsigned __int64 v20; // [rsp+20h] [rbp-38h] BYREF
  _WORD **v21; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v22; // [rsp+60h] [rbp+8h] BYREF

  v20 = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  v22 = 0;
  if ( (*(_DWORD *)(a1 + 8) & 1) != 0 )
  {
    ShimInfo = -1073741275;
LABEL_7:
    KsepPoolFreePaged(v4);
    *a3 = 0LL;
    *a4 = 0;
    return (unsigned int)ShimInfo;
  }
  Paged = (void *)KsepPoolAllocatePaged();
  v10 = Paged;
  if ( !Paged )
  {
    ShimInfo = -1073741801;
    goto LABEL_7;
  }
  ShimInfo = KsepRegistryQueryDriverShims(*(_QWORD *)(a2 + 8), Paged, v9, &v20);
  if ( ShimInfo >= 0 )
  {
    v13 = KsepStringSplitMultiString((__int64)v10, v20, &v21, &v22);
    v14 = v21;
    ShimInfo = v13;
    v15 = v22;
    if ( v13 >= 0 )
    {
      v4 = (char *)KsepPoolAllocatePaged();
      if ( v4 )
      {
        for ( i = 0LL; (unsigned int)i < (unsigned int)v15; *(_DWORD *)&v4[v17 + 68] = 0 )
        {
          v17 = 80 * i;
          if ( (int)KsepStringDuplicate((__int64)&v4[80 * i + 16], v14[2 * (unsigned int)i + 1]) < 0 )
            break;
          i = (unsigned int)(i + 1);
        }
        ShimInfo = KsepDbGetShimInfo((__int64)v4, v15);
        if ( ShimInfo >= 0 )
        {
          *a3 = v4;
          ShimInfo = 0;
          *a4 = v15;
        }
        else
        {
          v18 = ((unsigned __int8)_InterlockedExchangeAdd(
                                    (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[8],
                                    1u)
               + 1) & 0x3F;
          *(_DWORD *)&AlpcpMessageLogLock.WaitBlockFill6[8 * v18 + 4] = ShimInfo;
          *((_DWORD *)&AlpcpMessageLogLock.WaitBlock[0].WaitListEntry.Flink + 2 * v18) = 132091;
          if ( ((__int64)stru_140E66B30.StackBase & 2) != 0 )
            KsepDebugPrint(0LL, (int)"KSE: Cannot resolve registry shims to Sdb: 0x%x\n", (unsigned int)ShimInfo);
          KsepLogError(0LL, (__int64)"KSE: Cannot resolve registry shims to Sdb: 0x%x\n", ShimInfo);
        }
      }
      else
      {
        ShimInfo = -1073741801;
      }
    }
    if ( v14 )
    {
      if ( (_DWORD)v15 )
      {
        v19 = (__int64)v14;
        do
        {
          KsepStringFree(v19);
          v19 += 16LL;
          --v15;
        }
        while ( v15 );
      }
      KsepPoolFreePaged(v14);
    }
  }
  KsepPoolFreePaged(v10);
  if ( ShimInfo < 0 )
    goto LABEL_7;
  return (unsigned int)ShimInfo;
}
