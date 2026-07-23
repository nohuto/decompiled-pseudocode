/*
 * XREFs of IopBuildGlobalSymbolicLinkString @ 0x1409AA448
 * Callers:
 *     IopProcessSetInterfaceState @ 0x1409A91A0 (IopProcessSetInterfaceState.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x1409AA8E4 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     IopAllocateUnicodeString @ 0x1409AFF18 (IopAllocateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     PnpUnicodeStringToWstrFree @ 0x140A18820 (PnpUnicodeStringToWstrFree.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  NTSTATUS DeviceInterfaceSymbolicLinkName; // ebx
  UNICODE_STRING *v13; // rcx
  __int64 v14; // rcx
  _WORD *v16; // rax
  unsigned int v17; // [rsp+70h] [rbp+18h] BYREF

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
    v16 = (_WORD *)ExAllocatePool2(0x100uLL);
    if ( !v16 )
      goto LABEL_22;
    *v16 = 0;
    v5 = v16;
  }
LABEL_12:
  v17 = 512;
  v4 = (void *)ExAllocatePool2(0x100uLL);
  if ( !v4 )
    goto LABEL_22;
  DeviceInterfaceSymbolicLinkName = CmGetDeviceInterfaceSymbolicLinkName(v11, v5, v4, 512LL, &v17);
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
  DeviceInterfaceSymbolicLinkName = CmGetDeviceInterfaceSymbolicLinkName(v14, v5, v4, v17, &v17);
LABEL_14:
  if ( DeviceInterfaceSymbolicLinkName < 0 )
  {
    if ( DeviceInterfaceSymbolicLinkName != -1073741773 )
      goto LABEL_23;
    goto LABEL_35;
  }
  if ( 2 * v17 + 20 > 0xFFFF )
  {
    DeviceInterfaceSymbolicLinkName = -1073741675;
  }
  else
  {
    DeviceInterfaceSymbolicLinkName = IopAllocateUnicodeString(a2);
    if ( DeviceInterfaceSymbolicLinkName < 0 )
      goto LABEL_23;
    DeviceInterfaceSymbolicLinkName = RtlAppendUnicodeToString(a2, L"\\GLOBAL??\\");
    v13 = a2;
    if ( DeviceInterfaceSymbolicLinkName >= 0 )
    {
      DeviceInterfaceSymbolicLinkName = RtlAppendUnicodeToString(a2, (PCWSTR)v4);
      if ( DeviceInterfaceSymbolicLinkName >= 0 )
        goto LABEL_23;
      v13 = a2;
    }
    RtlFreeAnsiString(v13);
  }
LABEL_23:
  PnpUnicodeStringToWstrFree(v5, a1);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)DeviceInterfaceSymbolicLinkName;
}
