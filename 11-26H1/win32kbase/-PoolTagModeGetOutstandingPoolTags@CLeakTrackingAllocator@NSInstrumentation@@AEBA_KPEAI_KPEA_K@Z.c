/*
 * XREFs of ?PoolTagModeGetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@AEBA_KPEAI_KPEA_K@Z @ 0x1401FCE74
 * Callers:
 *     ?GetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@QEBA_KPEAI_KPEA_K@Z @ 0x1401B3A08 (-GetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@QEBA_KPEAI_KPEA_K@Z.c)
 * Callees:
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1401B3A7C (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 *     ?Enumerate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1401FCAA0 (-Enumerate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::PoolTagModeGetOutstandingPoolTags(
        NSInstrumentation::CLeakTrackingAllocator *this,
        unsigned int *a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  char *v4; // rax
  NSInstrumentation::CPointerHashTable *v6; // rcx
  struct W32_PUSH_LOCK *v8; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  __int64 v13; // [rsp+40h] [rbp-18h]
  char *v14; // [rsp+48h] [rbp-10h]

  v4 = (char *)this + 48;
  v10[0] = a2;
  v10[1] = a3;
  v6 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)this + 11);
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = v4;
  if ( v6 )
    NSInstrumentation::CPointerHashTable::Enumerate(
      v6,
      (void (*)(void *, void *, void *))lambda_c43910d9c8c83b4fc3d43f372adbb636_::_lambda_invoker_cdecl_,
      v10);
  v8 = (struct W32_PUSH_LOCK *)*((_QWORD *)this + 12);
  if ( v8 )
    NSInstrumentation::CSortedVector<void *,void *>::Enumerate(
      v8,
      (void (__fastcall *)(__int64, _QWORD, __int64))lambda_c43910d9c8c83b4fc3d43f372adbb636_::_lambda_invoker_cdecl_,
      (__int64)v10);
  if ( a4 )
    *a4 = v11;
  return v12;
}
