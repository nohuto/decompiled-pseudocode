/*
 * XREFs of ?GetCursorSuppressionPolicyFromInputSites@CursorSuppressionProcessor@@QEAA?AW4SuppressionPolicy@Input@Internal@UI@Windows@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18014A370
 * Callers:
 *     ?OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18014A4D0 (-OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualPro.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UICursorSuppressionPolicyObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICursorSuppressionPolicyObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800402C0 (--$As@UICursorSuppressionPolicyObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CursorSuppressionProcessor::GetCursorSuppressionPolicyFromInputSites(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebp
  __int64 v3; // rsi
  __int64 v4; // r15
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = a1;
  v2 = 2;
  v3 = *a2;
  v4 = a2[1];
  v5 = 0;
  while ( v3 != v4 )
  {
    v6 = 0LL;
    v10 = 0LL;
    v7 = *(_QWORD *)(*(_QWORD *)v3 + 488LL);
    v8 = *(_QWORD *)(*(_QWORD *)v3 + 496LL);
    if ( v7 != v8 )
    {
      do
      {
        if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<ICursorSuppressionPolicyObjectProxy>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v7 + 8),
                    &v10) >= 0 )
          break;
        v7 += 16LL;
      }
      while ( v7 != v8 );
      v6 = v10;
    }
    if ( v6 )
    {
      v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6);
      if ( v2 != 2 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
        break;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    v3 += 8LL;
  }
  if ( v2 != 2 )
    return v2;
  return v5;
}
