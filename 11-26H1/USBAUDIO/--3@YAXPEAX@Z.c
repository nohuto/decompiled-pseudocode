/*
 * XREFs of ??3@YAXPEAX@Z @ 0x14000ED98
 * Callers:
 *     ??_GCSidebandDevice@@UEAAPEAXI@Z @ 0x14000F4E0 (--_GCSidebandDevice@@UEAAPEAXI@Z.c)
 *     ?RemoveFileFromOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z @ 0x1400138A0 (-RemoveFileFromOpenHandles@CSidebandDevice@@AEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ??_GCUnknown@@UEAAPEAXI@Z @ 0x14001A800 (--_GCUnknown@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  if ( a1 )
    ExFreePool(a1);
}
