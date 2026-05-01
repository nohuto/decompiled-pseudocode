/*
 * XREFs of ImageList_Create @ 0x18022ACA0
 * Callers:
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x1800AB6DC (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 *     CreateBitmapFromIcon @ 0x18048E770 (CreateBitmapFromIcon.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x1802DF578 (_GetProcFromComCtl32.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

HIMAGELIST __stdcall ImageList_Create(int cx, int cy, UINT flags, int cInitial, int cGrow)
{
  HIMAGELIST result; // rax

  result = (HIMAGELIST)qword_180897E40;
  if ( qword_180897E40 == -1 )
  {
    GetProcFromComCtl32(&qword_180897E40, "ImageList_Create");
    result = (HIMAGELIST)qword_180897E40;
  }
  if ( result )
    return (HIMAGELIST)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))result)(
                         (unsigned int)cx,
                         (unsigned int)cy,
                         flags);
  return result;
}
