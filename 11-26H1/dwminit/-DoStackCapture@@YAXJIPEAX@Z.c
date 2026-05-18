/*
 * XREFs of ?DoStackCapture@@YAXJIPEAX@Z @ 0x18000EBE4
 * Callers:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000ED7C (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000EE20 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x18000EEF0 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     __std_find_trivial_8 @ 0x180002160 (__std_find_trivial_8.c)
 *     __security_check_cookie @ 0x1800021F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800032B4 (memset_0.c)
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x18000EFC0 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 *     memmove_0 @ 0x1800113E4 (memmove_0.c)
 */

void __fastcall DoStackCapture(int a1, int a2, unsigned __int64 a3)
{
  volatile int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v10; // rcx
  char *v11; // rdi
  const __m128i *v12; // rbx
  const __m128i *trivial_8; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // rbx
  __m128i si128; // xmm0
  PVOID BackTrace[12]; // [rsp+20h] [rbp-88h] BYREF

  if ( !_InterlockedCompareExchange(&dword_18001AE20, 1, 0) )
  {
    MilWerRegisterMemoryBlock(g_StackCaptureFrames, 0x3800u);
    MilWerRegisterMemoryBlock((const void *)&g_nCurrentStackCaptureIndex, 4u);
  }
  do
  {
    v6 = g_nCurrentStackCaptureIndex;
    v7 = (unsigned __int8)(g_nCurrentStackCaptureIndex + 1);
  }
  while ( v6 != _InterlockedCompareExchange(&g_nCurrentStackCaptureIndex, v7, g_nCurrentStackCaptureIndex) );
  v8 = 14 * v7;
  g_StackCaptureFrames[14 * v7] = a1;
  CurrentThreadId = GetCurrentThreadId();
  g_StackCaptureFrames[v8 + 2] = a2;
  g_StackCaptureFrames[v8 + 1] = CurrentThreadId;
  QueryPerformanceCounter((LARGE_INTEGER *)&g_StackCaptureFrames[v8 + 4]);
  if ( g_pFrameId )
    v10 = *g_pFrameId;
  else
    v10 = 0LL;
  *(_QWORD *)&g_StackCaptureFrames[v8 + 12] = v10;
  v11 = (char *)&g_StackCaptureFrames[v8];
  *(_OWORD *)(v11 + 24) = 0LL;
  *((_QWORD *)v11 + 5) = 0LL;
  memset_0(BackTrace, 0, 0x58uLL);
  v12 = (const __m128i *)&BackTrace[RtlCaptureStackBackTrace(1u, 0xBu, BackTrace, 0LL)];
  trivial_8 = _std_find_trivial_8((const __m128i *)BackTrace, v12, a3);
  v14 = 3LL;
  v15 = ((char *)v12 - (char *)trivial_8) >> 3;
  if ( v15 > 3 || (v14 = v15) != 0 )
  {
    memmove_0(v11 + 24, trivial_8, 8 * v14);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0);
    *(__m128i *)(v11 + 24) = si128;
    *((_QWORD *)v11 + 5) = si128.m128i_i64[0];
  }
}
