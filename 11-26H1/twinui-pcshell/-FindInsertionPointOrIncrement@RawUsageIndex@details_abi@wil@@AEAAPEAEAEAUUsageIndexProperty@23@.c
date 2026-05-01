/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18011681C
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x1801162F0 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s @ 0x1800C2818 (memcpy_s.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18016735C (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18018CFB4 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x1801C201C (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     _invalid_parameter_noinfo @ 0x1802C9DB6 (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int64 a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  char v6; // bl
  unsigned __int8 *v7; // r13
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int8 *v10; // rdi
  unsigned __int8 v12; // r14
  unsigned __int16 v13; // r12
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int8 v17; // r9
  size_t v18; // r13
  unsigned __int8 *v19; // rax
  unsigned __int8 *v20; // r14
  unsigned __int16 v21; // r12
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int8 *v24; // r15
  unsigned __int8 *v25; // rsi
  unsigned __int8 *v26; // rsi
  unsigned __int64 v27; // r15
  unsigned __int16 v28; // ax
  int v29; // r13d
  unsigned __int16 v31; // ax
  unsigned __int16 v32; // ax
  __int64 v33; // rdx
  unsigned int i; // esi
  unsigned __int8 *v35; // r8
  unsigned __int8 v36; // [rsp+28h] [rbp-69h]
  unsigned __int16 v37; // [rsp+2Ah] [rbp-67h]
  unsigned __int8 v38; // [rsp+2Ch] [rbp-65h]
  unsigned __int16 v39; // [rsp+2Eh] [rbp-63h]
  unsigned __int16 v40; // [rsp+38h] [rbp-59h] BYREF
  unsigned __int8 v41; // [rsp+3Ah] [rbp-57h]
  int Source; // [rsp+3Ch] [rbp-55h] BYREF
  unsigned __int16 v43; // [rsp+40h] [rbp-51h] BYREF
  void *v44[2]; // [rsp+48h] [rbp-49h]
  __int64 v45; // [rsp+58h] [rbp-39h]
  unsigned __int16 v46; // [rsp+60h] [rbp-31h]
  unsigned __int8 v47; // [rsp+62h] [rbp-2Fh]
  int v48; // [rsp+64h] [rbp-2Dh] BYREF
  unsigned __int16 Destination; // [rsp+68h] [rbp-29h] BYREF
  void *Buf2[2]; // [rsp+70h] [rbp-21h]
  unsigned __int64 v51; // [rsp+80h] [rbp-11h]
  unsigned __int8 *v52; // [rsp+88h] [rbp-9h]
  unsigned __int64 v53; // [rsp+90h] [rbp-1h]
  unsigned __int8 *v54; // [rsp+98h] [rbp+7h]
  unsigned __int8 *v55; // [rsp+E8h] [rbp+57h] BYREF
  void *Buf1; // [rsp+100h] [rbp+6Fh]

  Buf1 = a4;
  v55 = (unsigned __int8 *)this;
  v6 = 0;
  v7 = (unsigned __int8 *)this;
  v8 = *((unsigned __int16 *)this + 3);
  LODWORD(v9) = -1;
  v45 = -1LL;
  v10 = (unsigned __int8 *)a3;
  v39 = v8;
  v12 = v7[8];
  v13 = 0;
  v38 = v12;
  v41 = v12;
  v40 = v8;
  Source = 0;
  v43 = 0;
  *(_OWORD *)v44 = 0LL;
  if ( *((_QWORD *)v7 + 2) )
  {
    v14 = (*((_QWORD *)v7 + 4) - a3) / *((_QWORD *)v7 + 2);
    if ( *((unsigned int *)a2 + 1) > v14 )
      wil::details_abi::UsageIndexProperty::UpdateCount(a2, v14);
    v15 = *((unsigned int *)a2 + 1);
    a3 = *((unsigned __int16 *)v7 + 3);
    v16 = *((_QWORD *)v7 + 2) * v15;
    *(_OWORD *)Buf2 = 0LL;
    v17 = v7[8];
    v18 = Size;
    v19 = &v10[v16];
    v51 = v15;
    v54 = v19;
    v37 = a3;
    v46 = a3;
    v36 = v17;
    v47 = v17;
    v48 = 0;
    Destination = 0;
    if ( v15 )
    {
      v20 = v55;
      v21 = 0;
      while ( 1 )
      {
        v22 = *((_QWORD *)v20 + 4);
        v45 = v15 >> 1;
        v23 = *((_QWORD *)v20 + 2) * (v15 >> 1);
        v53 = v22;
        v24 = &v10[v23];
        v25 = &v10[v23];
        if ( v17 == 1 )
        {
          v25 = v24 + 2;
          if ( (unsigned __int64)(v24 + 2) > v22 )
            goto LABEL_11;
          Buf2[0] = &v10[v23];
          if ( v24 )
          {
            v31 = *(_WORD *)v24;
          }
          else
          {
            *(_DWORD *)_o__errno(v22, v15, a3) = 22;
            invalid_parameter_noinfo();
            LOWORD(a3) = v37;
            v31 = 0;
          }
          v48 = v31;
        }
        else if ( v17 == 2 )
        {
          v52 = v24 + 4;
          if ( (unsigned __int64)(v24 + 4) > v22 )
            goto LABEL_11;
          Buf2[0] = &v10[v23];
          memcpy_s(&v48, 4uLL, v24, 4uLL);
          LOWORD(a3) = v46;
          v25 = v52;
          v36 = v47;
          v37 = v46;
        }
        Destination = a3;
        v21 = a3;
        if ( (_WORD)a3 )
          goto LABEL_9;
        v52 = v25 + 2;
        if ( (unsigned __int64)(v25 + 2) <= v53 )
        {
          memcpy_s(&Destination, 2uLL, v25, 2uLL);
          v25 = v52;
          v21 = Destination;
          v36 = v47;
          v37 = v46;
LABEL_9:
          if ( (unsigned __int64)&v25[v21] <= v53 )
          {
            Buf2[1] = v25;
            v24 = &v25[v21];
          }
        }
LABEL_11:
        if ( v18 == v21 )
          v8 = (unsigned int)memcmp_0(Buf1, Buf2[1], v18);
        else
          v8 = (unsigned int)v18 - v21;
        if ( (int)v8 > 0 )
          v15 = -1 - v45 + v51;
        else
          v15 = v45;
        a3 = v37;
        v17 = v36;
        if ( (int)v8 <= 0 )
          v24 = v10;
        v51 = v15;
        v10 = v24;
        if ( !v15 )
        {
          v12 = v38;
          v13 = v43;
          v19 = v54;
          break;
        }
      }
    }
    if ( v10 >= v19 )
      return v10;
    v26 = v10;
    v27 = *((_QWORD *)v55 + 4);
    if ( v12 == 1 )
    {
      v26 = v10 + 2;
      if ( (unsigned __int64)(v10 + 2) > v27 )
        goto LABEL_27;
      v44[0] = v10;
      if ( v10 )
      {
        v32 = *(_WORD *)v10;
      }
      else
      {
        *(_DWORD *)_o__errno(v8, v15, a3) = 22;
        invalid_parameter_noinfo();
        v32 = 0;
      }
      Source = v32;
    }
    else if ( v12 == 2 )
    {
      v26 = v10 + 4;
      if ( (unsigned __int64)(v10 + 4) > v27 )
        goto LABEL_27;
      v44[0] = v10;
      memcpy_s(&Source, 4uLL, v10, 4uLL);
      v28 = v40;
      v12 = v41;
      goto LABEL_23;
    }
    v28 = v39;
LABEL_23:
    v43 = v28;
    v13 = v28;
    if ( v28 )
    {
LABEL_24:
      v8 = (unsigned __int64)v44[1];
      if ( (unsigned __int64)&v26[v13] <= v27 )
        v8 = (unsigned __int64)v26;
      v44[1] = (void *)v8;
      goto LABEL_27;
    }
    if ( (unsigned __int64)(v26 + 2) <= v27 )
    {
      memcpy_s(&v43, 2uLL, v26, 2uLL);
      v12 = v41;
      v26 += 2;
      v13 = v43;
      goto LABEL_24;
    }
    v13 = v43;
LABEL_27:
    if ( v18 == v13 )
      v29 = memcmp_0(Buf1, v44[1], v18);
    else
      v29 = v18 - v13;
    LODWORD(v9) = v29;
    v7 = v55;
    goto LABEL_30;
  }
  for ( i = 0; i < *((_DWORD *)a2 + 1); ++i )
  {
    v35 = (unsigned __int8 *)*((_QWORD *)v7 + 4);
    v55 = v10;
    if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v40, &v55, v35) )
    {
      wil::details_abi::UsageIndexProperty::UpdateCount(a2, i);
      LODWORD(v9) = v45;
      break;
    }
    LODWORD(v9) = wil::details_abi::UsageIndexProperty::Compare(
                    (wil::details_abi::UsageIndexProperty *)&v40,
                    Buf1,
                    Size);
    v45 = v9;
    if ( (int)v9 <= 0 )
      break;
    v10 = v55;
  }
  v12 = v41;
LABEL_30:
  if ( (_DWORD)v9 )
    return v10;
  if ( v12 )
  {
    v33 = Source + a6;
    if ( Source != (_DWORD)v33 )
    {
      Source += a6;
      if ( v12 == 1 )
      {
        if ( v44[0] )
        {
          *(_WORD *)v44[0] = v33;
        }
        else
        {
          *(_DWORD *)_o__errno(v8, v33, a3) = 22;
          invalid_parameter_noinfo();
        }
      }
      else if ( v12 == 2 )
      {
        memcpy_s(v44[0], 4uLL, &Source, 4uLL);
      }
    }
  }
  else if ( !v7[56] )
  {
    goto LABEL_46;
  }
  v6 = 1;
LABEL_46:
  v7[56] = v6;
  return 0LL;
}
