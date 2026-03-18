/*
 * XREFs of ?VidSchiBindFlipPhysicalAddress@@YAXPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II@Z @ 0x140031E60
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x140032CC4 (VidSchiExecuteMmIoFlip.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiBindFlipPhysicalAddress(
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a1,
        unsigned int a2,
        unsigned int a3)
{
  int v3; // r11d
  int v4; // r10d
  __int64 v6; // rdi
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // r8

  v3 = *((_DWORD *)a1 + 1);
  v4 = *((_DWORD *)a1 + 2);
  v6 = a3;
  v7 = (unsigned __int64)(a2 + a3 * v3) << 6;
  v8 = v7 + v3 * ((8 * v4 + 231) & 0xFFFFFFF8);
  v9 = *(_QWORD *)((char *)a1 + v8 + 56);
  *(_QWORD *)((char *)a1 + v8 + 48) = *(_QWORD *)(*(_QWORD *)(v9 + 96) + 40LL);
  *(_WORD *)((char *)a1 + v7 + (unsigned int)(8 * v3 * (v4 + 28)) + 40) = *(_WORD *)(*(_QWORD *)(v9 + 96) + 10LL);
  if ( *(int *)(*(_QWORD *)(v9 + 96) + 16LL) <= 0 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 0x4000LL, a2, v6, 0LL);
    WdLogGlobalForLineNumber = 916;
  }
}
