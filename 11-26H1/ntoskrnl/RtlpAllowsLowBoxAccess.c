/*
 * XREFs of RtlpAllowsLowBoxAccess @ 0x14045B09C
 * Callers:
 *     RtlpLookupLowBox @ 0x14045ADDC (RtlpLookupLowBox.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SeClearLearningModeObjectInformation @ 0x14041C210 (SeClearLearningModeObjectInformation.c)
 *     SeSetLearningModeObjectInformation @ 0x14041D674 (SeSetLearningModeObjectInformation.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x14041DAC0 (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PsReferenceEffectiveToken @ 0x1409CAEC0 (PsReferenceEffectiveToken.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall RtlpAllowsLowBoxAccess(__int64 a1)
{
  bool v1; // zf
  char result; // al
  size_t v4; // rsi
  wchar_t *Pool2; // rax
  wchar_t *v6; // rbx
  NTSTATUS v7; // eax
  const WCHAR *v8; // rdx
  bool v9; // di
  int v10; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+6Ch] [rbp-9Ch] BYREF
  _BYTE v12[4]; // [rsp+74h] [rbp-94h] BYREF
  __int64 v13; // [rsp+78h] [rbp-90h] BYREF
  __int64 v14; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v16; // [rsp+98h] [rbp-70h] BYREF
  __int128 v17; // [rsp+A8h] [rbp-60h] BYREF
  PVOID Object[2]; // [rsp+B8h] [rbp-50h]
  __int128 v19; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v20; // [rsp+D8h] [rbp-30h]
  __int128 v21; // [rsp+E8h] [rbp-20h]
  __int64 v22; // [rsp+F8h] [rbp-10h]
  __int64 v23; // [rsp+100h] [rbp-8h] BYREF
  int v24; // [rsp+108h] [rbp+0h]
  int v25; // [rsp+10Ch] [rbp+4h]
  char v26; // [rsp+110h] [rbp+8h] BYREF

  v11 = 0LL;
  v1 = (*(_BYTE *)(a1 + 38) & 2) == 0;
  v23 = 0x3000000020000LL;
  v17 = 0LL;
  *(_OWORD *)Object = 0LL;
  v24 = 0x20000;
  v25 = 2031616;
  v19 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  DestinationString = 0LL;
  v16 = 0LL;
  if ( !v1 )
    return 1;
  Object[0] = (PVOID)PsReferenceEffectiveToken(KeGetCurrentThread(), 1836020801LL, &v13, &v10, v12, 0LL);
  if ( (*((_DWORD *)Object[0] + 50) & 0x1000000) == 0 )
  {
    ObfDereferenceObjectWithTag(Object[0], 0x6D6F7441u);
    return 0;
  }
  RtlInitUnicodeString(&DestinationString, L"Global Atom Table Entry");
  v4 = 2LL * *(unsigned __int8 *)(a1 + 40) + 2;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  v6 = Pool2;
  if ( Pool2 )
  {
    v7 = RtlStringCbCopyW(Pool2, v4, (NTSTRSAFE_PCWSTR)(a1 + 42));
    v8 = L"Unable to capture ATOM name.";
    if ( v7 >= 0 )
      v8 = v6;
  }
  else
  {
    v8 = L"Unable to Allocate space for ATOM name.";
  }
  RtlInitUnicodeString(&v16, v8);
  *(_QWORD *)&v20 = &DestinationString;
  *((_QWORD *)&v20 + 1) = &v16;
  SeSetLearningModeObjectInformation((__int64)&v19);
  v14 = (__int64)&v26;
  Object[1] = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
  v9 = SeAccessCheckWithHint(
         (__int64)PspSiloMonitorLock.ThreadListEntry.Flink,
         0,
         (int *)&v17,
         0,
         0x20000u,
         0,
         &v14,
         &v23,
         KeGetCurrentThread()->PreviousMode,
         (unsigned int *)&v11,
         (int *)&v11 + 1);
  ObfDereferenceObjectWithTag(Object[0], 0x6D6F7441u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6D4E7441u);
  SeClearLearningModeObjectInformation();
  result = 1;
  if ( !v9 || !(_DWORD)v11 )
    return 0;
  return result;
}
