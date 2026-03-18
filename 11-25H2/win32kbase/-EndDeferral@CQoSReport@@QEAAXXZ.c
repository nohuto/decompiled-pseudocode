/*
 * XREFs of ?EndDeferral@CQoSReport@@QEAAXXZ @ 0x1401A8530
 * Callers:
 *     ?EndDeferReport@QualityOfService@@YAXXZ @ 0x1401A84F0 (-EndDeferReport@QualityOfService@@YAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x14000274C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x14009E9B0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall CQoSReport::EndDeferral(CQoSReport *this)
{
  _QWORD *v2; // r14
  unsigned int v3; // edi
  _QWORD *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  _BYTE v10[4]; // [rsp+30h] [rbp-448h] BYREF
  int v11; // [rsp+34h] [rbp-444h] BYREF
  __int128 v12; // [rsp+38h] [rbp-440h]
  _OWORD v13[64]; // [rsp+50h] [rbp-428h] BYREF

  if ( !*(_BYTE *)this )
    KeBugCheckEx(0x164u, 0x12uLL, 0LL, 0LL, 0LL);
  v2 = (_QWORD *)((char *)this + 8);
LABEL_4:
  v3 = 0;
  while ( 1 )
  {
    v4 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    if ( (_QWORD *)v4[1] != v2 || (v5 = *v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v2 = v5;
    *(_QWORD *)(v5 + 8) = v2;
    v4[1] = v4;
    *v4 = v4;
    if ( (unsigned int)dword_14029EF38 > 5 && tlgKeywordOn((__int64)&dword_14029EF38, 4LL) )
    {
      v10[0] = dword_14026E178[*((int *)v4 + 7)];
      v11 = *((_DWORD *)v4 - 264);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v6,
        (__int64)&unk_140277D86,
        v7,
        v8,
        (__int64)&v11,
        (__int64)v10);
    }
    *(_QWORD *)&v12 = *(v4 - 139);
    *((_QWORD *)&v12 + 1) = dword_14026E178[*((int *)v4 + 7)];
    v9 = v3++;
    v13[v9] = v12;
    if ( v3 == 64 )
    {
      PsSetProcessesWindowState(64LL, v13);
      goto LABEL_4;
    }
  }
  if ( v3 )
    PsSetProcessesWindowState(v3, v13);
  *(_BYTE *)this = 0;
}
