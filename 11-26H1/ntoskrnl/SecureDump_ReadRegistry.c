/*
 * XREFs of SecureDump_ReadRegistry @ 0x1405D99A0
 * Callers:
 *     SecureDump_PrepareForInit @ 0x1405D94AC (SecureDump_PrepareForInit.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     IopOpenRegistryKey @ 0x140B1EB30 (IopOpenRegistryKey.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SecureDump_ReadRegistry(__int64 a1, __int64 a2, int a3, void **a4, _DWORD *a5)
{
  _DWORD *v7; // rsi
  __int64 result; // rax
  int RegistryValue; // ebx
  __int64 Pool2; // rax
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  Handle = 0LL;
  if ( !a4 )
    return 3221225485LL;
  v7 = a5;
  if ( !a5 )
    return 3221225485LL;
  result = IopOpenRegistryKey(&Handle, 0LL, a1, 131097LL, 0);
  if ( (int)result >= 0 )
  {
    RegistryValue = IopGetRegistryValue(Handle);
    if ( RegistryValue >= 0 )
    {
      if ( MEMORY[0xC] )
      {
        if ( a3 == MEMORY[4] )
        {
          Pool2 = ExAllocatePool2(0x40uLL);
          *a4 = (void *)Pool2;
          if ( Pool2 )
          {
            *v7 = MEMORY[0xC];
            memmove(*a4, (const void *)MEMORY[8], MEMORY[0xC]);
          }
          else
          {
            RegistryValue = -1073741670;
          }
        }
        else
        {
          RegistryValue = -1073741788;
        }
      }
      else
      {
        RegistryValue = -1073741820;
      }
      ExFreePoolWithTag(0LL, 0);
    }
    ObCloseHandle(Handle, 0);
    return (unsigned int)RegistryValue;
  }
  return result;
}
