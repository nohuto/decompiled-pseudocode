/*
 * XREFs of ?GetETMFontManagement@@YAHAEAVRFONTOBJ@@PEAUHDEV__@@PEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK4@Z @ 0x140337F58
 * Callers:
 *     NtGdiGetETM @ 0x140311420 (NtGdiGetETM.c)
 * Callees:
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1400D2000 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400DA83C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x140320580 (-FontManagement@PFFOBJ@@QEAAHPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall GetETMFontManagement(
        struct RFONTOBJ *a1,
        _DWORD *a2,
        struct _SURFOBJ *a3,
        struct _FONTOBJ *a4,
        unsigned int a5,
        unsigned int a6,
        void *a7)
{
  int v7; // eax
  int *v8; // rbx
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  int v12; // ecx
  unsigned int v13; // r14d
  int v14; // r13d
  int v15; // esi
  int v16; // eax
  __int64 SessionState; // rax
  unsigned int v19; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-55h] BYREF
  int *v21; // [rsp+48h] [rbp-51h] BYREF
  _DWORD *v22; // [rsp+50h] [rbp-49h] BYREF
  void *v23; // [rsp+60h] [rbp-39h]
  struct _SURFOBJ *v24; // [rsp+68h] [rbp-31h]
  int v25[10]; // [rsp+70h] [rbp-29h] BYREF

  v7 = a2[10];
  v8 = v25;
  v24 = a3;
  v10 = 0;
  v11 = 0;
  v23 = a7;
  v12 = 32896;
  v22 = a2;
  v19 = 0;
  v13 = 0;
  v20 = 0;
  v14 = 0;
  v21 = v25;
  v15 = 0;
  if ( (v7 & 0x8080) == 0x8080 && *(_QWORD *)a1 )
  {
    v16 = UMPDReleaseRFONTSem(a1, 0LL, &v19, &v20, (void **)&v21);
    v10 = v19;
    v14 = v16;
    v11 = v20;
    v8 = v21;
  }
  SessionState = W32GetSessionState(v12, a2);
  if ( v22 != *(_DWORD **)(*(_QWORD *)(SessionState + 96) + 24152LL) )
    goto LABEL_9;
  if ( *(_QWORD *)a1 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 20LL) == 3 )
    v15 = 1;
  if ( v15 )
  {
LABEL_9:
    v22 = *(_DWORD **)(*(_QWORD *)a1 + 128LL);
    v13 = PFFOBJ::FontManagement((PFFOBJ *)&v22, v24, 0LL, 8u, 4u, v23, 0, 0LL);
  }
  if ( v14 )
  {
    UMPDAcquireRFONTSem(a1, 0LL, v10, v11, v8);
    if ( v8 )
    {
      if ( v8 != v25 )
        Win32FreePool(v8);
    }
  }
  return v13;
}
