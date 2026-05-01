/*
 * XREFs of ?GetPackageSidFromProcess@CallerIdentity@@YAJKPEAPEAX@Z @ 0x18067A26C
 * Callers:
 *     ?GetPackageSidFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAX@Z @ 0x180679B14 (-GetPackageSidFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAX@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801A8400 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x18067A2E4 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::GetPackageSidFromProcess(DWORD dwProcessId, _QWORD *a2, void **a3)
{
  HANDLE v4; // rbx
  void **v5; // r8
  signed int PackageSidFromProcessHandle; // edi
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = OpenProcess(0x1000u, 0, dwProcessId);
  v8 = v4;
  if ( v4 || (PackageSidFromProcessHandle = ResultFromKnownLastError(), PackageSidFromProcessHandle >= 0) )
    PackageSidFromProcessHandle = CallerIdentity::GetPackageSidFromProcessHandle((CallerIdentity *)v4, a2, v5);
  CAutoHandle<void *>::~CAutoHandle<void *>(&v8);
  return (unsigned int)PackageSidFromProcessHandle;
}
