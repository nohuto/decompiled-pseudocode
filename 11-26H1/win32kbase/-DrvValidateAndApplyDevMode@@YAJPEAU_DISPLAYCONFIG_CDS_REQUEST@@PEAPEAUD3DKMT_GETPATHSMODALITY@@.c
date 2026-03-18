/*
 * XREFs of ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401F5860
 * Callers:
 *     DrvSetDisplayConfig @ 0x140175E80 (DrvSetDisplayConfig.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     DrvDxgkLogCodePointPacket @ 0x14014FF40 (DrvDxgkLogCodePointPacket.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x140150004 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvValidateAndApplyDevMode(
        struct _DISPLAYCONFIG_CDS_REQUEST *a1,
        struct D3DKMT_GETPATHSMODALITY **a2)
{
  __int64 v4; // rdi
  __int64 DxgkWin32kInterface; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 i; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 result; // rax
  struct D3DKMT_GETPATHSMODALITY *v12; // rcx
  struct _devicemodeW *v13; // r15
  char *v14; // rcx
  int v15; // eax
  bool v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // [rsp+50h] [rbp-30h] BYREF
  __int64 v27; // [rsp+54h] [rbp-2Ch]
  int v28; // [rsp+5Ch] [rbp-24h]
  int v29; // [rsp+60h] [rbp-20h]
  int v30; // [rsp+64h] [rbp-1Ch]
  int v31; // [rsp+68h] [rbp-18h]
  int v32; // [rsp+6Ch] [rbp-14h]
  __int64 v33; // [rsp+70h] [rbp-10h]
  int v34; // [rsp+B0h] [rbp+30h] BYREF
  int v35; // [rsp+B8h] [rbp+38h] BYREF

  v32 = 0;
  v34 = 0;
  v35 = 0;
  if ( !a2 || !a1 || !*((_QWORD *)a1 + 2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 14992;
  }
  v4 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 || v4 == -4 || (*(_DWORD *)(v4 + 160) & 0x800000) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 14997;
  }
  v26 = (*((_DWORD *)a1 + 3) & 4 | 8u) >> 1;
  v27 = *(_QWORD *)(v4 + 240);
  v28 = *(_DWORD *)(v4 + 248);
  v33 = *((_QWORD *)a1 + 2);
  v29 = -1;
  v30 = -2;
  v31 = -2;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
  v6 = (*(__int64 (__fastcall **)(unsigned int *))(DxgkWin32kInterface + 192))(&v26);
  v10 = v6;
  if ( v6 == -1073741266 )
  {
    *((_DWORD *)a1 + 9) = 2;
    *((_DWORD *)a1 + 8) = -2;
    WdLogSingleEntry4(3LL, -1073741266LL, *((_QWORD *)a1 + 2), 2LL, -2LL);
    result = 3221226030LL;
    WdLogGlobalForLineNumber = 15023;
    return result;
  }
  result = 3221225485LL;
  if ( (_DWORD)v10 == -1073741811 )
  {
    *((_DWORD *)a1 + 9) = 3;
    *((_DWORD *)a1 + 8) = -2;
    return result;
  }
  if ( (int)v10 < 0 )
  {
    *((_DWORD *)a1 + 9) = 4;
    *((_DWORD *)a1 + 8) = -2;
    WdLogSingleEntry4(2LL, v10, *((_QWORD *)a1 + 2), 4LL, -2LL);
    WdLogGlobalForLineNumber = 15040;
    return (unsigned int)v10;
  }
  v12 = *a2;
  v13 = 0LL;
  if ( *a2 )
  {
    v9 = *((unsigned __int16 *)v12 + 10);
    for ( i = 0LL; (unsigned int)i < (unsigned int)v9; i = (unsigned int)(i + 1) )
    {
      v7 = 296LL * (unsigned int)i;
      if ( *(_DWORD *)((char *)v12 + v7 + 80) == *(_DWORD *)(v4 + 248)
        && *(_DWORD *)((char *)v12 + v7 + 72) == *(_DWORD *)(v4 + 240)
        && *(_DWORD *)((char *)v12 + v7 + 76) == *(_DWORD *)(v4 + 244) )
      {
        if ( (*((_DWORD *)a1 + 3) & 0x20) != 0 && (*((_BYTE *)v12 + v7 + 185) & 1) == 0 )
        {
          *((_DWORD *)a1 + 9) = 4;
          *((_DWORD *)a1 + 8) = -1;
          WdLogSingleEntry4(2LL, -1073741637LL, *((_QWORD *)a1 + 2), 4LL, -1LL);
          result = 3221225659LL;
          WdLogGlobalForLineNumber = 15078;
          return result;
        }
        v13 = *(struct _devicemodeW **)((char *)v12 + v7 + 304);
        break;
      }
    }
  }
  v14 = (char *)*((_QWORD *)a1 + 3);
  if ( v14 )
  {
    GreDeleteFastMutex(v14, v7, i, v9);
    *((_QWORD *)a1 + 3) = 0LL;
  }
  v15 = DrvProbeAndCaptureDevmode(
          (struct tagGRAPHICS_DEVICE *)v4,
          (struct _devicemodeW **)a1 + 3,
          &v35,
          &v34,
          *((struct _devicemodeW **)a1 + 2),
          0,
          *((_DWORD *)a1 + 2),
          -__CFSHR__(*((_DWORD *)a1 + 3), 3),
          -__CFSHR__(*((_DWORD *)a1 + 3), 8),
          v13);
  v10 = v15;
  if ( v15 < 0 )
  {
    *((_DWORD *)a1 + 9) = 4;
    *((_DWORD *)a1 + 8) = -2;
    DrvDxgkLogCodePointPacket(58LL, 0LL, 0, 0);
    WdLogSingleEntry4(2LL, v10, *((_QWORD *)a1 + 2), *((int *)a1 + 9), *((int *)a1 + 8));
    WdLogGlobalForLineNumber = 15121;
    return (unsigned int)v10;
  }
  v16 = !v34 || (*((_DWORD *)a1 + 3) & 0x20) != 0;
  v17 = *((unsigned int *)a1 + 3);
  v18 = (*((_DWORD *)a1 + 3) & 4u) >> 1;
  if ( (v17 & 0x10) == 0 || v16 )
    v19 = 0;
  else
    v19 = 8;
  v26 = v19 | v18 | (16 * v16);
  v27 = *(_QWORD *)(v4 + 240);
  v28 = *(_DWORD *)(v4 + 248);
  v20 = *((_QWORD *)a1 + 3);
  v29 = -1;
  v30 = -2;
  v31 = -2;
  if ( !v20 )
    v20 = *((_QWORD *)a1 + 2);
  v33 = v20;
  if ( (v17 & 1) == 0 || (v17 & 2) != 0 )
  {
    v24 = DxDdGetDxgkWin32kInterface(v18, v17);
    v25 = (*(__int64 (__fastcall **)(struct D3DKMT_GETPATHSMODALITY **, unsigned int *))(v24 + 600))(a2, &v26);
    v23 = v25;
    if ( v25 < 0 )
    {
      *((_DWORD *)a1 + 9) = 8;
      *((_DWORD *)a1 + 8) = -1;
      WdLogSingleEntry4(2LL, v25, v33, 8LL, -1LL);
      WdLogGlobalForLineNumber = 15189;
      return v23;
    }
  }
  else
  {
    v21 = DxDdGetDxgkWin32kInterface(v18, v17);
    v22 = (*(__int64 (__fastcall **)(unsigned int *))(v21 + 192))(&v26);
    v23 = v22;
    if ( v22 < 0 )
    {
      *((_DWORD *)a1 + 9) = 8;
      *((_DWORD *)a1 + 8) = -1;
      WdLogSingleEntry4(2LL, v22, v33, 8LL, -1LL);
      WdLogGlobalForLineNumber = 15169;
      return v23;
    }
  }
  return 0LL;
}
