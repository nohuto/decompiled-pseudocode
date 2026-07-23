/*
 * XREFs of MiRelocateMapImage @ 0x14099CD1C
 * Callers:
 *     MiRelocateImage @ 0x14099B784 (MiRelocateImage.c)
 * Callees:
 *     PsSetSystemPagePriorityThread @ 0x140479948 (PsSetSystemPagePriorityThread.c)
 *     MiSetDeleteOnClose @ 0x14050012C (MiSetDeleteOnClose.c)
 *     MiMapImageInSystemSpace @ 0x14099D80C (MiMapImageInSystemSpace.c)
 *     MiParseImageLoadConfig @ 0x14099D9D0 (MiParseImageLoadConfig.c)
 */

__int64 __fastcall MiRelocateMapImage(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  int v4; // eax
  int v5; // r9d
  __int64 v6; // r8
  __int64 result; // rax

  v1 = *a1;
  if ( (int)MiMapImageInSystemSpace(*a1, 1LL, a1 + 8) < 0 )
  {
    MiSetDeleteOnClose(v1, 0);
    return 0LL;
  }
  else
  {
    *((_DWORD *)a1 + 8) |= 1u;
    v3 = a1[8];
    v4 = PsSetSystemPagePriorityThread((__int64)KeGetCurrentThread(), 1);
    v5 = *((_DWORD *)a1 + 18);
    v6 = a1[1];
    *((_DWORD *)a1 + 13) = v4;
    result = MiParseImageLoadConfig(v1, v3, v6, (unsigned int)(v5 << 12), a1[7] + 72);
    if ( (int)result >= 0 )
    {
      *((_DWORD *)a1 + 8) |= 0x400u;
      return 3221225494LL;
    }
  }
  return result;
}
