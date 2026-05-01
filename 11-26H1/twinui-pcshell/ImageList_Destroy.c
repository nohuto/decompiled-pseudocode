/*
 * XREFs of ImageList_Destroy @ 0x1802157F0
 * Callers:
 *     ?GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x18002C624 (-GetIconFromBitmap@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAPEAUHICON__@@.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_IMAGELIST@@P6AHPEAU1@@Z$1?ImageList_Destroy@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1802B8DE4 (--1-$unique_storage@U-$resource_policy@PEAU_IMAGELIST@@P6AHPEAU1@@Z$1-ImageList_Destroy@@YAH0@ZU.c)
 *     CreateBitmapFromIcon @ 0x18049F3C0 (CreateBitmapFromIcon.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x1802D8288 (_GetProcFromComCtl32.c)
 */

BOOL __stdcall ImageList_Destroy(HIMAGELIST himl)
{
  __int64 (__fastcall *v1)(HIMAGELIST); // rax

  v1 = (__int64 (__fastcall *)(HIMAGELIST))qword_1808D8448;
  if ( qword_1808D8448 == -1 )
  {
    GetProcFromComCtl32(&qword_1808D8448, "ImageList_Destroy");
    v1 = (__int64 (__fastcall *)(HIMAGELIST))qword_1808D8448;
  }
  if ( v1 )
    LODWORD(v1) = v1(himl);
  return (int)v1;
}
