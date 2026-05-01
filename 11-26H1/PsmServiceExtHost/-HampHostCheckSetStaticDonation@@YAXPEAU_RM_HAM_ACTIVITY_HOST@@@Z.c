/*
 * XREFs of ?HampHostCheckSetStaticDonation@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001693C
 * Callers:
 *     ?HampDepGroupPopulateIndependentHostList@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180016800 (-HampDepGroupPopulateIndependentHostList@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@PEAU_HAM_DEP_HO.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@44@Z @ 0x180001BEC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x180047940 (_tlgKeywordOn.c)
 *     ?HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180078D10 (-HampHostCanStaticallyDonateCommit@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 */

void __fastcall HampHostCheckSetStaticDonation(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 *v1; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  v1 = (__int64 *)*((_QWORD *)a1 + 89);
  if ( !v1 )
  {
    v3 = 0LL;
    v4 = 0LL;
    v5 = 0LL;
LABEL_3:
    v6 = (unsigned __int64 *)(v5 + 952);
    goto LABEL_4;
  }
  v7 = *v1;
  v4 = *(_QWORD *)(v7 + 80);
  v3 = *(_QWORD *)(v7 + 456);
  v5 = v4;
  v8 = *(_QWORD *)(v4 + 1008);
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 456);
    if ( v9 > v3 )
      v3 = v9;
  }
  v10 = *(_QWORD *)(v4 + 952);
  if ( !v10 || v10 <= v3 || HampHostCanStaticallyDonateCommit(a1, v10) >= 0 )
    goto LABEL_3;
  v6 = (unsigned __int64 *)(v4 + 952);
  *(_QWORD *)(v4 + 952) = 0LL;
  if ( (unsigned int)dword_1800E12B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E12B0, 8LL) )
  {
    v16 = v11;
    v13 = 32LL;
    v14 = 1184LL;
    if ( a1 )
      v14 = (__int64)a1 + 1128;
    v17 = *(_QWORD *)v14;
    v15 = 32LL;
    if ( a1 )
      v15 = (__int64)a1 - 24;
    v18 = *(_QWORD *)v15;
    if ( v4 )
      v13 = v4 - 24;
    v19 = *(_QWORD *)v13;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)a1 - 24,
      (__int64)&unk_1800CD6A8,
      v11,
      v12,
      (__int64)&v16,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
LABEL_4:
  if ( v4 )
  {
    if ( v3 <= *v6 )
      v3 = *v6;
  }
  else
  {
    v3 = 0LL;
  }
  *((_QWORD *)a1 + 120) = v3;
}
