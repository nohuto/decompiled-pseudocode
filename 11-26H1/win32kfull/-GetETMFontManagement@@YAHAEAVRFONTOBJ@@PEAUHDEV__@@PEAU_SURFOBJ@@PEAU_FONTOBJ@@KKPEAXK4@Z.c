/*
 * XREFs of ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@PEAUHDEV__@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x14034D380
 * Callers:
 *     NtGdiGetETM @ 0x1403336E0 (NtGdiGetETM.c)
 * Callees:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D52F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D58A0 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x14033A800 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GetETMFontManagement(
        struct RFONTOBJ *a1,
        HDEV a2,
        struct _SURFOBJ *a3,
        struct _FONTOBJ *a4,
        unsigned int a5,
        unsigned int a6,
        void *a7)
{
  int *v7; // rbx
  unsigned int v8; // r14d
  int v9; // eax
  unsigned int v10; // r15d
  int v12; // ecx
  unsigned int v13; // esi
  int v14; // r12d
  int v16; // eax
  unsigned int v18; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-55h] BYREF
  int *v20[2]; // [rsp+48h] [rbp-51h] BYREF
  void *v21; // [rsp+58h] [rbp-41h]
  struct _SURFOBJ *v22; // [rsp+60h] [rbp-39h]
  int v23[10]; // [rsp+68h] [rbp-31h] BYREF

  v7 = v23;
  v21 = a7;
  v8 = 0;
  v9 = *((_DWORD *)a2 + 10);
  v10 = 0;
  v22 = a3;
  v12 = 32896;
  v18 = 0;
  v19 = 0;
  v13 = 0;
  v20[0] = v23;
  v14 = 0;
  if ( (v9 & 0x8080) == 0x8080 && *(_QWORD *)a1 )
  {
    v16 = UMPDReleaseRFONTSem(a1, 0LL, &v18, &v19, (void **)v20);
    v8 = v18;
    v14 = v16;
    v10 = v19;
    v7 = v20[0];
  }
  if ( a2 != *(HDEV *)(*(_QWORD *)(W32GetSessionState(v12, a2) + 96) + 24136LL)
    || *(_QWORD *)a1 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 20LL) == 3 )
  {
    v20[0] = *(int **)(*(_QWORD *)a1 + 128LL);
    v13 = PFFOBJ::FontManagement((PFFOBJ *)v20, v22, 0LL, 8u, 4u, v21, 0, 0LL);
  }
  if ( v14 )
  {
    UMPDAcquireRFONTSem(a1, 0LL, v8, v10, v7);
    if ( v7 )
    {
      if ( v7 != v23 )
        Win32FreePool(v7);
    }
  }
  return v13;
}
