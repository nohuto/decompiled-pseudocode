/*
 * XREFs of ?VidMmInitDmaPoolGlobals@@YAJXZ @ 0x1400A409C
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x140125A90 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036990 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 VidMmInitDmaPoolGlobals(void)
{
  unsigned __int64 v0; // r8
  unsigned __int64 v1; // rax
  struct _ERESOURCE *v2; // rax
  __int64 v3; // rcx
  NTSTATUS v5; // ebx
  __int64 v6; // rcx

  qword_14008A9C8 = (__int64)&qword_14008A9C0;
  qword_14008A9C0 = (__int64)&qword_14008A9C0;
  dword_14008AA98 = dword_14008A448;
  dword_14008AA94 = dword_14008A44C;
  qword_14008AA70 = (unsigned int)dword_14008A450;
  v0 = (unsigned int)dword_14008A450 / 0x64uLL;
  qword_14008AA68 = 95 * v0;
  qword_14008AA60 = 85 * v0;
  qword_14008AA58 = 75 * v0;
  qword_14008AA40 = (unsigned int)dword_14008A454;
  qword_14008AA10 = (unsigned int)dword_14008A454;
  v1 = (unsigned int)dword_14008A454 / 0x64uLL;
  qword_14008AA30 = 85 * v1;
  qword_14008AA00 = 85 * v1;
  qword_14008AA38 = 95 * v1;
  qword_14008AA08 = 95 * v1;
  qword_14008AA28 = 75 * v1;
  qword_14008A9F8 = 75 * v1;
  v2 = (struct _ERESOURCE *)operator new(104LL, 0x39326956u, 64LL);
  Resource = v2;
  if ( v2 )
  {
    v5 = ExInitializeResourceLite(v2);
    if ( v5 >= 0 )
    {
      dword_14008AA90 = dword_14008A458;
      return 0LL;
    }
    else
    {
      operator delete(Resource);
      Resource = 0LL;
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2024;
      DxgkLogInternalTriageEvent(v6, 0x40000LL);
      return (unsigned int)v5;
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2015;
    DxgkLogInternalTriageEvent(v3, 0x40000LL);
    return 3221225495LL;
  }
}
