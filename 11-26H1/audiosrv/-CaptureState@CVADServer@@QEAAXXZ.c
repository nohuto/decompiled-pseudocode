/*
 * XREFs of ?CaptureState@CVADServer@@QEAAXXZ @ 0x18008D6B4
 * Callers:
 *     ?Callback@AudioSrvTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180111660 (-Callback@AudioSrvTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180016090 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U3@U?$_tlgWrapperByVal@$00@@U3@U2@U?$_tlgWrapperByVal@$01@@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U3@U5@U3@U3@U3@U3@U6@U4@U3@U3@U3@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4555555AEBU?$_tlgWrapperByVal@$00@@54AEBU?$_tlgWrapperByVal@$01@@55AEBU?$_tlgWrapperByRef@$0BA@@@575555865553@Z @ 0x18006D8C4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U3@U3@U3@U3@U3@U3.c)
 *     ?CapturePolicyVolumeState@CAudioStream@@QEAAXXZ @ 0x180079FE0 (-CapturePolicyVolumeState@CAudioStream@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVADServer::CaptureState(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  ULONG_PTR v3; // r14
  char v4; // r15
  float v5; // xmm6_4
  int v6; // r12d
  _WORD *SpinCount; // rax
  HANDLE *p_OwningThread; // rdi
  CAudioStream *v9; // rax
  float *v10; // rcx
  __int64 v11; // rdx
  struct AudioSrvTelemetryProvider *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR v15; // rcx
  __int16 *v16; // rax
  GUID *v17; // rax
  const wchar_t *v18; // rax
  CAudioStream *v19; // rcx
  char v20; // [rsp+118h] [rbp-80h] BYREF
  bool v21; // [rsp+119h] [rbp-7Fh] BYREF
  __int16 v22; // [rsp+11Ah] [rbp-7Eh] BYREF
  __int16 v23; // [rsp+11Ch] [rbp-7Ch] BYREF
  int v24; // [rsp+120h] [rbp-78h] BYREF
  int OwningThread; // [rsp+124h] [rbp-74h] BYREF
  int DebugInfo; // [rsp+128h] [rbp-70h] BYREF
  float v27; // [rsp+12Ch] [rbp-6Ch] BYREF
  int OwningThread_high; // [rsp+130h] [rbp-68h] BYREF
  int v29; // [rsp+134h] [rbp-64h] BYREF
  LONG RecursionCount; // [rsp+138h] [rbp-60h] BYREF
  LONG LockCount; // [rsp+13Ch] [rbp-5Ch] BYREF
  int v32; // [rsp+140h] [rbp-58h] BYREF
  int v33; // [rsp+144h] [rbp-54h] BYREF
  int DebugInfo_high; // [rsp+148h] [rbp-50h] BYREF
  int v35; // [rsp+14Ch] [rbp-4Ch] BYREF
  int v36; // [rsp+150h] [rbp-48h] BYREF
  int v37; // [rsp+154h] [rbp-44h] BYREF
  int v38; // [rsp+158h] [rbp-40h] BYREF
  int v39; // [rsp+15Ch] [rbp-3Ch] BYREF
  int v40; // [rsp+160h] [rbp-38h] BYREF
  int v41; // [rsp+164h] [rbp-34h] BYREF
  HANDLE LockSemaphore; // [rsp+168h] [rbp-30h] BYREF
  ULONG_PTR *p_SpinCount; // [rsp+170h] [rbp-28h] BYREF
  GUID *v44; // [rsp+178h] [rbp-20h] BYREF
  const wchar_t *v45; // [rsp+180h] [rbp-18h] BYREF
  const wchar_t *v46; // [rsp+188h] [rbp-10h] BYREF
  const wchar_t *p_Type; // [rsp+190h] [rbp-8h] BYREF
  HANDLE v48; // [rsp+198h] [rbp+0h] BYREF
  struct _RTL_CRITICAL_SECTION *v49; // [rsp+1A0h] [rbp+8h] BYREF
  GUID v50; // [rsp+1A8h] [rbp+10h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((unsigned __int64)&this[5] & -(__int64)TryEnterCriticalSection(this + 5));
  v49 = v2;
  v50 = GUID_00000000_0000_0000_0000_000000000000;
  v3 = 0LL;
  v4 = 0;
  v5 = FLOAT_N1_0;
  v6 = 0;
  SpinCount = (_WORD *)this[3].SpinCount;
  if ( *SpinCount == 0xFFFE )
  {
    v3 = this[3].SpinCount;
  }
  else
  {
    v50 = GUID_00000000_0000_0010_8000_00aa00389b71;
    v50.Data1 = (unsigned __int16)*SpinCount;
  }
  p_OwningThread = &this[4].OwningThread;
  if ( v2 )
  {
    v9 = (CAudioStream *)*p_OwningThread;
    if ( *p_OwningThread )
    {
      if ( *((_QWORD *)v9 + 6) )
      {
        v4 = *((_BYTE *)v9 + 232);
        v5 = FLOAT_1_0;
        if ( *((_DWORD *)v9 + 20) )
        {
          v10 = (float *)*((_QWORD *)v9 + 14);
          v11 = *((unsigned int *)v9 + 20);
          do
          {
            if ( v5 > *v10 )
              v5 = *v10;
            ++v10;
            --v11;
          }
          while ( v11 );
        }
        v6 = *((_DWORD *)v9 + 158);
      }
    }
  }
  v12 = AudioSrvTelemetryProvider::Instance();
  if ( **((_DWORD **)v12 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v12 + 1), 4LL) )
  {
    LockSemaphore = this[10].LockSemaphore;
    OwningThread = (int)this[10].OwningThread;
    DebugInfo = (int)this[10].DebugInfo;
    v27 = v5;
    v20 = v4;
    p_SpinCount = &this[8].SpinCount;
    OwningThread_high = HIDWORD(this[8].OwningThread);
    v29 = (int)this[8].OwningThread;
    RecursionCount = this[8].RecursionCount;
    LockCount = this[8].LockCount;
    v15 = this[3].SpinCount;
    v16 = (__int16 *)(v3 + 18);
    if ( !v3 )
      v16 = (__int16 *)(v15 + 14);
    v22 = *v16;
    if ( v3 )
    {
      v24 = *(_DWORD *)(v3 + 20);
      v17 = (GUID *)(v3 + 24);
    }
    else
    {
      v24 = 0;
      v17 = &v50;
    }
    v44 = v17;
    v32 = *(_DWORD *)(v15 + 8);
    v33 = *(_DWORD *)(v15 + 4);
    v23 = *(_WORD *)(v15 + 2);
    v18 = L"WAVEFORMATEXTENSIBLE";
    if ( !v3 )
      v18 = L"WAVEFORMATEX";
    v45 = v18;
    DebugInfo_high = HIDWORD(this[6].DebugInfo);
    v21 = HIDWORD(this[7].LockSemaphore) == 1;
    v35 = HIDWORD(this[8].DebugInfo);
    v36 = this[7].SpinCount;
    v37 = (int)this[6].DebugInfo;
    v38 = (int)this[7].LockSemaphore;
    v39 = v6;
    v40 = v37;
    v46 = (const wchar_t *)this[4].SpinCount;
    v41 = (int)this[1].DebugInfo;
    p_Type = &this[3].DebugInfo->Type;
    v48 = this[13].LockSemaphore;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v13,
      byte_1801A7630,
      v13,
      v14,
      (__int64)&v48,
      &p_Type,
      (__int64)&v41,
      &v46,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v21,
      (__int64)&DebugInfo_high,
      &v45,
      (__int64)&v23,
      (__int64)&v33,
      (__int64)&v32,
      (__int64 *)&v44,
      (__int64)&v24,
      (__int64)&v22,
      (__int64)&LockCount,
      (__int64)&RecursionCount,
      (__int64)&v29,
      (__int64)&OwningThread_high,
      (__int64 *)&p_SpinCount,
      (__int64)&v20,
      (__int64)&v27,
      (__int64)&DebugInfo,
      (__int64)&OwningThread,
      (__int64)&LockSemaphore);
  }
  if ( v2 )
  {
    v19 = (CAudioStream *)*p_OwningThread;
    if ( *p_OwningThread )
    {
      if ( *((_QWORD *)v19 + 6) )
        CAudioStream::CapturePolicyVolumeState(v19);
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v49);
}
