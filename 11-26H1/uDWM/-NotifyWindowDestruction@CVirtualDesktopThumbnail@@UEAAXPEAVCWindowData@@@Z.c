/*
 * XREFs of ?NotifyWindowDestruction@CVirtualDesktopThumbnail@@UEAAXPEAVCWindowData@@@Z @ 0x180026EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@?$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z @ 0x180026F40 (-Remove@-$DynArray@PEBVCStoryboard@@$0A@@@QEAAHAEBQEBVCStoryboard@@@Z.c)
 */

void __fastcall CVirtualDesktopThumbnail::NotifyWindowDestruction(
        CVirtualDesktopThumbnail *this,
        const struct CTopLevelWindow **a2)
{
  __int64 v3; // r11
  CDesktopThumbnailBase *v4; // r11
  const struct CTopLevelWindow **v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  DynArray<CStoryboard const *,0>::Remove(*((_QWORD *)this + 28) + 136LL, &v5);
  DynArray<CStoryboard const *,0>::Remove(*(_QWORD *)(v3 + 224) + 168LL, &v5);
  CDesktopThumbnailBase::NotifyWindowDestruction(v4, a2);
}
