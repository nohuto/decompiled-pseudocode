/*
 * XREFs of ?PoolLeakLiveDumpAddSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z @ 0x1401C2878
 * Callers:
 *     ?PoolLeakLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z @ 0x1401C29A0 (-PoolLeakLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z.c)
 * Callees:
 *     ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z @ 0x1401D3564 (-Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PoolLeakLiveDumpAddSecondaryData(
        void *a1,
        int (*a2)(void *, const struct _GUID *, void *, unsigned int),
        const struct _GUID *a3)
{
  __int128 v6; // xmm0
  __int64 UserSessionState; // rbp
  int v8; // esi
  __int64 Pool2; // rax
  _DWORD *v11; // rdi
  unsigned int v12; // ebx
  unsigned int v13; // esi
  _OWORD v14[2]; // [rsp+30h] [rbp-68h] BYREF

  v14[0] = 0LL;
  v6 = (__int128)*a3;
  DWORD2(v14[0]) = 8;
  v14[1] = v6;
  UserSessionState = W32GetUserSessionState(a1, a2);
  NSInstrumentation::CLeakTrackingAllocator::Dump(
    (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72032),
    (struct NSInstrumentation::_DUMP_CONTEXT *)v14);
  v8 = DWORD2(v14[0]);
  if ( DWORD2(v14[0]) <= 8 )
    return 0LL;
  Pool2 = ExAllocatePool2(258LL, DWORD2(v14[0]), 1953264469LL);
  v11 = (_DWORD *)Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  *(_QWORD *)&v14[0] = Pool2 + 8;
  DWORD2(v14[0]) = v8 - 8;
  NSInstrumentation::CLeakTrackingAllocator::Dump(
    (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72032),
    (struct NSInstrumentation::_DUMP_CONTEXT *)v14);
  if ( DWORD2(v14[0]) < v8 - 8 )
  {
    v13 = v8 - DWORD2(v14[0]);
    *v11 = v13;
    v11[1] = 1;
    v12 = ((__int64 (__fastcall *)(void *, const struct _GUID *, _DWORD *, _QWORD))a2)(a1, a3, v11, v13);
  }
  else
  {
    v12 = -1073741675;
  }
  ExFreePoolWithTag(v11, 0);
  return v12;
}
