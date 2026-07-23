/*
 * XREFs of KiDispatchCallout @ 0x140487070
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeExitRetpoline @ 0x14048727C (KeExitRetpoline.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiDispatchCallout(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // bl
  _QWORD *v9; // r10
  unsigned int v10; // edi
  __int64 v11; // rdx
  unsigned int v12; // r11d
  __int64 *v13; // r9
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // rcx
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h] BYREF

  KeExitRetpoline();
  v7 = *a4;
  *(_QWORD *)(a1 + 72) = a1 ^ retaddr ^ *a4;
  *(_QWORD *)(a1 + 56) = (unsigned __int64)&retaddr ^ v7;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v6, 2LL);
  }
  if ( !(_BYTE)KiKernelCetEnabled )
    retaddr = 0LL;
  v9 = (_QWORD *)(*(_QWORD *)(v7 + 32) ^ *(_QWORD *)(v7 + 64) | 0xFFFF800000000000uLL);
  v10 = 25;
  v11 = __ROR8__(v9, (*(_BYTE *)(v7 + 32) ^ *(_BYTE *)(v7 + 64)) & 0x3F);
  v12 = 0;
  v13 = v9 - 1;
  v14 = v11;
  do
  {
    v15 = *++v13;
    *v13 = (__int64)v9
         + ((unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ _byteswap_uint64(v11 ^ __ROL8__(KiWaitNever ^ *v13, KiWaitNever)))
         + v12;
    v11 = ((unsigned __int64)v9
         + __ROL8__(v14 ^ __ROR8__(v12 ^ (unsigned __int64)(200 - v12), ~(_BYTE)v15 & 0x3F), (v15 ^ 5) & 0x3F)) ^ 0x87806939;
    if ( v12 == 24 && *v9 != 0x85131481131482ELL )
    {
      v18 = *v9 ^ *v13 ^ 0x85131481131482ELL;
      *v13 = v18;
      v10 += *((_DWORD *)v13 + 1);
      *v13 = *v9 ^ v18 ^ 0x85131481131482ELL;
    }
    ++v12;
    v14 = v11;
  }
  while ( v12 < v10 );
  v16 = *v9 ^ 0x85131481131482ELL;
  *(_DWORD *)v9 = -1390710795;
  *(_DWORD *)v9 ^= 0xBC2A27DB;
  guard_dispatch_icall_no_overrides(v9, v16);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
