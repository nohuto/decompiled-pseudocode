/*
 * XREFs of ?SyncDesktopCaptureBits@CChannel@@UEAAJU_LUID@@HHIIW4DXGI_FORMAT@@_KPEAX@Z @ 0x180116D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SyncFlushInternal@CChannel@@AEAAJXZ @ 0x1801172AC (-SyncFlushInternal@CChannel@@AEAAJXZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18013194C (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802015DC (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::SyncDesktopCaptureBits(
        CChannel *this,
        struct _LUID a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        enum DXGI_FORMAT a7,
        unsigned __int64 a8,
        HANDLE hSourceHandle)
{
  __int64 v13; // rsi
  HANDLE CurrentProcess; // rdi
  HANDLE v15; // rax
  const char *v16; // r9
  HANDLE v17; // rdi
  HANDLE v18; // rax
  const char *v19; // r9
  int v20; // edi
  __int64 v22; // rdx
  unsigned int LastError; // ebx
  HANDLE EventW; // [rsp+40h] [rbp-40h] BYREF
  int v25; // [rsp+48h] [rbp-38h] BYREF
  struct _LUID v26; // [rsp+4Ch] [rbp-34h]
  int v27; // [rsp+54h] [rbp-2Ch]
  int v28; // [rsp+58h] [rbp-28h]
  unsigned int v29; // [rsp+5Ch] [rbp-24h]
  unsigned int v30; // [rsp+60h] [rbp-20h]
  enum DXGI_FORMAT v31; // [rsp+64h] [rbp-1Ch]
  _BYTE v32[20]; // [rsp+68h] [rbp-18h] BYREF
  int v33; // [rsp+7Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  EventW = CreateEventW(0LL, 0, 0, 0LL);
  if ( !EventW )
    return 0LL;
  v13 = *((_QWORD *)this + 8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 56LL))(v13);
  v25 = 184;
  v33 = 0;
  v29 = a5;
  v30 = a6;
  v31 = a7;
  *(_OWORD *)&v32[4] = 0LL;
  *(_QWORD *)v32 = a8;
  v26 = a2;
  v27 = a3;
  v28 = a4;
  CurrentProcess = GetCurrentProcess();
  v15 = GetCurrentProcess();
  if ( !DuplicateHandle(v15, EventW, CurrentProcess, (LPHANDLE)&v32[8], 0, 0, 2u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x4C1,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
                  v16);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13);
LABEL_15:
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&EventW);
    return LastError;
  }
  v17 = GetCurrentProcess();
  v18 = GetCurrentProcess();
  if ( !DuplicateHandle(v18, hSourceHandle, v17, (LPHANDLE)&v32[16], 0, 0, 2u) )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x4C9,
                  (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
                  v19);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13);
    goto LABEL_15;
  }
  v20 = CChannel::SendCommand(this, &v25, 0x38u);
  if ( v20 < 0 )
  {
    v22 = 1227LL;
  }
  else
  {
    v20 = CChannel::SyncFlushInternal(this);
    if ( v20 >= 0 )
    {
      WaitForSingleObject(EventW, 0x1388u);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13);
      if ( EventW != (HANDLE)-1LL )
        CloseHandle(EventW);
      return 0LL;
    }
    v22 = 1228LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v22,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v20);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 80LL))(v13);
  if ( EventW != (HANDLE)-1LL )
    CloseHandle(EventW);
  return (unsigned int)v20;
}
