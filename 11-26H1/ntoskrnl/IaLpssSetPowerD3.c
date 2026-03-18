/*
 * XREFs of IaLpssSetPowerD3 @ 0x140721A00
 * Callers:
 *     <none>
 * Callees:
 *     IaLpssPciSetPower @ 0x1407216F8 (IaLpssPciSetPower.c)
 *     IaLpssReadClockParams @ 0x140721874 (IaLpssReadClockParams.c)
 *     IaLpssReadResetRegister @ 0x140721918 (IaLpssReadResetRegister.c)
 *     IaLpssWriteResetRegister @ 0x140721B34 (IaLpssWriteResetRegister.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IaLpssSetPowerD3(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v6; // rdx

  if ( a1 && *a1 )
  {
    LODWORD(WheapPfaLock.Padding[2]) = IaLpssReadClockParams(a1, a2);
    if ( (IaLpssReadResetRegister(a1, v3) & 7) == 7 )
    {
      LOBYTE(v4) = 4;
      guard_dispatch_icall_no_overrides(a1, v4);
      LOBYTE(v6) = 4;
      guard_dispatch_icall_no_overrides(a1, v6);
      guard_dispatch_icall_no_overrides(a1, 2LL);
      IaLpssWriteResetRegister(a1, 0LL);
      return (unsigned int)IaLpssPciSetPower(1);
    }
    else
    {
      return 2;
    }
  }
  else
  {
    return 3;
  }
}
