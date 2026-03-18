/*
 * XREFs of NVMeGetHealthInfoLog @ 0x140026310
 * Callers:
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     BuildGetLogPageCommand @ 0x14000F760 (BuildGetLogPageCommand.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     memcmp @ 0x140032620 (memcmp.c)
 *     memset @ 0x140032A40 (memset.c)
 */

void __fastcall NVMeGetHealthInfoLog(__int64 a1, char a2)
{
  __int64 v2; // rsi
  unsigned __int64 v5; // rbx
  unsigned int v6; // r8d
  const void **v7; // r14
  void *v8; // rax
  void *v9; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a1 + 1104);
  v9 = 0LL;
  v10 = 0LL;
  if ( !*(_BYTE *)(a1 + 20) && !(unsigned int)NVMeAllocateDmaBufferEx(a1, 0, 1, 0x200u, (__int64 *)&v9, &v10) && v9 )
  {
    memset(v9, 0, 0x200uLL);
    LocalCommandReuse(a1, a1 + 1008);
    v5 = v10;
    *(_BYTE *)(v2 + 4225) |= 3u;
    LOBYTE(v6) = 2;
    *(_WORD *)(v2 + 4212) = 0;
    BuildGetLogPageCommand(a1, v2, v6, 0x200u, v5, -1, 0LL, 0);
    *(_BYTE *)(v2 + 4225) |= 4u;
    v7 = (const void **)(v2 + 4160);
    v8 = v9;
    *(_QWORD *)(v2 + 4168) = v5;
    *(_QWORD *)(v2 + 4160) = v8;
    *(_DWORD *)(v2 + 4208) = 512;
    *(_QWORD *)(v2 + 4192) = 0LL;
    ProcessCommand(a1, a1 + 1016);
    WaitForCommandComplete(a1, a1 + 1016, a2);
    if ( *(_BYTE *)(a1 + 1019) == 1 && *v7 && !memcmp(&unk_14003C880, *v7, 0x200uLL) )
      *(_DWORD *)(a1 + 12) |= 2u;
    *(_DWORD *)(a1 + 4064) |= 8u;
    if ( *v7 )
      NVMeFreeDmaBufferEx(a1, 0, 1, 512LL, (__int64 *)(v2 + 4160), *(_QWORD *)(v2 + 4168));
    *(_BYTE *)(v2 + 4225) |= 8u;
  }
}
