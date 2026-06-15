/*
 * XREFs of ?GetMulticastCapableChildEndpoints@CMulticastSessionManager@@QEAAJAEAV?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@PEAI@Z @ 0x180107B58
 * Callers:
 *     s_GetMulticastCapableChildEndpoints @ 0x1801087A0 (s_GetMulticastCapableChildEndpoints.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??4?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EA238 (--4-$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U-$function_deleter@P6AXPEAX@Z$1-MIDL_us.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@YAXPEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAV12@AEAV?$allocator@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@0@@Z @ 0x180106EBC (--$_Destroy_range@V-$allocator@V-$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U-$function.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@?$vector@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@AEAAPEAV?$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@QEAV23@$$QEAV23@@Z @ 0x180106F00 (--$_Emplace_reallocate@V-$unique_ptr@$$BY0A@U_MulticastSessionConfiguration@@U-$function_deleter.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMulticastSessionManager::GetMulticastCapableChildEndpoints(
        __int64 a1,
        void **a2,
        _DWORD *a3,
        const char *a4)
{
  __int64 **v6; // rbx
  void *v7; // rax
  void *v8; // rcx
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+50h] [rbp+8h] BYREF
  void *v14; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v6 = *(__int64 ***)(a1 + 24);
  *((_QWORD *)&v10 + 1) = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  try
  {
    while ( v6 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v6[1] + 24))(v6[1]) )
      {
        v13 = 0;
        v14 = 0LL;
        (*(void (__fastcall **)(__int64 *, void **, int *))(*v6[1] + 56))(v6[1], &v14, &v13);
        *a3 += v13;
        if ( *((_QWORD *)&v10 + 1) == v11 )
        {
          std::vector<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Emplace_reallocate<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>(
            &v10,
            *((__int64 *)&v10 + 1),
            (__int64 *)&v14);
        }
        else
        {
          v7 = v14;
          v14 = 0LL;
          **((_QWORD **)&v10 + 1) = v7;
          *((_QWORD *)&v10 + 1) += 8LL;
        }
        v8 = v14;
        v14 = 0LL;
        if ( v8 )
          operator delete(v8);
      }
      v6 = (__int64 **)*v6;
    }
    if ( !*a3 )
      goto LABEL_16;
    if ( *((_QWORD *)&v10 + 1) - (_QWORD)v10 == 8LL )
    {
      wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>::operator=(
        a2,
        (void **)v10);
LABEL_16:
      if ( (_QWORD)v10 )
      {
        std::_Destroy_range<std::allocator<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>>(
          (void **)v10,
          *((void ***)&v10 + 1));
        std::_Deallocate<16>((void *)v10, (struct std::nothrow_t *)((v11 - v10) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x149,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
      (const char *)0x80004001LL);
    if ( (_QWORD)v10 )
    {
      std::_Destroy_range<std::allocator<wistd::unique_ptr<_MulticastSessionConfiguration [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>>(
        (void **)v10,
        *((void ***)&v10 + 1));
      std::_Deallocate<16>((void *)v10, (struct std::nothrow_t *)((v11 - v10) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    result = 2147500033LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x14E,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
                           a4);
  }
  return result;
}
