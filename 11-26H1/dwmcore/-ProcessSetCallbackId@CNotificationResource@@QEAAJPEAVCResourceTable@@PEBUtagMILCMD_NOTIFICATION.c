/*
 * XREFs of ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x180180E30
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNotificationResource::ProcessSetCallbackId(
        CNotificationResource *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID *a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // rax
  int v11; // esi
  int v12; // esi
  unsigned int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *((unsigned int *)a2 + 12);
  v5 = *((_QWORD *)this + 3);
  if ( (unsigned int)v3 >= 0x10000
    || (unsigned int)v3 >= *(_DWORD *)(v5 + 856)
    || (v7 = *(volatile signed __int32 **)(*(_QWORD *)(v5 + 832) + 8 * v3)) == 0LL )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x693u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x53u, 0LL);
    return 2147942487LL;
  }
  if ( _InterlockedAdd(v7 + 2, 1u) <= 0 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x18,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v14);
  v8 = *((_QWORD *)this + 7);
  v9 = 0;
  if ( v8 && *(_DWORD *)(v8 + 116) )
  {
    if ( v7 != (volatile signed __int32 *)v8 )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x5Bu, 0LL);
      goto LABEL_12;
    }
    if ( *((_DWORD *)this + 18) )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 3) + 6384LL) + 88LL))(*(_QWORD *)(*((_QWORD *)this + 3) + 6384LL));
  }
  *((_DWORD *)this + 18) = *((_DWORD *)a3 + 2);
  v10 = *(_QWORD *)this;
  *((_QWORD *)this + 7) = v7;
  (*(void (__fastcall **)(CNotificationResource *))(v10 + 192))(this);
LABEL_12:
  v11 = _InterlockedDecrement(v7 + 2);
  if ( v11 < -1 )
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
      (const char *)0x8007029CLL,
      v14);
  if ( !v11 )
  {
    if ( _InterlockedAdd(v7 + 2, 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v14);
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 24LL))(v7);
    v12 = _InterlockedDecrement(v7 + 2);
    if ( v12 < -1 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x26,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v14);
    if ( !v12 )
    {
      if ( _InterlockedDecrement(v7 + 2) < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v14);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 16LL))(v7, 1LL);
    }
  }
  return v9;
}
