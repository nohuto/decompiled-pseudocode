/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x1403D9D30
 * Callers:
 *     KiDispatchException @ 0x1403D63D0 (KiDispatchException.c)
 *     RtlGetExtendedContextLength @ 0x1403D9A10 (RtlGetExtendedContextLength.c)
 *     KiInitializeUserApc @ 0x14043ED48 (KiInitializeUserApc.c)
 *     RtlRaiseException @ 0x14061C280 (RtlRaiseException.c)
 *     PspWow64SetupCpuArea @ 0x1409E6E90 (PspWow64SetupCpuArea.c)
 *     PspInitializeThunkContext @ 0x1409E7B48 (PspInitializeThunkContext.c)
 *     PspWow64GetContextThread @ 0x140A2AB08 (PspWow64GetContextThread.c)
 *     RtlWow64GetCpuAreaInfo @ 0x140A71E20 (RtlWow64GetCpuAreaInfo.c)
 *     NtCreateThreadEx @ 0x140A79100 (NtCreateThreadEx.c)
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 *     PspWow64SetContextThread @ 0x140B81920 (PspWow64SetContextThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetExtendedContextLength2(
        ULONG ContextFlags,
        PULONG ContextLength,
        ULONG64 EnabledExtendedFeatures)
{
  ULONG v5; // r11d
  char v6; // bp
  bool v7; // cl
  int v9; // eax
  int v10; // edi
  __int64 v11; // rcx
  ULONG v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // esi
  ULONG64 v16; // r9
  __int64 v17; // r9
  unsigned int v18; // r10d
  unsigned int i; // r8d
  __int64 v20; // rax

  v5 = ContextFlags & 0x10000;
  if ( ((ContextFlags & 0x10000) == 0 || (ContextFlags & 0x27FEFF80) != 0)
    && (ContextFlags & 0x7FFFF20) != 0x100000
    && ((ContextFlags & 0x200000) == 0 || (ContextFlags & 0x7DFFFF0) != 0)
    && (ContextFlags & 0x7FFFF00) != 0x400000 )
  {
    return -1073741811;
  }
  v6 = 1;
  v7 = 0;
  if ( (ContextFlags & 0x400020) != 0x400020 )
    v7 = (ContextFlags & 0x10040) != 65600 && (ContextFlags & 0x100040) != 1048640;
  if ( !v7 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      return -1073741637;
    v6 = 3;
  }
  if ( (ContextFlags & 0x100080) == 0x100080 )
  {
    if ( !(_BYTE)KiKernelCetEnabled )
      return -1073741637;
    v6 |= 4u;
  }
  v9 = 0;
  v10 = 0;
  v11 = 4LL;
  if ( v5 )
  {
    v9 = 716;
    v10 = 4;
    v12 = ContextFlags & 0x100000;
  }
  else
  {
    v12 = ContextFlags & 0x100000;
    if ( (ContextFlags & 0x100000) != 0 )
    {
      v9 = 1232;
    }
    else
    {
      if ( (ContextFlags & 0x200000) != 0 )
      {
        v9 = 416;
        v10 = 8;
        goto LABEL_14;
      }
      if ( (ContextFlags & 0x400000) == 0 )
        goto LABEL_14;
      v9 = 912;
    }
    v10 = 16;
  }
LABEL_14:
  v13 = v9 + 32;
  if ( (v6 & 2) != 0 )
  {
    v15 = -v10 & (v10 + v13 - 1);
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      v16 = EnabledExtendedFeatures & (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]);
      if ( v5 )
      {
        v17 = v16 & 0x40000000000001FFLL;
      }
      else if ( v12 )
      {
        v17 = v16 & 0x4000000000060DFFLL;
      }
      else if ( (ContextFlags & 0x400000) != 0 )
      {
        v17 = v16 & 0x3C;
      }
      else
      {
        v17 = 0LL;
      }
      v18 = 576;
      for ( i = 2; i < 0x40; i += 2 )
      {
        if ( (v11 & v17) != 0 )
        {
          if ( (v11 & MEMORY[0xFFFFF780000005F8]) != 0 )
            v18 = (v18 + 63) & 0xFFFFFFC0;
          v18 += *(_DWORD *)(4LL * i - 0x87FFFFFF9FCLL);
        }
        v20 = __ROL8__(v11, 1);
        if ( (v20 & v17) != 0 )
        {
          if ( (v20 & MEMORY[0xFFFFF780000005F8]) != 0 )
            v18 = (v18 + 63) & 0xFFFFFFC0;
          v18 += *(_DWORD *)(4LL * (i + 1) - 0x87FFFFFF9FCLL);
        }
        v11 = __ROL8__(v11, 2);
      }
    }
    else
    {
      v18 = MEMORY[0xFFFFF780000003E8];
    }
    v13 = v18 - v10 + v15 - 448;
  }
  v14 = v13 + 32;
  if ( (v6 & 4) == 0 )
    v14 = v13;
  *ContextLength = v10 - 1 + v14;
  return 0;
}
