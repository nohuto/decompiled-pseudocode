/*
 * XREFs of ??0CChannel@@AEAA@PEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@@Z @ 0x180232230
 * Callers:
 *     ?Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@PEAPEAV1@@Z @ 0x180153C74 (-Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CChannel *__fastcall CChannel::CChannel(
        CChannel *this,
        struct CInternalMilCmdConnection *a2,
        struct IDwmChannelProvider *a3)
{
  *(_QWORD *)this = &CChannel::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  *((_QWORD *)this + 7) = a2;
  *((_QWORD *)this + 8) = a3;
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  return this;
}
