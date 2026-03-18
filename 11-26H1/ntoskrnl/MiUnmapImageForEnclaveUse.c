/*
 * XREFs of MiUnmapImageForEnclaveUse @ 0x140B46178
 * Callers:
 *     MiLoadSectionIntoVsmEnclave @ 0x140876988 (MiLoadSectionIntoVsmEnclave.c)
 *     MiInitializeVsmEnclave @ 0x140AB7638 (MiInitializeVsmEnclave.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140247880 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     MiUnmapViewOfSection @ 0x1409C3C30 (MiUnmapViewOfSection.c)
 */

$7A85BAF4F1FA08634C1C4A3E45B775B3 *__fastcall MiUnmapImageForEnclaveUse(int a1)
{
  _OWORD v3[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v3, 0, sizeof(v3));
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v3);
  MiUnmapViewOfSection((struct _KPROCESS *)PsSecureSystemProcess, a1, 0, 0);
  return KiUnstackDetachProcess((__int64)v3, 0);
}
