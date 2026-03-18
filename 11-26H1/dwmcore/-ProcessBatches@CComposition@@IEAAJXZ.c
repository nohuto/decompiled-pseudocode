/*
 * XREFs of ?ProcessBatches@CComposition@@IEAAJXZ @ 0x18013FCE0
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::ProcessBatches(CComposition *this, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // r8
  int v6; // r14d
  unsigned int i; // ebx
  __int64 v8; // rdi
  int v9; // eax
  int v10; // ebx
  CComposition *v12; // [rsp+38h] [rbp-29h] BYREF
  int v13; // [rsp+40h] [rbp-21h] BYREF
  int v14; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+58h] [rbp-9h] BYREF
  CComposition **v16; // [rsp+68h] [rbp+7h]
  __int64 v17; // [rsp+70h] [rbp+Fh]
  int *v18; // [rsp+78h] [rbp+17h]
  __int64 v19; // [rsp+80h] [rbp+1Fh]
  CComposition **v20; // [rsp+88h] [rbp+27h]
  __int64 v21; // [rsp+90h] [rbp+2Fh]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v12 = this;
    v16 = &v12;
    v17 = 8LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      (const EVENT_DESCRIPTOR *)"6",
      a3,
      2u,
      &v15);
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, CComposition *, _QWORD))(**((_QWORD **)this + 708) + 24LL))(
         *((_QWORD *)this + 708),
         this,
         *((_QWORD *)this + 110));
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0xD4Eu, 0LL);
  for ( i = 0; i < *((_DWORD *)this + 214); ++i )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 104) + 8LL * i);
    if ( v8 )
    {
      if ( *(_DWORD *)(v8 + 128) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
        {
          LODWORD(v12) = *(_DWORD *)(v8 + 128);
          v14 = *(_DWORD *)(v8 + 28);
          v13 = *(_DWORD *)(v8 + 24);
          v16 = (CComposition **)&v13;
          v18 = &v14;
          v20 = &v12;
          v17 = 4LL;
          v19 = 4LL;
          v21 = 4LL;
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &CHANNELBATCHES_PROCESSED,
            v5,
            4u,
            &v15);
        }
        dword_1803DE408 += *(_DWORD *)(v8 + 128);
        ++*(_DWORD *)(*(_QWORD *)(v8 + 64) + 36LL);
        *(_DWORD *)(v8 + 128) = 0;
      }
      *(_BYTE *)(v8 + 112) = 0;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v12 = this;
    v16 = &v12;
    v17 = 8LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT_Stop,
      v5,
      2u,
      &v15);
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 711) + 24LL))(*((_QWORD *)this + 711), 3LL);
  v10 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0xD5Bu, 0LL);
  if ( v6 && (v6 < 0 || v10 >= 0) )
    return (unsigned int)v6;
  else
    return (unsigned int)v10;
}
