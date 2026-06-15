/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_0b797c3ec2b40741812a9b93d57ea05e___ @ 0x1800652C0
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180064CB0 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e___::CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e_____lambda_0b797c3ec2b40741812a9b93d57ea05e___ @ 0x1800A9DAC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e___--CTaskW.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_0b797c3ec2b40741812a9b93d57ea05e___(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // edi

  v7 = operator new[](0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v8 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e___::CTaskWrapper__lambda_0b797c3ec2b40741812a9b93d57ea05e_____lambda_0b797c3ec2b40741812a9b93d57ea05e___(
           v7,
           a4);
  else
    v8 = 0LL;
  v9 = SHTaskPoolQueueTask(a1, 32LL, a3);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
