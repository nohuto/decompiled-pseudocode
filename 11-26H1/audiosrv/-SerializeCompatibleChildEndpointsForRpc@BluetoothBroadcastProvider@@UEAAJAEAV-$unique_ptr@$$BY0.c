/*
 * XREFs of ?SerializeCompatibleChildEndpointsForRpc@BluetoothBroadcastProvider@@UEAAJAEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x1800ED3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     MIDL_user_allocate @ 0x180031380 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ??4?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EA238 (--4-$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U-$function_deleter@P6AXPEAX@Z$1-MIDL_us.c)
 */

__int64 __fastcall BluetoothBroadcastProvider::SerializeCompatibleChildEndpointsForRpc(
        __int64 a1,
        void **a2,
        unsigned int *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rcx
  void *v14; // rcx
  unsigned int i; // edi
  void *v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  void *v19; // [rsp+50h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+68h] [rbp+48h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  *a3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v7 = (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 3;
  v20 = v3;
  if ( v7 )
  {
    v19 = MIDL_user_allocate(8 * v7);
    if ( v19 )
    {
      v9 = *(_QWORD **)(a1 + 88);
      v10 = *(_QWORD **)(a1 + 96);
      while ( 1 )
      {
        if ( v9 == v10 )
        {
          wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::operator=(
            a2,
            &v19);
          v14 = v19;
          v19 = 0LL;
          if ( v14 )
            operator delete(v14);
          goto LABEL_12;
        }
        v11 = -1LL;
        do
          ++v11;
        while ( *(_WORD *)(*v9 + 2 * v11) );
        v12 = v11 + 1;
        *((_QWORD *)v19 + *a3) = MIDL_user_allocate(2 * (v11 + 1));
        v13 = *((_QWORD *)v19 + *a3);
        if ( !v13 )
          break;
        _o_wcscpy_s(v13, v12, *v9);
        ++*a3;
        ++v9;
      }
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A2,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
        (const char *)0x8007000ELL);
      for ( i = 0; i < *a3; ++i )
        operator delete(*((void **)v19 + i));
    }
    else
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x194,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
        (const char *)0x8007000ELL);
    }
    v17 = v19;
    v19 = 0LL;
    if ( v17 )
      operator delete(v17);
  }
  else
  {
LABEL_12:
    v8 = 0;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
  return v8;
}
