/*
 * XREFs of ??0CEndpointVolumeState@@QEAA@PEAUIVolumeProvider@@PEBG@Z @ 0x1800482AC
 * Callers:
 *     ??$make_unique@VCEndpointVolumeState@@PEAUIVolumeProvider@@AEAPEBG$0A@@std@@YA?AV?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@0@$$QEAPEAUIVolumeProvider@@AEAPEBG@Z @ 0x180048240 (--$make_unique@VCEndpointVolumeState@@PEAUIVolumeProvider@@AEAPEBG$0A@@std@@YA-AV-$unique_ptr@VC.c)
 * Callees:
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x18001FE70 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_CEndpointVolumeNotificationDelegator@CEndpointVolumeState@@QEAA@PEAV1@@Z @ 0x18004853C (--0_CEndpointVolumeNotificationDelegator@CEndpointVolumeState@@QEAA@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
CEndpointVolumeState *__fastcall CEndpointVolumeState::CEndpointVolumeState(
        CEndpointVolumeState *this,
        struct IVolumeProvider *a2,
        const unsigned __int16 *a3)
{
  _QWORD *v6; // rdi
  __int64 (__fastcall *v7)(struct IVolumeProvider *, const unsigned __int16 *, _QWORD *); // r14
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v16; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 1065353216;
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  v6 = (_QWORD *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  *((_BYTE *)this + 32) = 0;
  *((_DWORD *)this + 9) = 0;
  CEndpointVolumeState::_CEndpointVolumeNotificationDelegator::_CEndpointVolumeNotificationDelegator(
    (CEndpointVolumeState *)((char *)this + 40),
    this);
  v7 = *(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, _QWORD *))(*(_QWORD *)a2 + 40LL);
  v8 = *v6;
  *v6 = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = v7(a2, a3, v6);
  if ( v9 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, CEndpointVolumeState *))(*(_QWORD *)*v6 + 72LL))(*v6, this);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        54LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
        (const char *)(unsigned int)v10);
      *(_DWORD *)this = 0;
    }
    *((float *)this + 1) = ConvertDbToEngineVolume(COERCE_DOUBLE((unsigned __int64)*(_DWORD *)this));
    v16 = 0;
    v11 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v6 + 152LL))(*v6, &v16);
    if ( v11 >= 0 )
      *((_BYTE *)this + 8) = v16 != 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        61LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
        (const char *)(unsigned int)v11);
    v12 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 3) + 232LL))(
            *((_QWORD *)this + 3),
            (char *)this + 40);
    v13 = v12;
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        68LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
        (const char *)(unsigned int)v12);
    *((_BYTE *)this + 32) = v13 >= 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      49LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\endpointvolumestate\\endpointvolumestate.cpp",
      (const char *)(unsigned int)v9);
  }
  return this;
}
