/*
 * XREFs of IopBuildFullDriverPath @ 0x140A3AAEC
 * Callers:
 *     PpCheckInDriverDatabase @ 0x140A391E4 (PpCheckInDriverDatabase.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     PiNormalizeDeviceText @ 0x140A3B018 (PiNormalizeDeviceText.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     IopGetRegistryValue @ 0x140A11398 (IopGetRegistryValue.c)
 *     IopQueryRegistryKeySystemPath @ 0x140A3ADA0 (IopQueryRegistryKeySystemPath.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopBuildFullDriverPath(UNICODE_STRING *a1, void *a2, UNICODE_STRING *a3)
{
  NTSTATUS appended; // ebx
  NTSTATUS RegistryValue; // eax
  PVOID v8; // rsi
  unsigned int v9; // eax
  wchar_t *v10; // r14
  unsigned __int16 v11; // bx
  unsigned int v12; // edx
  __int64 Pool2; // rax
  UNICODE_STRING v15; // xmm6
  UNICODE_STRING String2; // [rsp+28h] [rbp-39h] BYREF
  UNICODE_STRING Source; // [rsp+38h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING String1; // [rsp+58h] [rbp-9h] BYREF
  UNICODE_STRING v20; // [rsp+68h] [rbp+7h]
  UNICODE_STRING v21; // [rsp+78h] [rbp+17h] BYREF
  UNICODE_STRING v22; // [rsp+88h] [rbp+27h] BYREF
  PVOID P; // [rsp+E0h] [rbp+7Fh] BYREF

  *(_QWORD *)&String1.Length = 1703960LL;
  *(_QWORD *)&v20.Length = 2359330LL;
  String1.Buffer = (wchar_t *)L"\\SystemRoot\\";
  v20.Buffer = L"System32\\Drivers\\";
  DestinationString = 0LL;
  Source = 0LL;
  v21 = 0LL;
  String2 = 0LL;
  v22 = 0LL;
  RtlInitUnicodeString(a3, 0LL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&Source, 0LL);
  RtlInitUnicodeString(&v21, 0LL);
  RtlInitUnicodeString(&String2, 0LL);
  RtlInitUnicodeString(&v22, 0LL);
  P = 0LL;
  appended = IopQueryRegistryKeySystemPath(a2, &DestinationString);
  if ( appended < 0 )
    goto LABEL_17;
  RegistryValue = IopGetRegistryValue(a2, L"ImagePath", 256, &P);
  v8 = P;
  if ( RegistryValue < 0 || (v9 = *((_DWORD *)P + 3), v9 < 2) )
  {
    String2 = *a1;
    v15 = String2;
    Source = DestinationString;
    v21 = v20;
    RtlInitUnicodeString(&v22, L".SYS");
    v11 = _mm_cvtsi128_si32((__m128i)v15);
  }
  else
  {
    if ( v9 > 0xFFFF )
      goto LABEL_20;
    v10 = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
    String2.MaximumLength = *((_DWORD *)P + 3);
    v11 = v9 - 2;
    String2.Buffer = v10;
    String2.Length = v9 - 2;
    if ( *v10 == 92 )
    {
      if ( RtlPrefixUnicodeString(&String1, &String2, 1u) )
      {
        v11 -= 24;
        Source = DestinationString;
        String2.Length = v11;
        String2.Buffer = v10 + 12;
      }
      else
      {
        RtlInitUnicodeString(&Source, 0LL);
      }
    }
    else
    {
      Source = DestinationString;
    }
  }
  v12 = Source.Length + 2 + v21.Length + v22.Length + v11;
  if ( v12 <= 0xFFFF )
  {
    a3->MaximumLength = v12;
    a3->Length = 0;
    Pool2 = ExAllocatePool2(0x100uLL);
    a3->Buffer = (wchar_t *)Pool2;
    if ( Pool2 )
    {
      appended = RtlAppendUnicodeStringToString(a3, &Source);
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeStringToString(a3, &v21);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(a3, &String2);
          if ( appended >= 0 )
          {
            appended = RtlAppendUnicodeStringToString(a3, &v22);
            if ( appended >= 0 )
              a3->Buffer[(unsigned __int64)a3->Length >> 1] = 0;
          }
        }
      }
    }
    else
    {
      appended = -1073741670;
    }
    goto LABEL_15;
  }
LABEL_20:
  appended = -2147483643;
LABEL_15:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_17:
  if ( DestinationString.Buffer )
    ExFreePool(DestinationString.Buffer);
  return (unsigned int)appended;
}
