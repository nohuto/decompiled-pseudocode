/*
 * XREFs of ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x14038C110
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x14039A290 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x14006E400 (__report_rangecheckfailure.c)
 *     ?RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x140074298 (-RtlStringCbCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DpiGetDriverStorePath @ 0x1403BCEA0 (DpiGetDriverStorePath.c)
 *     DpiGetDriverFullPath @ 0x14042E03C (DpiGetDriverFullPath.c)
 */

__int64 __fastcall DxgkpQueryRegistry(struct DXGADAPTER *a1, unsigned int *a2, unsigned int a3)
{
  signed int DriverStorePath; // ebx
  unsigned int v6; // r9d
  __int64 v7; // r10
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // r8d
  _DWORD *v12; // rsi
  __int64 v13; // r11
  _OWORD *v14; // rax
  _OWORD *v15; // rcx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  BOOL v23; // edx
  _QWORD *v24; // r8
  int v25; // edx
  _QWORD *v26; // rcx
  __int16 v27; // dx
  _WORD *v28; // r10
  _WORD *v29; // r9
  unsigned int v30; // esi
  __int64 v31; // r8
  unsigned int v32; // eax
  _WORD *v33; // r8
  __int64 v34; // r10
  __int64 v35; // r9
  __int16 v36; // ax
  _WORD *v37; // rax
  __int64 v38; // r8
  _WORD *v39; // rax
  __int64 v40; // r11
  __int64 v41; // r9
  char *v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rax
  signed __int64 v45; // r9
  __int16 v46; // r10
  char *v47; // rax
  bool v48; // zf
  __int64 result; // rax
  char *v50; // rax
  unsigned int v51; // eax
  _WORD *v52; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  char *v55; // rcx
  __int64 v56; // rdx
  char *v57; // rax
  __int16 v58; // r8
  __int64 v59; // rcx
  int v60; // eax
  PVOID P[2]; // [rsp+30h] [rbp-D0h] BYREF
  int (*v62)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+40h] [rbp-C0h] BYREF
  int v63; // [rsp+48h] [rbp-B8h]
  _WORD *v64; // [rsp+50h] [rbp-B0h]
  char *v65; // [rsp+58h] [rbp-A8h]
  unsigned int v66; // [rsp+60h] [rbp-A0h]
  __int64 v67; // [rsp+68h] [rbp-98h]
  int v68; // [rsp+70h] [rbp-90h]
  __int64 v69; // [rsp+78h] [rbp-88h]
  int v70; // [rsp+80h] [rbp-80h]
  __int64 v71; // [rsp+88h] [rbp-78h]
  __int128 v72; // [rsp+90h] [rbp-70h]
  __int128 v73; // [rsp+A0h] [rbp-60h]
  _WORD v74[264]; // [rsp+B0h] [rbp-50h] BYREF
  _WORD v75[264]; // [rsp+2C0h] [rbp+1C0h] BYREF

  DriverStorePath = -1073741811;
  if ( a3 >= 0x228 )
  {
    v6 = a2[1];
    v7 = 4LL;
    if ( v6 >= 4 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 2906;
      goto LABEL_46;
    }
    if ( *((int *)a1 + 694) < 0x2000 )
      v8 = 1;
    else
      v8 = *((_DWORD *)a1 + 74);
    v9 = a2[133];
    if ( (unsigned int)v9 >= v8 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 2912;
      goto LABEL_46;
    }
    v10 = a3 - 544;
    v11 = *a2;
    v12 = a2 + 134;
    a2[134] = v10;
    v13 = *(_QWORD *)(352 * v9 + *((_QWORD *)a1 + 379) + 8);
    if ( v11 <= 1 )
    {
      v14 = a2 + 2;
      v15 = v74;
      do
      {
        v16 = v14[1];
        *v15 = *v14;
        v17 = v14[2];
        v15[1] = v16;
        v18 = v14[3];
        v15[2] = v17;
        v19 = v14[4];
        v15[3] = v18;
        v20 = v14[5];
        v15[4] = v19;
        v21 = v14[6];
        v15[5] = v20;
        v22 = v14[7];
        v14 += 8;
        v15[6] = v21;
        v15 += 8;
        *(v15 - 1) = v22;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)v15 = *(_QWORD *)v14;
      v23 = v11 != 1;
      v74[259] = 0;
      v24 = *(_QWORD **)(v13 + 64);
      v25 = v23 + 2;
      switch ( v25 )
      {
        case 1:
          v26 = v24 + 65;
          break;
        case 2:
          v26 = v24 + 67;
          break;
        case 3:
          v26 = (_QWORD *)(v24[5] + 48LL);
          break;
        default:
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 4112;
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 2936;
          goto LABEL_46;
      }
      v27 = v74[0];
      v28 = (_WORD *)*v26;
      v29 = v74;
      v30 = 0;
      LODWORD(v31) = 0;
      if ( !v74[0] )
        goto LABEL_52;
      do
      {
        v32 = v31;
        if ( v27 != 92 )
          v32 = v30;
        v31 = (unsigned int)(v31 + 1);
        v30 = v32;
        v27 = v74[v31];
      }
      while ( v27 );
      if ( !v32 )
        goto LABEL_52;
      if ( 2 * (unsigned __int64)v32 >= 0x208 )
        _report_rangecheckfailure();
      v74[v32] = 0;
      v33 = v75;
      v34 = *v26 - (_QWORD)v75;
      v35 = 260LL;
      do
      {
        if ( v35 == -2147483386 )
          break;
        v36 = *(_WORD *)((char *)v33 + v34);
        if ( !v36 )
          break;
        *v33++ = v36;
        --v35;
      }
      while ( v35 );
      v37 = v33 - 1;
      if ( v35 )
        v37 = v33;
      *v37 = 0;
      DriverStorePath = v35 == 0 ? 0x80000005 : 0;
      if ( v35 )
      {
        v38 = 260LL;
        v39 = v75;
        do
        {
          if ( !*v39 )
            break;
          ++v39;
          --v38;
        }
        while ( v38 );
        v40 = 2147483646LL;
        v41 = (260 - v38) & -(__int64)(v38 != 0);
        DriverStorePath = v38 == 0 ? 0xC000000D : 0;
        if ( v38 )
        {
          v42 = (char *)&v75[v41];
          v43 = 260 - v41;
          if ( v41 != 260 )
          {
            v44 = 2147483646LL;
            v45 = (char *)L"\\" - v42;
            do
            {
              if ( !v44 )
                break;
              v46 = *(_WORD *)&v42[v45];
              if ( !v46 )
                break;
              *(_WORD *)v42 = v46;
              --v44;
              v42 += 2;
              --v43;
            }
            while ( v43 );
          }
          v47 = v42 - 2;
          if ( v43 )
            v47 = v42;
          DriverStorePath = v43 == 0 ? 0x80000005 : 0;
          *(_WORD *)v47 = 0;
        }
        if ( DriverStorePath >= 0 )
        {
          v53 = 260LL;
          v52 = v75;
          do
          {
            if ( !*v52 )
              break;
            ++v52;
            --v53;
          }
          while ( v53 );
          v54 = (260 - v53) & -(__int64)(v53 != 0);
          DriverStorePath = v53 == 0 ? 0xC000000D : 0;
          if ( v53 )
          {
            v55 = (char *)&v75[v54];
            v56 = 260 - v54;
            if ( 260 != v54 )
            {
              v57 = (char *)((char *)v74 - v55);
              do
              {
                if ( !v40 )
                  break;
                v58 = *(_WORD *)&v57[(_QWORD)v55];
                if ( !v58 )
                  break;
                *(_WORD *)v55 = v58;
                --v40;
                v55 += 2;
                --v56;
              }
              while ( v56 );
            }
            v50 = v55 - 2;
            if ( v56 )
              v50 = v55;
            DriverStorePath = v56 == 0 ? 0x80000005 : 0;
            *(_WORD *)v50 = 0;
          }
          if ( DriverStorePath >= 0 )
          {
            v29 = &v74[v30 + 1];
            v28 = v75;
LABEL_52:
            v64 = v29;
            v62 = DxgkpRegistryQueryRoutine;
            v66 = a2[132] << 24;
            v63 = 276;
            v65 = (char *)(a2 + 136);
            v67 = 0LL;
            v68 = 0;
            v69 = 0LL;
            v70 = 0;
            v71 = 0LL;
            v72 = 0LL;
            v73 = 0LL;
            DriverStorePath = RtlQueryRegistryValuesEx(0LL, v28, &v62, a2, 0LL);
            if ( (int)(DriverStorePath + 0x80000000) >= 0 && DriverStorePath != -1073741772 )
            {
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 3009;
            }
            goto LABEL_39;
          }
        }
      }
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 2982;
LABEL_39:
      if ( DriverStorePath == -2147483643 )
      {
        v51 = *a2;
        DriverStorePath = 0;
        a2[135] = 1;
        if ( v51 == 2 || v51 == 3 || (a2[1] & 1) != 0 )
          a2[134] += 16;
        return (unsigned int)DriverStorePath;
      }
      v48 = DriverStorePath == 0;
LABEL_41:
      if ( v48 )
      {
        a2[135] = 0;
        return (unsigned int)DriverStorePath;
      }
LABEL_46:
      a2[135] = 2;
      return (unsigned int)DriverStorePath;
    }
    if ( v11 - 2 > 1 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 3053;
      goto LABEL_46;
    }
    if ( a2[132] || (v6 & 1) != 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 3021;
      goto LABEL_46;
    }
    v59 = *(_QWORD *)(352 * v9 + *((_QWORD *)a1 + 379) + 8);
    if ( v11 == 2 )
    {
      DriverStorePath = DpiGetDriverStorePath(v59, a2 + 136, a2 + 134);
    }
    else
    {
      *(_OWORD *)P = 0LL;
      DriverStorePath = DpiGetDriverFullPath(v59, P);
      if ( DriverStorePath < 0 )
      {
LABEL_85:
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 3047;
        goto LABEL_39;
      }
      v60 = RtlStringCbCopyUnicodeString((char *)a2 + 544, (unsigned int)*v12, (const struct _UNICODE_STRING *)P);
      DriverStorePath = v60;
      *v12 = LOWORD(P[0]);
      if ( v60 < 0 )
      {
        WdLogSingleEntry2(3LL, LOWORD(P[0]), v60);
        WdLogGlobalForLineNumber = 3039;
        DriverStorePath = -2147483643;
      }
      ExFreePoolWithTag(P[1], 0);
    }
    v48 = DriverStorePath == 0;
    if ( DriverStorePath >= 0 )
      goto LABEL_41;
    goto LABEL_85;
  }
  WdLogSingleEntry2(3LL, a3, -1073741811LL);
  result = 3221225485LL;
  WdLogGlobalForLineNumber = 2899;
  return result;
}
