/*
 * XREFs of ?StartCompositionThread@CConnection@@IEAAJH@Z @ 0x180131F18
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x180228F90 (-MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802015DC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CConnection::StartCompositionThread(CConnection *this, int nPriority)
{
  HANDLE *v3; // rdi
  HANDLE EventW; // rax
  const char *v6; // r9
  __int64 v7; // rdx
  HANDLE *v9; // rbx
  HANDLE v10; // rax
  void *v11; // rcx
  HANDLE Handles[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD ThreadId; // [rsp+50h] [rbp+8h] BYREF

  ThreadId = 0;
  v3 = (HANDLE *)((char *)this + 40);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    v3,
    EventW);
  if ( !*v3 || *v3 == (HANDLE)-1LL )
  {
    v7 = 173LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
             v6);
  }
  v9 = (HANDLE *)((char *)this + 32);
  v10 = CreateThread(0LL, 0LL, CConnection::CompositionThreadEntryPoint, this, 4u, &ThreadId);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (char *)this + 32,
    v10);
  v11 = (void *)*((_QWORD *)this + 4);
  if ( !v11 || v11 == (void *)-1LL )
  {
    v7 = 182LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
             v6);
  }
  SetThreadDescription(v11, L"DWM Compositor Thread");
  if ( !SetThreadPriority(*v9, nPriority) )
  {
    v7 = 187LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
             v6);
  }
  if ( ResumeThread(*v9) == -1 )
  {
    v7 = 191LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
             v6);
  }
  Handles[0] = *v9;
  Handles[1] = *v3;
  if ( WaitForMultipleObjects(2u, Handles, 0, 0xFFFFFFFF) == -1 )
  {
    v7 = 196LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\connection.cpp",
             v6);
  }
  return 0LL;
}
