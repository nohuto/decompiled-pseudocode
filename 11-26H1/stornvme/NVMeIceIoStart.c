/*
 * XREFs of NVMeIceIoStart @ 0x1400272C4
 * Callers:
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 *     NVMeSplitIoCommandCompletion @ 0x1400202F0 (NVMeSplitIoCommandCompletion.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline @ 0x140012230 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline.c)
 *     NVMeIceConfigureReadWriteCommand @ 0x140031644 (NVMeIceConfigureReadWriteCommand.c)
 */

__int64 __fastcall NVMeIceIoStart(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r14
  unsigned int v6; // esi
  __int64 SrbExtension; // rdi

  v4 = a3;
  v6 = 0;
  SrbExtension = GetSrbExtension(a2);
  if ( *(_DWORD *)(SrbExtension + 4220) )
  {
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledNoReportingNoInline() )
    {
      if ( *(_DWORD *)(SrbExtension + 4220) > 2u
        && (*(_DWORD *)(a1 + 4344) & 8) != 0
        && (*(_DWORD *)(*(_QWORD *)(a1 + 4352) + 24LL) & 1) != 0 )
      {
        *(_QWORD *)(SrbExtension + 4128) |= 1uLL;
      }
      v6 = StorPortExtendedFunction(134LL, a1, a2, v4);
      if ( v6 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 4480));
      }
      else if ( (*(_DWORD *)(a1 + 4344) & 8) != 0 )
      {
        v6 = NVMeIceConfigureReadWriteCommand(a1, a2, SrbExtension + 4096);
        if ( v6 )
        {
          if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
            StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
        }
      }
    }
    else
    {
      return (unsigned int)StorPortExtendedFunction(
                             126LL,
                             a1,
                             a2,
                             (unsigned int)(unsigned __int16)*(_DWORD *)(SrbExtension + 4144) + 1);
    }
  }
  return v6;
}
