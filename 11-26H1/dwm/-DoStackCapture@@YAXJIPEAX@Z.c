/*
 * XREFs of ?DoStackCapture@@YAXJIPEAX@Z @ 0x14000F22C
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x140002E2C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x14000F3D8 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400049A0 (__security_check_cookie.c)
 *     memset_0 @ 0x140005978 (memset_0.c)
 *     ??$_Find_unchecked@PEAPEAXPEAX@std@@YAPEAPEAXPEAPEAXQEAPEAXAEBQEAX@Z @ 0x14000F1D8 (--$_Find_unchecked@PEAPEAXPEAX@std@@YAPEAPEAXPEAPEAXQEAPEAXAEBQEAX@Z.c)
 *     ??$copy_n@PEAPEAX_KPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z @ 0x14000F1E8 (--$copy_n@PEAPEAX_KPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z.c)
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x14000F494 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 */

void __fastcall DoStackCapture(int a1, int a2, unsigned __int64 a3)
{
  volatile int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v9; // rcx
  char *v10; // rbx
  const __m128i *v11; // rdi
  __m128i *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __m128i si128; // xmm0
  unsigned __int64 v16; // [rsp+20h] [rbp-98h] BYREF
  PVOID BackTrace[12]; // [rsp+30h] [rbp-88h] BYREF

  v16 = a3;
  if ( !_InterlockedCompareExchange(&dword_140018B48, 1, 0) )
  {
    MilWerRegisterMemoryBlock(g_StackCaptureFrames, 0x3800u);
    MilWerRegisterMemoryBlock((const void *)&g_nCurrentStackCaptureIndex, 4u);
  }
  do
  {
    v5 = g_nCurrentStackCaptureIndex;
    v6 = (unsigned __int8)(g_nCurrentStackCaptureIndex + 1);
  }
  while ( v5 != _InterlockedCompareExchange(&g_nCurrentStackCaptureIndex, v6, g_nCurrentStackCaptureIndex) );
  v7 = 14 * v6;
  g_StackCaptureFrames[14 * v6] = a1;
  CurrentThreadId = GetCurrentThreadId();
  g_StackCaptureFrames[v7 + 2] = a2;
  g_StackCaptureFrames[v7 + 1] = CurrentThreadId;
  QueryPerformanceCounter((LARGE_INTEGER *)&g_StackCaptureFrames[v7 + 4]);
  if ( g_pFrameId )
    v9 = *g_pFrameId;
  else
    v9 = 0LL;
  *(_QWORD *)&g_StackCaptureFrames[v7 + 12] = v9;
  v10 = (char *)&g_StackCaptureFrames[v7];
  *(_OWORD *)(v10 + 24) = 0LL;
  *((_QWORD *)v10 + 5) = 0LL;
  memset_0(BackTrace, 0, 0x58uLL);
  v11 = (const __m128i *)&BackTrace[RtlCaptureStackBackTrace(1u, 0xBu, BackTrace, 0LL)];
  v12 = (__m128i *)std::_Find_unchecked<void * *,void *>((const __m128i *)BackTrace, v11, &v16);
  v13 = 3LL;
  v14 = ((char *)v11 - (char *)v12) >> 3;
  if ( v14 > 3 || (v13 = v14) != 0 )
  {
    std::copy_n<void * *,unsigned __int64,void * *>(v12, v13, v10 + 24);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0);
    *(__m128i *)(v10 + 24) = si128;
    *((_QWORD *)v10 + 5) = si128.m128i_i64[0];
  }
}
