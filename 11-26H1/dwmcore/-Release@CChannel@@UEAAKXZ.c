/*
 * XREFs of ?Release@CChannel@@UEAAKXZ @ 0x180233670
 * Callers:
 *     ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z @ 0x180153B44 (-CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z.c)
 *     ?Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@PEAPEAV1@@Z @ 0x180153C74 (-Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@PEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VCChannel@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801DD7C8 (--1-$com_ptr_t@VCChannel@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x1802322A4 (--1CChannel@@AEAA@XZ.c)
 */

__int64 __fastcall CChannel::Release(CChannel *this, unsigned int a2)
{
  unsigned __int32 v3; // edi

  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v3 && this )
  {
    CChannel::~CChannel(this, a2);
    operator delete(this);
  }
  return v3;
}
