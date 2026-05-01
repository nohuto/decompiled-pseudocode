/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1801162F0
 * Callers:
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180115F90 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ??R?$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAA_N$$QEAPEAX$$QEA_K01$$QEAI@Z @ 0x180116090 (--R-$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEA.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1801161E0 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s @ 0x1800C2818 (memcpy_s.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x180115E40 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18011681C (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x1801A6C8C (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z @ 0x1802ACA54 (-SkipValues@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAE@Z.c)
 *     _invalid_parameter_noinfo @ 0x1802C9DB6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 *     memmove_0 @ 0x1806CCBD4 (memmove_0.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        size_t a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  unsigned __int16 v8; // si
  unsigned __int8 *v9; // rbx
  char v10; // r15
  unsigned __int8 *v11; // r8
  unsigned __int64 v12; // r12
  unsigned __int8 *v13; // rdi
  int v14; // ecx
  unsigned __int8 *v15; // r8
  unsigned __int8 *InsertionPointOrIncrement; // rax
  __int64 v17; // r9
  _WORD *v18; // rdi
  __int64 v19; // rcx
  int v20; // esi
  __int64 v21; // rax
  char v22; // r12
  unsigned __int64 v23; // rdx
  __int64 v24; // r13
  unsigned __int64 v25; // r8
  unsigned __int8 *v26; // rcx
  size_t v27; // rdx
  size_t v28; // r8
  unsigned __int8 *v29; // r8
  unsigned __int64 v30; // rdi
  void *v31; // r15
  __int16 v32; // ax
  size_t v33; // rsi
  size_t v34; // rdi
  unsigned __int16 v36; // ax
  unsigned __int8 *v37; // rax
  __int16 v38; // [rsp+38h] [rbp-59h]
  unsigned __int8 *v39; // [rsp+40h] [rbp-51h] BYREF
  unsigned __int8 *v40; // [rsp+48h] [rbp-49h]
  unsigned __int16 v41; // [rsp+50h] [rbp-41h] BYREF
  char v42; // [rsp+52h] [rbp-3Fh]
  int v43; // [rsp+54h] [rbp-3Dh] BYREF
  unsigned __int16 Destination; // [rsp+58h] [rbp-39h] BYREF
  void *v45[2]; // [rsp+60h] [rbp-31h]
  __int16 v46; // [rsp+70h] [rbp-21h]
  char v47; // [rsp+72h] [rbp-1Fh]
  unsigned int v48; // [rsp+74h] [rbp-1Dh] BYREF
  unsigned __int16 v49; // [rsp+78h] [rbp-19h] BYREF
  __int64 v50; // [rsp+80h] [rbp-11h]
  void *v51; // [rsp+88h] [rbp-9h]
  __int16 Source; // [rsp+E8h] [rbp+57h] BYREF
  void *Buf1; // [rsp+F0h] [rbp+5Fh]
  size_t Size; // [rsp+F8h] [rbp+67h]
  void *Src; // [rsp+100h] [rbp+6Fh]

  Src = a4;
  Size = a3;
  Buf1 = a2;
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    v8 = *((_WORD *)this + 1);
    v9 = (unsigned __int8 *)(v6 + 10);
    v10 = *((_BYTE *)this + 4);
    v41 = v8;
    v11 = v9;
    v42 = v10;
    *(_OWORD *)v45 = 0LL;
    v43 = 0;
    Destination = 0;
    LOBYTE(Source) = 0;
    while ( 1 )
    {
      v12 = *((_QWORD *)this + 4);
      v40 = v9;
      v39 = v9;
      if ( v10 == 1 )
      {
        v13 = v11 + 2;
        if ( (unsigned __int64)(v11 + 2) > v12 )
          goto LABEL_45;
        v45[0] = v11;
        if ( v11 )
        {
          v36 = *(_WORD *)v11;
        }
        else
        {
          *(_DWORD *)_o__errno(this, a2, 0LL) = 22;
          invalid_parameter_noinfo();
          v36 = 0;
        }
        v43 = v36;
      }
      else
      {
        v13 = v11;
        if ( v10 == 2 )
        {
          v13 = v11 + 4;
          if ( (unsigned __int64)(v11 + 4) > v12 )
          {
LABEL_45:
            *((_QWORD *)this + 4) = v9;
            goto LABEL_46;
          }
          v45[0] = v11;
          memcpy_s(&v43, 4uLL, v11, 4uLL);
          v10 = v42;
          v8 = v41;
        }
      }
      Destination = v8;
      if ( !v8 )
      {
        if ( (unsigned __int64)(v13 + 2) > v12 )
          goto LABEL_45;
        memcpy_s(&Destination, 2uLL, v13, 2uLL);
        v10 = v42;
        v13 += 2;
        v8 = Destination;
      }
      if ( (unsigned __int64)&v13[v8] > v12 )
        goto LABEL_45;
      v45[1] = v13;
      v14 = Size == v8 ? memcmp_0(Buf1, v13, Size) : Size - v8;
      if ( v14 < 0 )
        break;
      v15 = &v13[v8];
      if ( !v14 )
      {
        InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                      this,
                                      (struct wil::details_abi::UsageIndexProperty *)&v41,
                                      v15,
                                      Src,
                                      a5,
                                      a6);
        v17 = 0LL;
        v39 = InsertionPointOrIncrement;
        v9 = InsertionPointOrIncrement;
        if ( InsertionPointOrIncrement )
        {
          v18 = v45[0];
          v19 = 0LL;
          v20 = v43;
          v10 = v42;
          LOBYTE(Source) = 1;
          goto LABEL_13;
        }
        return 1;
      }
      v37 = wil::details_abi::RawUsageIndex::SkipValues(this, (struct wil::details_abi::UsageIndexProperty *)&v41, v15);
      v10 = v42;
      v9 = v37;
      v8 = v41;
      v11 = v37;
    }
    v9 = v40;
    v39 = v40;
LABEL_46:
    v20 = 1;
    v43 = 1;
    v18 = 0LL;
    Destination = Size;
    v45[1] = Buf1;
    v45[0] = 0LL;
    v19 = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v41);
LABEL_13:
    v21 = *((unsigned __int16 *)this + 3);
    v22 = *((_BYTE *)this + 8);
    v48 = a6;
    v51 = Src;
    v38 = v21;
    v46 = v21;
    v47 = v22;
    v49 = a5;
    v50 = v17;
    if ( !(_WORD)v21 )
      v21 = (unsigned __int16)a5 + 2LL;
    if ( v22 == 1 )
    {
      v21 += 2LL;
    }
    else if ( v22 == 2 )
    {
      v21 += 4LL;
    }
    v23 = *((_QWORD *)this + 5);
    v24 = v21 + v19;
    v25 = *((_QWORD *)this + 4);
    if ( ((v23 - v25) & -(__int64)(v25 < v23)) >= v21 + v19 )
    {
      v26 = &v9[v24];
      v27 = v23 - v24 - (_QWORD)v9;
      v28 = v25 - (_QWORD)v9;
      if ( !v28 )
        goto LABEL_25;
      if ( v26 && v9 )
      {
        if ( v27 >= v28 )
        {
          memmove_0(v26, v9, v28);
          goto LABEL_24;
        }
        *(_DWORD *)_o__errno(v26, v27, v28) = 34;
      }
      else
      {
        *(_DWORD *)_o__errno(v26, v27, v28) = 22;
      }
      invalid_parameter_noinfo();
LABEL_24:
      LOBYTE(v17) = 0;
LABEL_25:
      v29 = (unsigned __int8 *)(v24 + *((_QWORD *)this + 4));
      *((_QWORD *)this + 4) = v29;
      if ( (_BYTE)Source == (_BYTE)v17 )
      {
        wil::details_abi::UsageIndexProperty::Write((wil::details_abi::UsageIndexProperty *)&v41, &v39, v29);
        v9 = v39;
      }
      else if ( v10 )
      {
        v43 = v20 + 1;
        if ( v10 == 1 )
        {
          if ( v18 )
          {
            *v18 = v20 + 1;
          }
          else
          {
            *(_DWORD *)_o__errno(v26, v27, v29) = 22;
            invalid_parameter_noinfo();
          }
        }
        else if ( v10 == 2 )
        {
          memcpy_s(v18, 4uLL, &v43, 4uLL);
        }
      }
      v30 = *((_QWORD *)this + 4);
      if ( v22 == 1 )
      {
        if ( (unsigned __int64)(v9 + 2) > v30 )
          goto LABEL_37;
        Source = a6;
        memcpy_s(v9, 2uLL, &Source, 2uLL);
        v9 += 2;
      }
      else if ( v22 == 2 )
      {
        if ( (unsigned __int64)(v9 + 4) > v30 )
          goto LABEL_37;
        memcpy_s(v9, 4uLL, &v48, 4uLL);
        v32 = v46;
        v9 += 4;
        v31 = v51;
        goto LABEL_30;
      }
      v31 = Src;
      v32 = v38;
LABEL_30:
      if ( !v32 )
      {
        if ( (unsigned __int64)(v9 + 2) > v30 )
          goto LABEL_37;
        memcpy_s(v9, v30 - (_QWORD)v9, &v49, 2uLL);
        v31 = v51;
        v9 += 2;
      }
      v33 = v49;
      if ( (unsigned __int64)&v9[v49] > v30 )
        goto LABEL_37;
      v34 = v30 - (_QWORD)v9;
      if ( !v49 )
        goto LABEL_37;
      if ( !v9 )
        goto LABEL_42;
      if ( v31 && v34 >= v49 )
      {
        memcpy_0(v9, v31, v49);
LABEL_37:
        *((_BYTE *)this + 56) = 1;
        return 1;
      }
      memset_0(v9, 0, v34);
      if ( v31 )
      {
        if ( v34 >= v33 )
          goto LABEL_37;
        *(_DWORD *)_o__errno(v26, v27, v29) = 34;
      }
      else
      {
LABEL_42:
        *(_DWORD *)_o__errno(v26, v27, v29) = 22;
      }
      invalid_parameter_noinfo();
      goto LABEL_37;
    }
  }
  return 0;
}
