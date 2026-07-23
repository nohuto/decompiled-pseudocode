/*
 * XREFs of PiDevCfgResolveVariableFormatString @ 0x1407AE0F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x1404AA134 (RtlStringCchPrintfW.c)
 *     PnpValidateRegistryString @ 0x1404E6600 (PnpValidateRegistryString.c)
 *     PnpValidateRegistryMultiSz @ 0x1405006FC (PnpValidateRegistryMultiSz.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x140A480A0 (PiDevCfgResolveVariable.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableFormatString(__int64 a1, void *a2, __int64 a3)
{
  int RegistryValue; // edi
  unsigned __int16 *v5; // r13
  int v6; // eax
  void *v7; // r10
  unsigned __int16 v8; // ax
  int v9; // r15d
  unsigned __int16 *v10; // rbx
  unsigned __int16 *v11; // rcx
  unsigned __int16 v12; // dx
  unsigned int v13; // r15d
  __int64 Pool2; // rax
  void *v15; // r12
  int v16; // ecx
  _WORD *v17; // r14
  unsigned int v18; // ebp
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // dx
  int v21; // ecx

  RegistryValue = IopGetRegistryValue(a2);
  if ( RegistryValue < 0 )
    return (unsigned int)RegistryValue;
  if ( !PnpValidateRegistryString(0LL) )
    return (unsigned int)-1073741823;
  v5 = (unsigned __int16 *)MEMORY[8];
  v6 = IopGetRegistryValue(a2);
  RegistryValue = v6;
  if ( v6 >= 0 )
  {
    if ( !PnpValidateRegistryMultiSz(0LL) )
    {
      RegistryValue = -1073741823;
      goto LABEL_44;
    }
  }
  else
  {
    if ( v6 != -1073741772 )
      goto LABEL_43;
    RegistryValue = 0;
  }
  v8 = *v5;
  v9 = 0;
  v10 = v5;
  while ( v8 )
  {
    v11 = ++v10;
    if ( v8 != 37 )
      goto LABEL_13;
    v12 = *v11;
    if ( *v11 == 37 )
    {
      ++v10;
LABEL_13:
      v9 += 2;
      goto LABEL_14;
    }
    if ( (unsigned __int16)(v12 - 48) <= 9u )
    {
      v16 = 0;
      while ( v12 && (unsigned __int16)(v12 - 48) <= 9u )
      {
        ++v10;
        v16 = v12 + 2 * (5 * v16 - 24);
        v12 = *v10;
      }
    }
LABEL_14:
    v8 = *v10;
  }
  v13 = v9 + 2;
  Pool2 = ExAllocatePool2(0x100uLL);
  v15 = (void *)Pool2;
  if ( !Pool2 )
  {
    RegistryValue = -1073741670;
    goto LABEL_43;
  }
  v17 = (_WORD *)Pool2;
  v18 = v13;
  while ( 1 )
  {
    v19 = *v5;
    if ( !*v5 )
      break;
    if ( v19 != 37 )
    {
      if ( v18 <= 2 )
        goto LABEL_41;
      *v17 = v19;
      goto LABEL_38;
    }
    v20 = *++v5;
    if ( *v5 == 37 )
    {
      if ( v18 <= 2 )
        goto LABEL_41;
      *v17 = 37;
LABEL_38:
      ++v17;
      ++v5;
      v18 -= 2;
      continue;
    }
    if ( (unsigned __int16)(v20 - 48) <= 9u )
    {
      v21 = 0;
      while ( v20 && (unsigned __int16)(v20 - 48) <= 9u )
      {
        ++v5;
        v21 = v20 + 2 * (5 * v21 - 24);
        v20 = *v5;
      }
    }
  }
  if ( RegistryValue < 0 )
  {
LABEL_42:
    ExFreePoolWithTag(v15, 0);
    goto LABEL_43;
  }
  if ( v18 != 2 )
  {
LABEL_41:
    RegistryValue = -1073741823;
    goto LABEL_42;
  }
  *v17 = 0;
  *(_DWORD *)(a3 + 32) = 1;
  *(_DWORD *)(a3 + 36) = v13;
  *(_QWORD *)(a3 + 40) = v15;
LABEL_43:
  v7 = 0LL;
LABEL_44:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)RegistryValue;
}
