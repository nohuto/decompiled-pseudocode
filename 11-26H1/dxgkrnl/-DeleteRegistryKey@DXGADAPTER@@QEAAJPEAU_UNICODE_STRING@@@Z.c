/*
 * XREFs of ?DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x14019770C
 * Callers:
 *     ?DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ @ 0x140197AD8 (-DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x14005565C (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ??1DXG_REGISTRY_KEY_LIST@@QEAA@XZ @ 0x1401D5BAC (--1DXG_REGISTRY_KEY_LIST@@QEAA@XZ.c)
 *     ?AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@Z @ 0x1401D5BF0 (-AppendSubKeys@DXG_REGISTRY_KEY_LIST@@QEAAJPEAXPEAU_KEY_FULL_INFORMATION@@PEAU_UNICODE_STRING@@@.c)
 *     ?InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1401D77FC (-InsertHead@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1401D7FA0 (-ReadNextPath@DXG_REGISTRY_KEY_LIST@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?CloseRegistrySubkey@@YAXPEAX@Z @ 0x1403388F4 (-CloseRegistrySubkey@@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGADAPTER::DeleteRegistryKey(DXGADAPTER *this, struct _UNICODE_STRING *a2, ULONG a3)
{
  unsigned int v3; // edi
  __int64 v4; // rsi
  NTSTATUS v5; // eax
  NTSTATUS v6; // eax
  int appended; // eax
  int inserted; // eax
  const wchar_t *v9; // r9
  int v10; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v15; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v16[2]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v17[2]; // [rsp+78h] [rbp-88h] BYREF
  ULONG ResultLength; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  struct _KEY_FULL_INFORMATION KeyInformation; // [rsp+C0h] [rbp-40h] BYREF
  char v21; // [rsp+F0h] [rbp-10h] BYREF

  *(_QWORD *)&v15.Length = 34078720LL;
  v3 = 0;
  v16[1] = v16;
  v16[0] = v16;
  v17[1] = v17;
  v17[0] = v17;
  v15.Buffer = (wchar_t *)&v21;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  memset(&KeyInformation, 0, sizeof(KeyInformation));
  if ( *((_BYTE *)this + 210) )
  {
    WdLogSingleEntry0(4LL);
    WdLogGlobalForLineNumber = 12954;
  }
  else
  {
    RtlUnicodeStringCopy(&v15, a2, a3);
    LODWORD(v4) = DXG_REGISTRY_KEY_LIST::InsertHead((DXG_REGISTRY_KEY_LIST *)v16, &v15);
    while ( (_QWORD *)v16[0] != v16 )
    {
      DXG_REGISTRY_KEY_LIST::ReadNextPath((DXG_REGISTRY_KEY_LIST *)v16, &v15);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v15;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v5 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      v4 = v5;
      if ( v5 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 12974;
LABEL_14:
        v9 = L"Failed to open Registry key for DeleteRegistryKeys (status = 0x%I64x).";
        goto LABEL_23;
      }
      ResultLength = 0;
      v6 = ZwQueryKey(KeyHandle, KeyFullInformation, &KeyInformation, 0x30u, &ResultLength);
      v4 = v6;
      if ( v6 < 0 )
      {
        WdLogSingleEntry1(2LL);
        v9 = L"Failed to query key for VmBusGetRegistryKeys (status = 0x%I64x).";
        WdLogGlobalForLineNumber = 12987;
        goto LABEL_23;
      }
      appended = DXG_REGISTRY_KEY_LIST::AppendSubKeys((DXG_REGISTRY_KEY_LIST *)v16, KeyHandle, &KeyInformation, &v15);
      v4 = appended;
      if ( appended < 0 )
      {
        WdLogSingleEntry1(2LL);
        v9 = L"Failed to append sub keys for DeleteRegistryKeys (status = 0x%I64x).";
        WdLogGlobalForLineNumber = 12994;
        goto LABEL_23;
      }
      inserted = DXG_REGISTRY_KEY_LIST::InsertHead((DXG_REGISTRY_KEY_LIST *)v17, &v15);
      v4 = inserted;
      if ( inserted < 0 )
      {
        WdLogSingleEntry1(2LL);
        v9 = L"Failed to insert RegPath to RegKeyList for DeleteRegistryKeys (status = 0x%I64x).";
        WdLogGlobalForLineNumber = 13001;
LABEL_23:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v4, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_24;
      }
      CloseRegistrySubkey(KeyHandle);
      KeyHandle = 0LL;
    }
    while ( (_QWORD *)v17[0] != v17 )
    {
      v10 = DXG_REGISTRY_KEY_LIST::ReadNextPath((DXG_REGISTRY_KEY_LIST *)v17, &v15);
      v4 = v10;
      if ( v10 < 0 )
      {
        WdLogSingleEntry1(2LL);
        v9 = L"Failed to read next registry path for DeleteRegistryKeys (status = 0x%I64x).";
        WdLogGlobalForLineNumber = 13015;
        goto LABEL_23;
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &v15;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v11 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      v4 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 13028;
        goto LABEL_14;
      }
      v12 = ZwDeleteKey(KeyHandle);
      v4 = v12;
      if ( v12 < 0 )
      {
        WdLogSingleEntry1(2LL);
        v9 = L"Failed to delete Registry key for DeleteRegistryKeys (status = 0x%I64x).";
        WdLogGlobalForLineNumber = 13036;
        goto LABEL_23;
      }
      CloseRegistrySubkey(KeyHandle);
      KeyHandle = 0LL;
    }
LABEL_24:
    CloseRegistrySubkey(KeyHandle);
    v3 = v4;
  }
  DXG_REGISTRY_KEY_LIST::~DXG_REGISTRY_KEY_LIST((DXG_REGISTRY_KEY_LIST *)v17);
  DXG_REGISTRY_KEY_LIST::~DXG_REGISTRY_KEY_LIST((DXG_REGISTRY_KEY_LIST *)v16);
  return v3;
}
