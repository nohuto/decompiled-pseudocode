/*
 * XREFs of KiProcessControlProtection @ 0x1404F1210
 * Callers:
 *     KiControlProtectionFault @ 0x14073E700 (KiControlProtectionFault.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiLogControlProtectionUserModeReturnMismatch @ 0x1404B71D4 (KiLogControlProtectionUserModeReturnMismatch.c)
 *     KiFixupControlProtectionUserModeReturnMismatch @ 0x1404D6CF0 (KiFixupControlProtectionUserModeReturnMismatch.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiProcessControlProtectionFromKernelMode @ 0x14052ACCC (KiProcessControlProtectionFromKernelMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     KiCheckUserAddressCetCompat @ 0x140A35BC8 (KiCheckUserAddressCetCompat.c)
 */

__int64 __fastcall KiProcessControlProtection(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  volatile signed __int32 *UserCetLogging; // r15
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  __int64 ULong64FromUser; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int8 CurrentIrql; // [rsp+20h] [rbp-98h]
  unsigned int v14; // [rsp+24h] [rbp-94h]
  __int128 v15; // [rsp+60h] [rbp-58h]
  __int128 v16; // [rsp+70h] [rbp-48h]

  if ( *(_WORD *)(a1 + 368) == 16 )
    return KiProcessControlProtectionFromKernelMode();
  v4 = *(_QWORD *)(a1 + 360);
  v14 = 2;
  UserCetLogging = (volatile signed __int32 *)KeGetCurrentThread()->ApcState.Process->UserCetLogging;
  v15 = 0LL;
  v16 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    v6 = KeGetCurrentIrql();
    if ( (_BYTE)v6 != 1 )
      __writecr8(1uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 1;
      KiRaiseIrqlProcessIrqlFlags(v6, a2);
    }
  }
  if ( *(_WORD *)(a1 + 368) == 51 && *(_QWORD *)(a1 + 352) == 1LL )
  {
    v7 = __readmsr(0x6A7u);
    v8 = v7;
    if ( KiUserCetPl3SspCanonicalizeMask )
      v8 = KiUserCetPl3SspCanonicalizeMask & v7;
    if ( (v8 & 7) == 0 )
    {
      v9 = *(_QWORD *)(a1 + 384);
      if ( (v9 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      ULong64FromUser = RtlReadULong64FromUser(*(_QWORD *)(a1 + 384));
      if ( (unsigned __int64)(ULong64FromUser - 0x10000) <= 0x7FFFFFFDFFFFLL
        && (unsigned __int64)(v4 - 0x10000) <= 0x7FFFFFFDFFFFLL )
      {
        if ( ULong64FromUser == stru_140FC11F0.Spare35[1] )
        {
          v11 = RtlReadULong64FromUser(v8);
          RtlWriteULong64ToUser(v9, v11);
          v14 = 3;
          _InterlockedAdd(UserCetLogging + 21, 1u);
        }
        else
        {
          do
          {
            v8 += 8LL;
            v12 = RtlReadULong64FromUser(v8);
            if ( v12 < 0x10000 )
              break;
            if ( v12 == ULong64FromUser )
            {
              __writemsr(0x6A7u, v8);
              v14 = 1;
              _InterlockedAdd(UserCetLogging + 20, 1u);
              break;
            }
          }
          while ( (v8 & 0xFFF) != 0 || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 );
        }
      }
    }
  }
  if ( !CurrentIrql )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0);
    __writecr8(0LL);
  }
  return v14;
}
