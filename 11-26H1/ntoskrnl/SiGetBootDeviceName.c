/*
 * XREFs of SiGetBootDeviceName @ 0x140B09BA0
 * Callers:
 *     SiGetFirmwareSystemPartition @ 0x14089A7B0 (SiGetFirmwareSystemPartition.c)
 *     SiGetSystemDisk @ 0x14089A8E0 (SiGetSystemDisk.c)
 *     SiGetSystemPartition @ 0x140B09B50 (SiGetSystemPartition.c)
 * Callees:
 *     wcsstr @ 0x14053A900 (wcsstr.c)
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     _snwscanf_s @ 0x14053E010 (_snwscanf_s.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     SiTranslateSymbolicLink @ 0x14089B018 (SiTranslateSymbolicLink.c)
 *     SiGetBootDeviceNameFromRegistry @ 0x140AC225C (SiGetBootDeviceNameFromRegistry.c)
 *     SiValidateSystemPartition @ 0x140ADE8BC (SiValidateSystemPartition.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetBootDeviceName(int a1, int a2, __int64 a3, _DWORD *a4, char a5, _QWORD *a6)
{
  WCHAR *v6; // r14
  WCHAR *v7; // rsi
  PVOID v8; // rdi
  char v9; // r13
  int BootDeviceNameFromRegistry; // eax
  wchar_t *v11; // r12
  int v12; // ebx
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rbx
  size_t v16; // rbx
  wchar_t *Pool2; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  wchar_t *v20; // rax
  size_t v21; // r15
  WCHAR *v22; // rax
  int v24; // [rsp+40h] [rbp-20h] BYREF
  int v25; // [rsp+44h] [rbp-1Ch] BYREF
  int v26; // [rsp+48h] [rbp-18h] BYREF
  int v27; // [rsp+4Ch] [rbp-14h] BYREF
  PVOID P; // [rsp+50h] [rbp-10h] BYREF
  wchar_t *Src; // [rsp+58h] [rbp-8h] BYREF

  v25 = 0;
  v24 = 0;
  v6 = 0LL;
  v26 = 0;
  v7 = 0LL;
  v27 = 0;
  v8 = 0LL;
  P = 0LL;
  v9 = a3;
  Src = 0LL;
  BootDeviceNameFromRegistry = SiGetBootDeviceNameFromRegistry(a2, &Src, a3, (int)a4);
  v11 = Src;
  v12 = BootDeviceNameFromRegistry;
  if ( BootDeviceNameFromRegistry < 0 )
    goto LABEL_30;
  v13 = -1LL;
  v14 = -1LL;
  do
    ++v14;
  while ( Src[v14] );
  v15 = v14 + 1;
  if ( snwscanf_s(Src, v14 + 1, L"multi(%d)disk(%d)rdisk(%d)partition(%d)", &v24, &v25, &v27, &v26) != 4 )
  {
    v12 = -1073741823;
    goto LABEL_30;
  }
  if ( v24 || v25 )
  {
    v12 = -1073741823;
    goto LABEL_24;
  }
  v16 = v15 + 10;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v7 = Pool2;
  if ( !Pool2 )
  {
    v12 = -1073741670;
    goto LABEL_30;
  }
  swprintf_s(Pool2, v16, L"%s%s", L"\\ArcName\\", v11);
  v12 = SiTranslateSymbolicLink(v7, (wchar_t **)&P);
  if ( v12 < 0 )
  {
LABEL_22:
    v8 = P;
    goto LABEL_24;
  }
  v8 = P;
  if ( v9 )
  {
    v12 = SiValidateSystemPartition((const WCHAR *)P, a4, v18, v19, a5);
    if ( v12 < 0 )
    {
LABEL_24:
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      if ( !v7 )
        goto LABEL_28;
      goto LABEL_27;
    }
  }
  if ( !a1 )
  {
    v20 = wcsstr(v7, L"partition");
    if ( v20 )
      *v20 = 0;
    do
      ++v13;
    while ( v7[v13] );
    v21 = 2 * v13 + 2;
    v22 = (WCHAR *)ExAllocatePool2(0x100uLL);
    v6 = v22;
    if ( !v22 )
    {
      v12 = -1073741670;
      goto LABEL_24;
    }
    memmove(v22, v7, v21);
    ExFreePoolWithTag(v8, 0);
    P = 0LL;
    v12 = SiTranslateSymbolicLink(v6, (wchar_t **)&P);
    if ( v12 >= 0 )
    {
      v8 = P;
      goto LABEL_21;
    }
    goto LABEL_22;
  }
LABEL_21:
  *a6 = v8;
LABEL_27:
  ExFreePoolWithTag(v7, 0);
LABEL_28:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
LABEL_30:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)v12;
}
