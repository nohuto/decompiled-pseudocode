/*
 * XREFs of ?GetFontResourceInfoInternalW@@YAHPEBGKKIPEA_KPEAXK@Z @ 0x140241C64
 * Callers:
 *     NtGdiGetFontResourceInfoInternalW @ 0x140241A00 (NtGdiGetFontResourceInfoInternalW.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z @ 0x140101D70 (-UmfdIsUmfdTrueTypePff@@YA_NPEBVPFF@@@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z @ 0x140106418 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KAEAIH@Z.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x140214E4C (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     vIFIMetricsToLogFontW @ 0x140241EF0 (vIFIMetricsToLogFontW.c)
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
  unsigned __int64 v8; // rdi
  unsigned int v9; // r12d
  unsigned int v11; // ebx
  _QWORD *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  struct PFF *v15; // r14
  unsigned int IsUmfdTrueTypePff; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned int *v19; // r15
  __int64 v20; // rdx
  unsigned int FontFile; // eax
  unsigned int v23[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v24; // [rsp+48h] [rbp-28h]
  __int64 v25; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v26[3]; // [rsp+58h] [rbp-18h] BYREF

  v8 = a4;
  v9 = a2;
  v11 = 0;
  v12 = *(_QWORD **)(W32GetSessionState((_DWORD)a1, a2) + 96);
  v24 = v12;
  v25 = v12[2540];
  GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v25);
  v26[0] = v12[2548];
  if ( v26[0] )
  {
    v23[0] = 0;
    v15 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)v26, a1, v9, a3, 0LL, 0, v23, 0);
    if ( v15 )
      goto LABEL_5;
    v12 = v24;
  }
  v26[0] = v12[2549];
  v23[0] = 0;
  v15 = PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)v26, a1, v9, a3, 0LL, 0, v23, 0);
  if ( !v15 )
  {
    if ( a7 != 5 )
      goto LABEL_40;
    if ( !(_DWORD)v8 )
      goto LABEL_38;
    if ( a6 && (unsigned int)v8 >= 4 )
    {
      *a6 = 1;
      goto LABEL_38;
    }
    goto LABEL_40;
  }
LABEL_5:
  switch ( a7 )
  {
    case 0u:
      if ( !(_DWORD)v8 )
        goto LABEL_38;
      if ( (unsigned int)v8 < 4 )
        goto LABEL_40;
      IsUmfdTrueTypePff = *((_DWORD *)v15 + 54);
      goto LABEL_19;
    case 1u:
      v20 = *((_QWORD *)v15 + 11);
      *(_QWORD *)v23 = *((_QWORD *)v15 + 12);
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)v23, v20, 1u, 0, 0LL);
      if ( FontFile == -1 )
        goto LABEL_40;
      if ( (_DWORD)v8 )
      {
        if ( FontFile > (unsigned int)v8 )
          goto LABEL_40;
        FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)v23, *((_QWORD *)v15 + 11), 1u, v8, a6);
        if ( FontFile == -1 )
          goto LABEL_40;
      }
      v18 = FontFile;
LABEL_24:
      *a5 = v18;
LABEL_39:
      v11 = 1;
      goto LABEL_40;
    case 2u:
      v17 = *((unsigned int *)v15 + 54);
      v18 = 92 * v17;
      if ( (_DWORD)v8 )
      {
        v19 = a6;
        if ( v8 < v18 )
          goto LABEL_40;
        v18 = 0LL;
        if ( (_DWORD)v17 )
        {
          do
          {
            vIFIMetricsToLogFontW(v19, *(_QWORD *)(*((_QWORD *)v15 + v11 + 28) + 32LL));
            v19 += 23;
            ++v11;
            v18 = (char *)v19 - (char *)a6;
          }
          while ( v11 < *((_DWORD *)v15 + 54) );
        }
      }
      goto LABEL_24;
  }
  if ( a7 != 3 )
  {
    if ( a7 != 5 )
    {
      EngSetLastError(0x57u);
      goto LABEL_40;
    }
    if ( !(_DWORD)v8 )
      goto LABEL_38;
    if ( a6 && (unsigned int)v8 >= 4 )
    {
      *a6 = 0;
LABEL_38:
      *a5 = 4LL;
      goto LABEL_39;
    }
    goto LABEL_40;
  }
  if ( !(_DWORD)v8 )
    goto LABEL_38;
  if ( a6 && (unsigned int)v8 >= 4 )
  {
    IsUmfdTrueTypePff = (unsigned __int8)UmfdIsUmfdTrueTypePff(v15, v13, v14);
LABEL_19:
    *a6 = IsUmfdTrueTypePff;
    goto LABEL_38;
  }
LABEL_40:
  SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v25);
  return v11;
}
