/*
 * XREFs of ?DoStackCapture@@YAXJIPEAX@Z @ 0x180081F14
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x1800332D8 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x1800959F8 (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x180082064 (-EnsureStackCaptureRegisteredWithWER@@YAXXZ.c)
 *     ??$_Copy_memmove_n@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z @ 0x180096478 (--$_Copy_memmove_n@PEAPEAXPEAPEAX@std@@YAPEAPEAXPEAPEAX_K0@Z.c)
 *     ??$__std_find_trivial@PEAXPEAX@@YAPEAPEAXPEAPEAX0QEAX@Z @ 0x180099F40 (--$__std_find_trivial@PEAXPEAX@@YAPEAPEAXPEAPEAX0QEAX@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 */

void __fastcall DoStackCapture(int a1, int a2, void *a3)
{
  volatile int v6; // r8d
  __int64 v7; // r9
  char *v8; // rbx
  DWORD CurrentThreadId; // eax
  PVOID *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  __m128i si128; // xmm0
  PVOID BackTrace[12]; // [rsp+20h] [rbp-78h] BYREF

  EnsureStackCaptureRegisteredWithWER();
  do
  {
    v6 = g_nCurrentStackCaptureIndex;
    v7 = (unsigned __int8)(g_nCurrentStackCaptureIndex + 1);
  }
  while ( v6 != _InterlockedCompareExchange(&g_nCurrentStackCaptureIndex, v7, g_nCurrentStackCaptureIndex) );
  v8 = (char *)&g_StackCaptureFrames + 48 * v7;
  *(_DWORD *)v8 = a1;
  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)v8 + 2) = a2;
  *((_DWORD *)v8 + 1) = CurrentThreadId;
  QueryPerformanceCounter((LARGE_INTEGER *)v8 + 2);
  *(_OWORD *)(v8 + 24) = 0LL;
  *((_QWORD *)v8 + 5) = 0LL;
  memset_0(BackTrace, 0, 0x58uLL);
  v10 = &BackTrace[RtlCaptureStackBackTrace(1u, 0xBu, BackTrace, 0LL)];
  v11 = __std_find_trivial<void *,void *>(BackTrace, v10, a3);
  v12 = 3LL;
  v13 = ((__int64)v10 - v11) >> 3;
  if ( v13 > 3 || (v12 = v13) != 0 )
  {
    std::_Copy_memmove_n<void * *,void * *>(v11, v12, v8 + 24);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0);
    *(__m128i *)(v8 + 24) = si128;
    *((_QWORD *)v8 + 5) = si128.m128i_i64[0];
  }
}
