/*
 * XREFs of ??1?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18000F9C8
 * Callers:
 *     _CursorNotificationProcessor::ProcessPositionChangedNotification_::_1_::dtor$1 @ 0x1801D4126 (_CursorNotificationProcessor--ProcessPositionChangedNotification_--_1_--dtor$1.c)
 *     _DWMCursorBroker::GetCursors_::_1_::dtor$0 @ 0x1801D78A4 (_DWMCursorBroker--GetCursors_--_1_--dtor$0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<ICursor>>::~vector<Microsoft::WRL::ComPtr<ICursor>>(__int64 **a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    while ( v1 != v3 )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v1++);
    result = std::_Deallocate<16>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
