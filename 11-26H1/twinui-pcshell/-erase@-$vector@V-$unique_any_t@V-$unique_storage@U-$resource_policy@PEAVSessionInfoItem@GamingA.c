/*
 * XREFs of ?erase@?$vector@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18036041C
 * Callers:
 *     ?ClearInvalidSessions@AppList@GamingAudio@@AEAA_NXZ @ 0x18035E690 (-ClearInvalidSessions@AppList@GamingAudio@@AEAA_NXZ.c)
 * Callees:
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1801CD2B0 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x1801D4C2C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1?SessionInfoItemDeleter@2@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAV12@PEAV12@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180342398 (--1-$unique_storage@U-$resource_policy@PEAVSessionInfoItem@GamingAudio@@P6AXPEAV12@@Z$1-SessionI.c)
 *     ?SessionInfoItemDeleter@GamingAudio@@YAXPEAVSessionInfoItem@1@@Z @ 0x18035FFBC (-SessionInfoItemDeleter@GamingAudio@@YAXPEAVSessionInfoItem@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct GamingAudio::SessionInfoItem *__fastcall std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>>>::erase(
        __int64 a1,
        struct GamingAudio::SessionInfoItem *a2,
        GamingAudio **a3)
{
  GamingAudio **v6; // r13
  GamingAudio **v7; // rdi
  GamingAudio **v8; // rsi
  GamingAudio *v9; // r12
  GamingAudio *v10; // r15
  struct GamingAudio::SessionInfoItem *v11; // rdx
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v6 = *(GamingAudio ***)(a1 + 8);
  v7 = a3 + 1;
  if ( a3 + 1 != v6 )
  {
    v8 = a3;
    do
    {
      if ( v8 != v7 )
      {
        v9 = *v7;
        v10 = *v8;
        if ( *v8 )
        {
          wil::last_error_context::last_error_context((wil::last_error_context *)&v13);
          GamingAudio::SessionInfoItemDeleter(v10, v11);
          wil::last_error_context::~last_error_context((wil::last_error_context *)&v13);
        }
        *v8 = v9;
        *v7 = 0LL;
      }
      ++v7;
      ++v8;
    }
    while ( v7 != v6 );
  }
  wil::details::unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<GamingAudio::SessionInfoItem *,void (*)(GamingAudio::SessionInfoItem *),&void GamingAudio::SessionInfoItemDeleter(GamingAudio::SessionInfoItem *),wistd::integral_constant<unsigned __int64,0>,GamingAudio::SessionInfoItem *,GamingAudio::SessionInfoItem *,0,std::nullptr_t>>(
    (GamingAudio **)(*(_QWORD *)(a1 + 8) - 8LL),
    a2);
  *(_QWORD *)(a1 + 8) -= 8LL;
  *(_QWORD *)a2 = a3;
  return a2;
}
