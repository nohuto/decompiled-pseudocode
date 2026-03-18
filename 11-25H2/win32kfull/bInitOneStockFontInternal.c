/*
 * XREFs of bInitOneStockFontInternal @ 0x1403ED6C8
 * Callers:
 *     ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1401469B4 (-FinishStockFontInitInternal@@YAXPEBGH@Z.c)
 *     bInitOneStockFont @ 0x1403EC5D0 (bInitOneStockFont.c)
 * Callees:
 *     hfontCreate @ 0x14008F860 (hfontCreate.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1400B6530 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     vIFIMetricsToEnumLogFontExDvW @ 0x140102118 (vIFIMetricsToEnumLogFontExDvW.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x140146D98 (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall bInitOneStockFontInternal(unsigned __int16 *a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // edi
  int v7; // r12d
  __int64 v9; // rsi
  Gre::Base *v10; // rcx
  __int64 v11; // rbx
  Gre::Base *v12; // rax
  char v14; // al
  unsigned int v15; // [rsp+40h] [rbp-C0h] BYREF
  struct PFF *v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  char Src[432]; // [rsp+60h] [rbp-A0h] BYREF

  v4 = 0;
  v15 = 0;
  v16 = 0LL;
  v7 = a2;
  v9 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  v17 = *(_QWORD *)(v9 + 20416);
  Gre::Base::Globals(v10);
  memset_0(Src, 0, 0x1A4uLL);
  if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&v17, a1, &v15, 2u, &v16, 0LL, 0) )
  {
    if ( v15 )
    {
      if ( v16 )
      {
        v11 = *((_QWORD *)v16 + 28);
        if ( v11 )
        {
          vIFIMetricsToEnumLogFontExDvW((__int64)Src, *(struct _IFIMETRICS **)(v11 + 32));
          if ( a3 == 13 )
          {
            v14 = *(_BYTE *)(v9 + 20376);
            *(_QWORD *)(v9 + 19712) = v11;
            Src[23] = v14;
          }
          Src[26] = 2;
          v12 = (Gre::Base *)hfontCreate(Src, v7, 2, 0LL, 72);
          return (unsigned int)bSetStockFont(v12, a3, a4);
        }
      }
    }
  }
  return v4;
}
