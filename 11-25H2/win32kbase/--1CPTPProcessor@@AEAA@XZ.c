/*
 * XREFs of ??1CPTPProcessor@@AEAA@XZ @ 0x1402110F4
 * Callers:
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140211590 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1400CF2BC (--1CTouchProcessor@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall CPTPProcessor::~CPTPProcessor(CPTPProcessor *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_QWORD *)this + 21) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  v2 = *((_QWORD *)this + 69);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
  *((_DWORD *)this + 131) = 0;
  CInputDest::~CInputDest((CPTPProcessor *)((char *)this + 400));
  CInputDest::~CInputDest((CPTPProcessor *)((char *)this + 400));
  CTouchProcessor::~CTouchProcessor((char **)this);
}
