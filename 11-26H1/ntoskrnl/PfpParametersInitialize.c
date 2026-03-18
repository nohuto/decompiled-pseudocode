/*
 * XREFs of PfpParametersInitialize @ 0x140CCE460
 * Callers:
 *     PfInitializeSuperfetch @ 0x140CCE038 (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PfSnParametersRead @ 0x1407C7510 (PfSnParametersRead.c)
 *     PfpGetParameter @ 0x1407C7A20 (PfpGetParameter.c)
 *     PfpParametersRead @ 0x1407C7B10 (PfpParametersRead.c)
 *     PfpSetBaseTime @ 0x1407C7EE8 (PfpSetBaseTime.c)
 *     PfpSetParameter @ 0x1407C7FA8 (PfpSetParameter.c)
 *     PfpCreateEvent @ 0x1407C800C (PfpCreateEvent.c)
 *     PfSnParametersSetDefaults @ 0x140CCE37C (PfSnParametersSetDefaults.c)
 */

NTSTATUS __fastcall PfpParametersInitialize(__int64 a1)
{
  HANDLE *v2; // rsi
  NTSTATUS result; // eax
  HANDLE v4; // rcx
  _DWORD *v5; // rdi
  __int64 v6; // r8
  ULONG v7; // eax
  HANDLE v8; // rcx
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp+7h] BYREF
  UNICODE_STRING v10; // [rsp+58h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  ULONG v12; // [rsp+A8h] [rbp+67h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v10 = 0LL;
  DestinationString = 0LL;
  memset_0((void *)a1, 0, 0x220uLL);
  *(_QWORD *)(a1 + 56) = a1;
  *(_QWORD *)(a1 + 48) = PfpParametersWatcher;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 88) = 10000;
  *(_DWORD *)(a1 + 92) = 10000;
  *(_DWORD *)(a1 + 68) = 0x80000000;
  *(_DWORD *)(a1 + 80) = 16;
  *(_DWORD *)(a1 + 76) = 64;
  *(_DWORD *)(a1 + 84) = 5000;
  PfSnParametersSetDefaults(a1);
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchParametersChanged");
  PfpCreateEvent((__int64)&DestinationString, 1LL, a1);
  RtlInitUnicodeString(
    &v10,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\PrefetchParameters");
  v2 = (HANDLE *)(a1 + 8);
  ObjectAttributes.ObjectName = &v10;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey((PHANDLE)(a1 + 8), 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result < 0 )
  {
    *v2 = 0LL;
  }
  else
  {
    PfpParametersRead(a1);
    PfSnParametersRead(a1);
    v4 = *v2;
    v5 = (_DWORD *)(a1 + 72);
    v12 = 4;
    if ( PfpGetParameter(v4, L"BootId", 4, (void *)(a1 + 72), &v12) < 0 )
      *v5 = 0;
    v7 = v12;
    v8 = *v2;
    ++*v5;
    PfpSetParameter(v8, L"BootId", v6, (void *)(a1 + 72), v7);
    return PfpSetBaseTime(*v2, (_DWORD *)(a1 + 540));
  }
  return result;
}
