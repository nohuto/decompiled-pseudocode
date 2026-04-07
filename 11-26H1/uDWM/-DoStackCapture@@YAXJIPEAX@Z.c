/*
 * XREFs of ?DoStackCapture@@YAXJIPEAX@Z @ 0x1800735C4
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x180085C48 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x180073714 (-EnsureStackCaptureRegisteredWithWER@@YAXXZ.c)
 *     ??$_Copy_memmove_n@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z @ 0x1800737B8 (--$_Copy_memmove_n@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z.c)
 *     ??$_Find_vectorized@PEAVCWindowData@@PEBV1@@std@@YAPEAPEAVCWindowData@@QEAPEAV1@0QEBV1@@Z @ 0x18008DE68 (--$_Find_vectorized@PEAVCWindowData@@PEBV1@@std@@YAPEAPEAVCWindowData@@QEAPEAV1@0QEBV1@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

void __fastcall DoStackCapture(int a1, int a2, void *a3)
{
  volatile int v6; // r8d
  __int64 v7; // r9
  __int64 v8; // rbx
  DWORD CurrentThreadId; // eax
  char *v10; // rdi
  PVOID *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  __m128i si128; // xmm0
  PVOID BackTrace[12]; // [rsp+20h] [rbp-88h] BYREF

  EnsureStackCaptureRegisteredWithWER();
  do
  {
    v6 = g_nCurrentStackCaptureIndex;
    v7 = (unsigned __int8)(g_nCurrentStackCaptureIndex + 1);
  }
  while ( v6 != _InterlockedCompareExchange(&g_nCurrentStackCaptureIndex, v7, g_nCurrentStackCaptureIndex) );
  v8 = 12 * v7;
  g_StackCaptureFrames[12 * v7] = a1;
  CurrentThreadId = GetCurrentThreadId();
  g_StackCaptureFrames[v8 + 2] = a2;
  g_StackCaptureFrames[v8 + 1] = CurrentThreadId;
  QueryPerformanceCounter((LARGE_INTEGER *)&g_StackCaptureFrames[v8 + 4]);
  v10 = (char *)&g_StackCaptureFrames[v8];
  *(_OWORD *)(v10 + 24) = 0LL;
  *((_QWORD *)v10 + 5) = 0LL;
  memset_0(BackTrace, 0, 0x58uLL);
  v11 = &BackTrace[RtlCaptureStackBackTrace(1u, 0xBu, BackTrace, 0LL)];
  v12 = std::_Find_vectorized<CWindowData *,CWindowData const *>(BackTrace, v11, a3);
  v13 = 3LL;
  v14 = ((__int64)v11 - v12) >> 3;
  if ( v14 > 3 || (v13 = v14) != 0 )
  {
    std::_Copy_memmove_n<void * *,void * *>(v12, v13, v10 + 24);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0);
    *(__m128i *)(v10 + 24) = si128;
    *((_QWORD *)v10 + 5) = si128.m128i_i64[0];
  }
}
