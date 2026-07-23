/*
 * XREFs of ?SmCompressManagerGetIdealProcessor@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_SM_COMPRESS_MANAGER@1@KK@Z @ 0x1403EEE8C
 * Callers:
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403EEB50 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxUpdateThreadTopology@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_ETHREAD@@@Z @ 0x1403EECC8 (-SmCompressCtxUpdateThreadTopology@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@.c)
 *     SmGetIdealProcessorFromNumaNode @ 0x1403EEE6C (SmGetIdealProcessorFromNumaNode.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x140640190 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@W4_ST_COMPRESSI.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressManagerGetIdealProcessor(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  KIRQL v6; // r11
  __int64 v7; // r10
  signed __int32 v8; // eax
  unsigned __int64 v9; // r9
  unsigned int v10; // ebp
  unsigned int v11; // et2
  unsigned __int16 v12; // r8
  unsigned int v13; // edx
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx

  v3 = a2;
  if ( a3 )
    v6 = 0;
  else
    v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 8));
  v7 = *(_QWORD *)(a1 + 24) + 272 * v3;
  v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 268), 1u);
  v9 = *(_QWORD *)(v7 + 8);
  v10 = 0;
  v11 = (unsigned int)(v8 + 1) % *(_DWORD *)(v7 + 264);
  v12 = 0;
  v13 = v11 + 1;
  if ( v11 != -1 )
  {
    v14 = v13;
    while ( 1 )
    {
      if ( v9 )
      {
        _BitScanForward64(&v15, v9);
        v9 &= ~(1LL << v15);
        v10 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v12].Flink
              + (unsigned __int8)v15);
LABEL_7:
        if ( !--v14 )
          break;
      }
      else
      {
        if ( ++v12 >= *(_WORD *)v7 )
          goto LABEL_7;
        v9 = *(_QWORD *)(v7 + 8LL * v12 + 8);
      }
    }
  }
  if ( !a3 )
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 8), v6);
  return v10;
}
