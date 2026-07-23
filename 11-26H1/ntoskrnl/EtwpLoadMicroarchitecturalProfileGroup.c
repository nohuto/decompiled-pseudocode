/*
 * XREFs of EtwpLoadMicroarchitecturalProfileGroup @ 0x14082C8E4
 * Callers:
 *     EtwpLoadMicroarchitecturalPmcs @ 0x14082C6B8 (EtwpLoadMicroarchitecturalPmcs.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x140728600 (ZwEnumerateKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x14082C128 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     EtwpGetPmcCpuHierarchyRegistry @ 0x14082C1CC (EtwpGetPmcCpuHierarchyRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x14082CBF8 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     KiGetCpuVendor @ 0x140C10708 (KiGetCpuVendor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpLoadMicroarchitecturalProfileGroup(HANDLE KeyHandle, __int64 a2)
{
  int CpuVendor; // edi
  __int64 v5; // rbx
  __int64 **v6; // rdx
  __int64 *v7; // r8
  char *v8; // rcx
  __int64 *v9; // r9
  char *v10; // r10
  __int64 v11; // r11
  __int64 v12; // rax
  unsigned __int16 i; // cx
  size_t v14; // rsi
  WCHAR *Pool2; // rbx
  int v16; // edi
  __int64 v17; // rax
  ULONG Length; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandlea; // [rsp+38h] [rbp-C8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v24[4]; // [rsp+80h] [rbp-80h] BYREF
  struct _KAFFINITY_EX v25; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE KeyInformation[12]; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v27; // [rsp+1BCh] [rbp+BCh]
  wchar_t v28[264]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v29; // [rsp+3D0h] [rbp+2D0h] BYREF
  int v30; // [rsp+3D8h] [rbp+2D8h]
  char v31; // [rsp+3E0h] [rbp+2E0h] BYREF
  char v32; // [rsp+3E8h] [rbp+2E8h] BYREF
  int v33[6]; // [rsp+420h] [rbp+320h] BYREF
  char v34; // [rsp+438h] [rbp+338h] BYREF

  v19 = 0;
  memset_0(KeyInformation, 0, 0x218uLL);
  v24[0] = L"Family";
  v24[1] = L"Model";
  v24[2] = L"Stepping";
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  memset_0(&v25.8, 0, sizeof(v25.8));
  KeyHandlea = 0LL;
  ResultLength = 0;
  CpuVendor = KiGetCpuVendor();
  EtwpGetPmcCpuHierarchyRegistry((int)KeyHandle, &v19, (__int64)&v29);
  memset_0(v33, 0, 0xE0uLL);
  v5 = -1LL;
  v6 = (__int64 **)&v32;
  v29 = -1LL;
  v7 = v24;
  v30 = -1;
  v8 = &v34;
  v9 = &v29;
  v10 = &v31;
  v11 = 3LL;
  do
  {
    *(_QWORD *)v8 = v10;
    *((_QWORD *)v8 - 3) = &EtwpQueryRegistryCallback;
    v10 += 16;
    v12 = *v7++;
    *v6 = v9;
    v9 = (__int64 *)((char *)v9 + 4);
    *((_QWORD *)v8 - 1) = v12;
    *((_DWORD *)v8 + 2) = 4;
    v8 += 56;
    *((_DWORD *)v6 - 2) = 4;
    v6 += 2;
    --v11;
  }
  while ( v11 );
  if ( (int)RtlpQueryRegistryValues(0x40000000, (int)KeyHandle, (int)v33, 0, Length, 1) >= 0 && v19 == CpuVendor )
  {
    *(_QWORD *)&v25.Count = 2097153LL;
    memset_0(&v25.8, 0, sizeof(v25.8));
    EtwpGetMicroarchitecturalPmcAffinity((__int64)&v29, &v25.Count);
    for ( i = 0; i < v25.Count; ++i )
    {
      if ( v25.Bitmap[i] )
      {
        do
          ++v5;
        while ( *(_WORD *)(a2 + 2 * v5) );
        v14 = (unsigned int)(2 * v5 + 512);
        Pool2 = (WCHAR *)ExAllocatePool2(0x100uLL);
        v16 = -1;
        while ( ZwEnumerateKey(KeyHandle, ++v16, KeyBasicInformation, KeyInformation, 0x216u, &ResultLength) >= 0 )
        {
          v17 = v27 >> 1;
          if ( (unsigned int)v17 <= 0xFE )
          {
            v28[v17] = 0;
            if ( RtlStringCbPrintfW(Pool2, v14, L"%ws\\%ws", a2, v28) >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, Pool2);
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &DestinationString;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes) >= 0 )
              {
                EtwpLoadMicroarchitecturalProfileSource((_DWORD)KeyHandlea, &v25, v28);
                ZwClose(KeyHandlea);
              }
            }
          }
        }
        ExFreePoolWithTag(Pool2, 0x50777445u);
        return;
      }
    }
  }
}
