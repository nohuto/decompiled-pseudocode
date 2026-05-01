/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_6df05c95eefd3a852cd1630e41907728___ @ 0x180307B9C
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_ffa95d5ea910b6ca98d895ec7ec1025e___ @ 0x180308700 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_ffa95d5ea910b6ca98d895ec7ec1025e___.c)
 * Callees:
 *     Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____ @ 0x18023062C (Microsoft--WRL--Details--MakeAllocator_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_634a.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___::CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728_____lambda_6df05c95eefd3a852cd1630e41907728___ @ 0x180307120 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___--CTaskW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_6df05c95eefd3a852cd1630e41907728___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi
  void *v10; // [rsp+30h] [rbp-18h] BYREF

  v6 = operator new(0x178uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v6;
  v7 = 0LL;
  if ( v6 )
  {
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728___::CTaskWrapper__lambda_6df05c95eefd3a852cd1630e41907728_____lambda_6df05c95eefd3a852cd1630e41907728___(
           (__int64)v6,
           a4);
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_634a8efdf62851cb3d468a5f6e943be4_____(&v10);
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
