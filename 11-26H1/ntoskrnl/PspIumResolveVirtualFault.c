/*
 * XREFs of PspIumResolveVirtualFault @ 0x140AD33B4
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     PspIumReplenishPartitionPages @ 0x14040B478 (PspIumReplenishPartitionPages.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MmVirtualAccessFault @ 0x140AD3530 (MmVirtualAccessFault.c)
 */

char __fastcall PspIumResolveVirtualFault(__int64 a1)
{
  _KPROCESS *v1; // r15
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // rax
  _KPROCESS *Process; // r12
  unsigned int v7; // r13d
  unsigned int v8; // ebx
  int v9; // edi
  unsigned __int64 v10; // rdx
  unsigned __int64 v12; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+28h] [rbp-48h]
  _OWORD v14[3]; // [rsp+38h] [rbp-38h] BYREF

  v1 = *(_KPROCESS **)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 32);
  memset(v14, 0, sizeof(v14));
  if ( v3 && *(_DWORD *)(v3 + 4) < 8u )
    PspIumReplenishPartitionPages(v3, 3u);
  v4 = a1 + 16;
  v12 = *(_QWORD *)(a1 + 16);
  LOBYTE(v5) = MmIsUserAddress(v12);
  if ( (_BYTE)v5 )
  {
    v13 = (unsigned int)(*(_DWORD *)(a1 + 12) << 12);
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process != v1 )
      KiStackAttachProcess(v1, 0, (__int64)v14);
    v7 = *(_DWORD *)(a1 + 12);
    v8 = *(_DWORD *)(a1 + 8) | 0x88;
    if ( v7 <= 1 )
      v8 = *(_DWORD *)(a1 + 8);
    do
    {
      LODWORD(v5) = MmVirtualAccessFault(&v12, v4, v8);
      v9 = v5;
      if ( (int)v5 < 0 )
        break;
      v5 = v13;
      v10 = v12;
      do
      {
        if ( !_bittest64((const signed __int64 *)v4, 0x34u) )
          break;
        v8 &= ~0x80u;
        v10 += 4096LL;
        v4 += 8LL;
        v5 -= 4096LL;
      }
      while ( v5 );
      v13 = v5;
      v12 = v10;
      if ( !v5 )
        break;
    }
    while ( (*(_BYTE *)(v4 + 7) & 1) == 0 );
    if ( v7 > 1 )
    {
      LODWORD(v5) = -((v8 & 0x80u) != 0);
      v9 &= v5;
    }
    if ( Process != v1 )
      LOBYTE(v5) = (unsigned __int8)KiUnstackDetachProcess((__int64)v14, 0);
  }
  else
  {
    v9 = -1073741819;
  }
  *(_DWORD *)(a1 + 8) = v9;
  return v5;
}
