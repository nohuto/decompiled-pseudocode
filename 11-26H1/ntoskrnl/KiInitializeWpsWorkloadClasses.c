/*
 * XREFs of KiInitializeWpsWorkloadClasses @ 0x140BFA144
 * Callers:
 *     PoInitHeteroDetection @ 0x140CD4948 (PoInitHeteroDetection.c)
 * Callees:
 *     PoGetWorkloadClassCount @ 0x140C03D54 (PoGetWorkloadClassCount.c)
 */

__int64 __fastcall KiInitializeWpsWorkloadClasses(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]

  v3 = HIDWORD(a1);
  v2 = 0;
  PoGetWorkloadClassCount(&v2);
  result = v2;
  KiHgsPlusConfiguration = v2;
  return result;
}
