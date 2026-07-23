/*
 * XREFs of PiDevCfgResolveVariableConstant @ 0x140B42380
 * Callers:
 *     <none>
 * Callees:
 *     PnpValidateRegistryValue @ 0x1405DDECC (PnpValidateRegistryValue.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableConstant(__int64 a1, void *a2, __int64 a3)
{
  NTSTATUS RegistryValue; // eax
  _DWORD *v5; // rbx
  unsigned int v6; // edi
  size_t v7; // rbp
  int v8; // r15d
  void *Pool2; // rax
  void *v10; // rsi
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"Value", 0, &P);
  v5 = P;
  v6 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( !PnpValidateRegistryValue(P) )
    {
      v6 = -1073741823;
      goto LABEL_10;
    }
    v7 = (unsigned int)v5[3];
    v8 = v5[1];
    if ( (_DWORD)v7 )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v10 = Pool2;
      if ( !Pool2 )
      {
        v6 = -1073741670;
        goto LABEL_10;
      }
      memmove(Pool2, (char *)v5 + (unsigned int)v5[2], v7);
    }
    else
    {
      v10 = 0LL;
    }
    *(_DWORD *)(a3 + 32) = v8;
    *(_DWORD *)(a3 + 36) = v7;
    *(_QWORD *)(a3 + 40) = v10;
  }
LABEL_10:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
