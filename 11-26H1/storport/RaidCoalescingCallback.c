/*
 * XREFs of RaidCoalescingCallback @ 0x140010AB0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterGetSystemPowerHint @ 0x140010BF8 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x140010C1C (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidIsAdapterControlSupported @ 0x140010D4C (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSystemPowerHintsEnabled @ 0x140010DD8 (RaidAdapterSystemPowerHintsEnabled.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x14005EF08 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall RaidCoalescingCallback(int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned int SystemPowerHint; // eax
  __int64 v9; // rdx
  char SystemPowerResumeLatency; // al
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  char v14; // r9
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  char v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx

  result = RaidIsAdapterControlSupported(a3 + 376, 12LL);
  if ( (_BYTE)result )
  {
    result = RaidAdapterSystemPowerHintsEnabled(a3);
    if ( (_BYTE)result )
    {
      v6 = ((__int64 (*)(void))RaidAdapterGetSystemPowerHint)();
      result = RaidAdapterGetSystemPowerResumeLatency(v6, v6);
      if ( a1 == 1 )
      {
        *(_BYTE *)(a3 + 108) |= 2u;
        SystemPowerHint = RaidAdapterGetSystemPowerHint(a3, v7, (unsigned int)result);
        SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint, v9);
        if ( StorEtwLoggingEnabled )
        {
          if ( (byte_140173442 & 0x10) != 0 )
            McTemplateK0qqqqq_EtwWriteTransfer(
              v12,
              v11,
              v13,
              *(_DWORD *)(a3 + 56),
              v11,
              v13,
              v14,
              SystemPowerResumeLatency);
        }
        result = MEMORY[0xFFFFF78000000008];
        *(_QWORD *)(a3 + 5288) = MEMORY[0xFFFFF78000000008];
      }
      else if ( a1 == 2 )
      {
        *(_BYTE *)(a3 + 108) &= ~2u;
        v15 = RaidAdapterGetSystemPowerHint(a3, v7, (unsigned int)result);
        result = RaidAdapterGetSystemPowerResumeLatency(v15, v16);
        if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
          result = McTemplateK0qqqqq_EtwWriteTransfer(v18, v17, v19, *(_DWORD *)(a3 + 56), v17, v19, v20, result);
        v21 = *(_QWORD *)(a3 + 5288);
        if ( v21 )
        {
          v22 = MEMORY[0xFFFFF78000000008];
          *(_QWORD *)(a3 + 5288) = 0LL;
          v23 = v22 - v21;
          result = 0x346DC5D63886594BLL * v23;
          *(_QWORD *)(a3 + 5296) += v23 / 0x2710;
        }
      }
    }
  }
  return result;
}
