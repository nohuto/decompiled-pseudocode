/*
 * XREFs of MiCheckUserVirtualAddress @ 0x1402B36E0
 * Callers:
 *     MiActOnPte @ 0x1402B61E0 (MiActOnPte.c)
 *     MiResolveDemandZeroFault @ 0x1402B6900 (MiResolveDemandZeroFault.c)
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiCheckVirtualAddress @ 0x1403A7340 (MiCheckVirtualAddress.c)
 *     MiZeroFault @ 0x14041A2F0 (MiZeroFault.c)
 *     MiCheckProtoAccess @ 0x14041EF60 (MiCheckProtoAccess.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLocateLockedVadEvent @ 0x1403C6AA0 (MiLocateLockedVadEvent.c)
 */

__int64 __fastcall MiCheckUserVirtualAddress(unsigned __int64 a1, __int64 a2, int a3, int *a4)
{
  unsigned __int64 v8; // rax
  unsigned int v9; // ebx
  int v10; // esi
  unsigned __int64 v11; // rbp
  __int64 ProtoPteAddress; // r10
  char v13; // al
  int v14; // ebx
  _QWORD *v15; // r9
  __int64 result; // rax
  int v17; // r12d
  __int64 LockedVadEvent; // r8
  int v19; // eax
  int v20; // r8d
  _BYTE v21[16]; // [rsp+20h] [rbp-38h] BYREF

  if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
  {
    v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      result = qword_140E2D7A8;
      *a4 = 1;
      return result;
    }
    if ( v8 == qword_140E2D7B8 && v8 )
    {
      result = qword_140E2D7B0;
      *a4 = 1;
      return result;
    }
  }
  v9 = *(_DWORD *)(a2 + 48);
  if ( (v9 & 1) != 0 )
    goto LABEL_15;
  v10 = *(_DWORD *)(a2 + 48) & 0x1C;
  if ( v10 == 8 && (*(_DWORD *)(a2 + 72) & 0x10) != 0 )
  {
    v17 = 0;
    if ( !a3 )
      ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a2 + 64));
    LockedVadEvent = MiLocateLockedVadEvent(a2, 32LL);
    if ( LockedVadEvent && *(struct _KTHREAD **)(LockedVadEvent + 24) != KeGetCurrentThread() )
      v17 = 1;
    if ( !a3 )
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a2 + 64));
    if ( v17 )
      goto LABEL_15;
  }
  if ( (v9 & 0x80000) != 0 )
  {
    if ( v10 == 4
      || v10 == 12
      || (v19 = *(_DWORD *)(a2 + 48), (v19 & 0x80000) != 0) && ((v19 & 0x200000) != 0 || (v19 & 0x60000u) >= 0x40000)
      || (*(_DWORD *)(a2 + 48) & 0x1C) == 8 && (*(_DWORD *)(a2 + 72) & 1) != 0 )
    {
      *a4 = 24;
    }
    else
    {
      v20 = 24;
      if ( (v9 & 0x400000) != 0 )
        v20 = (v9 >> 5) & 0x1F;
      *a4 = v20;
    }
    return 0LL;
  }
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 && v10 != 20 )
  {
LABEL_15:
    *a4 = 24;
    return 0LL;
  }
  v11 = a1 >> 12;
  ProtoPteAddress = MiGetProtoPteAddress(a2, v11, 12LL, v21);
  if ( ProtoPteAddress )
  {
    v13 = *(_DWORD *)(a2 + 48) & 0x1C;
    v14 = (v9 >> 5) & 0x1F;
    *a4 = v14;
    if ( v13 == 8 && v14 == 7 )
      *a4 = 256;
  }
  else
  {
    *a4 = 24;
  }
  v15 = *(_QWORD **)(a2 + 128);
  if ( (__int64)v15 < 0
    && v11 - (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) > (unsigned __int64)(*v15 - 1LL) >> 12 )
  {
    *a4 = 24;
  }
  return ProtoPteAddress;
}
