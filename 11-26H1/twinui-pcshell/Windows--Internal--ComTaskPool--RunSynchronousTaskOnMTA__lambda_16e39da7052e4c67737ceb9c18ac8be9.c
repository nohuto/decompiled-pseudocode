/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_16e39da7052e4c67737ceb9c18ac8be9___ @ 0x18020C03C
 * Callers:
 *     ?AddDisplayRegion@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@UtagRECT@@H@Z @ 0x18020BF10 (-AddDisplayRegion@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@UtagRECT@@H@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9___::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9_____lambda_16e39da7052e4c67737ceb9c18ac8be9___ @ 0x180449CC4 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c_ea_180449CC4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_16e39da7052e4c67737ceb9c18ac8be9___(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v5; // ebx
  void *v6; // rax
  __int64 v7; // rdi
  int v8; // ebx
  APTTYPEQUALIFIER v10[6]; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0;
  v10[0] = APTTYPEQUALIFIER_NONE;
  if ( CoGetApartmentType((APTTYPE *)&v11, v10) < 0 || !v11 || v11 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v12 = 0;
  v6 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9___::CResultTaskWrapper__lambda_16e39da7052e4c67737ceb9c18ac8be9_____lambda_16e39da7052e4c67737ceb9c18ac8be9___(
           v6,
           &v12,
           a3);
  else
    v7 = 0LL;
  v8 = SHTaskPoolQueueTask(v5, 32LL, a2);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 >= 0 )
    return v12;
  return (unsigned int)v8;
}
