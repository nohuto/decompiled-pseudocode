/*
 * XREFs of ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1400B33C8
 * Callers:
 *     _GetClassInfoEx @ 0x140034694 (_GetClassInfoEx.c)
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     InternalRegisterClassEx @ 0x1400B3B70 (InternalRegisterClassEx.c)
 *     xxxSetClassData @ 0x1400C2294 (xxxSetClassData.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B33E0 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 */

__int64 __fastcall SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(__int64 a1)
{
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(a1);
}
