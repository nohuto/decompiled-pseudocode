/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180008D08
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18000ADFC (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180003250 (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x18000329C (memcmp_0.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18000A5D8 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  _DWORD *v6; // rdi
  char v7; // bl
  unsigned __int8 *v8; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  char v13; // al
  _WORD *v14; // rax
  _DWORD *v15; // rax
  unsigned __int64 v16; // rsi
  __int16 v17; // ax
  __int64 v18; // r12
  size_t v19; // rdi
  unsigned __int8 *v20; // r12
  void *v21; // r12
  unsigned __int8 *v22; // r8
  int v23; // ecx
  unsigned __int8 *v24; // r8
  __int64 v25; // rcx
  int v26; // edi
  int v27; // eax
  int v28; // esi
  size_t v29; // r12
  unsigned __int8 *v30; // r8
  bool v32; // zf
  _WORD *v33; // rax
  _DWORD *v34; // rax
  int v35; // r8d
  unsigned __int8 *v36; // [rsp+20h] [rbp-50h] BYREF
  __int16 v37; // [rsp+28h] [rbp-48h] BYREF
  char v38; // [rsp+2Ah] [rbp-46h]
  int v39; // [rsp+2Ch] [rbp-44h]
  unsigned __int16 v40; // [rsp+30h] [rbp-40h]
  void *v41[2]; // [rsp+38h] [rbp-38h]
  __int16 v42; // [rsp+48h] [rbp-28h] BYREF
  char v43; // [rsp+4Ah] [rbp-26h]
  int v44; // [rsp+4Ch] [rbp-24h]
  unsigned __int16 v45; // [rsp+50h] [rbp-20h]
  void *Buf2[2]; // [rsp+58h] [rbp-18h]
  unsigned __int8 *v47; // [rsp+B0h] [rbp+40h] BYREF
  void *Buf1; // [rsp+C8h] [rbp+58h]

  Buf1 = a4;
  v6 = (_DWORD *)((char *)a2 + 4);
  v7 = 0;
  v37 = *((_WORD *)this + 3);
  v8 = a3;
  v38 = *((_BYTE *)this + 8);
  v47 = (unsigned __int8 *)-1LL;
  v39 = 0;
  v40 = 0;
  *(_OWORD *)v41 = 0LL;
  if ( !*((_QWORD *)this + 2) )
  {
    v28 = 0;
    if ( !*v6 )
      return v8;
    v29 = Size;
    while ( 1 )
    {
      v30 = (unsigned __int8 *)*((_QWORD *)this + 4);
      v36 = v8;
      if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v37, &v36, v30) )
        break;
      if ( v29 == v40 )
        v25 = (unsigned int)memcmp_0(Buf1, v41[1], v29);
      else
        v25 = (unsigned int)v29 - v40;
      v27 = v25;
      v47 = (unsigned __int8 *)(unsigned int)v25;
      if ( (int)v25 <= 0 )
        goto LABEL_48;
      v8 = v36;
      if ( (unsigned int)++v28 >= *v6 )
        return v8;
    }
    if ( *v6 == v28 )
      goto LABEL_47;
    v32 = *((_BYTE *)a2 + 2) == 1;
    *v6 = v28;
    if ( v32 )
    {
      v33 = (_WORD *)*((_QWORD *)a2 + 2);
      v25 = (unsigned __int16)v28;
      if ( v33 )
      {
        *v33 = v28;
LABEL_47:
        v27 = (int)v47;
        goto LABEL_48;
      }
    }
    else
    {
      if ( *((_BYTE *)a2 + 2) != 2 )
        goto LABEL_47;
      v34 = (_DWORD *)*((_QWORD *)a2 + 2);
      if ( v34 )
      {
        if ( v6 )
        {
          *v34 = v28;
          goto LABEL_47;
        }
        v25 = 0LL;
        *v34 = 0;
      }
    }
    *(_DWORD *)_o__errno(v25) = 22;
    invalid_parameter_noinfo();
    goto LABEL_47;
  }
  v11 = (*((_QWORD *)this + 4) - (_QWORD)a3) / *((_QWORD *)this + 2);
  v12 = (unsigned int)*v6;
  if ( v12 <= v11 || (_DWORD)v12 == (_DWORD)v11 )
    goto LABEL_13;
  v13 = *((_BYTE *)a2 + 2);
  *v6 = v11;
  if ( v13 != 1 )
  {
    if ( v13 != 2 )
      goto LABEL_13;
    v15 = (_DWORD *)*((_QWORD *)a2 + 2);
    if ( v15 )
    {
      if ( a2 != (struct wil::details_abi::UsageIndexProperty *)-4LL )
      {
        *v15 = v11;
        goto LABEL_13;
      }
      v11 = 0LL;
      *v15 = 0;
    }
LABEL_12:
    *(_DWORD *)_o__errno(v11) = 22;
    invalid_parameter_noinfo();
    goto LABEL_13;
  }
  v14 = (_WORD *)*((_QWORD *)a2 + 2);
  if ( !v14 )
    goto LABEL_12;
  *v14 = v11;
LABEL_13:
  v16 = (unsigned int)*v6;
  v17 = *((_WORD *)this + 3);
  v18 = *((_QWORD *)this + 2) * v16;
  *(_OWORD *)Buf2 = 0LL;
  v19 = Size;
  v20 = &v8[v18];
  v42 = v17;
  LOBYTE(v17) = *((_BYTE *)this + 8);
  v36 = v20;
  v43 = v17;
  v44 = 0;
  v45 = 0;
  if ( v16 )
  {
    v21 = Buf1;
    do
    {
      v22 = (unsigned __int8 *)*((_QWORD *)this + 4);
      v47 = &v8[*((_QWORD *)this + 2) * (v16 >> 1)];
      wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v42, &v47, v22);
      if ( v19 == v45 )
        v23 = memcmp_0(v21, Buf2[1], v19);
      else
        v23 = v19 - v45;
      if ( v23 <= 0 )
      {
        v16 >>= 1;
      }
      else
      {
        v8 = v47;
        v16 += -1LL - (v16 >> 1);
      }
    }
    while ( v16 );
    v20 = v36;
  }
  if ( v8 >= v20 )
    return v8;
  v24 = (unsigned __int8 *)*((_QWORD *)this + 4);
  v47 = v8;
  wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v37, &v47, v24);
  if ( v19 == v40 )
    v26 = memcmp_0(Buf1, v41[1], v19);
  else
    v26 = v19 - v40;
  v27 = v26;
LABEL_48:
  if ( v27 )
    return v8;
  if ( v38 )
  {
    v35 = v39 + a6;
    if ( v39 != v39 + a6 )
    {
      if ( v38 == 1 )
      {
        if ( v41[0] )
        {
          *(_WORD *)v41[0] = v35;
          goto LABEL_59;
        }
      }
      else
      {
        if ( v38 != 2 )
          goto LABEL_59;
        if ( v41[0] )
        {
          *(_DWORD *)v41[0] = v35;
          goto LABEL_59;
        }
      }
      *(_DWORD *)_o__errno(v25) = 22;
      invalid_parameter_noinfo();
    }
LABEL_59:
    v7 = 1;
    goto LABEL_60;
  }
  if ( *((_BYTE *)this + 56) )
    goto LABEL_59;
LABEL_60:
  *((_BYTE *)this + 56) = v7;
  return 0LL;
}
