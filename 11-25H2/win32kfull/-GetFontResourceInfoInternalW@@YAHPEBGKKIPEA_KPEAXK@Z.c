/*
 * XREFs of ?GetFontResourceInfoInternalW@@YAHPEBGKKIPEA_KPEAXK@Z @ 0x14022924C
 * Callers:
 *     NtGdiGetFontResourceInfoInternalW @ 0x140339B00 (NtGdiGetFontResourceInfoInternalW.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x140106FA8 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z @ 0x140108C2C (-UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1401DEB80 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     vIFIMetricsToLogFontW @ 0x140304B4C (vIFIMetricsToLogFontW.c)
 */

__int64 __fastcall GetFontResourceInfoInternalW(
        const unsigned __int16 *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned __int64 *a5,
        unsigned int *a6,
        unsigned int a7)
{
  unsigned __int64 v7; // rdi
  unsigned int v9; // r15d
  unsigned __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rdx
  struct PFF *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // rdx
  unsigned int FontFile; // eax
  _QWORD v22[2]; // [rsp+40h] [rbp-38h] BYREF
  HSEMAPHORE v23[2]; // [rsp+50h] [rbp-28h] BYREF

  v7 = a4;
  v9 = a2;
  v11 = 0LL;
  v12 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  SEMOBJ<17>::SEMOBJ<17>(v23, v12 + 4872);
  v22[0] = *(_QWORD *)(v12 + 20408);
  if ( !v22[0] || (v14 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)v22, a1, v9, a3, 0LL, 0, 0LL, 0)) == 0LL )
  {
    v22[0] = *(_QWORD *)(v12 + 20416);
    v14 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)v22, a1, v9, a3, 0LL, 0, 0LL, 0);
    if ( !v14 )
    {
      if ( a7 != 5 )
        goto LABEL_39;
      if ( !(_DWORD)v7 )
        goto LABEL_37;
      if ( a6 && (unsigned int)v7 >= 4 )
      {
        *a6 = 1;
        goto LABEL_37;
      }
      goto LABEL_39;
    }
  }
  switch ( a7 )
  {
    case 0u:
      if ( (_DWORD)v7 )
      {
        if ( (unsigned int)v7 < 4 )
          break;
        *a6 = *((_DWORD *)v14 + 54);
      }
      goto LABEL_37;
    case 1u:
      v19 = *((_QWORD *)v14 + 11);
      v22[0] = *((_QWORD *)v14 + 12);
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)v22, v19, 1u, 0, 0LL);
      if ( FontFile == -1 )
        break;
      if ( (_DWORD)v7 )
      {
        if ( FontFile > (unsigned int)v7 )
          break;
        FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)v22, *((_QWORD *)v14 + 11), 1u, v7, a6);
        if ( FontFile == -1 )
          break;
      }
      v17 = FontFile;
LABEL_23:
      *a5 = v17;
LABEL_38:
      LODWORD(v11) = 1;
      break;
    case 2u:
      v16 = *((unsigned int *)v14 + 54);
      v17 = 92 * v16;
      if ( (_DWORD)v7 )
      {
        if ( v7 < v17 )
          break;
        v18 = 0;
        if ( (_DWORD)v16 )
        {
          do
          {
            vIFIMetricsToLogFontW((char *)a6 + v11, *(_QWORD *)(*((_QWORD *)v14 + v18 + 28) + 32LL));
            v11 += 92LL;
            ++v18;
          }
          while ( v18 < *((_DWORD *)v14 + 54) );
        }
        v17 = v11;
      }
      goto LABEL_23;
    case 3u:
      if ( !(_DWORD)v7 )
        goto LABEL_37;
      if ( a6 && (unsigned int)v7 >= 4 )
      {
        *a6 = (unsigned __int8)UmfdIsUmfdTrueTypePff(v14, v13, v15);
        goto LABEL_37;
      }
      break;
    case 5u:
      if ( !(_DWORD)v7 )
        goto LABEL_37;
      if ( a6 && (unsigned int)v7 >= 4 )
      {
        *a6 = 0;
LABEL_37:
        *a5 = 4LL;
        goto LABEL_38;
      }
      break;
    default:
      EngSetLastError(0x57u);
      break;
  }
LABEL_39:
  SEMOBJ<17>::vUnlock(v23);
  return (unsigned int)v11;
}
