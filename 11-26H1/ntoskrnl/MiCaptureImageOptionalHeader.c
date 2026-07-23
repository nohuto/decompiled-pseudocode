/*
 * XREFs of MiCaptureImageOptionalHeader @ 0x140A64C08
 * Callers:
 *     MiVerifyImageHeader @ 0x140A6492C (MiVerifyImageHeader.c)
 *     MiGetSystemAddressForImage @ 0x140AC89E4 (MiGetSystemAddressForImage.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall MiCaptureImageOptionalHeader(__int64 a1, __int64 a2)
{
  __int16 v2; // r8
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // eax
  void *result; // rax

  v2 = *(_WORD *)(a2 + 24);
  *(_WORD *)(a1 + 48) = v2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 40);
  *(_WORD *)(a1 + 50) = *(_WORD *)(a2 + 92);
  *(_WORD *)(a1 + 52) = *(_WORD *)(a2 + 72);
  *(_WORD *)(a1 + 54) = *(_WORD *)(a2 + 74);
  *(_WORD *)(a1 + 56) = *(_WORD *)(a2 + 64);
  *(_WORD *)(a1 + 58) = *(_WORD *)(a2 + 66);
  *(_WORD *)(a1 + 60) = *(_WORD *)(a2 + 94);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 28);
  if ( v2 == 523 )
  {
    *(_QWORD *)a1 = *(_QWORD *)(a2 + 48);
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 128);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 96);
    v5 = 112;
    v6 = *(_QWORD *)(a2 + 104);
    v7 = 108LL;
  }
  else
  {
    *(_QWORD *)a1 = *(unsigned int *)(a2 + 52);
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 112);
    *(_QWORD *)(a1 + 32) = *(unsigned int *)(a2 + 96);
    v5 = 96;
    v6 = *(unsigned int *)(a2 + 100);
    v7 = 92LL;
  }
  *(_QWORD *)(a1 + 40) = v6;
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + v7 + 24);
  *(_DWORD *)(a1 + 76) = v5;
  memset_0((void *)(a1 + 80), 0, 0x78uLL);
  v8 = *(_DWORD *)(a1 + 72);
  if ( v8 > 0xF )
    v8 = 15;
  result = memmove((void *)(a1 + 80), (const void *)(a2 + *(unsigned int *)(a1 + 76) + 24LL), 8LL * v8);
  if ( *(_DWORD *)(a1 + 192) )
  {
    if ( *(_DWORD *)(a1 + 196) )
      *(_DWORD *)(a1 + 20) |= 1u;
  }
  return result;
}
