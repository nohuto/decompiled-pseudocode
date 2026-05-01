/*
 * XREFs of ?_Destroy@?$_Ref_count@VCAppThumbnailWindow@@@std@@EEAAXXZ @ 0x18048CF10
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCAppThumbnailWindow@@QEAAPEAXI@Z @ 0x180489C5C (--_GCAppThumbnailWindow@@QEAAPEAXI@Z.c)
 */

CAppThumbnailWindow *__fastcall std::_Ref_count<CAppThumbnailWindow>::_Destroy(__int64 a1)
{
  CAppThumbnailWindow *v1; // rcx
  CAppThumbnailWindow *result; // rax

  v1 = *(CAppThumbnailWindow **)(a1 + 16);
  if ( v1 )
    return CAppThumbnailWindow::`scalar deleting destructor'(v1);
  return result;
}
