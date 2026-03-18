/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x1409EA77C
 * Callers:
 *     PsThawMultiProcess @ 0x14051967C (PsThawMultiProcess.c)
 *     MiApplyImageHotPatchRequest @ 0x14086E8A8 (MiApplyImageHotPatchRequest.c)
 *     PsMapSystemDlls @ 0x140962ADC (PsMapSystemDlls.c)
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     MiCheckSystemDllUnmap @ 0x1409E8DCC (MiCheckSystemDllUnmap.c)
 *     PspWow64InitThread @ 0x1409EA95C (PspWow64InitThread.c)
 *     PspPrepareSystemDllInitBlock @ 0x140A9A628 (PspPrepareSystemDllInitBlock.c)
 *     DbgkSendSystemDllMessages @ 0x140B51ED8 (DbgkSendSystemDllMessages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsWow64GetProcessNtdllType(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 784);
  if ( result )
    return *(unsigned int *)(result + 8);
  return result;
}
