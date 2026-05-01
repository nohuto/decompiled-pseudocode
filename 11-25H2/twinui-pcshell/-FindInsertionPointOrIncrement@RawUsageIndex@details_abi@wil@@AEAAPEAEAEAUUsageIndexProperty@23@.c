/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18012A754
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18012A0D8 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s @ 0x1800B7E64 (memcpy_s.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1801760E0 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x180194018 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x1801CB220 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     _invalid_parameter_noinfo @ 0x1802D2EE6 (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x1806A4B00 (memcmp_0.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
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
  unsigned __int16 v16; // r9
  unsigned __int64 v17; // rax
  size_t v18; // r13
  unsigned __int8 *v19; // rax
  unsigned __int8 *v20; // r14
  unsigned __int8 *v21; // rsi
  unsigned __int64 v22; // rax
  unsigned __int8 *v23; // r15
  unsigned __int8 *v24; // rcx
  int v25; // ecx
  bool v26; // cc
  unsigned __int8 *v27; // rsi
  unsigned __int64 v28; // r15
  unsigned __int16 v29; // ax
  unsigned __int16 v31; // ax
  unsigned __int16 v32; // ax
  __int64 v33; // rdx
  unsigned int i; // esi
  unsigned __int8 *v35; // r8
  char v36; // [rsp+28h] [rbp-59h]
  __int16 v37; // [rsp+2Ah] [rbp-57h]
  unsigned __int8 v38; // [rsp+2Ch] [rbp-55h]
  unsigned __int16 v39; // [rsp+2Eh] [rbp-53h]
  unsigned __int16 v40; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int8 v41; // [rsp+3Ah] [rbp-47h]
  int Source; // [rsp+3Ch] [rbp-45h] BYREF
  unsigned __int16 v43; // [rsp+40h] [rbp-41h] BYREF
  void *v44[2]; // [rsp+48h] [rbp-39h]
  __int64 v45; // [rsp+58h] [rbp-29h]
  __int16 v46; // [rsp+60h] [rbp-21h]
  char v47; // [rsp+62h] [rbp-1Fh]
  int v48; // [rsp+64h] [rbp-1Dh] BYREF
  unsigned __int16 Destination; // [rsp+68h] [rbp-19h] BYREF
  void *Buf2[2]; // [rsp+70h] [rbp-11h]
  unsigned __int64 v51; // [rsp+80h] [rbp-1h]
  unsigned __int64 v52; // [rsp+88h] [rbp+7h]
  unsigned __int8 *v53; // [rsp+90h] [rbp+Fh]
  unsigned __int8 *v54; // [rsp+D8h] [rbp+57h] BYREF
  void *Buf1; // [rsp+F0h] [rbp+6Fh]

  Buf1 = a4;
  v54 = (unsigned __int8 *)this;
  v6 = 0;
  v7 = (unsigned __int8 *)this;
  v8 = *((unsigned __int16 *)this + 3);
  LODWORD(v9) = -1;
  v45 = -1LL;
  v10 = a3;
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
    v14 = (*((_QWORD *)v7 + 4) - (_QWORD)a3) / *((_QWORD *)v7 + 2);
    if ( *((unsigned int *)a2 + 1) > v14 )
      wil::details_abi::UsageIndexProperty::UpdateCount(a2, v14);
    v15 = *((unsigned int *)a2 + 1);
    v16 = *((_WORD *)v7 + 3);
    v17 = *((_QWORD *)v7 + 2) * v15;
    *(_OWORD *)Buf2 = 0LL;
    LOBYTE(a3) = v7[8];
    v8 = 0LL;
    v18 = Size;
    v19 = &v10[v17];
    v52 = v15;
    v53 = v19;
    v37 = v16;
    v46 = v16;
    v36 = (char)a3;
    v47 = (char)a3;
    v48 = 0;
    Destination = 0;
    if ( v15 )
    {
      v20 = v54;
      while ( 1 )
      {
        v45 = v15 >> 1;
        v21 = &v10[*((_QWORD *)v20 + 2) * (v15 >> 1)];
        v22 = *((_QWORD *)v20 + 4);
        v51 = v22;
        v23 = v21;
        if ( (_BYTE)a3 == 1 )
        {
          v23 = v21 + 2;
          if ( (unsigned __int64)(v21 + 2) > v22 )
            goto LABEL_12;
          Buf2[0] = v21;
          if ( v21 )
          {
            v31 = *(_WORD *)v21;
          }
          else
          {
            *(_DWORD *)_o__errno(v8, v15, a3) = 22;
            invalid_parameter_noinfo();
            v16 = v37;
            v31 = 0;
          }
          v48 = v31;
        }
        else
        {
          if ( (_BYTE)a3 != 2 )
            goto LABEL_8;
          v23 = v21 + 4;
          if ( (unsigned __int64)(v21 + 4) > v22 )
            goto LABEL_12;
          Buf2[0] = v21;
          memcpy_s(&v48, 4uLL, v21, 4uLL);
          v16 = v46;
          v36 = v47;
          v37 = v46;
        }
        v22 = v51;
LABEL_8:
        LOWORD(v8) = v16;
        Destination = v16;
        if ( v16 )
          goto LABEL_9;
        if ( (unsigned __int64)(v23 + 2) <= v22 )
        {
          memcpy_s(&Destination, 2uLL, v23, 2uLL);
          v23 += 2;
          v37 = v46;
          LOWORD(v8) = Destination;
          v36 = v47;
LABEL_9:
          v24 = &v23[(unsigned __int16)v8];
          if ( (unsigned __int64)v24 <= v51 )
          {
            Buf2[1] = v23;
            v21 = v24;
          }
          LOWORD(v8) = Destination;
        }
LABEL_12:
        if ( v18 == (unsigned __int16)v8 )
          v25 = memcmp_0(Buf1, Buf2[1], v18);
        else
          v25 = v18 - (unsigned __int16)v8;
        if ( v25 > 0 )
          v15 = -1 - v45 + v52;
        else
          v15 = v45;
        LOBYTE(a3) = v36;
        v26 = v25 <= 0;
        v8 = Destination;
        v16 = v37;
        if ( v26 )
          v21 = v10;
        v52 = v15;
        v10 = v21;
        if ( !v15 )
        {
          v12 = v38;
          v13 = v43;
          v19 = v53;
          break;
        }
      }
    }
    if ( v10 >= v19 )
      return v10;
    v27 = v10;
    v28 = *((_QWORD *)v54 + 4);
    if ( v12 == 1 )
    {
      v27 = v10 + 2;
      if ( (unsigned __int64)(v10 + 2) > v28 )
        goto LABEL_28;
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
      v27 = v10 + 4;
      if ( (unsigned __int64)(v10 + 4) > v28 )
        goto LABEL_28;
      v44[0] = v10;
      memcpy_s(&Source, 4uLL, v10, 4uLL);
      v29 = v40;
      v12 = v41;
      goto LABEL_24;
    }
    v29 = v39;
LABEL_24:
    v43 = v29;
    v13 = v29;
    if ( v29 )
    {
LABEL_25:
      v8 = (unsigned __int64)v44[1];
      if ( (unsigned __int64)&v27[v13] <= v28 )
        v8 = (unsigned __int64)v27;
      v44[1] = (void *)v8;
      goto LABEL_28;
    }
    if ( (unsigned __int64)(v27 + 2) <= v28 )
    {
      memcpy_s(&v43, 2uLL, v27, 2uLL);
      v12 = v41;
      v27 += 2;
      v13 = v43;
      goto LABEL_25;
    }
    v13 = v43;
LABEL_28:
    if ( v18 == v13 )
      LODWORD(v9) = memcmp_0(Buf1, v44[1], v18);
    else
      LODWORD(v9) = v18 - v13;
    v7 = v54;
    goto LABEL_31;
  }
  for ( i = 0; i < *((_DWORD *)a2 + 1); ++i )
  {
    v35 = (unsigned __int8 *)*((_QWORD *)v7 + 4);
    v54 = v10;
    if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v40, &v54, v35) )
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
    v10 = v54;
  }
  v12 = v41;
LABEL_31:
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
    goto LABEL_48;
  }
  v6 = 1;
LABEL_48:
  v7[56] = v6;
  return 0LL;
}
