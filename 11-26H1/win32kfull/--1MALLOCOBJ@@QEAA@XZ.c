/*
 * XREFs of ??1MALLOCOBJ@@QEAA@XZ @ 0x1401873F0
 * Callers:
 *     ?BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x14034A094 (-BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 * Callees:
 *     ??1?$AutoResource@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140187408 (--1-$AutoResource@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 */

void __fastcall MALLOCOBJ::~MALLOCOBJ(MALLOCOBJ *this)
{
  AutoResource<&void Win32FreePool(void *)>::~AutoResource<&void Win32FreePool(void *)>(this);
}
