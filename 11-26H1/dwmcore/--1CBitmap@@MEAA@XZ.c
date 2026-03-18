/*
 * XREFs of ??1CBitmap@@MEAA@XZ @ 0x1801926C8
 * Callers:
 *     ??1CCompressedSourceBitmap@@UEAA@XZ @ 0x180192490 (--1CCompressedSourceBitmap@@UEAA@XZ.c)
 *     ??1CWICBitmapWrapper@@UEAA@XZ @ 0x18019251C (--1CWICBitmapWrapper@@UEAA@XZ.c)
 *     ??1CSystemMemoryBitmap@@MEAA@XZ @ 0x180192654 (--1CSystemMemoryBitmap@@MEAA@XZ.c)
 *     ??_ECBitmap@@MEAAPEAXI@Z @ 0x180224C50 (--_ECBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBitmap::~CBitmap(struct _RTL_CRITICAL_SECTION *this)
{
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CBitmap::`vftable'{for `CMILCOMBaseT<IBitmapSource,IBitmapSource,CMilObjectDeleter>'};
  this->OwningThread = &CBitmap::`vftable'{for `IBitmapDest'};
  this->LockSemaphore = &CSystemMemoryBitmap::`vftable'{for `IBitmapUnlock'};
  this->SpinCount = (ULONG_PTR)&CClientMemoryBitmap::`vftable'{for `IWICBitmap'};
  DeleteCriticalSection(this + 1);
}
