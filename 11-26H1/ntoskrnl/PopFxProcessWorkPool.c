/*
 * XREFs of PopFxProcessWorkPool @ 0x140396268
 * Callers:
 *     PopFxStaticWorkPoolThread @ 0x140605A50 (PopFxStaticWorkPoolThread.c)
 *     PopFxPluginWork @ 0x140A88B70 (PopFxPluginWork.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     KeWaitForMultipleObjects @ 0x140396440 (KeWaitForMultipleObjects.c)
 *     PopFxDispatchPluginWorkOnce @ 0x1403AE3C4 (PopFxDispatchPluginWorkOnce.c)
 *     ExInterlockedRemoveHeadList @ 0x14045D770 (ExInterlockedRemoveHeadList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

NTSTATUS __fastcall PopFxProcessWorkPool(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  int v4; // ebp
  LARGE_INTEGER *p_Timeout; // rax
  NTSTATUS result; // eax
  int v7; // ecx
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  PLIST_ENTRY v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF
  LARGE_INTEGER Timeout; // [rsp+80h] [rbp+8h] BYREF

  v2 = a2;
  v4 = a2 != 0;
  if ( a2 )
    *(_QWORD *)(a1 + 8LL * a2 + 264) = KeGetCurrentThread();
  *(__m128i *)Object = _mm_add_epi64(
                         _mm_slli_epi64(_mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)&_xmm), (__m128i)0LL), 5u),
                         _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 32), (__m128i)(unsigned __int64)(a1 + 32)));
  while ( 1 )
  {
    Timeout.QuadPart = 0LL;
    if ( KeWaitForSingleObject((PVOID)(a1 + 32 * (v4 + 1LL)), Executive, 0, 0, &Timeout) != 258 )
    {
      v7 = v4;
      goto LABEL_10;
    }
    if ( (_DWORD)v2 )
    {
      Timeout.QuadPart = -50000LL;
      p_Timeout = &Timeout;
    }
    else
    {
      p_Timeout = 0LL;
    }
    result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, p_Timeout, 0LL);
    v7 = result;
    if ( result == 258 )
      break;
LABEL_10:
    if ( (_KPROCESS **)a1 == &stru_140F12420.Process )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
    }
    if ( v7 )
    {
      if ( v7 == 1 )
        PopFxDispatchPluginWorkOnce(*(_QWORD *)a1);
    }
    else
    {
      v11 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(a1 + 16), (PKSPIN_LOCK)(a1 + 8));
      *v11 = 0LL;
      guard_dispatch_icall_no_overrides(v11[1].Blink, v12, v13);
    }
    if ( (_KPROCESS **)a1 == &stru_140F12420.Process )
      KeLeaveGuardedRegion();
    if ( !(_DWORD)v2 )
    {
      _m_prefetchw((const void *)(a1 + 96));
      v9 = *(_DWORD *)(a1 + 96);
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 96), v9, v9);
      }
      while ( v10 != v9 );
      if ( v9 )
        v4 = 0;
      else
        v4 = (v4 + 1) % 2;
    }
  }
  *(_QWORD *)(a1 + 8 * v2 + 264) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 96), ~(1 << (v2 - 1)));
  return result;
}
