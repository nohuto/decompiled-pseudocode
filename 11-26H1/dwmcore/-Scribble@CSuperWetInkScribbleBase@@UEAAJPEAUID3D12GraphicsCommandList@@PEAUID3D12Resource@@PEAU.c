/*
 * XREFs of ?Scribble@CSuperWetInkScribbleBase@@UEAAJPEAUID3D12GraphicsCommandList@@PEAUID3D12Resource@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAW4D3D12_RESOURCE_STATES@@PEAUComputeScribbleLatencyData@@PEAUtagRECT@@@Z @ 0x1801C42E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U1@U1@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@53355@Z @ 0x180005594 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapS.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0qqqxx_EventWriteTransfer @ 0x1801C44C0 (McTemplateU0qqqxx_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkScribbleBase::Scribble(
        CSuperWetInkScribbleBase *this,
        struct ID3D12GraphicsCommandList *a2,
        struct ID3D12Resource *a3,
        struct IDCompositionDirectInkSuperWetRenderer *a4,
        enum D3D12_RESOURCE_STATES *a5,
        struct ComputeScribbleLatencyData *a6,
        struct tagRECT *a7)
{
  int v11; // esi
  struct tagRECT v12; // xmm0
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rdx
  bool v20; // zf
  __int64 v21; // rax
  bool v22[4]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v23[5]; // [rsp+74h] [rbp-8Ch] BYREF
  struct tagRECT *v24; // [rsp+88h] [rbp-78h] BYREF
  int v25[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v26; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v27[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v29; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-20h]
  _QWORD v32[2]; // [rsp+E8h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v24 = a7;
  v23[0] = 0;
  v27[0] = 0LL;
  v26 = 0LL;
  *(_QWORD *)v25 = 0LL;
  v11 = (*(__int64 (__fastcall **)(CSuperWetInkScribbleBase *, _DWORD *, _QWORD *, __int64 *, int *))(*(_QWORD *)this + 88LL))(
          this,
          v23,
          v27,
          &v26,
          v25);
  if ( v11 < 0 )
  {
    v19 = 31LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\superwetinkscribble.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  *((_QWORD *)a6 + 6) = *(_QWORD *)v25;
  *((_QWORD *)a6 + 2) = v26;
  *((_QWORD *)a6 + 1) = v27[0];
  v12 = *(struct tagRECT *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 2) + 24LL))(
                             *((_QWORD *)this + 2),
                             v32);
  v29 = 0LL;
  v30 = 0LL;
  *v24 = v12;
  v13 = *((_QWORD *)this + 2);
  v31 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, struct IDCompositionDirectInkSuperWetRenderer *, struct ID3D12GraphicsCommandList *, struct ID3D12Resource *, enum D3D12_RESOURCE_STATES *, __int128 *))(*(_QWORD *)v13 + 48LL))(
          v13,
          a4,
          a2,
          a3,
          a5,
          &v29);
  if ( v11 < 0 )
  {
    v19 = 44LL;
    goto LABEL_11;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2));
  *((_DWORD *)this + 6) = v23[0];
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80000) != 0 )
    McTemplateU0qqqxx_EventWriteTransfer(v15, v14, DWORD2(v29), v29, SBYTE4(v29), v30, SBYTE8(v30));
  if ( (unsigned int)dword_1803DC848 > 4 && (qword_1803DC858 & 2) != 0 && (qword_1803DC860 & 2) == qword_1803DC860 )
  {
    v23[1] = DWORD1(v29);
    v23[2] = v29;
    v27[1] = *((_QWORD *)&v30 + 1);
    v27[2] = v30;
    v23[3] = v31;
    v28 = *((_QWORD *)this + 6);
    v20 = *((_DWORD *)this + 10) == 2;
    LODWORD(v24) = *((_DWORD *)this + 10);
    v21 = *((_QWORD *)this + 4);
    v22[0] = v20;
    v32[0] = v21;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v15,
      (__int64)&unk_1803B6BDB,
      v16,
      v17,
      (__int64)v32,
      (__int64)v22,
      (__int64)&v24,
      &v28);
  }
  *(_QWORD *)a6 = v29;
  *((_QWORD *)a6 + 3) = v30;
  *((_QWORD *)a6 + 5) = *((_QWORD *)this + 4);
  return 0LL;
}
