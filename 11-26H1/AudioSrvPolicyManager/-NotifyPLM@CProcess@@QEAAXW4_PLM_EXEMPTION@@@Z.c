/*
 * XREFs of ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180011340
 * Callers:
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000F768 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000FDB0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180010540 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x180012700 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180020618 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?Cleanup@CProcess@@QEAAJH@Z @ 0x1800381E8 (-Cleanup@CProcess@@QEAAJH@Z.c)
 *     ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@@Z @ 0x180039418 (-RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55@Z @ 0x180001080 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@@-$_tlgWriteTe.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000F6B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18001BF6C (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _tlgKeywordOn @ 0x1800224B0 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::NotifyPLM(__int64 a1, int a2)
{
  HRESULT Instance; // r14d
  char v4; // r15
  int v5; // edx
  _QWORD *v6; // rbx
  __int64 v7; // rbx
  int v8; // edi
  _QWORD *v9; // rax
  __int64 v10; // rdx
  int v11; // r8d
  int *v12; // rcx
  HRESULT v13; // eax
  __int64 v14; // rax
  int *v15; // rbx
  const struct _tlgProvider_t *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rdi
  HRESULT v20; // eax
  __int64 v21; // [rsp+50h] [rbp-38h] BYREF
  void *v22; // [rsp+58h] [rbp-30h] BYREF
  int v23; // [rsp+98h] [rbp+10h] BYREF
  int v24; // [rsp+A0h] [rbp+18h] BYREF
  int v25; // [rsp+A8h] [rbp+20h] BYREF

  Instance = 0;
  v4 = 0;
  v5 = a2 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      if ( *(_DWORD *)(a1 + 416) )
        return;
      if ( !*(_DWORD *)(a1 + 232) )
      {
        v4 = 1;
        v6 = (_QWORD *)(a1 + 240);
        if ( !*(_QWORD *)(a1 + 240) )
        {
          *v6 = 0LL;
          Instance = CoCreateInstance(
                       &CLSID_OSTaskCompletion,
                       0LL,
                       1u,
                       &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                       (LPVOID *)(a1 + 240));
          if ( Instance < 0 )
            goto LABEL_30;
        }
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v6 + 32LL))(
                     *v6,
                     *(_QWORD *)(a1 + 152),
                     1LL);
        if ( Instance < 0 )
          goto LABEL_30;
        *(_DWORD *)(a1 + 232) = 1;
      }
    }
  }
  else if ( *(_DWORD *)(a1 + 232) )
  {
    v4 = 1;
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 240) + 40LL))(*(_QWORD *)(a1 + 240));
    if ( v13 != -2147023728 )
      Instance = v13;
    if ( Instance < 0 )
      goto LABEL_30;
    *(_DWORD *)(a1 + 232) = 0;
  }
  v7 = *(_QWORD *)(a1 + 224);
  if ( v7 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 32));
    v8 = 4;
    if ( *(_DWORD *)(v7 + 612) )
    {
      v8 = *(_DWORD *)(v7 + 616);
    }
    else
    {
      v9 = *(_QWORD **)(v7 + 72);
      while ( v9 )
      {
        v10 = v9[2];
        v9 = (_QWORD *)*v9;
        if ( !*(_DWORD *)(v10 + 416) || *(_QWORD *)(v10 + 360) )
        {
          v11 = *(_DWORD *)(v10 + 480);
          v12 = (int *)(v11 ? v10 + 484 : v10 + 312);
          if ( *v12 < v8 )
          {
            if ( v11 )
              v8 = *(_DWORD *)(v10 + 484);
            else
              v8 = *(_DWORD *)(v10 + 312);
          }
        }
      }
    }
    if ( v7 != -32 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v7 + 32));
  }
  else
  {
    v14 = 484LL;
    if ( !*(_DWORD *)(a1 + 480) )
      v14 = 312LL;
    v8 = *(_DWORD *)(v14 + a1);
  }
  if ( !v8 && *(_DWORD *)(a1 + 436) )
  {
    v15 = (int *)(a1 + 236);
    if ( !*(_DWORD *)(a1 + 236) )
    {
      v19 = (_QWORD *)(a1 + 248);
      if ( *(_QWORD *)(a1 + 248)
        || (*v19 = 0LL,
            Instance = CoCreateInstance(
                         &CLSID_OSTaskCompletion,
                         0LL,
                         1u,
                         &GUID_c7e40572_c36a_43ea_9a40_f3b168da5558,
                         (LPVOID *)(a1 + 248)),
            Instance >= 0) )
      {
        Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v19 + 32LL))(
                     *v19,
                     *(_QWORD *)(a1 + 152),
                     0x80000LL);
        if ( Instance >= 0 )
        {
          *v15 = 1;
          v15 = (int *)(a1 + 236);
          goto LABEL_38;
        }
      }
      goto LABEL_30;
    }
LABEL_28:
    if ( v4 != 1 )
      return;
    goto LABEL_38;
  }
  v15 = (int *)(a1 + 236);
  if ( !*(_DWORD *)(a1 + 236) )
    goto LABEL_28;
  v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 248) + 40LL))(*(_QWORD *)(a1 + 248));
  Instance = 0;
  if ( v20 != -2147023728 )
    Instance = v20;
  if ( Instance >= 0 )
  {
    *v15 = 0;
LABEL_38:
    v16 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    if ( *(_DWORD *)v16 > 4u )
    {
      if ( (unsigned __int8)tlgKeywordOn(v16, 0x20000LL) )
      {
        v23 = *v15;
        v24 = *(_DWORD *)(a1 + 232);
        v25 = *(_DWORD *)(a1 + 160);
        v21 = *(_QWORD *)(a1 + 208);
        v22 = *(void **)(a1 + 176);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v17,
          (__int64)&unk_18005A15C,
          v17,
          v18,
          &v22,
          (__int64)&v21,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v23);
      }
    }
    return;
  }
LABEL_30:
  if ( Instance != -805305819 )
    AudPolicyLogError("CProcess::NotifyPLM", 3468, Instance);
}
