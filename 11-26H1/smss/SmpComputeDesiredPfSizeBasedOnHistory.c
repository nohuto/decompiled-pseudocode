/*
 * XREFs of SmpComputeDesiredPfSizeBasedOnHistory @ 0x14000F1C0
 * Callers:
 *     SmpInitializeManagedPagefileSupport @ 0x14000E6D8 (SmpInitializeManagedPagefileSupport.c)
 * Callees:
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     memcpy_0 @ 0x14001E82B (memcpy_0.c)
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 SmpComputeDesiredPfSizeBasedOnHistory()
{
  __int64 v0; // rdx
  size_t *v1; // rcx
  ULONG *p_ElapsedSeconds; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  ULONG v13; // eax
  unsigned int v14; // edi
  NTSTATUS v15; // eax
  NTSTATUS v16; // ebx
  __int64 v17; // rbx
  unsigned int v18; // ebx
  size_t v20; // rdi
  unsigned __int64 v21; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  union _LARGE_INTEGER Time; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  _DWORD KeyValueInformation[2]; // [rsp+A0h] [rbp-60h] BYREF
  ULONG ElapsedSeconds; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD Base[240]; // [rsp+470h] [rbp+370h] BYREF

  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Time.QuadPart = 0LL;
  v25[1] = L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion";
  v25[0] = 8257660LL;
  ValueName.Buffer = L"InstallDate";
  *(_QWORD *)&ValueName.Length = 1572886LL;
  memset_0(KeyValueInformation, 0, 0x3CCuLL);
  if ( NtQueryValueKey(
         SmpMmKey,
         (PUNICODE_STRING)&SmpPagefileUsageValue,
         KeyValuePartialInformationAlign64,
         KeyValueInformation,
         0x3CCu,
         &ResultLength) >= 0
    && KeyValueInformation[0] == 3
    && KeyValueInformation[1] == 964
    && ElapsedSeconds )
  {
    v0 = 7LL;
    v1 = &NumOfElements;
    p_ElapsedSeconds = &ElapsedSeconds;
    do
    {
      v3 = *((_OWORD *)p_ElapsedSeconds + 1);
      *(_OWORD *)v1 = *(_OWORD *)p_ElapsedSeconds;
      v4 = *((_OWORD *)p_ElapsedSeconds + 2);
      *((_OWORD *)v1 + 1) = v3;
      v5 = *((_OWORD *)p_ElapsedSeconds + 3);
      *((_OWORD *)v1 + 2) = v4;
      v6 = *((_OWORD *)p_ElapsedSeconds + 4);
      *((_OWORD *)v1 + 3) = v5;
      v7 = *((_OWORD *)p_ElapsedSeconds + 5);
      *((_OWORD *)v1 + 4) = v6;
      v8 = *((_OWORD *)p_ElapsedSeconds + 6);
      *((_OWORD *)v1 + 5) = v7;
      v9 = *((_OWORD *)p_ElapsedSeconds + 7);
      p_ElapsedSeconds += 32;
      *((_OWORD *)v1 + 6) = v8;
      v1 += 16;
      *((_OWORD *)v1 - 1) = v9;
      --v0;
    }
    while ( v0 );
    v10 = *((_OWORD *)p_ElapsedSeconds + 1);
    *(_OWORD *)v1 = *(_OWORD *)p_ElapsedSeconds;
    v11 = *((_OWORD *)p_ElapsedSeconds + 2);
    *((_OWORD *)v1 + 1) = v10;
    v12 = *((_OWORD *)p_ElapsedSeconds + 3);
    v13 = p_ElapsedSeconds[16];
    *((_OWORD *)v1 + 2) = v11;
    *((_OWORD *)v1 + 3) = v12;
    *((_DWORD *)v1 + 16) = v13;
  }
  else
  {
    LODWORD(NumOfElements) = 0;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v25;
  v14 = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v15 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v15 < 0 )
  {
    SmpLogFailure((__int64)"SmpComputeDesiredPfSizeBasedOnHistory", 3522, v15);
  }
  else
  {
    v16 = NtQueryValueKey(
            KeyHandle,
            &ValueName,
            KeyValuePartialInformationAlign64,
            KeyValueInformation,
            0x3CCu,
            &ResultLength);
    NtClose(KeyHandle);
    if ( v16 >= 0 && KeyValueInformation[0] == 4 )
    {
      v17 = MEMORY[0x7FFE0014];
      RtlSecondsSince1970ToTime(ElapsedSeconds, &Time);
      if ( (unsigned __int64)(v17 - Time.QuadPart) >= 0x649534E0000LL )
        v14 = 8;
    }
  }
  v18 = NumOfElements;
  if ( (unsigned int)NumOfElements < v14 )
    return SmpDesiredPfSizeBasedOnRAM;
  if ( (unsigned int)NumOfElements >= 0xF0 )
  {
    v18 = 240;
    goto LABEL_21;
  }
  if ( (_DWORD)NumOfElements )
  {
LABEL_21:
    v20 = v18;
    memcpy_0(Base, dword_140031C54, 4LL * v18);
    goto LABEL_22;
  }
  v20 = 0LL;
LABEL_22:
  qsort(Base, v20, 4uLL, (int (__cdecl *)(const void *, const void *))SmpPagefileUsageSampleCompare);
  v21 = (unsigned int)dword_140031AE8 * (unsigned __int64)(unsigned int)Base[9 * v18 / 0xA];
  return v21 + (v21 >> 4);
}
