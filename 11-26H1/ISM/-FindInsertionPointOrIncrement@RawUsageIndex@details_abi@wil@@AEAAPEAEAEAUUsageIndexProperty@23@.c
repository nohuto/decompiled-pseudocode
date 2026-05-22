/*
 * XREFs of ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18006F530
 * Callers:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18006F30C (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z @ 0x18006F6BC (-LowerBound@RawUsageIndex@details_abi@wil@@AEAAPEAEPEAE_KPEAX1@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18007C06C (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800954C4 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     memcmp_0 @ 0x18009CC56 (memcmp_0.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x1800A0D38 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 */

unsigned __int8 *__fastcall wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::UsageIndexProperty *a2,
        unsigned __int8 *a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  char v6; // di
  int v7; // esi
  unsigned __int8 *v9; // r14
  unsigned __int64 v12; // rdx
  size_t v13; // rsi
  unsigned __int8 *v14; // rbx
  unsigned __int8 *v15; // rax
  unsigned __int8 *v16; // r8
  unsigned int i; // ebx
  unsigned __int8 *v18; // r8
  char *v19; // rax
  __int16 v21; // [rsp+30h] [rbp-20h] BYREF
  char v22; // [rsp+32h] [rbp-1Eh]
  int v23; // [rsp+34h] [rbp-1Ch]
  unsigned __int16 v24; // [rsp+38h] [rbp-18h]
  void *Buf2[2]; // [rsp+40h] [rbp-10h]
  unsigned __int8 *v26; // [rsp+80h] [rbp+30h] BYREF

  v6 = 0;
  v21 = *((_WORD *)this + 3);
  v7 = -1;
  v22 = *((_BYTE *)this + 8);
  v9 = a3;
  v23 = 0;
  v24 = 0;
  *(_OWORD *)Buf2 = 0LL;
  if ( *((_QWORD *)this + 2) )
  {
    v12 = (*((_QWORD *)this + 4) - (_QWORD)a3) / *((_QWORD *)this + 2);
    if ( *((unsigned int *)a2 + 1) > v12 )
      wil::details_abi::UsageIndexProperty::UpdateCount(a2, v12);
    v13 = Size;
    v14 = &v9[*((_QWORD *)this + 2) * *((unsigned int *)a2 + 1)];
    v15 = wil::details_abi::RawUsageIndex::LowerBound(this, v9, *((unsigned int *)a2 + 1), a4, Size);
    v9 = v15;
    if ( v15 >= v14 )
      return v9;
    v16 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v26 = v15;
    wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v21, &v26, v16);
    if ( v13 == v24 )
      v7 = memcmp_0(a4, Buf2[1], v13);
    else
      v7 = v13 - v24;
  }
  else
  {
    for ( i = 0; i < *((_DWORD *)a2 + 1); ++i )
    {
      v18 = (unsigned __int8 *)*((_QWORD *)this + 4);
      v26 = v9;
      if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v21, &v26, v18) )
      {
        wil::details_abi::UsageIndexProperty::UpdateCount(a2, i);
        break;
      }
      v7 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v21, a4, Size);
      if ( v7 <= 0 )
        break;
      v9 = v26;
    }
  }
  if ( !v7 )
  {
    if ( v22 )
    {
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v21, a6 + v23);
      v19 = (char *)this + 56;
    }
    else
    {
      v19 = (char *)this + 56;
      if ( !*((_BYTE *)this + 56) )
      {
LABEL_19:
        *v19 = v6;
        return 0LL;
      }
    }
    v6 = 1;
    goto LABEL_19;
  }
  return v9;
}
