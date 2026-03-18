/*
 * XREFs of NVMeControllerSetHostIdentifier @ 0x14001795C
 * Callers:
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     WaitForCommandComplete @ 0x14000C330 (WaitForCommandComplete.c)
 *     LocalCommandReuse @ 0x14000CA80 (LocalCommandReuse.c)
 *     NVMeAllocateDmaBufferEx @ 0x14001098C (NVMeAllocateDmaBufferEx.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     memmove @ 0x140032740 (memmove.c)
 */

char __fastcall NVMeControllerSetHostIdentifier(__int64 a1)
{
  unsigned __int8 v1; // dl
  char v3; // bp
  int i; // edx
  unsigned int v5; // ebx
  __int64 v6; // rbx
  __int64 v7; // r8
  int v8; // eax
  int v9; // ecx
  void *v11; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v12; // [rsp+A8h] [rbp+10h] BYREF

  v1 = *(_BYTE *)(a1 + 4024);
  v11 = 0LL;
  v12 = 0LL;
  v3 = 0;
  if ( (v1 & 1) == 0 )
    goto LABEL_12;
  if ( ((v1 >> 1) & ((*(_BYTE *)(*(_QWORD *)(a1 + 1560) + 96LL) & 1) != 0)) != 0 )
    *(_BYTE *)(a1 + 4024) = v1 | 8;
  LocalCommandReuse(a1, a1 + 1008);
  for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= ++i )
    ;
  *(_BYTE *)(*(_QWORD *)(a1 + 1104) + 4225LL) |= 4u;
  *(_WORD *)(*(_QWORD *)(a1 + 1104) + 4212LL) = 0;
  v5 = (*(_BYTE *)(a1 + 4024) & 8) != 0 ? 8 : 0;
  NVMeAllocateDmaBufferEx(a1, 1, 0, 0x10u, (__int64 *)&v11, &v12);
  if ( !v11 )
    goto LABEL_12;
  *(_OWORD *)v11 = 0LL;
  memmove(v11, (const void *)(a1 + 4025), v5 + 8LL);
  v6 = v12;
  *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4160LL) = v11;
  *(_QWORD *)(*(_QWORD *)(a1 + 1104) + 4168LL) = v6;
  *(_DWORD *)(*(_QWORD *)(a1 + 1104) + 4208LL) = 16;
  v7 = *(_QWORD *)(a1 + 1104);
  v8 = *(_DWORD *)(v7 + 4140);
  v9 = ((unsigned __int8)v8 ^ (*(_BYTE *)(a1 + 4024) >> 3)) & 1;
  *(_QWORD *)(v7 + 4120) = *(_QWORD *)(v7 + 4168);
  *(_BYTE *)(v7 + 4096) = 9;
  *(_DWORD *)(v7 + 4140) = v8 ^ v9;
  *(_BYTE *)(v7 + 4136) = -127;
  ProcessCommand(a1, a1 + 1016);
  WaitForCommandComplete(a1, a1 + 1016, 1);
  if ( *(_BYTE *)(a1 + 1019) == 1 )
  {
    *(_BYTE *)(a1 + 4024) |= 4u;
    v3 = 1;
  }
  if ( v11 )
    NVMeFreeDmaBufferEx(a1, 1, 0, 16LL, (__int64 *)&v11, v6);
  if ( !v3 )
  {
LABEL_12:
    if ( (*(_BYTE *)(a1 + 21) & 8) != 0 )
      StorPortExtendedFunction(85LL, a1, 0LL, 0LL);
  }
  return v3;
}
