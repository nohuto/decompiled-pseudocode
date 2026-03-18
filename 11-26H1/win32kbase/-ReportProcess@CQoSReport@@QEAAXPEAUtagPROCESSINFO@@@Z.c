/*
 * XREFs of ?ReportProcess@CQoSReport@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A83E0
 * Callers:
 *     ?OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z @ 0x1401A81F0 (-OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x14017BF20 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?GetPsProcessWindowState@tagPROCESSINFO@@QEBA?AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolicy@1@@Z @ 0x1401CC3C4 (-GetPsProcessWindowState@tagPROCESSINFO@@QEBA-AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolic.c)
 *     Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401CC878 (Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall CQoSReport::ReportProcess(CQoSReport *this, struct tagPROCESSINFO *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  int PsProcessWindowState; // esi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  int v11; // eax
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // [rsp+30h] [rbp-18h] BYREF
  int v18; // [rsp+38h] [rbp-10h]
  int v19; // [rsp+3Ch] [rbp-Ch]
  char v20; // [rsp+50h] [rbp+8h] BYREF
  int v21; // [rsp+60h] [rbp+18h] BYREF

  if ( *(_BYTE *)this )
  {
    v4 = (_QWORD *)((char *)a2 + 1120);
    if ( (_QWORD *)*v4 == v4 )
    {
      v5 = (_QWORD *)((char *)this + 8);
      v6 = *((_QWORD *)this + 1);
      if ( *(_QWORD **)(v6 + 8) != v5 )
        goto LABEL_19;
      *v4 = v6;
      v4[1] = v5;
      *(_QWORD *)(v6 + 8) = v4;
      *v5 = v4;
    }
  }
  else
  {
    PsProcessWindowState = tagPROCESSINFO::GetPsProcessWindowState(a2, 0LL);
    if ( (unsigned int)dword_1402A9F58 > 5 && tlgKeywordOn((__int64)&dword_1402A9F58, 0x200000000004LL) )
    {
      v10 = *((unsigned int *)a2 + 14);
      v20 = PsProcessWindowState;
      v21 = v10;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        v10,
        byte_140281F06,
        v8,
        v9,
        (__int64)&v21,
        (__int64)&v20);
    }
    v17 = *(_QWORD *)a2;
    v18 = PsProcessWindowState;
    v19 = 0;
    PsSetProcessesWindowState(1LL, &v17);
  }
  if ( !(unsigned int)Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline() )
    return;
  v11 = tagPROCESSINFO::GetPsProcessWindowState(a2, 1LL);
  v12 = (_QWORD *)((char *)a2 + 1136);
  v13 = (_QWORD *)*((_QWORD *)a2 + 142);
  if ( v13 == (_QWORD *)((char *)a2 + 1136) )
  {
    if ( !v11 )
      return;
    v14 = (_QWORD *)((char *)this + 24);
    v15 = *((_QWORD *)this + 3);
    if ( *(CQoSReport **)(v15 + 8) == (CQoSReport *)((char *)this + 24) )
    {
      *v12 = v15;
      *((_QWORD *)a2 + 143) = v14;
      *(_QWORD *)(v15 + 8) = v12;
      *v14 = v12;
      return;
    }
LABEL_19:
    __fastfail(3u);
  }
  if ( !v11 )
  {
    if ( (_QWORD *)v13[1] == v12 )
    {
      v16 = (_QWORD *)*((_QWORD *)a2 + 143);
      if ( (_QWORD *)*v16 == v12 )
      {
        *v16 = v13;
        v13[1] = v16;
        *((_QWORD *)a2 + 143) = (char *)a2 + 1136;
        *v12 = v12;
        return;
      }
    }
    goto LABEL_19;
  }
}
