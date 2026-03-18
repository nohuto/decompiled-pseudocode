/*
 * XREFs of ?DoStackCapture@@YAXJIPEAX@Z @ 0x1801A738C
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x180081A80 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x1801A74F8 (-EnsureStackCaptureRegisteredWithWER@@YAXXZ.c)
 *     ??$_Copy_memmove_n@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z @ 0x1801A7540 (--$_Copy_memmove_n@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

void __fastcall DoStackCapture(int a1, int a2, void *a3)
{
  volatile int v6; // r8d
  __int64 v7; // r9
  __int64 v8; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v10; // rcx
  char *v11; // rdi
  PVOID *v12; // rbx
  void *trivial_8; // rax
  __m128i si128; // xmm0
  PVOID BackTrace[12]; // [rsp+20h] [rbp-88h] BYREF

  EnsureStackCaptureRegisteredWithWER();
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
  v12 = &BackTrace[RtlCaptureStackBackTrace(1u, 0xBu, BackTrace, 0LL)];
  trivial_8 = (void *)_std_find_trivial_8(BackTrace, v12, a3);
  if ( ((char *)v12 - (_BYTE *)trivial_8) >> 3 )
  {
    std::_Copy_memmove_n<void * *,void * *>(trivial_8);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0);
    *(__m128i *)(v11 + 24) = si128;
    *((_QWORD *)v11 + 5) = si128.m128i_i64[0];
  }
}
