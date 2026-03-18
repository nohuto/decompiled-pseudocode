/*
 * XREFs of IopBuildGlobalSymbolicLinkString @ 0x1409D9558
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1409D82B0 (IopProcessSetInterfaceState.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     IopAllocateUnicodeString @ 0x14090DDE8 (IopAllocateUnicodeString.c)
 *     PnpUnicodeStringToWstrFree @ 0x1409DB5D0 (PnpUnicodeStringToWstrFree.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140AB191C (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopBuildGlobalSymbolicLinkString(unsigned __int16 *a1, UNICODE_STRING *a2)
{
  void *v4; // rsi
  _WORD *v5; // rdi
  __int64 v6; // r8
  _WORD *v7; // rcx
  unsigned __int64 v8; // rdx
  _WORD *Pool2; // rax
  _WORD *v10; // rbx
  __int64 v11; // rcx
  int DeviceInterfaceSymbolicLinkName; // ebx
  unsigned int v13; // edx
  UNICODE_STRING *v14; // rcx
  __int64 v15; // rcx
  _WORD *v17; // rax
  unsigned int v18; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  if ( !a1 )
    goto LABEL_35;
  v6 = a1[1];
  if ( (unsigned __int16)v6 < 2u )
    goto LABEL_12;
  v7 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !v7 )
    goto LABEL_12;
  v8 = *a1;
  if ( (unsigned __int16)v8 > (unsigned __int16)v6 )
  {
LABEL_35:
    DeviceInterfaceSymbolicLinkName = -1073741811;
    goto LABEL_23;
  }
  if ( (_WORD)v8 )
  {
    if ( !*v7
      || (_WORD)v8 == (_WORD)v6 && !v7[((unsigned __int64)*a1 >> 1) - 1]
      || v8 <= v6 - 2 && (!v7[(v8 >> 1) - 1] || !v7[v8 >> 1]) )
    {
      goto LABEL_29;
    }
    Pool2 = (_WORD *)ExAllocatePool2(0x100uLL);
    v10 = Pool2;
    if ( !Pool2 )
      goto LABEL_22;
    memmove(Pool2, *((const void **)a1 + 1), *a1);
    v5 = v10;
    v10[(unsigned __int64)*a1 >> 1] = 0;
  }
  else
  {
    if ( !*v7 )
    {
LABEL_29:
      v5 = v7;
      goto LABEL_12;
    }
    v17 = (_WORD *)ExAllocatePool2(0x100uLL);
    if ( !v17 )
      goto LABEL_22;
    *v17 = 0;
    v5 = v17;
  }
LABEL_12:
  v18 = 512;
  v4 = (void *)ExAllocatePool2(0x100uLL);
  if ( !v4 )
    goto LABEL_22;
  DeviceInterfaceSymbolicLinkName = CmGetDeviceInterfaceSymbolicLinkName(v11, v5, v4, 512LL, &v18);
  if ( DeviceInterfaceSymbolicLinkName != -1073741789 )
    goto LABEL_14;
  ExFreePoolWithTag(v4, 0);
  v4 = (void *)ExAllocatePool2(0x100uLL);
  if ( !v4 )
  {
LABEL_22:
    DeviceInterfaceSymbolicLinkName = -1073741670;
    goto LABEL_23;
  }
  DeviceInterfaceSymbolicLinkName = CmGetDeviceInterfaceSymbolicLinkName(v15, v5, v4, v18, &v18);
LABEL_14:
  if ( DeviceInterfaceSymbolicLinkName < 0 )
  {
    if ( DeviceInterfaceSymbolicLinkName != -1073741773 )
      goto LABEL_23;
    goto LABEL_35;
  }
  v13 = 2 * v18 + 20;
  if ( v13 > 0xFFFF )
  {
    DeviceInterfaceSymbolicLinkName = -1073741675;
  }
  else
  {
    DeviceInterfaceSymbolicLinkName = IopAllocateUnicodeString((__int64)a2, v13);
    if ( DeviceInterfaceSymbolicLinkName < 0 )
      goto LABEL_23;
    DeviceInterfaceSymbolicLinkName = RtlAppendUnicodeToString(a2, L"\\GLOBAL??\\");
    v14 = a2;
    if ( DeviceInterfaceSymbolicLinkName >= 0 )
    {
      DeviceInterfaceSymbolicLinkName = RtlAppendUnicodeToString(a2, (PCWSTR)v4);
      if ( DeviceInterfaceSymbolicLinkName >= 0 )
        goto LABEL_23;
      v14 = a2;
    }
    RtlFreeAnsiString(v14);
  }
LABEL_23:
  PnpUnicodeStringToWstrFree(v5, a1);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)DeviceInterfaceSymbolicLinkName;
}
