/*
 * XREFs of ScRsa32Compat_Sha1ExportAndWipe @ 0x1801589D8
 * Callers:
 *     RtlpA_SHAInit @ 0x18013B1B0 (RtlpA_SHAInit.c)
 *     RtlpA_SHAUpdate @ 0x18013B230 (RtlpA_SHAUpdate.c)
 *     A_SHAFinal @ 0x180158678 (A_SHAFinal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScRsa32Compat_Sha1ExportAndWipe(__int64 a1, __int64 a2)
{
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 48);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 64);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 80);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 96);
  *(_DWORD *)(a2 + 80) = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(a2 + 84) = HIDWORD(*(_QWORD *)(a1 + 16));
  *(_DWORD *)(a2 + 88) = *(_DWORD *)(a1 + 16);
  return SymCryptWipeAsm(a1, 0x80uLL);
}
