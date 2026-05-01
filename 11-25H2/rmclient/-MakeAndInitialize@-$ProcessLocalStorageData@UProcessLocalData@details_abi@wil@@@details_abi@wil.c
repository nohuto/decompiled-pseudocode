/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180016EB4
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800162C0 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?reset@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAXPEAX@Z @ 0x18000CAD0 (-reset@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAXPEAX@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18000F370 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001315C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180016264 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800164EC (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800178E0 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     memset_0 @ 0x18001C04E (memset_0.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        char *a1,
        _QWORD *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v6; // rax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rdi
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // r8d
  void *v13; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  void *v17; // rdx
  __int128 v18; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  unsigned __int64 v20; // [rsp+60h] [rbp+30h] BYREF

  *a3 = 0LL;
  v6 = (unsigned __int64)wil::details::ProcessHeapAlloc(8u, 0x78uLL);
  v20 = v6;
  v9 = v6;
  if ( !v6 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x148, v8, (const char *)0x8007000ELL);
LABEL_7:
    wistd::unique_ptr<void,wil::process_heap_deleter>::reset((void **)&v20, 0LL);
    return v10;
  }
  v18 = 0LL;
  if ( (v6 & 3) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
  v11 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
          (wil::details_abi::SemaphoreValue *)&v18,
          a1,
          v8,
          v6 >> 2);
  v10 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x14B, v12, (const char *)(unsigned int)v11);
    wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details **)&v18, v13);
    goto LABEL_7;
  }
  *(_DWORD *)v9 = 1;
  *(_QWORD *)(v9 + 8) = *a2;
  *a2 = 0LL;
  v15 = v18;
  *(_QWORD *)&v18 = 0LL;
  *(_QWORD *)(v9 + 16) = v15;
  v16 = *((_QWORD *)&v18 + 1);
  *((_QWORD *)&v18 + 1) = 0LL;
  *(_QWORD *)(v9 + 24) = v16;
  memset_0((void *)(v9 + 32), 0, 0x58uLL);
  *(_WORD *)(v9 + 32) = 88;
  *(_DWORD *)(v9 + 36) = 1;
  memset_0((void *)(v9 + 40), 0, 0x50uLL);
  v20 = 0LL;
  *a3 = v9;
  wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details **)&v18, v17);
  wistd::unique_ptr<void,wil::process_heap_deleter>::reset((void **)&v20, 0LL);
  return 0LL;
}
