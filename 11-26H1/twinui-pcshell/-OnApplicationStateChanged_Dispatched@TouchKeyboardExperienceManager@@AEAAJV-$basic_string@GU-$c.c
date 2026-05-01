/*
 * XREFs of ?OnApplicationStateChanged_Dispatched@TouchKeyboardExperienceManager@@AEAAJV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4PLM_STATE_CHANGE@@@Z @ 0x18046EC20
 * Callers:
 *     ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x18046EBE0 (-OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2f931dcef3c075f3fb52ee5cb82c048c_____lambda_2f931dcef3c075f3fb52ee5cb82c048c___ @ 0x180464CB4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2f931dcef3c07.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnApplicationStateChanged_Dispatched(
        __int64 a1,
        volatile signed __int32 *a2,
        int a3)
{
  char v6; // bl
  unsigned int v7; // edi
  volatile signed __int32 **v8; // rax
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rcx
  unsigned int v11; // edi
  volatile signed __int32 *v13[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-58h] BYREF
  int v15; // [rsp+60h] [rbp-38h]
  char v16; // [rsp+64h] [rbp-34h]
  __int64 v17; // [rsp+68h] [rbp-30h]

  v13[1] = a2;
  v6 = *(_BYTE *)(a1 + 1012);
  std::wstring::wstring((__int64)v14, a2);
  v15 = a3;
  v16 = v6;
  v17 = a1;
  v7 = *(_DWORD *)(a1 + 972);
  v8 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2f931dcef3c075f3fb52ee5cb82c048c_____lambda_2f931dcef3c075f3fb52ee5cb82c048c___(
         v13,
         (__int64)v14);
  v9 = *v8;
  *v8 = 0LL;
  v10 = v13[0];
  if ( v13[0] )
  {
    v13[0] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v10);
  }
  v11 = SHTaskPoolQueueTask(0LL, 2LL, v7);
  if ( v9 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
  std::wstring::_Tidy_deallocate(v14);
  std::wstring::_Tidy_deallocate(a2);
  return v11;
}
