/*
 * XREFs of ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x14003134C
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x140030D50 (VidSchSubmitDeviceCommand.c)
 * Callees:
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x140004898 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     McTemplateK0pxqPR2XR2_EtwWriteTransfer @ 0x140031AA8 (McTemplateK0pxqPR2XR2_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiAddPendingCommandToSyncPointList(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 v6; // rbx
  unsigned __int64 v8; // rdi
  _QWORD *v10; // rsi
  __int64 v11; // rbx
  __int64 Pool2; // rax
  _QWORD *v13; // rax
  __int64 *v14; // rax
  _QWORD *v15; // r12
  char *v16; // rsi
  __int64 v17; // r14
  __int64 *j; // r8
  _QWORD *i; // rdx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r10
  __int64 *v22; // rax
  __int64 **v23; // rcx
  __int64 v25; // r9
  __int64 v26; // r13
  _QWORD *v27; // rax
  _QWORD *v28; // r9
  __int64 v29; // rcx
  __int64 *v30; // rax
  __int64 *v31; // rcx
  _QWORD *v32; // rcx
  _QWORD *v33; // rdx
  __int64 v34; // r10
  __int64 *v35; // r9
  __int64 v36; // rax
  __int64 *v37; // r10
  __int64 v38; // rdx
  __int64 v39; // r11
  char *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // [rsp+40h] [rbp-59h]
  _BYTE *P; // [rsp+50h] [rbp-49h]
  _BYTE v45[16]; // [rsp+58h] [rbp-41h] BYREF
  int v46; // [rsp+68h] [rbp-31h]
  _QWORD *v47; // [rsp+70h] [rbp-29h]
  PVOID v48; // [rsp+78h] [rbp-21h]
  _BYTE v49[16]; // [rsp+80h] [rbp-19h] BYREF
  int v50; // [rsp+90h] [rbp-9h]

  v8 = a4;
  v42 = a2;
  if ( !a4 && !a5 )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    v22 = (__int64 *)WdLogSingleEntry5(0LL, 281LL, 3328LL, a1, a3, a6);
    WdLogGlobalForLineNumber = 916;
    goto LABEL_35;
  }
  v10 = a1 + 234;
  v11 = a1[235];
  if ( (_QWORD *)v11 == a1 + 234 || *(_QWORD *)(v11 + 16) != a3 )
  {
    Pool2 = ExAllocatePool2(64LL, 168LL, 1717659990LL);
    v11 = Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 7222;
      return 3221225495LL;
    }
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_DWORD *)(Pool2 + 64) = 0;
    *(_QWORD *)(Pool2 + 72) = 0LL;
    *(_DWORD *)(Pool2 + 128) = 0;
    *(_QWORD *)(Pool2 + 16) = a3;
    v13 = (_QWORD *)(Pool2 + 136);
    v13[1] = v13;
    *v13 = v13;
    *(_QWORD *)(v11 + 160) = v11 + 152;
    *(_QWORD *)(v11 + 152) = v11 + 152;
    v14 = (__int64 *)v10[1];
    if ( (_QWORD *)*v14 != v10 )
      goto LABEL_26;
    *(_QWORD *)v11 = v10;
    *(_QWORD *)(v11 + 8) = v14;
    *v14 = v11;
    v10[1] = v11;
    if ( (unsigned int)v8 > 2 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x10 )
      {
        v15 = 0LL;
LABEL_9:
        if ( a5 > 2 )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / a5 < 0x18 )
          {
            v16 = 0LL;
LABEL_13:
            if ( v15 && v16 )
            {
              v17 = (__int64)(a1 + 10);
              LODWORD(j) = 0;
              for ( i = (_QWORD *)a1[10]; i != (_QWORD *)v17; i = (_QWORD *)*i )
              {
                v20 = i[20];
                v21 = i[18];
                if ( v20 > v21 )
                {
                  if ( (unsigned int)j > (int)v8 - 1 )
                  {
                    g_DxgMmsBugcheckExportIndex = 1;
                    WdLogSingleEntry5(0LL, 281LL, 3328LL, v20, v21, (unsigned int)j);
                    WdLogGlobalForLineNumber = 916;
LABEL_90:
                    g_DxgMmsBugcheckExportIndex = 1;
                    WdLogSingleEntry5(0LL, 281LL, 3328LL, 0LL, 0LL, v38);
                    WdLogGlobalForLineNumber = 916;
LABEL_91:
                    v35 = j;
                    while ( 1 )
                    {
                      *(_QWORD *)((char *)v33 + v34) = v35;
                      v36 = v15[1];
                      v15 += 2;
                      *v33++ = v36;
                      if ( !--v16 )
                        break;
LABEL_64:
                      j = (__int64 *)*v15;
                      v35 = *(__int64 **)(*v15 + 56LL);
                      if ( !v35 || (j[14] & 0x40) != 0 )
                        goto LABEL_91;
                    }
LABEL_19:
                    if ( (byte_14008A201 & 1) != 0 )
                    {
                      if ( a1 )
                      {
                        v25 = a1[1];
                        if ( !v25 )
                          LODWORD(v25) = (_DWORD)a1;
                      }
                      else
                      {
                        LODWORD(v25) = 0;
                      }
                      McTemplateK0pxqPR2XR2_EtwWriteTransfer(
                        (_DWORD)v32,
                        (_DWORD)a1,
                        (_DWORD)j,
                        v25,
                        *(_QWORD *)(v11 + 16),
                        v8,
                        v17,
                        (__int64)v32);
                    }
                    goto LABEL_20;
                  }
                  v29 = 2LL * (unsigned int)j;
                  LODWORD(j) = (_DWORD)j + 1;
                  v15[v29 + 1] = v20;
                  v15[v29] = i - 3;
                }
              }
              v26 = 0LL;
              v27 = a1 + 12;
              v47 = a1 + 12;
              v28 = (_QWORD *)a1[12];
              while ( v28 != v27 )
              {
                v30 = v28 + 4;
                for ( j = (__int64 *)v28[4]; j != v30; j = (__int64 *)*j )
                {
                  v31 = j - 1;
                  if ( *((_DWORD *)j + 35) )
                  {
                    v37 = v31 + 9;
                    if ( v31[9] > (unsigned __int64)v31[8] || v31[12] > (unsigned __int64)v31[11] )
                    {
                      v38 = (unsigned int)v26;
                      if ( (unsigned int)v26 > a5 - 1 )
                        goto LABEL_90;
                      v39 = 2LL;
                      v17 = 3 * v26;
                      v40 = &v16[24 * v26 + 8];
                      do
                      {
                        v41 = *v37;
                        v37 += 3;
                        *(_QWORD *)v40 = v41;
                        v40 += 8;
                        --v39;
                      }
                      while ( v39 );
                      *(_QWORD *)&v16[24 * v26] = v31;
                      v26 = (unsigned int)(v26 + 1);
                    }
                    v30 = v28 + 4;
                  }
                }
                v28 = (_QWORD *)*v28;
                v27 = v47;
              }
              if ( !bTracingEnabled )
              {
LABEL_22:
                a2 = v42;
                goto LABEL_23;
              }
              P = 0LL;
              v46 = 0;
              v48 = 0LL;
              v50 = 0;
              if ( (unsigned int)v8 > 2 )
              {
                v16 = (char *)v8;
                if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 8 )
                {
                  v17 = 0LL;
                  goto LABEL_69;
                }
                P = (_BYTE *)ExAllocatePool2(64LL, 8 * v8, 1717659990LL);
              }
              else
              {
                P = v45;
                if ( (_DWORD)v8 )
                  memset(v45, 0, 8 * v8);
              }
              v16 = (char *)v8;
              v46 = v8;
              v17 = (__int64)P;
              if ( (unsigned int)v8 <= 2 )
              {
                v48 = v49;
                if ( (_DWORD)v8 )
                  memset(v49, 0, 8 * v8);
                goto LABEL_59;
              }
              if ( 0xFFFFFFFFFFFFFFFFuLL / v8 >= 8 )
              {
                v48 = (PVOID)ExAllocatePool2(64LL, 8 * v8, 1717659990LL);
LABEL_59:
                v32 = v48;
                v50 = v8;
LABEL_60:
                if ( v17 && v32 )
                {
                  if ( (_DWORD)v8 )
                  {
                    v33 = v32;
                    v34 = v17 - (_QWORD)v32;
                    goto LABEL_64;
                  }
                  goto LABEL_19;
                }
LABEL_20:
                if ( v48 != v49 && v48 )
                  ExFreePoolWithTag(v48, 0);
                v48 = 0LL;
                v50 = 0;
                if ( P != v45 )
                {
                  if ( P )
                    ExFreePoolWithTag(P, 0);
                }
                goto LABEL_22;
              }
LABEL_69:
              v32 = 0LL;
              goto LABEL_60;
            }
            operator delete(v15);
            operator delete(v16);
            _VIDSCH_SYNC_POINT::`scalar deleting destructor'((_VIDSCH_SYNC_POINT *)v11);
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 7244;
            return 3221225495LL;
          }
          *(_QWORD *)(v11 + 72) = ExAllocatePool2(64LL, 24LL * a5, 895576406LL);
        }
        else
        {
          *(_QWORD *)(v11 + 72) = v11 + 80;
          if ( a5 )
            memset((void *)(v11 + 80), 0, 24LL * a5);
        }
        v16 = *(char **)(v11 + 72);
        *(_DWORD *)(v11 + 128) = a5;
        goto LABEL_13;
      }
      *(_QWORD *)(v11 + 24) = ExAllocatePool2(64LL, 16 * v8, 895576406LL);
    }
    else
    {
      *(_QWORD *)(v11 + 24) = v11 + 32;
      if ( (_DWORD)v8 )
        memset((void *)(v11 + 32), 0, 16 * v8);
    }
    v15 = *(_QWORD **)(v11 + 24);
    *(_DWORD *)(v11 + 64) = v8;
    goto LABEL_9;
  }
LABEL_23:
  if ( !a6 )
  {
    v22 = (__int64 *)(a2 + 736);
    v6 = v11 + 136;
    goto LABEL_25;
  }
  if ( a6 == 3 )
  {
    v22 = (__int64 *)(a2 + 752);
    v6 = v11 + 152;
LABEL_25:
    v23 = *(__int64 ***)(v6 + 8);
    if ( *v23 == (__int64 *)v6 )
    {
LABEL_35:
      *v22 = v6;
      v22[1] = (__int64)v23;
      *v23 = v22;
      *(_QWORD *)(v6 + 8) = v22;
      return 0LL;
    }
LABEL_26:
    __fastfail(3u);
  }
  return 0LL;
}
