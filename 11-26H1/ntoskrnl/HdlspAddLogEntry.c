/*
 * XREFs of HdlspAddLogEntry @ 0x140C52008
 * Callers:
 *     HdlspDispatch @ 0x140C52320 (HdlspDispatch.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     wcscmp @ 0x14053A470 (wcscmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall HdlspAddLogEntry(_WORD *Src)
{
  void *v1; // r15
  __int64 v2; // rax
  ULONG_PTR v4; // rbx
  void *Pool2; // rax
  void *v6; // rbp
  KIRQL v7; // si
  PKSPIN_LOCK v8; // rdi
  __int16 v9; // r14
  __int64 v10; // r12
  unsigned __int16 v11; // r14
  const wchar_t *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  KSPIN_LOCK v15; // rax
  __int64 v16; // rcx
  KSPIN_LOCK v17; // rax
  __int128 SystemInformation; // [rsp+20h] [rbp-68h] BYREF
  __int128 v19; // [rsp+30h] [rbp-58h]
  __int128 v20; // [rsp+40h] [rbp-48h]

  v1 = 0LL;
  v2 = -1LL;
  SystemInformation = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  do
    ++v2;
  while ( Src[v2] );
  v4 = 2 * v2 + 2;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( ZwQuerySystemInformation(SystemTimeOfDayInformation, &SystemInformation, 0x30u, 0LL) < 0 )
    {
      SystemInformation = 0LL;
      v19 = 0LL;
      v20 = 0LL;
    }
    Pool2 = (void *)ExAllocatePool2(64LL, v4, 0x736C6448u);
    v6 = Pool2;
    if ( Pool2 )
      memmove(Pool2, Src, v4);
    if ( (HeadlessGlobals[6] & 2) != 0 )
      v7 = -1;
    else
      v7 = KeAcquireSpinLockRaiseToDpc(HeadlessGlobals);
    v8 = HeadlessGlobals;
    v9 = *((_WORD *)HeadlessGlobals + 48);
    *((_DWORD *)HeadlessGlobals + 12) |= 4u;
    v10 = *((unsigned __int16 *)v8 + 49);
    v11 = (unsigned __int8)(v9 + 1);
    *((_WORD *)v8 + 48) = v11;
    if ( v11 == (_WORD)v10 )
    {
      v12 = *(const wchar_t **)(56 * v10 + v8[2] + 48);
      v13 = wcscmp(v12, L"Entry could not be recorded due to lack of memory.\n");
      *((_WORD *)v8 + 49) = (unsigned __int8)(v10 + 1);
      v1 = (void *)((unsigned __int64)v12 & -(__int64)(v13 != 0));
    }
    else if ( (_WORD)v10 == 0xFFFF )
    {
      *((_WORD *)v8 + 49) = 0;
    }
    v14 = 56LL * v11;
    v15 = v8[2];
    *(_OWORD *)(v14 + v15) = SystemInformation;
    *(_OWORD *)(v14 + v15 + 16) = v19;
    *(_OWORD *)(v14 + v15 + 32) = v20;
    v16 = 56LL * *((unsigned __int16 *)v8 + 48);
    v17 = v8[2];
    if ( v6 )
      *(_QWORD *)(v16 + v17 + 48) = v6;
    else
      *(_QWORD *)(v16 + v17 + 48) = L"Entry could not be recorded due to lack of memory.\n";
    if ( v7 != 0xFF )
      KeReleaseSpinLock(v8, v7);
    if ( v1 )
      ExFreePoolWithTag(v1, 0);
  }
}
