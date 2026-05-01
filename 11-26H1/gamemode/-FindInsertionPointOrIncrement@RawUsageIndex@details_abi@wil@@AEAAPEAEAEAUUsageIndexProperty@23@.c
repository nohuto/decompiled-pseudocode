/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18000A018
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18000C110 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18000B918 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     memcmp_0 @ 0x18000FE36 (memcmp_0.c)
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
  void *v8; // r12
  unsigned __int8 *v9; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  char v14; // al
  unsigned __int8 **v15; // r8
  rsize_t v16; // r9
  rsize_t v17; // rdx
  unsigned __int64 v18; // r14
  __int16 v19; // ax
  __int64 v20; // r13
  size_t v21; // rdi
  unsigned __int8 *v22; // r13
  void *v23; // r13
  unsigned __int8 *v24; // r8
  int v25; // ecx
  unsigned __int8 *v26; // r8
  int v27; // edi
  int v28; // eax
  int v29; // r14d
  size_t v30; // r12
  unsigned __int8 *v31; // r8
  int v32; // ecx
  char v34; // al
  unsigned __int8 **v35; // r8
  rsize_t v36; // r9
  __int16 v37; // r9
  unsigned __int8 **p_Source; // r8
  rsize_t v39; // r9
  int v40; // [rsp+20h] [rbp-50h]
  unsigned __int8 *v41; // [rsp+20h] [rbp-50h]
  __int16 v42; // [rsp+28h] [rbp-48h] BYREF
  char v43; // [rsp+2Ah] [rbp-46h]
  int Source; // [rsp+2Ch] [rbp-44h] BYREF
  unsigned __int16 v45; // [rsp+30h] [rbp-40h]
  void *Destination[2]; // [rsp+38h] [rbp-38h]
  __int16 v47; // [rsp+48h] [rbp-28h] BYREF
  char v48; // [rsp+4Ah] [rbp-26h]
  int v49; // [rsp+4Ch] [rbp-24h]
  unsigned __int16 v50; // [rsp+50h] [rbp-20h]
  void *Buf2[2]; // [rsp+58h] [rbp-18h]
  unsigned __int8 *v52; // [rsp+B0h] [rbp+40h] BYREF
  void *Buf1; // [rsp+C8h] [rbp+58h]

  Buf1 = a4;
  v6 = (_DWORD *)((char *)a2 + 4);
  v7 = 0;
  v42 = *((_WORD *)this + 3);
  v8 = a4;
  v43 = *((_BYTE *)this + 8);
  v9 = a3;
  v40 = -1;
  Source = 0;
  v45 = 0;
  *(_OWORD *)Destination = 0LL;
  if ( !*((_QWORD *)this + 2) )
  {
    v29 = 0;
    if ( !*v6 )
      return v9;
    v30 = Size;
    while ( 1 )
    {
      v31 = (unsigned __int8 *)*((_QWORD *)this + 4);
      v52 = v9;
      if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v42, &v52, v31) )
        break;
      if ( v30 == v45 )
        v32 = memcmp_0(Buf1, Destination[1], v30);
      else
        v32 = v30 - v45;
      v28 = v32;
      v40 = v32;
      if ( v32 <= 0 )
        goto LABEL_40;
      v9 = v52;
      if ( (unsigned int)++v29 >= *v6 )
        return v9;
    }
    if ( *v6 == v29 )
      goto LABEL_39;
    v34 = *((_BYTE *)a2 + 2);
    *v6 = v29;
    if ( v34 == 1 )
    {
      v35 = &v52;
      LOWORD(v52) = v29;
      v36 = 2LL;
    }
    else
    {
      if ( v34 != 2 )
      {
LABEL_39:
        v28 = v40;
        goto LABEL_40;
      }
      v36 = 4LL;
      v35 = (unsigned __int8 **)v6;
    }
    memcpy_s(*((void *const *)a2 + 2), v36, v35, v36);
    goto LABEL_39;
  }
  v12 = (*((_QWORD *)this + 4) - (_QWORD)a3) / *((_QWORD *)this + 2);
  v13 = (unsigned int)*v6;
  if ( v13 <= v12 || (_DWORD)v13 == (_DWORD)v12 )
    goto LABEL_9;
  *v6 = v12;
  v14 = *((_BYTE *)a2 + 2);
  if ( v14 == 1 )
  {
    v15 = &v52;
    LOWORD(v52) = *(_WORD *)v6;
    v16 = 2LL;
    v17 = 2LL;
LABEL_8:
    memcpy_s(*((void *const *)a2 + 2), v17, v15, v16);
    goto LABEL_9;
  }
  if ( v14 == 2 )
  {
    v16 = 4LL;
    v15 = (unsigned __int8 **)((char *)a2 + 4);
    v17 = 4LL;
    goto LABEL_8;
  }
LABEL_9:
  v18 = (unsigned int)*v6;
  v19 = *((_WORD *)this + 3);
  v20 = *((_QWORD *)this + 2) * v18;
  *(_OWORD *)Buf2 = 0LL;
  v21 = Size;
  v22 = &v9[v20];
  v47 = v19;
  v41 = v22;
  v48 = *((_BYTE *)this + 8);
  v49 = 0;
  v50 = 0;
  if ( v18 )
  {
    v23 = Buf1;
    do
    {
      v24 = (unsigned __int8 *)*((_QWORD *)this + 4);
      v52 = &v9[*((_QWORD *)this + 2) * (v18 >> 1)];
      wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v47, &v52, v24);
      if ( v21 == v50 )
        v25 = memcmp_0(v23, Buf2[1], v21);
      else
        v25 = v21 - v50;
      if ( v25 <= 0 )
      {
        v18 >>= 1;
      }
      else
      {
        v9 = v52;
        v18 += -1LL - (v18 >> 1);
      }
    }
    while ( v18 );
    v22 = v41;
    v8 = Buf1;
  }
  if ( v9 >= v22 )
    return v9;
  v26 = (unsigned __int8 *)*((_QWORD *)this + 4);
  v52 = v9;
  wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v42, &v52, v26);
  if ( v21 == v45 )
    v27 = memcmp_0(v8, Destination[1], v21);
  else
    v27 = v21 - v45;
  v28 = v27;
LABEL_40:
  if ( v28 )
    return v9;
  if ( v43 )
  {
    v37 = Source + a6;
    if ( Source != Source + a6 )
    {
      Source += a6;
      if ( v43 == 1 )
      {
        LOWORD(v52) = v37;
        p_Source = &v52;
        v39 = 2LL;
LABEL_47:
        memcpy_s(Destination[0], v39, p_Source, v39);
        goto LABEL_49;
      }
      if ( v43 == 2 )
      {
        v39 = 4LL;
        p_Source = (unsigned __int8 **)&Source;
        goto LABEL_47;
      }
    }
LABEL_49:
    v7 = 1;
    goto LABEL_50;
  }
  if ( *((_BYTE *)this + 56) )
    goto LABEL_49;
LABEL_50:
  *((_BYTE *)this + 56) = v7;
  return 0LL;
}
