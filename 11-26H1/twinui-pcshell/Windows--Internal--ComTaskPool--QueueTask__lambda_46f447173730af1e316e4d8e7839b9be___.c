/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_46f447173730af1e316e4d8e7839b9be___ @ 0x1801DC6D8
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___ @ 0x1801DC630 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46f447173730af1e316e4d8e7839b9be___::CTaskWrapper__lambda_46f447173730af1e316e4d8e7839b9be_____lambda_46f447173730af1e316e4d8e7839b9be___ @ 0x1801DC764 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_46f447173730af1e316e4d8e7839b9be___--CTaskW.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_46f447173730af1e316e4d8e7839b9be___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  void *v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edi

  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_46f447173730af1e316e4d8e7839b9be___::CTaskWrapper__lambda_46f447173730af1e316e4d8e7839b9be_____lambda_46f447173730af1e316e4d8e7839b9be___(
           v6,
           a4);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(3LL, 2LL, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
