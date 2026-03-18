/*
 * XREFs of CleanupInputDelegation @ 0x14013AEC0
 * Callers:
 *     DestroyBaseWindow @ 0x1401C17B0 (DestroyBaseWindow.c)
 * Callees:
 *     _HMPheFromObject @ 0x14003F320 (_HMPheFromObject.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1401B67CC (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1401B686C (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 */

__int64 __fastcall CleanupInputDelegation(int *a1, __int64 a2)
{
  __int64 result; // rax
  char v4; // cl

  result = HMPheFromObject(a1, a2);
  v4 = *(_BYTE *)(result + 24);
  if ( v4 == 1 )
    return anonymous_namespace_::ScrubDelegatedWindow_tagWND___(a1);
  if ( v4 == 23 )
    return anonymous_namespace_::ScrubDelegatedWindow_tagBWND___(a1);
  return result;
}
