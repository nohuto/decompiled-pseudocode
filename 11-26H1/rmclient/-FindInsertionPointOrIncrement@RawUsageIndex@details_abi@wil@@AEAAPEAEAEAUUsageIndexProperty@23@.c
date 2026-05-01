/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x180006E50
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180005DF0 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18000C6B0 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18000E4F0 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x180016678 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     memcmp_0 @ 0x18001A5A6 (memcmp_0.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  unsigned int v6; // r15d
  unsigned __int8 *v7; // r13
  char v8; // al
  unsigned __int16 v10; // cx
  unsigned __int64 v11; // r8
  int v14; // esi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  unsigned __int16 v18; // di
  size_t v19; // r15
  unsigned __int64 v20; // rax
  unsigned __int8 *v21; // rsi
  unsigned __int8 *v22; // r13
  int v23; // ecx
  unsigned __int8 *v24; // rdi
  unsigned __int64 v25; // rsi
  unsigned __int8 *v26; // rdx
  int v27; // r15d
  char *v29; // r13
  char v30; // al
  unsigned __int8 *v31; // r8
  unsigned __int16 Destination; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-58h]
  unsigned __int8 *v34; // [rsp+30h] [rbp-50h]
  unsigned __int8 *v35; // [rsp+38h] [rbp-48h]
  unsigned __int16 v36; // [rsp+40h] [rbp-40h] BYREF
  char v37; // [rsp+42h] [rbp-3Eh]
  int v38; // [rsp+44h] [rbp-3Ch] BYREF
  unsigned __int16 v39; // [rsp+48h] [rbp-38h] BYREF
  __int128 v40; // [rsp+50h] [rbp-30h]
  unsigned __int16 v41; // [rsp+60h] [rbp-20h]
  unsigned __int8 v42; // [rsp+62h] [rbp-1Eh]
  int v43; // [rsp+64h] [rbp-1Ch] BYREF
  unsigned __int16 v44; // [rsp+68h] [rbp-18h] BYREF
  void *Buf2[2]; // [rsp+70h] [rbp-10h]
  unsigned __int8 *v46; // [rsp+C0h] [rbp+40h] BYREF
  void *Buf1; // [rsp+D8h] [rbp+58h]

  Buf1 = a4;
  v46 = (unsigned __int8 *)this;
  v6 = 0;
  v7 = (unsigned __int8 *)this;
  v36 = *((_WORD *)this + 3);
  v8 = *((_BYTE *)this + 8);
  v10 = 0;
  v37 = v8;
  v38 = 0;
  v11 = *((_QWORD *)v7 + 2);
  v39 = 0;
  v14 = -1;
  v40 = 0LL;
  if ( v11 )
  {
    v15 = (*((_QWORD *)v7 + 4) - (_QWORD)a3) / v11;
    if ( *((unsigned int *)a2 + 1) > v15 )
    {
      wil::details_abi::UsageIndexProperty::UpdateCount(a2, v15);
      v10 = v39;
    }
    v16 = *((unsigned int *)a2 + 1);
    v43 = 0;
    v17 = *((_QWORD *)v7 + 2) * v16;
    *(_OWORD *)Buf2 = 0LL;
    v18 = 0;
    v44 = 0;
    v19 = Size;
    v35 = &a3[v17];
    v41 = *((_WORD *)v7 + 3);
    v42 = v7[8];
    if ( v16 )
    {
      while ( 1 )
      {
        v20 = *((_QWORD *)v7 + 4);
        v33 = v20;
        v21 = &a3[*((_QWORD *)v7 + 2) * (v16 >> 1)];
        v22 = v21;
        if ( v42 == 1 )
        {
          v22 = v21 + 2;
          if ( (unsigned __int64)(v21 + 2) > v20 )
            goto LABEL_10;
          Buf2[0] = v21;
          Destination = 0;
          memcpy_s(&Destination, 2uLL, v21, 2uLL);
          v43 = Destination;
        }
        else
        {
          if ( v42 != 2 )
            goto LABEL_7;
          v22 = v21 + 4;
          if ( (unsigned __int64)(v21 + 4) > v20 )
            goto LABEL_10;
          Buf2[0] = v21;
          memcpy_s(&v43, 4uLL, v21, 4uLL);
        }
        v20 = v33;
LABEL_7:
        v18 = v41;
        v44 = v41;
        if ( v41 )
          goto LABEL_8;
        v34 = v22 + 2;
        if ( (unsigned __int64)(v22 + 2) <= v20 )
        {
          memcpy_s(&v44, 2uLL, v22, 2uLL);
          v22 = v34;
          v18 = v44;
LABEL_8:
          if ( (unsigned __int64)&v22[v18] <= v33 )
          {
            Buf2[1] = v22;
            v21 = &v22[v18];
          }
        }
LABEL_10:
        if ( v19 == v18 )
          v23 = memcmp_0(Buf1, Buf2[1], v19);
        else
          v23 = v19 - v18;
        if ( v23 > 0 )
          v16 += -1LL - (v16 >> 1);
        else
          v16 >>= 1;
        v7 = v46;
        if ( v23 <= 0 )
          v21 = a3;
        a3 = v21;
        if ( !v16 )
        {
          v10 = v39;
          break;
        }
      }
    }
    if ( a3 >= v35 )
      return a3;
    v24 = a3;
    v25 = *((_QWORD *)v7 + 4);
    if ( v37 == 1 )
    {
      v24 = a3 + 2;
      if ( (unsigned __int64)(a3 + 2) > v25 )
        goto LABEL_39;
      *(_QWORD *)&v40 = a3;
      LOWORD(v46) = 0;
      memcpy_s(&v46, 2uLL, a3, 2uLL);
      v38 = (unsigned __int16)v46;
    }
    else if ( v37 == 2 )
    {
      v24 = a3 + 4;
      if ( (unsigned __int64)(a3 + 4) > v25 )
        goto LABEL_39;
      *(_QWORD *)&v40 = a3;
      memcpy_s(&v38, 4uLL, a3, 4uLL);
    }
    v10 = v36;
    v39 = v36;
    if ( v36 )
    {
LABEL_22:
      v26 = (unsigned __int8 *)*((_QWORD *)&v40 + 1);
      if ( (unsigned __int64)&v24[v10] <= v25 )
        v26 = v24;
      *((_QWORD *)&v40 + 1) = v26;
      goto LABEL_25;
    }
    if ( (unsigned __int64)(v24 + 2) <= v25 )
    {
      memcpy_s(&v39, 2uLL, v24, 2uLL);
      v10 = v39;
      v24 += 2;
      goto LABEL_22;
    }
LABEL_39:
    v26 = (unsigned __int8 *)*((_QWORD *)&v40 + 1);
LABEL_25:
    if ( v19 == v10 )
      v27 = memcmp_0(Buf1, v26, v19);
    else
      v27 = v19 - v10;
    v14 = v27;
    goto LABEL_28;
  }
  while ( v6 < *((_DWORD *)a2 + 1) )
  {
    v31 = (unsigned __int8 *)*((_QWORD *)v7 + 4);
    v46 = a3;
    if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v36, &v46, v31) )
    {
      wil::details_abi::UsageIndexProperty::UpdateCount(a2, v6);
      break;
    }
    v14 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v36, a4, Size);
    if ( v14 <= 0 )
      break;
    a3 = v46;
    ++v6;
  }
LABEL_28:
  if ( v14 )
    return a3;
  if ( v37 )
  {
    wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v36, a6 + v38);
    v29 = (char *)(v7 + 56);
    goto LABEL_57;
  }
  v29 = (char *)(v7 + 56);
  if ( *v29 )
  {
LABEL_57:
    v30 = 1;
    goto LABEL_34;
  }
  v30 = 0;
LABEL_34:
  *v29 = v30;
  return 0LL;
}
