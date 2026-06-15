/*
 * XREFs of std::_Func_impl_no_alloc__lambda_cc14e100d4743dd3e2812bb3669bf784__void_::_Do_call @ 0x1801145A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004673C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?EnsureStreamStopped@CVADServer@@QEAAJXZ @ 0x1801116E4 (-EnsureStreamStopped@CVADServer@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_cc14e100d4743dd3e2812bb3669bf784__void_::_Do_call(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  CVADServer *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 8);
  v2 = *(_QWORD **)(a1 + 16);
  while ( v1 != v2 )
  {
    v3 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v1, (__int64 *)&v3) >= 0 )
    {
      if ( v3 )
        CVADServer::EnsureStreamStopped((struct _RTL_CRITICAL_SECTION *)v3);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v3);
    ++v1;
  }
}
