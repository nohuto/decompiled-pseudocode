/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_2b6e7f78b65f10010076d2e207bfb9e0___ @ 0x180036CD8
 * Callers:
 *     ?SetMixedRealitySpatialAudioFormatPolicy@CProcess@@UEAAXW4MixedRealitySpatialAudioFormatPolicy@Audio@Media@Windows@@@Z @ 0x18003A130 (-SetMixedRealitySpatialAudioFormatPolicy@CProcess@@UEAAXW4MixedRealitySpatialAudioFormatPolicy@A.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b6e7f78b65f10010076d2e207bfb9e0_____lambda_2b6e7f78b65f10010076d2e207bfb9e0___ @ 0x180036B58 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_2b6e7f78b65f1.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800399D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_2b6e7f78b65f10010076d2e207bfb9e0___(
        __int64 a1,
        _OWORD *a2)
{
  __int64 *v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v6; // edi
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2b6e7f78b65f10010076d2e207bfb9e0_____lambda_2b6e7f78b65f10010076d2e207bfb9e0___(
         &v8,
         a2);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v4);
  }
  CurrentThreadId = GetCurrentThreadId();
  v6 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v3, 0LL);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v6;
}
