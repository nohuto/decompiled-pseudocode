/*
 * XREFs of ?GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z @ 0x180010390
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180001AE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIProcessMemoryReport@System@Windows@@AEA_K1@Z @ 0x18001048C (--$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@D.c)
 *     memset_0 @ 0x18001C04E (memset_0.c)
 *     __security_check_cookie @ 0x18001C080 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::GetProcessMemoryReport(
        Windows::System::CMemoryManager *this,
        struct Windows::System::IProcessMemoryReport **a2)
{
  int v3; // eax
  signed int v4; // ebx
  __int64 v5; // rcx
  signed int v7; // eax
  struct Windows::System::IProcessMemoryReport *v8; // rcx
  struct Windows::System::IProcessMemoryReport *v9; // [rsp+30h] [rbp-39h] BYREF
  ULONG ReturnLength; // [rsp+38h] [rbp-31h] BYREF
  _BYTE ProcessInformation[32]; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v12[64]; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v13[16]; // [rsp+A0h] [rbp+37h] BYREF

  v9 = 0LL;
  memset_0(ProcessInformation, 0, 0x70uLL);
  ReturnLength = 0;
  v3 = NtQueryInformationProcess(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         ProcessVmCounters,
         ProcessInformation,
         0x70u,
         &ReturnLength);
  if ( v3 < 0 )
  {
    v7 = RtlNtStatusToDosError(v3);
    v4 = v7;
    if ( v7 > 0 )
      v4 = (unsigned __int16)v7 | 0x80070000;
  }
  else
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CProcessMemoryReport,Windows::System::IProcessMemoryReport,unsigned __int64 &,unsigned __int64 &>(
           &v9,
           v13,
           v12);
    if ( v4 >= 0 )
    {
      v8 = v9;
      v9 = 0LL;
      *a2 = v8;
    }
  }
  v5 = (__int64)v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v4;
}
