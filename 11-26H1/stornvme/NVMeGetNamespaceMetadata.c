/*
 * XREFs of NVMeGetNamespaceMetadata @ 0x140026EFC
 * Callers:
 *     NVMeGetRichDeviceDescription @ 0x14001E830 (NVMeGetRichDeviceDescription.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     NVMeControllerGetLocalCommand @ 0x14001D328 (NVMeControllerGetLocalCommand.c)
 *     memset @ 0x140032A40 (memset.c)
 */

__int64 __fastcall NVMeGetNamespaceMetadata(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v8; // rdi
  int i; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12[7]; // [rsp+30h] [rbp-38h] BYREF
  void *v13; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  v12[0] = 0LL;
  result = (__int64)NVMeControllerGetLocalCommand(a1);
  v8 = result;
  if ( !result )
    goto LABEL_6;
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(v8 + 96) + 4225LL) |= i )
    ++i;
  *(_BYTE *)(*(_QWORD *)(v8 + 96) + 4225LL) |= 4u;
  *(_WORD *)(*(_QWORD *)(v8 + 96) + 4212LL) = 0;
  result = NVMeAllocateDmaBufferEx(a1, 0, 1, 0x1000u, (__int64 *)&v13, v12);
  if ( v13 )
  {
    memset(v13, 0, 0x1000uLL);
    v4 = v12[0];
    *(_QWORD *)(*(_QWORD *)(v8 + 96) + 4160LL) = v13;
    *(_QWORD *)(*(_QWORD *)(v8 + 96) + 4168LL) = v4;
    *(_DWORD *)(*(_QWORD *)(v8 + 96) + 4208LL) = 4096;
    v10 = *(_QWORD *)(v8 + 96);
    v11 = *(_QWORD *)(v10 + 4168);
    *(_DWORD *)(v10 + 4140) |= 1u;
    *(_QWORD *)(v10 + 4120) = v11;
    *(_BYTE *)(v10 + 4096) = 10;
    *(_DWORD *)(v10 + 4100) = a2;
    *(_BYTE *)(v10 + 4136) = 127;
    *(_QWORD *)(*(_QWORD *)(v8 + 96) + 4192LL) = NVMeGetNamespaceMetadataCompletion;
    *(_QWORD *)(*(_QWORD *)(v8 + 96) + 4200LL) = a3;
    ProcessCommand(a1, v8 + 8);
    result = WaitForCommandComplete(a1, v8 + 8, 1);
LABEL_6:
    if ( v13 )
      return NVMeFreeDmaBufferEx(a1, 0, 1, 4096LL, (__int64 *)&v13, v4);
  }
  return result;
}
