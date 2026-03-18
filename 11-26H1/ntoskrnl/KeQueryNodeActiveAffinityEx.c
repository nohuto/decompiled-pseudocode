/*
 * XREFs of KeQueryNodeActiveAffinityEx @ 0x140476C00
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140408D88 (MiStoreWriteModifiedPages.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1404DA4D0 (KeQueryLogicalProcessorRelationship.c)
 *     PpmParkRegisterParking @ 0x14060FE58 (PpmParkRegisterParking.c)
 *     ?SmCompressManagerUpdateTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z @ 0x14063CAB0 (-SmCompressManagerUpdateTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_MANAGER@1@@Z.c)
 *     ExpNodeHotAddProcessor @ 0x1406D0BA0 (ExpNodeHotAddProcessor.c)
 *     ExpNodeInitialize @ 0x14083F9C0 (ExpNodeInitialize.c)
 *     ?ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z @ 0x140846BD0 (-ExpLookasideMgrComputeWorkerSetAffinity@@YAJPEAU_EXP_LOOKASIDE_MGR_WORKER_SET@@G@Z.c)
 *     ExpWorkQueueManagerThread @ 0x140A039A0 (ExpWorkQueueManagerThread.c)
 *     ExProcessorCounterSetCallback @ 0x140A68560 (ExProcessorCounterSetCallback.c)
 *     PspCopyNodeRelativeMaskToAffinityEx @ 0x140CD7EF8 (PspCopyNodeRelativeMaskToAffinityEx.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

_UNKNOWN **__fastcall KeQueryNodeActiveAffinityEx(unsigned __int16 a1, unsigned __int16 *a2, _WORD *a3)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rsi
  __int64 v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // r10
  __int64 v12; // rcx
  __int16 v13; // dx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = a1;
  if ( a2 )
  {
    result = (_UNKNOWN **)memset_0(a2 + 4, 0, 8LL * *a2);
    *a2 = 1;
  }
  if ( a3 )
    *a3 = 0;
  if ( (unsigned __int16)v4 < (unsigned __int16)KeNumberNodes )
  {
    v7 = KeNodeBlock[v4];
    if ( v7 )
    {
      v8 = 0;
      while ( 1 )
      {
        result = (_UNKNOWN **)*(unsigned int *)(v7 + 48);
        if ( v8 >= (unsigned int)result )
          return result;
        v9 = v8++;
        v10 = *(_QWORD *)(*(_QWORD *)(v7 + 32) + 8 * v9);
        v11 = *(_QWORD *)(v10 + 128);
        v12 = *(unsigned __int16 *)(v10 + 136);
        v13 = __popcnt(v11);
        if ( a2 )
        {
          if ( *a2 <= (unsigned __int16)v12 )
          {
            if ( a2[1] <= (unsigned __int16)v12 )
              goto LABEL_12;
            *a2 = v12 + 1;
          }
          *(_QWORD *)&a2[4 * v12 + 4] |= v11;
        }
LABEL_12:
        if ( a3 )
          *a3 += v13;
      }
    }
  }
  return result;
}
