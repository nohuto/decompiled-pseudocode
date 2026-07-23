/*
 * XREFs of CmpAddProcessorConfigurationEntry @ 0x14085A110
 * Callers:
 *     CmInitializeProcessor @ 0x140859FC8 (CmInitializeProcessor.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140CF3188 (CmpInitializeMachineDependentConfiguration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x140466120 (RtlInitAnsiString.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     sprintf_s @ 0x14053E940 (sprintf_s.c)
 *     strcpy_s @ 0x14053EAD0 (strcpy_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpInitializeRegistryNode @ 0x1408628CC (CmpInitializeRegistryNode.c)
 *     RtlAnsiStringToUnicodeString @ 0x14097C370 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall CmpAddProcessorConfigurationEntry(__int64 a1, int a2, int a3)
{
  char v6; // al
  const char *v7; // r8
  __int64 v8; // rax
  __int64 result; // rax
  bool v10; // zf
  __int64 v11; // rax
  int v12; // eax
  HANDLE v13; // rsi
  NTSTATUS v14; // edi
  const CHAR *v16; // r15
  _DWORD *v21; // r8
  unsigned int v22; // r9d
  __int64 v28; // rcx
  _QWORD *v29; // r14
  int Data; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  STRING SourceString; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v36[24]; // [rsp+90h] [rbp-70h] BYREF
  int v37; // [rsp+A8h] [rbp-58h]
  int v38; // [rsp+ACh] [rbp-54h]
  int v39; // [rsp+B8h] [rbp-48h]
  __int16 v40; // [rsp+BCh] [rbp-44h]
  __int16 v41; // [rsp+BEh] [rbp-42h]
  int v42; // [rsp+C4h] [rbp-3Ch]
  char *v43; // [rsp+C8h] [rbp-38h]
  _OWORD v44[3]; // [rsp+E0h] [rbp-20h] BYREF
  int v45; // [rsp+110h] [rbp+10h]
  char DstBuf[128]; // [rsp+120h] [rbp+20h] BYREF

  Data = 0;
  Handle = 0LL;
  v45 = 0;
  KeyHandle = (HANDLE)-1LL;
  SourceString = 0LL;
  memset(v44, 0, sizeof(v44));
  UnicodeString = 0LL;
  DestinationString = 0LL;
  memset_0(v36, 0, 0x48uLL);
  v40 = *(unsigned __int8 *)(a1 + 208);
  v41 = *(unsigned __int8 *)(a1 + 209);
  v43 = DstBuf;
  v6 = *(_BYTE *)(a1 + 141);
  v37 = 1;
  v38 = 1;
  v39 = a2;
  switch ( v6 )
  {
    case 1:
      v7 = "AMD64 Family %u Model %u Stepping %u";
      break;
    case 2:
      v7 = "Intel64 Family %u Model %u Stepping %u";
      break;
    case 3:
      v7 = "VIA64 Family %u Model %u Stepping %u";
      break;
    default:
      KeBugCheck(0x5Du);
  }
  sprintf_s(
    DstBuf,
    0x80uLL,
    v7,
    (unsigned int)*(char *)(a1 + 64),
    HIBYTE(*(unsigned __int16 *)(a1 + 66)),
    (unsigned __int8)*(_WORD *)(a1 + 66));
  v8 = -1LL;
  do
    ++v8;
  while ( DstBuf[v8] );
  v42 = v8 + 1;
  result = CmpInitializeRegistryNode(
             (unsigned int)v36,
             a3,
             (unsigned int)&KeyHandle,
             -1,
             -1,
             (__int64)&CmpDeviceIndexTable);
  if ( (int)result >= 0 )
  {
    memset_0(v36, 0, 0x48uLL);
    v10 = *(_BYTE *)(a1 + 64) == 3;
    v40 = *(unsigned __int8 *)(a1 + 208);
    v41 = *(unsigned __int8 *)(a1 + 209);
    v43 = DstBuf;
    v37 = 1;
    v38 = 2;
    v39 = a2;
    if ( v10 )
      strcpy_s(DstBuf, 0x80uLL, "80387");
    v11 = -1LL;
    do
      ++v11;
    while ( DstBuf[v11] );
    v42 = v11 + 1;
    v12 = CmpInitializeRegistryNode((unsigned int)v36, a3, (unsigned int)&Handle, -1, -1, (__int64)&CmpDeviceIndexTable);
    v13 = KeyHandle;
    v14 = v12;
    if ( v12 >= 0 )
    {
      ZwClose(Handle);
      _RAX = 0x80000000LL;
      v16 = (const CHAR *)((a1 + 36816) & -(__int64)(*(_BYTE *)(a1 + 65) != 0));
      __asm { cpuid }
      if ( (unsigned int)_RAX < 0x80000004 )
        goto LABEL_39;
      v21 = v44;
      v22 = -2147483646;
      do
      {
        _RAX = v22;
        __asm { cpuid }
        *v21 = _RAX;
        ++v22;
        v21[1] = _RBX;
        v21[2] = _RCX;
        v21[3] = _RDX;
        v21 += 4;
      }
      while ( v22 <= 0x80000004 );
      LOBYTE(v45) = 0;
      if ( !v21 )
        goto LABEL_39;
      RtlInitUnicodeString(&DestinationString, L"ProcessorNameString");
      LODWORD(v28) = 0;
      if ( LOBYTE(v44[0]) == 32 )
      {
        do
          v28 = (unsigned int)(v28 + 1);
        while ( *((_BYTE *)v44 + v28) == 32 );
      }
      RtlInitAnsiString(&SourceString, (PCSZ)v44 + (unsigned int)v28);
      v14 = RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u);
      if ( v14 >= 0 )
      {
        v14 = ZwSetValueKey(v13, &DestinationString, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
        RtlFreeAnsiString(&UnicodeString);
        if ( v14 >= 0 )
        {
LABEL_39:
          if ( !v16
            || (RtlInitUnicodeString(&DestinationString, L"VendorIdentifier"),
                RtlInitAnsiString(&SourceString, v16),
                v14 = RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u),
                v14 >= 0)
            && (v14 = ZwSetValueKey(v13, &DestinationString, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2),
                RtlFreeAnsiString(&UnicodeString),
                v14 >= 0) )
          {
            if ( !*(_QWORD *)(a1 + 36832)
              || (Data = *(_DWORD *)(a1 + 36832),
                  RtlInitUnicodeString(&DestinationString, L"FeatureSet"),
                  v14 = ZwSetValueKey(v13, &DestinationString, 0, 4u, &Data, 4u),
                  v14 >= 0) )
            {
              if ( !*(_DWORD *)(a1 + 68)
                || (RtlInitUnicodeString(&DestinationString, L"~MHz"),
                    v14 = ZwSetValueKey(v13, &DestinationString, 0, 4u, (PVOID)(a1 + 68), 4u),
                    v14 >= 0) )
              {
                v29 = (_QWORD *)(a1 + 36840);
                if ( *v29 )
                {
                  RtlInitUnicodeString(&DestinationString, L"Update Revision");
                  v14 = ZwSetValueKey(v13, &DestinationString, 0, 3u, v29, 8u);
                }
              }
            }
          }
        }
      }
    }
    if ( v13 != (HANDLE)-1LL )
      ZwClose(v13);
    return (unsigned int)v14;
  }
  return result;
}
