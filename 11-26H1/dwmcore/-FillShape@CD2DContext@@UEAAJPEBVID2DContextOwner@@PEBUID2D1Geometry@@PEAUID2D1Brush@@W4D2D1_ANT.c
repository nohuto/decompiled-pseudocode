/*
 * XREFs of ?FillShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18006F2D0
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180069EE0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x18006ED40 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::FillShape(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct ID2D1Geometry *a3,
        struct ID2D1Brush *a4,
        enum D2D1_ANTIALIAS_MODE a5,
        enum D2D1_PRIMITIVE_BLEND a6)
{
  unsigned int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // r8
  void (__fastcall **v13)(const struct ID2DContextOwner *, struct _EVENT_DATA_DESCRIPTOR *); // rax
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r8
  int Ptr_high; // [rsp+30h] [rbp-B9h] BYREF
  int Ptr; // [rsp+38h] [rbp-B1h] BYREF
  ULONG Size; // [rsp+40h] [rbp-A9h] BYREF
  ULONG Reserved; // [rsp+48h] [rbp-A1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+50h] [rbp-99h] BYREF
  ULONG *v25; // [rsp+60h] [rbp-89h]
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+68h] [rbp-81h] BYREF
  ULONG *v27; // [rsp+78h] [rbp-71h]
  __int64 v28; // [rsp+80h] [rbp-69h]
  ULONG *p_Size; // [rsp+88h] [rbp-61h]
  __int64 v30; // [rsp+90h] [rbp-59h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+A0h] [rbp-49h] BYREF
  int *v32; // [rsp+B0h] [rbp-39h]
  __int64 v33; // [rsp+B8h] [rbp-31h]
  int *v34; // [rsp+C0h] [rbp-29h]
  __int64 v35; // [rsp+C8h] [rbp-21h]
  ULONG *v36; // [rsp+D0h] [rbp-19h]
  __int64 v37; // [rsp+D8h] [rbp-11h]
  ULONG *p_Reserved; // [rsp+E0h] [rbp-9h]
  __int64 v39; // [rsp+E8h] [rbp-1h]

  CD2DContext::FlushDrawList(this, (__int64)a2, (__int64)a3);
  v10 = 0;
  CD2DContext::EnsureBeginDraw(this, v11, v12);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    Ptr = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 8LL))(a2);
    Ptr_high = 3;
    v27 = (ULONG *)&Ptr_high;
    v28 = 4LL;
    p_Size = (ULONG *)&Ptr;
    v30 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      v15,
      3u,
      &v26);
  }
  v27 = 0LL;
  v13 = *(void (__fastcall ***)(const struct ID2DContextOwner *, struct _EVENT_DATA_DESCRIPTOR *))a2;
  v26 = 0LL;
  (*v13)(a2, &v26);
  (*(void (__fastcall **)(_QWORD, struct _EVENT_DATA_DESCRIPTOR *))(**((_QWORD **)this + 25) + 240LL))(
    *((_QWORD *)this + 25),
    &v26);
  if ( a6 != *((_DWORD *)this + 97) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 25) + 624LL))(
      *((_QWORD *)this + 25),
      (unsigned int)a6);
    *((_DWORD *)this + 97) = a6;
  }
  if ( a5 != *((_DWORD *)this + 96) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 25) + 256LL))(
      *((_QWORD *)this + 25),
      (unsigned int)a5);
    *((_DWORD *)this + 96) = a5;
  }
  v24 = v26;
  v25 = v27;
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    v16 = *(_QWORD *)a3;
    v26 = 0LL;
    v17 = (*(__int64 (__fastcall **)(const struct ID2D1Geometry *, struct _EVENT_DATA_DESCRIPTOR *, struct _EVENT_DATA_DESCRIPTOR *))(v16 + 32))(
            a3,
            &v24,
            &v26);
    v10 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x3ACu, 0LL);
      return v10;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v32 = &Ptr;
      Reserved = v26.Reserved;
      v34 = &Ptr_high;
      v36 = &Size;
      p_Reserved = &Reserved;
      Size = v26.Size;
      Ptr_high = HIDWORD(v26.Ptr);
      Ptr = v26.Ptr;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT,
        v18,
        5u,
        &v31);
    }
  }
  (*(void (__fastcall **)(_QWORD, const struct ID2D1Geometry *, struct ID2D1Brush *, _QWORD))(**((_QWORD **)this + 25)
                                                                                            + 184LL))(
    *((_QWORD *)this + 25),
    a3,
    a4,
    0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    Size = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 8LL))(a2);
    Reserved = 3;
    v27 = &Reserved;
    v28 = 4LL;
    p_Size = &Size;
    v30 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Stop,
      v19,
      3u,
      &v26);
  }
  return v10;
}
