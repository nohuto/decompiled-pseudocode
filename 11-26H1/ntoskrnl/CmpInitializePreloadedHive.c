/*
 * XREFs of CmpInitializePreloadedHive @ 0x140CF1290
 * Callers:
 *     CmpInitializePreloadedHives @ 0x140CF16F4 (CmpInitializePreloadedHives.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     CmpSetupLoggingState @ 0x140853434 (CmpSetupLoggingState.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 *     CmpLinkHiveToMaster @ 0x14093E12C (CmpLinkHiveToMaster.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140CF0E84 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 */

__int64 __fastcall CmpInitializePreloadedHive(__int64 a1, __int64 a2)
{
  int v4; // ebx
  wchar_t *Pool2; // rax
  wchar_t *v6; // r15
  int v7; // ecx
  const wchar_t *SystemRelativeRegistryHiveFilePath; // rbx
  int v9; // eax
  int v10; // esi
  int v11; // r14d
  wchar_t *v12; // rax
  wchar_t *v13; // rbx
  int v14; // r8d
  int v15; // eax
  int v16; // eax
  int v17; // eax
  bool v18; // zf
  int v19; // ecx
  int v20; // eax
  void *volatile *StackBase; // rcx
  void *volatile **v22; // rax
  char v24[8]; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR v25; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING Destination; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v27; // [rsp+90h] [rbp-70h] BYREF
  _OWORD BugCheckParameter3[27]; // [rsp+A0h] [rbp-60h] BYREF
  char v29; // [rsp+250h] [rbp+150h] BYREF

  memset_0(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  v4 = 4096;
  v25 = 0LL;
  v24[0] = 0;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 0x1000uLL, 0x20204D43u);
  v6 = Pool2;
  if ( !Pool2 )
    goto LABEL_41;
  v7 = *(_DWORD *)(a1 + 24);
  *(_QWORD *)&Destination.Length = 0x10000000LL;
  Destination.Buffer = Pool2;
  if ( (v7 & 0x80) != 0 )
  {
    SystemRelativeRegistryHiveFilePath = CmpGetSystemRelativeRegistryHiveFilePath(*(const wchar_t **)(a1 + 16));
    RtlAppendUnicodeToString(&Destination, L"\\DriverStore\\Nodes\\");
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 48));
    RtlAppendUnicodeToString(&Destination, SystemRelativeRegistryHiveFilePath);
    v4 = 0x400000;
    if ( (*(_DWORD *)(a1 + 24) & 0x10) != 0
      && (!HIDWORD(WheapPfaLock.KernelStack) || !LODWORD(WheapPfaLock.KernelStack)) )
    {
      v4 = 4194305;
    }
  }
  else if ( (v7 & 0x36) != 0 )
  {
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v9 = *(_DWORD *)(a1 + 24);
    if ( (v9 & 2) == 0 )
    {
      if ( (v9 & 4) != 0 )
        v4 = 0x2000;
      else
        v4 = (v9 & 0x20) != 0 ? 0x200000 : 1;
    }
  }
  else
  {
    RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\System32\\Config\\");
    RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(a1 + 16));
    v4 = 0x4000;
  }
  v10 = v4 | 0x1000000;
  if ( (*(_DWORD *)(a1 + 24) & 0x100) == 0 )
    v10 = v4;
  v11 = *(_DWORD *)(a1 + 24) & 0x200;
  v12 = (wchar_t *)ExAllocatePool2(256LL, Destination.Length + 2LL, 0x20204D43u);
  v13 = v12;
  if ( !v12 )
LABEL_41:
    KeBugCheckEx(0x74u, 3uLL, 4uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  memmove(v12, Destination.Buffer, Destination.Length);
  ExFreePoolWithTag(v6, 0);
  v13[(unsigned __int64)Destination.Length >> 1] = 0;
  v14 = *(_DWORD *)(a1 + 24);
  Destination.MaximumLength = Destination.Length + 2;
  Destination.Buffer = v13;
  v15 = CmpCreateHive(
          &v25,
          1u,
          (32 * (v14 & 8)) | 0x12u,
          2u,
          *(_QWORD *)(a1 + 32),
          0LL,
          (__int64)&Destination,
          5832712,
          0LL,
          0LL,
          a1,
          (__int64)v24,
          (__int64)BugCheckParameter3);
  if ( v15 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 5uLL, (ULONG_PTR)BugCheckParameter3, v15);
  CmpSetupLoggingState(v25, (unsigned int *)(a1 + 64));
  RtlInitUnicodeString((PUNICODE_STRING)(v25 + 1832), v13);
  v16 = v10 | 0x4000000;
  if ( !v11 )
    v16 = v10;
  *(_DWORD *)(v25 + 160) |= v16 | 0x400;
  if ( v24[0] == 1 )
    *(_DWORD *)(v25 + 160) |= 0x800u;
  if ( BYTE4(NlsMbOemCodePageTag) )
    *(_DWORD *)(v25 + 160) |= 0x8000u;
  v17 = *(_DWORD *)(a1 + 24);
  if ( (v17 & 0x80u) == 0 )
  {
    if ( !HIDWORD(WheapPfaLock.KernelStack) || LODWORD(WheapPfaLock.KernelStack) )
      goto LABEL_33;
    v18 = (v17 & 0x20) == 0;
  }
  else
  {
    if ( (v17 & 0x10) == 0 )
      goto LABEL_33;
    if ( !HIDWORD(WheapPfaLock.KernelStack) )
    {
LABEL_32:
      *(_DWORD *)(v25 + 160) |= 0x8000u;
      goto LABEL_33;
    }
    v18 = LODWORD(WheapPfaLock.KernelStack) == 0;
  }
  if ( v18 )
    goto LABEL_32;
LABEL_33:
  v19 = *(_DWORD *)(*(_QWORD *)(v25 + 64) + 4088LL);
  *(_DWORD *)&CmpContextListLock.ApcStateFill[36] = v19;
  if ( !CmSelfHeal )
  {
    BYTE2(NlsMbOemCodePageTag) = 0;
    if ( (v19 & 4) != 0 )
      KeBugCheckEx(0x74u, 3uLL, 6uLL, v25, 0LL);
  }
  *(_QWORD *)&v27.Length = 0x800000LL;
  v27.Buffer = (wchar_t *)&v29;
  RtlAppendUnicodeToString(&v27, L"\\REGISTRY\\");
  RtlAppendUnicodeToString(&v27, *(PCWSTR *)(a1 + 56));
  RtlAppendUnicodeToString(&v27, L"\\");
  RtlAppendUnicodeToString(&v27, *(PCWSTR *)(a1 + 48));
  v20 = CmpLinkHiveToMaster(&v27.Length, 0LL, v25, 0, 0x200u, 0, 0LL, a2, 0LL, 0LL, 1, BugCheckParameter3);
  if ( v20 < 0 )
    KeBugCheckEx(0x74u, 3uLL, 7uLL, v25, v20);
  StackBase = (void *volatile *)CmpContextListLock.StackBase;
  v22 = (void *volatile **)(v25 + 1624);
  if ( *(struct _KTHREAD **)CmpContextListLock.StackBase != (struct _KTHREAD *)&CmpContextListLock.StackLimit )
    __fastfail(3u);
  *v22 = &CmpContextListLock.StackLimit;
  v22[1] = StackBase;
  *StackBase = v22;
  CmpContextListLock.StackBase = v22;
  return 0LL;
}
