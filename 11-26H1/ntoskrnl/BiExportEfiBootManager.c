/*
 * XREFs of BiExportEfiBootManager @ 0x140B3A0B8
 * Callers:
 *     BiExportStoreAlterationsToEfi @ 0x14089A258 (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     BiHandleFirmwareDefaultEntry @ 0x14089A308 (BiHandleFirmwareDefaultEntry.c)
 *     BiSetBootOptions @ 0x14089A5E0 (BiSetBootOptions.c)
 *     BiSetBootEntryOrder @ 0x1409A29E4 (BiSetBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1409A2A60 (BiQueryBootOptions.c)
 *     BiDeleteEfiVariable @ 0x1409A2B3C (BiDeleteEfiVariable.c)
 *     BiQueryBootEntryOrder @ 0x1409A3410 (BiQueryBootEntryOrder.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiGetElement @ 0x1409A5A7C (BiGetElement.c)
 *     BcdCloseObject @ 0x1409A5E18 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1409A64B8 (BcdOpenObject.c)
 *     BiTranslateDisplayOrder @ 0x140B272BC (BiTranslateDisplayOrder.c)
 *     BiTranslateObjectIdentifier @ 0x140B27348 (BiTranslateObjectIdentifier.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiExportEfiBootManager(void *a1, __int64 **a2)
{
  _QWORD *v2; // r15
  ULONG v3; // edi
  ULONG *v4; // r13
  void *v5; // r12
  _BOOT_OPTIONS *v6; // r14
  NTSTATUS v7; // eax
  int v8; // ebx
  int Element; // eax
  void *Pool2; // rax
  void *v11; // rsi
  __int64 **v12; // rbx
  int v13; // r15d
  int v14; // eax
  ULONG v15; // ebx
  int v16; // eax
  ULONG v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  ULONG Count; // [rsp+20h] [rbp-59h] BYREF
  _QWORD *v23; // [rsp+28h] [rbp-51h] BYREF
  ULONG v24; // [rsp+30h] [rbp-49h] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp-41h] BYREF
  ULONG v26; // [rsp+40h] [rbp-39h] BYREF
  ULONG v27; // [rsp+44h] [rbp-35h] BYREF
  void *Buf1; // [rsp+48h] [rbp-31h] BYREF
  PVOID P; // [rsp+50h] [rbp-29h] BYREF
  ULONG v30; // [rsp+58h] [rbp-21h] BYREF
  __int64 **v31; // [rsp+60h] [rbp-19h]
  void *Buf2; // [rsp+68h] [rbp-11h] BYREF
  ULONG *v33; // [rsp+70h] [rbp-9h] BYREF
  _BOOT_OPTIONS *v34; // [rsp+78h] [rbp-1h] BYREF
  _BOOT_OPTIONS BootOptions; // [rsp+80h] [rbp+7h] BYREF

  v31 = a2;
  v27 = 0;
  v24 = 0;
  Count = 0;
  memset(&BootOptions, 0, sizeof(BootOptions));
  v26 = 0;
  v2 = 0LL;
  v30 = 0;
  v3 = 0;
  Buf1 = 0LL;
  v4 = 0LL;
  v23 = 0LL;
  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  BcdObjectHandle = 0LL;
  v33 = 0LL;
  Buf2 = 0LL;
  v34 = 0LL;
  v7 = BcdOpenObject(a1, &GUID_FIRMWARE_BOOTMGR, &BcdObjectHandle);
  if ( v7 < 0 )
  {
    v8 = 0;
    if ( v7 != -1073741772 )
      v8 = v7;
    goto LABEL_47;
  }
  Element = BiGetElement(BcdObjectHandle, 0x24000001u, &P, &Count);
  v8 = Element;
  if ( Element >= 0 )
  {
    Count >>= 4;
    Pool2 = (void *)ExAllocatePool2(0x102uLL);
    Buf1 = Pool2;
    v11 = Pool2;
    if ( !Pool2 )
    {
      v8 = -1073741670;
LABEL_41:
      if ( v11 )
        ExFreePoolWithTag(v11, 0x4B444342u);
      if ( v2 )
        ExFreePoolWithTag(v2, 0x4B444342u);
      goto LABEL_45;
    }
    v12 = v31;
    BiTranslateDisplayOrder((__int64)v31, (__int64)P, (__int64)Pool2, &Count);
LABEL_11:
    v13 = BiQueryBootEntryOrder((ULONG **)&Buf2, &v26);
    v14 = BiHandleFirmwareDefaultEntry((__int64)v12, BcdObjectHandle, &Buf1, &Count);
    v11 = Buf1;
    v8 = v14;
    v5 = Buf2;
    if ( v14 < 0 )
      goto LABEL_40;
    v15 = Count;
    if ( v13 < 0 || !Count || v26 != Count || memcmp(Buf1, Buf2, 4LL * Count) )
    {
      v8 = BiSetBootEntryOrder((PULONG)v11, v15);
      if ( v8 < 0 )
        goto LABEL_40;
    }
    BootOptions.Length = 24;
    BootOptions.Version = 1;
    v16 = BiGetElement(BcdObjectHandle, 0x25000004u, &v33, &v30);
    v4 = v33;
    v8 = v16;
    if ( v16 < 0 )
    {
      if ( v16 != -1073741275 )
        goto LABEL_40;
      v8 = BiDeleteEfiVariable(L"Timeout");
      if ( v8 < 0 )
        goto LABEL_40;
      BootOptions.Timeout = 0;
    }
    else
    {
      v17 = -1;
      v3 = 1;
      if ( *(_QWORD *)v33 <= 0xFFFFFFFFuLL )
        v17 = *v33;
      BootOptions.Timeout = v17;
    }
    v18 = BiGetElement(BcdObjectHandle, 0x24000002u, &v23, &v24);
    v8 = v18;
    if ( v18 >= 0 )
    {
      v2 = v23;
      v3 |= 2u;
      v8 = BiTranslateObjectIdentifier(v31, v23, &v27);
      if ( v8 < 0 )
        goto LABEL_41;
      BootOptions.NextBootEntryId = v27;
LABEL_30:
      v24 = 0;
      v20 = BiQueryBootOptions(&v34, &v24);
      v6 = v34;
      if ( v20 >= 0 && v34->Version == BootOptions.Version )
      {
        if ( (v3 & 1) != 0 && v34->Timeout == BootOptions.Timeout )
          v3 &= ~1u;
        if ( (v3 & 2) != 0 && v34->NextBootEntryId == BootOptions.NextBootEntryId )
          v3 &= ~2u;
      }
      if ( v3 )
        v8 = BiSetBootOptions(&BootOptions, v3);
      goto LABEL_41;
    }
    if ( v18 == -1073741275 )
    {
      v19 = BiDeleteEfiVariable(L"BootNext");
      v2 = v23;
      v8 = v19;
      if ( v19 < 0 )
        goto LABEL_41;
      BootOptions.NextBootEntryId = 0;
      goto LABEL_30;
    }
LABEL_40:
    v2 = v23;
    goto LABEL_41;
  }
  if ( Element == -1073741275 )
  {
    v12 = v31;
    Count = 0;
    goto LABEL_11;
  }
LABEL_45:
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
LABEL_47:
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( v8 < 0 )
    BiLogMessage(4LL, L"BiExportEfiBootManager failed: %x", (unsigned int)v8);
  return (unsigned int)v8;
}
