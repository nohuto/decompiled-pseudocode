/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1800919D8
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180090CB4 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18004DFC8 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18005C730 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x1800909D8 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180090F2C (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18009310C (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        char *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  unsigned __int64 v6; // rax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rbx
  int v11; // eax
  unsigned int v12; // edi
  void *v13; // rdx
  __int64 v14; // rax
  void *v15; // rdx
  int v16[4]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v6 = (unsigned __int64)wil::details::ProcessHeapAlloc(8u, 0x78uLL);
  v9 = (_QWORD *)v6;
  if ( v6 )
  {
    *(_OWORD *)v16 = 0LL;
    if ( (v6 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
    v11 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
            (wil::details_abi::SemaphoreValue *)v16,
            a1,
            v8,
            v6 >> 2);
    v12 = v11;
    if ( v11 >= 0 )
    {
      *(_DWORD *)v9 = 1;
      v9[1] = *a2;
      v14 = *(_QWORD *)v16;
      *a2 = 0LL;
      v9[2] = v14;
      v9[3] = *(_QWORD *)&v16[2];
      memset(v16, 0, sizeof(v16));
      memset_0((char *)v9 + 34, 0, 0x56uLL);
      *((_WORD *)v9 + 16) = 88;
      *((_DWORD *)v9 + 9) = 1;
      memset_0(v9 + 5, 0, 0x50uLL);
      *a3 = v9;
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)v16, v15);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x14B, (int)"wil", (const char *)(unsigned int)v11);
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details_abi::SemaphoreValue *)v16, v13);
      MemoryFree(v9);
      return v12;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x148, (int)"wil", (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
