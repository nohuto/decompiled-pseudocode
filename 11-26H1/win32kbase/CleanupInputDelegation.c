/*
 * XREFs of CleanupInputDelegation @ 0x1400B8D00
 * Callers:
 *     DestroyBaseWindow @ 0x1401EA340 (DestroyBaseWindow.c)
 * Callees:
 *     _HMPheFromObject @ 0x1400488F0 (_HMPheFromObject.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1400B8E08 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1401D9420 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 */

__int64 __fastcall CleanupInputDelegation(_DWORD *a1, int a2, int a3)
{
  __int64 result; // rax
  char v5; // cl

  result = HMPheFromObject(a1, a2, a3);
  v5 = *(_BYTE *)(result + 24);
  if ( v5 == 1 )
    return anonymous_namespace_::ScrubDelegatedWindow_tagWND___(a1);
  if ( v5 == 23 )
    return anonymous_namespace_::ScrubDelegatedWindow_tagBWND___(a1);
  return result;
}
