/*
 * XREFs of ?RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180087280
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800801E0 (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpGameModeReadDefaultGpuSettings@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180087834 (-RmpGameModeReadDefaultGpuSettings@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

void __fastcall RmpGameModeInitialize(struct _RM_SERVICE_GLOBALS *a1, struct _RM_GAME_MODE_CONTEXT *a2)
{
  __m128i v4; // xmm1
  unsigned __int64 v5; // xmm0_8

  memset_0((char *)a2 + 24, 0, 0x80uLL);
  *(_QWORD *)a2 = a1;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  RtlInitializeSRWLock((char *)a2 + 72);
  v4 = _mm_add_epi64(
         _mm_slli_epi64(_mm_unpacklo_epi32(_mm_loadl_epi64(&_xmm), (__m128i)0LL), 4u),
         _mm_unpacklo_epi64((__m128i)((unsigned __int64)a2 + 88), (__m128i)((unsigned __int64)a2 + 88)));
  *((_QWORD *)a2 + 11) = v4.m128i_i64[0];
  v5 = _mm_srli_si128(v4, 8).m128i_u64[0];
  *((_QWORD *)a2 + 14) = v5;
  *((_QWORD *)a2 + 13) = v5;
  *((_QWORD *)a2 + 12) = v4.m128i_i64[0];
  *((_QWORD *)a2 + 4) = (char *)a2 + 24;
  *((_QWORD *)a2 + 3) = (char *)a2 + 24;
  RmpGameModeReadDefaultGpuSettings(a2);
  RmpSystemPublishGlobalGameModeState(0);
}
