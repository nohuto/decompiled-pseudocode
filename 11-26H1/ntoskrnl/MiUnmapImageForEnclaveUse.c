/*
 * XREFs of MiUnmapImageForEnclaveUse @ 0x140B481A8
 * Callers:
 *     MiLoadSectionIntoVsmEnclave @ 0x14087CD6C (MiLoadSectionIntoVsmEnclave.c)
 *     MiInitializeVsmEnclave @ 0x140AB8C78 (MiInitializeVsmEnclave.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiUnmapViewOfSection @ 0x140994C10 (MiUnmapViewOfSection.c)
 */

$241382875694CED3D471BC5892DE3337 *__fastcall MiUnmapImageForEnclaveUse(int a1)
{
  _OWORD v3[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v3, 0, sizeof(v3));
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v3);
  MiUnmapViewOfSection((struct _KPROCESS *)PsSecureSystemProcess, a1, 0LL, 0);
  return KiUnstackDetachProcess((__int64)v3, 0);
}
