/*
 * XREFs of ?IncludeLastBatchMemoryInDump@CComposition@@SAXXZ @ 0x18020C2A0
 * Callers:
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x1801254E0 (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDA.c)
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 *     ?FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z @ 0x18020C1F8 (-FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     memcpy_s_2 @ 0x18022BBD8 (memcpy_s_2.c)
 */

void CComposition::IncludeLastBatchMemoryInDump(void)
{
  void *v0; // rax
  const void *v1; // r8
  void *v2; // rbx

  v0 = MIDL_user_allocate((unsigned int)CComposition::s_cbLastCommandBuffer_ForFailfast);
  v2 = v0;
  if ( v0 )
  {
    memcpy_s_2(
      v0,
      (unsigned int)CComposition::s_cbLastCommandBuffer_ForFailfast,
      v1,
      (unsigned int)CComposition::s_cbLastCommandBuffer_ForFailfast);
    CComposition::s_pLastCommandBuffer_ForFailfast = v2;
  }
}
