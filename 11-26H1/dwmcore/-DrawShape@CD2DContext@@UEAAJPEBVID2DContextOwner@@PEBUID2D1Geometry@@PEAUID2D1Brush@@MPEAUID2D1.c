/*
 * XREFs of ?DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18018AF70
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180069EE0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18006ED40 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0ffff_EventWriteTransfer @ 0x18018B868 (McTemplateU0ffff_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::DrawShape(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct ID2D1Geometry *a3,
        struct ID2D1Brush *a4,
        float a5,
        struct ID2D1StrokeStyle1 *a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_PRIMITIVE_BLEND a8)
{
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r8
  void (__fastcall **v15)(const struct ID2DContextOwner *, struct _EVENT_DATA_DESCRIPTOR *); // rax
  __int64 v16; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // eax
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // r8
  int v24; // [rsp+40h] [rbp-61h] BYREF
  int v25; // [rsp+48h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+50h] [rbp-51h] BYREF
  int *v27; // [rsp+60h] [rbp-41h]
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+68h] [rbp-39h] BYREF
  int *v29; // [rsp+78h] [rbp-29h]
  __int64 v30; // [rsp+80h] [rbp-21h]
  int *v31; // [rsp+88h] [rbp-19h]
  __int64 v32; // [rsp+90h] [rbp-11h]

  CD2DContext::FlushDrawList(this, (__int64)a2, (__int64)a3);
  v12 = 0;
  CD2DContext::EnsureBeginDraw(this, v13, v14);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v25 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 8LL))(a2);
    v24 = 3;
    v29 = &v24;
    v30 = 4LL;
    v31 = &v25;
    v32 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      v18,
      3u,
      &v28);
  }
  v29 = 0LL;
  v15 = *(void (__fastcall ***)(const struct ID2DContextOwner *, struct _EVENT_DATA_DESCRIPTOR *))a2;
  v28 = 0LL;
  (*v15)(a2, &v28);
  (*(void (__fastcall **)(_QWORD, struct _EVENT_DATA_DESCRIPTOR *))(**((_QWORD **)this + 25) + 240LL))(
    *((_QWORD *)this + 25),
    &v28);
  if ( a8 != *((_DWORD *)this + 97) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 25) + 624LL))(
      *((_QWORD *)this + 25),
      (unsigned int)a8);
    *((_DWORD *)this + 97) = a8;
  }
  if ( a7 != *((_DWORD *)this + 96) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 25) + 256LL))(
      *((_QWORD *)this + 25),
      (unsigned int)a7);
    *((_DWORD *)this + 96) = a7;
  }
  v26 = v28;
  v27 = v29;
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    v19 = *(_QWORD *)a3;
    v28 = 0LL;
    v20 = (*(__int64 (__fastcall **)(const struct ID2D1Geometry *, __int64, struct ID2D1StrokeStyle1 *, struct _EVENT_DATA_DESCRIPTOR *, _DWORD, struct _EVENT_DATA_DESCRIPTOR *))(v19 + 40))(
            a3,
            v16,
            a6,
            &v26,
            LODWORD(FLOAT_0_25),
            &v28);
    v12 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x3DFu, 0LL);
      return v12;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0ffff_EventWriteTransfer(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
        v21,
        v22,
        v28.Size,
        v28.Type);
  }
  (*(void (__fastcall **)(_QWORD, const struct ID2D1Geometry *, struct ID2D1Brush *))(**((_QWORD **)this + 25) + 176LL))(
    *((_QWORD *)this + 25),
    a3,
    a4);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v24 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 8LL))(a2);
    v30 = 4LL;
    v29 = &v25;
    v32 = 4LL;
    v31 = &v24;
    v25 = 3;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Stop,
      v23,
      3u,
      &v28);
  }
  return v12;
}
