/*
 * XREFs of KiStartPrcbThread @ 0x1405EC620
 * Callers:
 *     KiAllocateAndStartBootProcessorSchedulerStructures @ 0x1405E9AB4 (KiAllocateAndStartBootProcessorSchedulerStructures.c)
 *     KiStartPrcbThreads @ 0x1405EB9A4 (KiStartPrcbThreads.c)
 *     KiStartIdleThread @ 0x1405F6B40 (KiStartIdleThread.c)
 * Callees:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KeAddProcessorAffinityEx @ 0x140246720 (KeAddProcessorAffinityEx.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

_QWORD *__fastcall KiStartPrcbThread(__int64 a1, __int64 a2)
{
  unsigned __int16 *v4; // rbx
  unsigned __int16 *v5; // rbx
  struct _KAFFINITY_EX *v6; // rcx
  struct _KAFFINITY_EX *v7; // r8
  int v8; // eax
  _QWORD *v9; // rsi
  _QWORD *result; // rax
  struct _KAFFINITY_EX v11; // [rsp+20h] [rbp-138h] BYREF

  memset_0(&v11.8, 0, sizeof(v11.8));
  *(_QWORD *)&v11.Count = 2097153LL;
  memset_0(&v11.8, 0, sizeof(v11.8));
  KeAddProcessorAffinityEx(&v11.Count, 0);
  KeStartThread(a1, &v11, 0LL);
  v4 = *(unsigned __int16 **)(a1 + 576);
  memset_0(v4 + 4, 0, 8LL * *v4);
  *v4 = 1;
  v5 = *(unsigned __int16 **)(a1 + 552);
  memset_0(v5 + 4, 0, 8LL * *v5);
  *v5 = 1;
  KeAddProcessorAffinityEx(*(unsigned __int16 **)(a1 + 552), *(_DWORD *)(a2 + 36));
  v6 = *(struct _KAFFINITY_EX **)(a1 + 576);
  v7 = *(struct _KAFFINITY_EX **)(a1 + 552);
  *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(a2 + 208);
  *(_DWORD *)(a1 + 196) = *(_DWORD *)(a2 + 36);
  RtlpCopyAffinityEx(v6, v6->Size, v7);
  *(_WORD *)(a1 + 584) = *(unsigned __int8 *)(a2 + 208);
  *(_DWORD *)(a1 + 588) = *(_DWORD *)(a2 + 36);
  v8 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 116) |= 8u;
  *(_DWORD *)(a1 + 536) = v8;
  *(_BYTE *)(a1 + 195) = 63;
  v9 = (_QWORD *)(a1 + 1400);
  result = (_QWORD *)qword_140FC92B8;
  if ( *(_UNKNOWN **)qword_140FC92B8 != &unk_140FC92B0 )
    __fastfail(3u);
  *v9 = &unk_140FC92B0;
  v9[1] = result;
  *result = v9;
  qword_140FC92B8 = (__int64)v9;
  return result;
}
