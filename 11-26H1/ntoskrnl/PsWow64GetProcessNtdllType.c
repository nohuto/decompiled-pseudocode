/*
 * XREFs of PsWow64GetProcessNtdllType @ 0x1409E6F4C
 * Callers:
 *     PsThawMultiProcess @ 0x1405130EC (PsThawMultiProcess.c)
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 *     PspPrepareSystemDllInitBlock @ 0x1409E5658 (PspPrepareSystemDllInitBlock.c)
 *     MiCheckSystemDllUnmap @ 0x1409E6908 (MiCheckSystemDllUnmap.c)
 *     PspWow64InitThread @ 0x1409E712C (PspWow64InitThread.c)
 *     PsMapSystemDlls @ 0x140A08964 (PsMapSystemDlls.c)
 *     DbgkSendSystemDllMessages @ 0x140B54778 (DbgkSendSystemDllMessages.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
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
