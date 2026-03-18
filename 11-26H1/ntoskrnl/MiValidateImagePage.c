/*
 * XREFs of MiValidateImagePage @ 0x140B04B00
 * Callers:
 *     <none>
 * Callees:
 *     MiValidateImagePfn @ 0x140B04B5C (MiValidateImagePfn.c)
 */

__int64 __fastcall MiValidateImagePage(__int64 a1)
{
  char v2; // [rsp+20h] [rbp-38h]

  return MiValidateImagePfn(
           **(_QWORD **)a1,
           v2,
           (*(_DWORD *)(*(_QWORD *)a1 + 32LL) >> 1) & 0x1F,
           *(_QWORD *)(a1 + 24),
           0x4000000,
           0);
}
