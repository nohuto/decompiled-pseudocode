/*
 * XREFs of ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800A1874
 * Callers:
 *     ??1InputProviderManager@@QEAA@XZ @ 0x1800967D0 (--1InputProviderManager@@QEAA@XZ.c)
 *     ??_GInputProviderManager@@QEAAPEAXI@Z @ 0x1800A1AB0 (--_GInputProviderManager@@QEAAPEAXI@Z.c)
 *     ??1DeviceInputHost@@UEAA@XZ @ 0x1800A1FFC (--1DeviceInputHost@@UEAA@XZ.c)
 *     ??$_Uninitialized_move@PEAUInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@YAPEAUInputProvider@@QEAU1@0PEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800CE268 (--$_Uninitialized_move@PEAUInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@YAPEAUInputPr.c)
 *     ??1_Reallocation_guard@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAA@XZ @ 0x1800CE344 (--1_Reallocation_guard@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@AEAAXQEAUInputProvider@@_K1@Z @ 0x1800CE384 (-_Change_array@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@AEAAXQEAUInputP.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<InputProvider>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v3 + 16));
      v3 += 24LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
