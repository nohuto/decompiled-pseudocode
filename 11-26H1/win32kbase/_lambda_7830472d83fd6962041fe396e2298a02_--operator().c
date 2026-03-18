/*
 * XREFs of _lambda_7830472d83fd6962041fe396e2298a02_::operator() @ 0x1401B463C
 * Callers:
 *     W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02___ @ 0x1401B4578 (W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02___.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1400FDB74 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 */

__int64 __fastcall lambda_7830472d83fd6962041fe396e2298a02_::operator()(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx

  v2 = *(__int64 **)a1;
  *v2 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
          (NSInstrumentation::CLeakTrackingAllocator *)(a2 + 72016),
          *(_QWORD *)(a1 + 8),
          *(_QWORD *)(a1 + 16),
          *(_DWORD *)(a1 + 24));
  return **(_QWORD **)a1 == 0LL ? 0xC0000017 : 0;
}
