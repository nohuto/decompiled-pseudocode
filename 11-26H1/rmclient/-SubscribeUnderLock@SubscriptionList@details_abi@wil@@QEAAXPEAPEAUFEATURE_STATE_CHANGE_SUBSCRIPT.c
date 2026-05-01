/*
 * XREFs of ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180007990
 * Callers:
 *     ?EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x180007904 (-EnsureSubscribedToProcessWideUsageFlushUnderLock@FeatureStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     ?reset@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAXPEAX@Z @ 0x1800086C0 (-reset@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAXPEAX@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18000E520 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 */

void __fastcall wil::details_abi::SubscriptionList::SubscribeUnderLock(
        wil::details_abi::SubscriptionList *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **a2,
        void (*a3)(void *),
        void *a4)
{
  rsize_t v4; // rsi
  _QWORD *v7; // r11
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r10
  _QWORD *v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  void *v14; // rcx
  __int64 v15; // rax
  struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  DWORD LastError; // ebp
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // r8
  char *v22; // rax
  char *v23; // r15
  const void *v24; // r8
  rsize_t v25; // rdx
  rsize_t v26; // rbx
  _QWORD Source[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  *a2 = 0LL;
  v7 = (_QWORD *)*((_QWORD *)this + 5);
  v9 = 0LL;
  v10 = *((_QWORD *)this + 6) - (_QWORD)v7;
  v11 = v7;
  while ( v9 < v10 >> 4 )
  {
    v16 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)(v9 + 1);
    if ( !*v11 )
    {
      v17 = 2 * v9;
      v7[v17] = a3;
      v7[v17 + 1] = a4;
      *a2 = v16;
      return;
    }
    ++v9;
    v11 += 2;
  }
  v12 = *((_QWORD *)this + 7) - (_QWORD)v7;
  Source[0] = a3;
  Source[1] = a4;
  if ( v10 + 16 >= v12 )
  {
    v13 = 16LL;
    if ( 2 * v12 > 0x10 )
      v13 = 2 * v12;
    if ( v12 < v13 )
    {
      v18 = v13 & 0xFFFFFFFFFFFFFFC0uLL;
      LastError = GetLastError();
      v20 = v18 + 64;
      v22 = (char *)wil::details::ProcessHeapAlloc(0, v18 + 64, v21);
      v23 = v22;
      if ( !v22 )
      {
        SetLastError(LastError);
        return;
      }
      v24 = (const void *)*((_QWORD *)this + 5);
      v25 = v18 + 64;
      v26 = *((_QWORD *)this + 6) - (_QWORD)v24;
      memcpy_s(v22, v25, v24, v26);
      wistd::unique_ptr<void,wil::process_heap_deleter>::reset((char *)this + 64, v23);
      *((_QWORD *)this + 5) = v23;
      *((_QWORD *)this + 6) = &v23[v26];
      *((_QWORD *)this + 7) = &v23[v20];
      SetLastError(LastError);
    }
  }
  v14 = (void *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)v14 < *((_QWORD *)this + 7) )
    v4 = *((_QWORD *)this + 7) - (_QWORD)v14;
  memcpy_s(v14, v4, Source, 0x10uLL);
  v15 = *((_QWORD *)this + 6) + 16LL;
  *((_QWORD *)this + 6) = v15;
  *a2 = (struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)((unsigned __int64)(v15 - *((_QWORD *)this + 5)) >> 4);
}
