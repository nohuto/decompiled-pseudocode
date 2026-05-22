/*
 * XREFs of ??$_Destroy_range@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAXPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x180076780
 * Callers:
 *     ??$_Uninitialized_move@PEAUContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@0PEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x180076710 (--$_Uninitialized_move@PEAUContextualProcessorEntry@ContextualProcessorManager@@V-$allocator@UCo.c)
 *     ?_Change_array@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@AEAAXQEAUContextualProcessorEntry@ContextualProcessorManager@@_K1@Z @ 0x1800797A0 (-_Change_array@-$vector@UContextualProcessorEntry@ContextualProcessorManager@@V-$allocator@UCont.c)
 *     ??1ContextualProcessorManager@@MEAA@XZ @ 0x1801A6F5C (--1ContextualProcessorManager@@MEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@QEAA@XZ @ 0x1801A6FD8 (--1_Reallocation_guard@-$vector@UContextualProcessorEntry@ContextualProcessorManager@@V-$allocat.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<ContextualProcessorManager::ContextualProcessorEntry>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v3);
      v3 += 2;
    }
    while ( v3 != a2 );
  }
  return result;
}
