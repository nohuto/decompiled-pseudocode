/*
 * XREFs of ?ForEachStream@CBaseStreamGroupProxy@@UEAAXV?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@@Z @ 0x180045080
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18001CBC4 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x180045268 (_lambda_530575f8b419a08780554bb070101504_--operator().c)
 *     _lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_ @ 0x1800465BC (_lambda_95aa79fe68308ee8971a6083ea2ebe7c_--__lambda_95aa79fe68308ee8971a6083ea2ebe7c_.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z @ 0x1800465F8 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::ForEachStream(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  _BYTE *v5; // r8
  __int64 (__fastcall ***v6)(_QWORD, _BYTE *); // rcx
  __int64 *v7; // rbx
  __int64 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 (__fastcall ***v11)(_QWORD, _BYTE *); // rcx
  __int64 *v12; // rbx
  __int64 *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v18; // [rsp+20h] [rbp-A9h] BYREF
  _BYTE v19[56]; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE *v20; // [rsp+60h] [rbp-69h]
  _BYTE v21[56]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-21h]
  _BYTE v23[64]; // [rsp+B0h] [rbp-19h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v5 = 0LL;
  v20 = 0LL;
  v6 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v6 )
  {
    v5 = (_BYTE *)(**v6)(v6, v19);
    v20 = v5;
  }
  v7 = *(__int64 **)(a1 + 216);
  v8 = *(__int64 **)(a1 + 224);
  while ( v7 != v8 )
  {
    v18 = *v7;
    if ( !v5 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      JUMPOUT(0x18004525FLL);
    }
    (*(void (__fastcall **)(_BYTE *, __int64 *))(*(_QWORD *)v5 + 16LL))(v5, &v18);
    ++v7;
    v5 = v20;
  }
  v22 = 0LL;
  if ( v5 )
  {
    if ( v5 == v19 )
    {
      v22 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v5 + 8LL))(v5, v21);
      std::_Func_class<void,>::~_Func_class<void,>((__int64)v19, v9);
    }
    else
    {
      v22 = (__int64)v5;
      v20 = 0LL;
    }
  }
  lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_(v19);
  std::_Func_class<void,>::~_Func_class<void,>((__int64)v21, v10);
  v22 = 0LL;
  v11 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
  if ( v11 )
    v22 = (**v11)(v11, v21);
  v12 = *(__int64 **)(a1 + 240);
  v13 = *(__int64 **)(a1 + 248);
  while ( v12 != v13 )
  {
    v14 = *v12;
    v18 = v14;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    lambda_530575f8b419a08780554bb070101504_::operator()(v21, &v18);
    ++v12;
  }
  std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(v23, v21);
  lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_(v21);
  std::_Func_class<void,>::~_Func_class<void,>((__int64)v23, v15);
  if ( v4 )
    LeaveCriticalSection(v4);
  return std::_Func_class<void,>::~_Func_class<void,>(a2, v16);
}
