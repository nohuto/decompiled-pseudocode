/*
 * XREFs of ?CompareOrdinal@String@Internal@Windows@@QEBAHAEBV123@@Z @ 0x1801E89F8
 * Callers:
 *     ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x18041C830 (-RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::String::CompareOrdinal(HSTRING *this, HSTRING *a2)
{
  HSTRING v2; // rdx
  HSTRING v3; // rcx
  INT32 result; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  v3 = *this;
  result = 0;
  WindowsCompareStringOrdinal(v3, v2, &result);
  return (unsigned int)result;
}
