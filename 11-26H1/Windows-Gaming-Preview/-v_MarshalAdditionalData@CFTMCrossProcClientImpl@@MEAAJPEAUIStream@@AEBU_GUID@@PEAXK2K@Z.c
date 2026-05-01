/*
 * XREFs of ?v_MarshalAdditionalData@CFTMCrossProcClientImpl@@MEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x180043100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFTMCrossProcClientImpl::v_MarshalAdditionalData(
        CFTMCrossProcClientImpl *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  IStream *v7; // rcx
  HRESULT v8; // ebx

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 88);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v7 = (IStream *)*((_QWORD *)this + 10);
  if ( v7 )
  {
    v8 = IStream_Reset(v7);
    if ( v8 >= 0 )
      v8 = (*(__int64 (__fastcall **)(_QWORD, struct IStream *, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 10) + 56LL))(
             *((_QWORD *)this + 10),
             a2,
             *((unsigned int *)this + 8),
             0LL,
             0LL);
  }
  else
  {
    v8 = -2147418113;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return (unsigned int)v8;
}
