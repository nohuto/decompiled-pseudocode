/*
 * XREFs of ??1?$com_ptr_t@VCChannel@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801DD7C8
 * Callers:
 *     ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z @ 0x180153B44 (-CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z.c)
 *     ?Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@PEAPEAV1@@Z @ 0x180153C74 (-Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Release@CChannel@@UEAAKXZ @ 0x180233670 (-Release@CChannel@@UEAAKXZ.c)
 */

unsigned int __fastcall wil::com_ptr_t<CChannel,wil::err_returncode_policy>::~com_ptr_t<CChannel,wil::err_returncode_policy>(
        CChannel **a1)
{
  CChannel *v1; // rcx
  unsigned int result; // eax

  v1 = *a1;
  if ( v1 )
    return CChannel::Release(v1);
  return result;
}
