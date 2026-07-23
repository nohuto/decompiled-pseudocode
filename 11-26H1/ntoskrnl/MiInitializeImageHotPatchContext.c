/*
 * XREFs of MiInitializeImageHotPatchContext @ 0x140B6429C
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 *     MiPrepareToHotPatchVad @ 0x140879FC4 (MiPrepareToHotPatchVad.c)
 *     MmPrepareImagePagesForHotPatch @ 0x14087B034 (MmPrepareImagePagesForHotPatch.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall MiInitializeImageHotPatchContext(_QWORD *a1, __int16 a2, __int64 a3)
{
  void *result; // rax
  int v7; // ecx
  __int64 v8; // rax

  result = memset_0(a1, 0, 0xA0uLL);
  *((_WORD *)a1 + 68) = a2;
  if ( a3 )
  {
    *a1 = a3;
    a1[1] = (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) << 12;
    a1[2] = (((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF) + 1;
    a1[3] = (unsigned int)stru_140E2D2D0.ThreadFlags2
          + (unsigned int)(*(_DWORD *)(***(_QWORD ***)(a3 + 80) + 8LL) << 12)
          + ((*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) << 12);
    v7 = *(_DWORD *)(***(_QWORD ***)(a3 + 80) + 8LL);
    a1[13] = a1[1];
    v8 = a1[2] - 1LL;
    *((_DWORD *)a1 + 8) = v7 << 12;
    a1[14] = v8;
    result = a1 + 15;
    a1[16] = a1 + 15;
    a1[15] = a1 + 15;
  }
  return result;
}
