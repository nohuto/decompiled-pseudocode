/*
 * XREFs of sub_14003CC48 @ 0x14003CC48
 * Callers:
 *     sub_14009641C @ 0x14009641C (sub_14009641C.c)
 *     sub_14019595C @ 0x14019595C (sub_14019595C.c)
 *     sub_140197110 @ 0x140197110 (sub_140197110.c)
 *     sub_1401B10C4 @ 0x1401B10C4 (sub_1401B10C4.c)
 * Callees:
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

bool __fastcall sub_14003CC48(int a1, __int64 a2, _WORD *a3)
{
  const WCHAR *v5; // rdx
  NTSTATUS v6; // ebx
  void *v7; // rbx
  PVOID SystemRoutineAddress; // rax
  void *v9; // rcx
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING SystemRoutineName; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  _BYTE Dst[8]; // [rsp+A0h] [rbp-60h] BYREF
  int v18; // [rsp+A8h] [rbp-58h]
  const wchar_t *v19; // [rsp+B0h] [rbp-50h]
  int *v20; // [rsp+B8h] [rbp-48h]
  int v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  int v23; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall *v24)(int, int, int, int, __int64, __int64); // [rsp+D8h] [rbp-28h]
  int v25; // [rsp+E0h] [rbp-20h]
  const wchar_t *v26; // [rsp+E8h] [rbp-18h]
  __int64 v27; // [rsp+F0h] [rbp-10h]
  int v28; // [rsp+F8h] [rbp-8h]
  __int64 v29; // [rsp+100h] [rbp+0h]
  int v30; // [rsp+108h] [rbp+8h]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v11 = 0;
  DestinationString = 0LL;
  if ( ((a1 - 3) & 0xFFFFFFF7) != 0 )
  {
    if ( a1 == 1 || a1 == 10 )
      v5 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage\\StorageTelemetry\\SCSI";
    else
      v5 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage\\StorageTelemetry\\Generic";
  }
  else
  {
    v5 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Storage\\StorageTelemetry\\ATA";
  }
  RtlInitUnicodeString(&DestinationString, v5);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    memset_0(Dst, 0, 0xA8uLL);
    v7 = KeyHandle;
    v19 = L"PrivateLogAddress";
    v23 = 4;
    v20 = &v11;
    v28 = 4;
    v24 = sub_1400BB8F0;
    v25 = 17;
    v12 = 17LL;
    v26 = L"PublicLogAddressList";
    v18 = 304;
    v21 = 67108868;
    v22 = 0LL;
    v27 = a2;
    v29 = 0LL;
    v30 = 0;
    SystemRoutineName = 0LL;
    RtlInitUnicodeString(&SystemRoutineName, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = MmGetSystemRoutineAddress(&SystemRoutineName);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = RtlQueryRegistryValues;
    v6 = ((__int64 (__fastcall *)(__int64, void *, _BYTE *, __int64 *, _QWORD))SystemRoutineAddress)(
           0x40000000LL,
           v7,
           Dst,
           &v12,
           0LL);
    if ( HIDWORD(v12) && HIDWORD(v12) < (unsigned int)(v12 - 1) )
      *(_WORD *)(a2 + 2LL * (unsigned int)(HIDWORD(v12) + 1)) = 0;
    v9 = KeyHandle;
    *a3 = v11;
    ZwClose(v9);
  }
  return v6 >= 0;
}
