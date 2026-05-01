/*
 * XREFs of Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f3c5176796a442ffa96ae8ba53d93332___ @ 0x1800D01D8
 * Callers:
 *     ?ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ @ 0x1800D011C (-ResetWindowingEnvironments@WindowingEnvironmentManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18004B838 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802C8EB4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f3c5176796a442ffa96ae8ba53d93332___(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  unsigned int v5; // edi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // edi
  APTTYPEQUALIFIER v10[10]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0;
  v10[0] = APTTYPEQUALIFIER_NONE;
  if ( CoGetApartmentType((APTTYPE *)&v11, v10) < 0 || !v11 || v11 == 3 )
    v5 = 0;
  else
    v5 = 4;
  v12 = 0;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v6);
    v7[2] = *a3;
    *v7 = &off_180743490;
    v7[3] = &v12;
  }
  v8 = SHTaskPoolQueueTask(v5, 32LL, a2);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  if ( v8 >= 0 )
    return v12;
  return (unsigned int)v8;
}
