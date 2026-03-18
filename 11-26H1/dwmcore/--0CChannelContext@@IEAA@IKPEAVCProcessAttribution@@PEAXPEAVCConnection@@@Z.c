/*
 * XREFs of ??0CChannelContext@@IEAA@IKPEAVCProcessAttribution@@PEAXPEAVCConnection@@@Z @ 0x18020BCF0
 * Callers:
 *     ?Create@CChannelContext@@SAJIK_KPEAXPEAVCConnection@@PEAPEAV1@@Z @ 0x180163D70 (-Create@CChannelContext@@SAJIK_KPEAXPEAVCConnection@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

CChannelContext *__fastcall CChannelContext::CChannelContext(
        CChannelContext *this,
        int a2,
        int a3,
        struct CProcessAttribution *a4,
        void *a5,
        struct CConnection *a6)
{
  CMILRefCountImpl *v7; // rcx
  CChannelContext *result; // rax

  v7 = (CChannelContext *)((char *)this + 8);
  *(_DWORD *)v7 = 0;
  *(_QWORD *)this = &CChannelContext::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = a5;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_WORD *)this + 56) = 1;
  *((_DWORD *)this + 34) = 0;
  CMILRefCountImpl::AddReference(v7);
  *((_QWORD *)this + 7) = a6;
  *((_DWORD *)this + 6) = a2;
  *((_DWORD *)this + 7) = a3;
  *((_QWORD *)this + 8) = a4;
  if ( a4 )
    CMILRefCountImpl::AddReference((struct CProcessAttribution *)((char *)a4 + 8));
  result = this;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *((_DWORD *)this + 33) = 0;
  return result;
}
