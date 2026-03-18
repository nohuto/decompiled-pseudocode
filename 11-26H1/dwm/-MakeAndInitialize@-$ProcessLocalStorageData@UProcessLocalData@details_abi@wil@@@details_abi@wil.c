/*
 * XREFs of ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1400093F0
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x14000740C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     memset_0 @ 0x140005978 (memset_0.c)
 *     ??$?0$00X@?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z @ 0x1400062F0 (--$-0$00X@-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@PEAX@Z.c)
 *     ??$?8XUprocess_heap_deleter@wil@@@wistd@@YA_NAEBV?$unique_ptr@XUprocess_heap_deleter@wil@@@0@$$T@Z @ 0x140006344 (--$-8XUprocess_heap_deleter@wil@@@wistd@@YA_NAEBV-$unique_ptr@XUprocess_heap_deleter@wil@@@0@$$T.c)
 *     ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x140007098 (--1SemaphoreValue@details_abi@wil@@QEAA@XZ.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x140007828 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1400081D4 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x14000994C (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000A9D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x14000B9F8 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 */

__int64 __fastcall wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>::MakeAndInitialize(
        unsigned __int16 *a1,
        _QWORD *a2,
        wil::details **a3)
{
  void *v6; // rax
  wil::details::in1diag3 *v7; // rcx
  size_t *v8; // r8
  void *v9; // rdx
  wil::details *v11; // rbx
  int v12; // eax
  unsigned int v13; // edi
  void *v14; // rdx
  void *v15; // rdx
  unsigned __int64 v16; // rax
  void *v17; // rdx
  __int128 v18; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  wil::details *v20; // [rsp+60h] [rbp+30h] BYREF

  *a3 = 0LL;
  v6 = wil::details::ProcessHeapAlloc(8u, 0x78uLL, (unsigned __int64)a3);
  wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>(&v20, (__int64)v6);
  if ( wistd::operator==<void,wil::process_heap_deleter>(&v20) )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x148, (unsigned int)"wil", (const char *)0x8007000ELL, v18);
    if ( v20 )
      wil::details::FreeProcessHeap(v20, v9);
    return 2147942414LL;
  }
  else
  {
    v11 = v20;
    v18 = 0LL;
    if ( ((unsigned __int8)v20 & 3) != 0 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(v7);
    v12 = wil::details_abi::SemaphoreValue::CreateFromValueInternal(
            (wil::details_abi::SemaphoreValue *)&v18,
            a1,
            v8,
            (unsigned __int64)v20 >> 2);
    v13 = v12;
    if ( v12 >= 0 )
    {
      *(_DWORD *)v11 = 1;
      *((_QWORD *)v11 + 1) = *a2;
      v16 = v18;
      *a2 = 0LL;
      *((_OWORD *)v11 + 1) = __PAIR128__(*((unsigned __int64 *)&v18 + 1), v16);
      v18 = 0uLL;
      memset_0((char *)v11 + 34, 0, 0x56uLL);
      *((_WORD *)v11 + 16) = 88;
      *((_DWORD *)v11 + 9) = 1;
      memset_0((char *)v11 + 40, 0, 0x50uLL);
      *a3 = v11;
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details **)&v18, v17);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14B,
        (unsigned int)"wil",
        (const char *)(unsigned int)v12,
        v18);
      wil::details_abi::SemaphoreValue::~SemaphoreValue((wil::details **)&v18, v14);
      if ( v11 )
        wil::details::FreeProcessHeap(v11, v15);
      return v13;
    }
  }
}
