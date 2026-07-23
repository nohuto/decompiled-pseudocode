/*
 * XREFs of PnpGetDeviceInstanceCsConfigFlags @ 0x140AF98F0
 * Callers:
 *     PnpIsDeviceInstanceEnabled @ 0x140AF95E0 (PnpIsDeviceInstanceEnabled.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     PnpUnicodeStringToWstrFree @ 0x140A18820 (PnpUnicodeStringToWstrFree.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetDeviceInstanceCsConfigFlags(unsigned __int16 *a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rdx
  _WORD *v6; // rbx
  unsigned __int64 v7; // rcx
  _WORD *v8; // rax
  int v9; // esi
  _WORD *Pool2; // rax
  NTSTATUS RegistryValue; // ebx
  PVOID v13; // rcx
  HANDLE Handle; // [rsp+70h] [rbp+18h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  Handle = 0LL;
  P = 0LL;
  *a3 = 0;
  if ( !a1 )
    return 3221225485LL;
  v5 = a1[1];
  if ( (unsigned __int16)v5 < 2u || (v6 = (_WORD *)*((_QWORD *)a1 + 1)) == 0LL )
  {
    v6 = 0LL;
    goto LABEL_12;
  }
  v7 = *a1;
  if ( (unsigned __int16)v7 > (unsigned __int16)v5 )
    return 3221225485LL;
  if ( !(_WORD)v7 )
  {
    if ( !*v6 )
      goto LABEL_12;
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
    v6 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 0;
      goto LABEL_12;
    }
    return 3221225626LL;
  }
  if ( *v6
    && ((_WORD)v7 != (_WORD)v5 || v6[((unsigned __int64)(unsigned int)v7 >> 1) - 1])
    && (v7 > v5 - 2 || v6[(v7 >> 1) - 1] && v6[v7 >> 1]) )
  {
    v8 = (_WORD *)ExAllocatePool2(0x100uLL);
    v6 = v8;
    if ( v8 )
    {
      memmove(v8, *((const void **)a1 + 1), *a1);
      v6[(unsigned __int64)*a1 >> 1] = 0;
      goto LABEL_12;
    }
    return 3221225626LL;
  }
LABEL_12:
  v9 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)v6, 528, 0, 131097, 0, (__int64)&Handle, 0LL);
  PnpUnicodeStringToWstrFree(v6, (__int64)a1);
  if ( v9 < 0 )
    return (unsigned int)v9;
  RegistryValue = IopGetRegistryValue(Handle, L"CSConfigFlags", 0, &P);
  ZwClose(Handle);
  if ( RegistryValue >= 0 )
  {
    v13 = P;
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
      *a3 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ExFreePoolWithTag(v13, 0);
  }
  return (unsigned int)RegistryValue;
}
