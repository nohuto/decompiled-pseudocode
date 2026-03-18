/*
 * XREFs of ?DxgkAddDiagnosticInfoIntoReport@@YAJPEAU_WD_DEBUG_REPORT@@PEAU_DEVICE_OBJECT@@PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401D8398
 * Callers:
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401B4170 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x14007A870 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?TdrFreePool@@YAXPEAX@Z @ 0x1401D9240 (-TdrFreePool@@YAXPEAX@Z.c)
 */

__int64 __fastcall DxgkAddDiagnosticInfoIntoReport(
        struct _WD_DEBUG_REPORT *a1,
        struct _DEVICE_OBJECT *a2,
        struct _DXGKARG_COLLECTDIAGNOSTICINFO *a3)
{
  unsigned int v4; // esi
  __int64 v5; // rdi
  char *Pool2; // rax
  unsigned int v7; // eax
  int v8; // edi
  int *v9; // r13
  int v10; // r14d
  __int64 v11; // rbp
  __int64 v12; // rax
  _DWORD *v13; // r15
  struct _WD_DEBUG_REPORT *v14; // rdi
  const wchar_t *v15; // r9
  bool v16; // cf
  unsigned int *v17; // rdi
  unsigned int *v18; // rdx
  __int64 v19; // rcx
  _DWORD *v20; // rbp
  unsigned int v21; // r14d
  __int64 v22; // rax
  unsigned int v23; // r14d
  int *v24; // rax
  int v25; // ebx
  _DWORD *v26; // rcx
  __int64 v27; // rbx
  int v28; // eax
  unsigned int v29; // r10d
  int v30; // r9d
  __int64 v31; // rax
  char *v32; // rdi
  char *v33; // rcx
  __int64 v34; // rbx
  void *v35; // rbx
  unsigned int v37; // [rsp+50h] [rbp-48h]
  int v38; // [rsp+54h] [rbp-44h]
  _DWORD *Src; // [rsp+58h] [rbp-40h]
  size_t v40; // [rsp+60h] [rbp-38h]
  unsigned int v42; // [rsp+B8h] [rbp+20h]

