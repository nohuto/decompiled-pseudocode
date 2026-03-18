/*
 * XREFs of NVMeGetControllerUUIDListIdentify @ 0x1400261A8
 * Callers:
 *     NVMeControllerInitPart1 @ 0x140006C00 (NVMeControllerInitPart1.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     NVMeControllerSupportsUUIDList @ 0x14000FE50 (NVMeControllerSupportsUUIDList.c)
 *     BuildIdentifyCommandGeneric @ 0x140019CBC (BuildIdentifyCommandGeneric.c)
 *     memmove @ 0x140032740 (memmove.c)
 *     memset @ 0x140032A40 (memset.c)
 */

char __fastcall NVMeGetControllerUUIDListIdentify(__int64 a1)
{
  _UNKNOWN **v1; // rax
  void **v3; // rsi
  void *v4; // rcx
  __int64 v5; // r9
  int i; // edx
  __int64 v7; // r9
  int v9; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  v1 = &retaddr;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    LOBYTE(v1) = NVMeControllerSupportsUUIDList(a1);
    if ( (_BYTE)v1 )
    {
      v3 = (void **)(a1 + 4232);
      v4 = *(void **)(a1 + 4232);
      if ( v4
        || (v9 = a1 + 4232, LODWORD(v1) = StorPortExtendedFunction(0LL, a1, 4096LL, 1701672526LL), !(_DWORD)v1)
        && (v4 = *v3) != 0LL )
      {
        memset(v4, 0, 0x1000uLL);
        LocalCommandReuse(a1, a1 + 1008);
        for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= i )
          ++i;
        *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
        BuildIdentifyCommandGeneric(a1, *(_QWORD *)(a1 + 1104) + 4096LL, 23, v5, v9, 0, *(_QWORD *)(a1 + 1664), 0, 0);
        ProcessCommand(a1, a1 + 1016);
        WaitForCommandComplete(a1, a1 + 1016, 1);
        if ( *(_BYTE *)(a1 + 1019) == 1 )
        {
          LOBYTE(v1) = (unsigned __int8)memmove(*v3, *(const void **)(a1 + 1656), 0x1000uLL);
        }
        else
        {
          LOBYTE(v1) = StorPortExtendedFunction(1LL, a1, *v3, v7);
          *v3 = 0LL;
        }
      }
    }
  }
  return (char)v1;
}
