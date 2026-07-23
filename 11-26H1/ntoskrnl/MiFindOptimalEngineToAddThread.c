/*
 * XREFs of MiFindOptimalEngineToAddThread @ 0x14052203C
 * Callers:
 *     MiAddZeroingThread @ 0x140521E94 (MiAddZeroingThread.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiFindBestZeroingProcessor @ 0x1402F6038 (MiFindBestZeroingProcessor.c)
 *     MiGetEngineBackgroundQualifications @ 0x1404E32EC (MiGetEngineBackgroundQualifications.c)
 *     MiComputeCurrentZeroBandwidth @ 0x1405222AC (MiComputeCurrentZeroBandwidth.c)
 *     MiGetNextEngineType @ 0x14052234C (MiGetNextEngineType.c)
 *     MiUpdateBackgroundZeroingActive @ 0x1405223B0 (MiUpdateBackgroundZeroingActive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiFindOptimalEngineToAddThread(__int64 a1, int a2, int a3, int *a4, __int64 a5)
{
  __int64 v5; // r14
  int v9; // r12d
  int v10; // edi
  int v11; // edi
  int v12; // r13d
  __int64 v13; // rbx
  volatile LONG *v14; // r15
  __int64 result; // rax
  int NextEngineType; // esi
  int v17; // ebx
  unsigned int v18; // r15d
  int v19; // eax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  unsigned int v22; // [rsp+20h] [rbp-158h]
  char *v23; // [rsp+20h] [rbp-158h]
  int *v26; // [rsp+38h] [rbp-140h]
  volatile LONG *v27; // [rsp+48h] [rbp-130h]
  __int64 v28; // [rsp+50h] [rbp-128h] BYREF
  _OWORD v29[12]; // [rsp+58h] [rbp-120h] BYREF

  v5 = a5;
  memset_0(v29, 0, sizeof(v29));
  v28 = a1;
  v9 = 3;
  *(_OWORD *)a5 = 0LL;
  *(_OWORD *)(a5 + 16) = 0LL;
  *(_OWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 48) = 0LL;
  v22 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 17372LL);
  if ( a2 == 3 )
  {
    v10 = 7;
  }
  else
  {
    v11 = 1 << a2;
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 48) + 17372LL) == 1 )
      v10 = -v11 & 6 | 1;
    else
      v10 = (v11 - 1) | v11;
  }
  *a4 = 0;
  v12 = 0;
  v13 = *(_QWORD *)(384LL * *(unsigned int *)(a1 + 56) + qword_140E2D838 + 376);
  v14 = (volatile LONG *)(v13 + 64);
  v27 = (volatile LONG *)(v13 + 64);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v13 + 64));
  if ( !(unsigned int)MiComputeCurrentZeroBandwidth(v13, &v28) )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v13 + 64));
    return 4LL;
  }
  NextEngineType = 0;
  v17 = 5;
  if ( v10 )
  {
    v18 = v22;
    do
    {
      if ( ((1 << NextEngineType) & v10) != 0 )
      {
        v10 &= ~(1 << NextEngineType);
        v23 = (char *)v29 + 56 * NextEngineType;
        v26 = (int *)(a1 + 504LL * NextEngineType + 232);
        v12 += v26[3];
        if ( (unsigned int)MiGetEngineBackgroundQualifications(&v28, NextEngineType) )
        {
          MiFindBestZeroingProcessor((__int64)v23, v26, a3, 1u);
          v19 = *((_DWORD *)v23 + 10);
          if ( v19 < v17 )
          {
            *a4 = NextEngineType;
            v17 = v19;
            v9 = NextEngineType;
            if ( !v19 )
              break;
          }
        }
      }
      NextEngineType = MiGetNextEngineType((unsigned int)NextEngineType, v18);
    }
    while ( v10 );
    v5 = a5;
    v14 = v27;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v14);
  if ( v17 == 4 )
  {
    if ( !v12 )
    {
LABEL_18:
      *a4 = v9;
      ++*(_DWORD *)(a1 + 4 * (v17 + 126LL * v9) + 588);
      v20 = *(_OWORD *)((char *)&v29[1] + 56 * v9);
      *(_OWORD *)v5 = *(_OWORD *)((char *)v29 + 56 * v9);
      v21 = *(_OWORD *)((char *)&v29[2] + 56 * v9);
      *(_OWORD *)(v5 + 16) = v20;
      *(_QWORD *)&v20 = *((_QWORD *)&v29[3] + 7 * v9);
      result = 0LL;
      *(_OWORD *)(v5 + 32) = v21;
      *(_QWORD *)(v5 + 48) = v20;
      return result;
    }
  }
  else if ( v17 != 5 )
  {
    goto LABEL_18;
  }
  MiUpdateBackgroundZeroingActive(a1);
  return 2LL;
}