  if ( !a1 || !a2 || !a3 || !*((_QWORD *)a3 + 28) )
    return 3221225485LL;
  v4 = 0;
  v5 = ((unsigned int)TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 1, 0) + 4095) & 0xFFFFF000;
  Pool2 = (char *)ExAllocatePool2(256LL, v5, 1380209782LL);
  Src = Pool2;
  if ( Pool2 )
  {
    v7 = TdrCollectBugcheckSecondaryDumpData(Pool2, v5, 1, 0);
    v8 = *((_DWORD *)a3 + 55);
    v42 = v7;
    v9 = 0LL;
    v10 = v8 != 0 ? 32 : 24;
    v11 = (v10 + v8 + 4431) & 0xFFFFF000;
    v12 = ExAllocatePool2(256LL, v11, 1380209782LL);
    v13 = (_DWORD *)v12;
    if ( v12 )
    {
      v16 = v8 != 0;
      v17 = (unsigned int *)(v12 + 8);
      v18 = (unsigned int *)(v12 + 16);
      *(_QWORD *)v12 = (unsigned int)v16 + 2;
      v19 = v12 + 16;
      *(_DWORD *)(v12 + 8) = v10;
      *(_DWORD *)(v12 + 12) = 49;
      if ( *((_DWORD *)a3 + 55) )
      {
        *v18 = 0;
        v19 = v12 + 24;
        *(_DWORD *)(v12 + 20) = 1;
      }
      *(_QWORD *)v19 = 0LL;
      v20 = (_DWORD *)(v12 + 8);
      v21 = *v17;
      *(_DWORD *)(v19 + 8) = *((_DWORD *)a3 + 2);
      *(_QWORD *)(v19 + 16) = 0LL;
      *(_DWORD *)(v19 + 12) = 0;
      *(_OWORD *)(v19 + 24) = *(_OWORD *)((char *)a3 + 12);
      *(_OWORD *)(v19 + 40) = *(_OWORD *)((char *)a3 + 28);
      *(_OWORD *)(v19 + 56) = *(_OWORD *)((char *)a3 + 44);
      *(_OWORD *)(v19 + 72) = *(_OWORD *)((char *)a3 + 60);
      *(_OWORD *)(v19 + 88) = *(_OWORD *)((char *)a3 + 76);
      *(_OWORD *)(v19 + 104) = *(_OWORD *)((char *)a3 + 92);
      *(_OWORD *)(v19 + 120) = *(_OWORD *)((char *)a3 + 108);
      *(_OWORD *)(v19 + 136) = *(_OWORD *)((char *)a3 + 124);
      *(_OWORD *)(v19 + 152) = *(_OWORD *)((char *)a3 + 140);
      *(_OWORD *)(v19 + 168) = *(_OWORD *)((char *)a3 + 156);
      *(_OWORD *)(v19 + 184) = *(_OWORD *)((char *)a3 + 172);
      *(_OWORD *)(v19 + 200) = *(_OWORD *)((char *)a3 + 188);
      if ( *((_DWORD *)a3 + 2) == 3 )
      {
        v22 = *((_QWORD *)a3 + 26);
        if ( v22 )
        {
          if ( *(_DWORD *)v22 == 16 )
          {
            *(_OWORD *)(v19 + 216) = *(_OWORD *)v22;
            *(_DWORD *)(v19 + 232) = *(_DWORD *)(v22 + 16);
          }
        }
      }
      v23 = v21 + 336;
      if ( *((_DWORD *)a3 + 55) )
      {
        *v18 = v23;
        v20 = v13 + 4;
        memmove((char *)v13 + v23, *((const void **)a3 + 28), *((unsigned int *)a3 + 55));
        v23 += *((_DWORD *)a3 + 55);
      }
      v20[2] = v23;
      v11 = (v23 + v42 + 4095) & 0xFFFFF000;
      v24 = (int *)ExAllocatePool2(256LL, v11, 1380209782LL);
      v9 = v24;
      if ( v24 )
      {
        v25 = *Src + 1 + *v13;
        v37 = *v17;
        v38 = 8 * v25;
        v40 = (unsigned int)Src[2];
        memmove(v24, Src, v40);
        v26 = v9 + 2;
        *v9 = v25;
        v27 = (unsigned int)(8 * v25);
        v28 = *Src - 1;
        if ( *Src != 1 )
        {
          do
          {
            if ( !v26[1] )
              break;
            *v26 += v38 - v40;
            v26 += 2;
            --v28;
          }
          while ( v28 );
        }
        v29 = v42 - v40;
        v30 = *v13 - 1;
        if ( *v13 != 1 )
        {
          do
          {
            if ( !v17[1] )
              break;
            v31 = *(_QWORD *)v17;
            v17 += 2;
            *(_QWORD *)v26 = v31;
            *v26 += v27 + v42 - v40 - v37;
            v26 += 2;
            --v30;
          }
          while ( v30 );
        }
        v32 = (char *)v9 + v27;
        v33 = (char *)v9 + v27;
        v34 = v29;
        memmove(v33, (char *)Src + v40, v29);
        memmove(&v32[v34], (char *)v13 + v37, v23 - v37);
        v14 = a1;
        if ( (unsigned __int8)WdDbgReportSecondaryData(a1, v9, (unsigned int)v11) )
        {
          v35 = Src;
LABEL_30:
          TdrFreePool(v35);
          TdrFreePool(v13);
          TdrFreePool(v9);
          return v4;
        }
        WdLogSingleEntry0(2LL);
        v11 = 4035LL;
        v15 = L"WdDbgReportSecondaryData returned FALSE for combined blob.";
        WdLogGlobalForLineNumber = 4035;
LABEL_27:
        v4 = -1073741801;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v15, v11, 0LL, 0LL, 0LL, 0LL);
        v35 = Src;
        if ( !(unsigned __int8)WdDbgReportSecondaryData(v14, Src, v42) )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 4046;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"WdDbgReportSecondaryData returned FALSE.",
            4046LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        goto LABEL_30;
      }
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3959;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 3874;
    }
    v14 = a1;
    v15 = L"Failed to allocate memory for DxgkAddDiagnosticInfoIntoReport (Size = 0x%I64x)";
    goto LABEL_27;
  }
  WdLogSingleEntry1(6LL);
  WdLogGlobalForLineNumber = 3836;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Out of memory allocating live dump data (size 0x%I64x)",
    v5,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
