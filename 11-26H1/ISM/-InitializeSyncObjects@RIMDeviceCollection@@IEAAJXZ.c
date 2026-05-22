/*
 * XREFs of ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x180044154
 * Callers:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180043A70 (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800D32E0 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 * Callees:
 *     ?RegisterWaitHandler@RIMDeviceCollection@@AEAAJPEAXP6AJ0K0@Z0@Z @ 0x18004444C (-RegisterWaitHandler@RIMDeviceCollection@@AEAAJPEAXP6AJ0K0@Z0@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180089A20 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::InitializeSyncObjects(RIMDeviceCollection *this)
{
  HANDLE CurrentProcess; // rax
  void *v3; // rsi
  HANDLE EventW; // rax
  const char *v5; // r9
  HANDLE v6; // rax
  RIMDeviceCollection *v7; // rcx
  int v8; // edi
  HANDLE v9; // rax
  RIMDeviceCollection *v10; // rcx
  HANDLE WaitableTimer; // rax
  RIMDeviceCollection *v12; // rcx
  HANDLE Semaphore; // rax
  RIMDeviceCollection *v14; // rcx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // rdx
  __int64 v19; // rdx
  DWORD dwDesiredAccess; // [rsp+20h] [rbp-20h]
  DWORD dwDesiredAccessa; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  HANDLE TargetHandle; // [rsp+60h] [rbp+20h] BYREF
  HANDLE v24; // [rsp+68h] [rbp+28h] BYREF

  CurrentProcess = GetCurrentProcess();
  TargetHandle = 0LL;
  v24 = 0LL;
  v3 = CurrentProcess;
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 5) = EventW;
  if ( !EventW )
  {
    v18 = 783LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v18,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v5);
  }
  v6 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 6) = v6;
  if ( !v6 )
  {
    v18 = 790LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v18,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v5);
  }
  if ( !DuplicateHandle(v3, v6, v3, &TargetHandle, 0, 0, 2u) )
  {
    v18 = 799LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v18,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v5);
  }
  v8 = RIMDeviceCollection::RegisterWaitHandler(
         v7,
         TargetHandle,
         (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMPnpEventStatic,
         this);
  if ( v8 < 0 )
  {
    v19 = 804LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
      (const char *)(unsigned int)v8,
      dwDesiredAccess);
    return (unsigned int)v8;
  }
  v9 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 7) = v9;
  if ( !v9 )
  {
    v18 = 811LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v18,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v5);
  }
  if ( !DuplicateHandle(v3, v9, v3, &TargetHandle, 0, 0, 2u) )
  {
    v18 = 820LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v18,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v5);
  }
  v8 = RIMDeviceCollection::RegisterWaitHandler(
         v10,
         TargetHandle,
         (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMDeferredRead,
         this);
  if ( v8 < 0 )
  {
    v19 = 825LL;
    goto LABEL_24;
  }
  WaitableTimer = CreateWaitableTimerExW(0LL, 0LL, 0, 0x100002u);
  *((_QWORD *)this + 8) = WaitableTimer;
  if ( !WaitableTimer )
  {
    v18 = 833LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v18,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v5);
  }
  if ( !DuplicateHandle(v3, WaitableTimer, v3, &TargetHandle, 0, 0, 2u) )
  {
    v18 = 842LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v18,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v5);
  }
  v8 = RIMDeviceCollection::RegisterWaitHandler(
         v12,
         TargetHandle,
         (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMTimerEventStatic,
         this);
  if ( v8 < 0 )
  {
    v19 = 847LL;
    goto LABEL_24;
  }
  Semaphore = CreateSemaphoreExW(0LL, 0, 0x7FFFFFFF, 0LL, 0, 0x1F0003u);
  *((_QWORD *)this + 9) = Semaphore;
  if ( !Semaphore )
  {
    v18 = 857LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v18,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v5);
  }
  if ( !DuplicateHandle(v3, Semaphore, v3, &v24, 0, 0, 2u) )
  {
    v18 = 866LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v18,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
             v5);
  }
  v15 = RIMDeviceCollection::RegisterWaitHandler(
          v14,
          v24,
          (int (*)(void *, unsigned int, void *))RIMDeviceCollection::OnRIMAsyncPnpWorkNotificationSemaphoreStatic,
          this);
  v16 = v15;
  if ( v15 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x367,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\rimdevicecollection.cpp",
    (const char *)(unsigned int)v15,
    dwDesiredAccessa);
  return v16;
}
