/*
 * XREFs of IopLiveDumpInitRegistrySettings @ 0x1405D2760
 * Callers:
 *     IoCaptureLiveDump @ 0x14050BFCC (IoCaptureLiveDump.c)
 * Callees:
 *     IopGetRegistryBoolValue @ 0x1405CEC60 (IopGetRegistryBoolValue.c)
 *     IopGetRegistryULongValue @ 0x1405CEC80 (IopGetRegistryULongValue.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     IopOpenRegistryKey @ 0x140B1EB30 (IopOpenRegistryKey.c)
 */

NTSTATUS __fastcall IopLiveDumpInitRegistrySettings(__int64 a1)
{
  NTSTATUS result; // eax
  unsigned int RegistryULongValue; // eax
  int v4; // ecx
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx
  char v7; // [rsp+20h] [rbp-20h]
  _QWORD v8[2]; // [rsp+30h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+18h] BYREF

  Handle = 0LL;
  v8[0] = 7864438LL;
  v8[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\LiveDump";
  v7 = 0;
  if ( (int)IopOpenRegistryKey(&Handle, 0LL, v8, 131097LL, v7) >= 0 )
  {
    RegistryULongValue = IopGetRegistryULongValue(Handle);
    v4 = *(_DWORD *)(a1 + 80);
    if ( RegistryULongValue )
    {
      v5 = (unsigned __int64)RegistryULongValue << 20;
      v6 = v4 | 0x200;
    }
    else
    {
      v5 = 0LL;
      v6 = v4 & 0xFFFFFDFF;
    }
    *(_DWORD *)(a1 + 80) = v6;
    *(_QWORD *)(a1 + 1144) = v5;
    *(_DWORD *)(a1 + 80) ^= ((unsigned __int16)*(_DWORD *)(a1 + 80) ^ (IopGetRegistryBoolValue() << 11)) & 0x800;
    *(_DWORD *)(a1 + 80) ^= ((unsigned __int8)*(_DWORD *)(a1 + 80) ^ (32 * IopGetRegistryBoolValue())) & 0x20;
    *(_DWORD *)(a1 + 80) ^= ((unsigned __int8)*(_DWORD *)(a1 + 80) ^ (IopGetRegistryBoolValue() << 7)) & 0x80;
    *(_DWORD *)(a1 + 80) ^= ((unsigned __int16)*(_DWORD *)(a1 + 80) ^ (IopGetRegistryBoolValue() << 8)) & 0x100;
    *(_DWORD *)(a1 + 80) ^= ((unsigned __int16)*(_DWORD *)(a1 + 80) ^ (IopGetRegistryBoolValue() << 13)) & 0x2000;
    *(_DWORD *)(a1 + 80) ^= (*(_DWORD *)(a1 + 80) ^ (IopGetRegistryBoolValue() << 17)) & 0x20000;
    *(_DWORD *)(a1 + 80) ^= (*(_DWORD *)(a1 + 80) ^ (IopGetRegistryBoolValue() << 18)) & 0x40000;
    result = *(_DWORD *)(a1 + 80) ^ (*(_DWORD *)(a1 + 80) ^ (IopGetRegistryBoolValue() << 19)) & 0x80000;
  }
  else
  {
    result = *(_DWORD *)(a1 + 80) & 0xFFFDD45F;
  }
  *(_DWORD *)(a1 + 80) = result;
  if ( Handle )
    return ObCloseHandle(Handle, 0);
  return result;
}
