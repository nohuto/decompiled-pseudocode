/*
 * XREFs of MiImageCfgEnumRvaListFirst @ 0x1409CA158
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1409C8560 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1409C9790 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     MiImageCfgEnumNextImageExtensionRva @ 0x14077D11C (MiImageCfgEnumNextImageExtensionRva.c)
 *     RtlGetRvaListIteratorState @ 0x1409CA1D0 (RtlGetRvaListIteratorState.c)
 */

__int64 __fastcall MiImageCfgEnumRvaListFirst(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int *v3; // rdi
  __int64 result; // rax

  a2[5] = a3;
  v3 = a2 + 2;
  a2[6] = 0;
  *((_QWORD *)a2 + 1) = 0LL;
  a2[4] = 0;
  a2[2] = **(_DWORD **)(a1 + 16);
  a2[4] = 4;
  if ( a2 != (_DWORD *)-4LL )
    a2[1] = RtlGetRvaListIteratorState(a1, v3);
  result = *v3;
  if ( !(_DWORD)result )
    result = MiImageCfgEnumNextImageExtensionRva(a2);
  *a2 = result;
  return result;
}
