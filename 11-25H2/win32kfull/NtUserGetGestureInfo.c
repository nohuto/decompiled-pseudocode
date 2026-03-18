/*
 * XREFs of NtUserGetGestureInfo @ 0x14020F000
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x14007AE48 (HMValidateHandleWithDescriptor.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     _FreeGestureInfo @ 0x1402694A0 (_FreeGestureInfo.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetGestureInfo(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  struct tagTHREADINFO *v7; // rsi
  int v8; // ecx
  int v9; // ebx
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi

  EnterCrit(0LL, 0LL);
  v7 = PtiCurrent(v5, v4);
  if ( !a2 )
  {
    v8 = 87;
LABEL_3:
    v9 = 0;
    UserSetLastError(v8);
    goto LABEL_17;
  }
  v11 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v11 = (_DWORD *)MmUserProbeAddress;
  if ( *v11 != 56 )
  {
    v9 = 0;
    UserSetLastError(87);
    goto LABEL_17;
  }
  LOBYTE(v6) = 21;
  v12 = HMValidateHandleWithDescriptor(a1, v6);
  v13 = v12;
  if ( !v12 )
  {
    v9 = 0;
    goto LABEL_17;
  }
  if ( *(struct tagTHREADINFO **)(v12 + 16) != v7 )
  {
    v8 = 5;
    goto LABEL_3;
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (_DWORD *)MmUserProbeAddress;
  RtlCopyVolatileMemory(a2, (const void *)(v12 + 32), 0x38uLL);
  v9 = 1;
  v10 = *((_QWORD *)v7 + 150);
  if ( v10 == a1 && !*(_DWORD *)(v13 + 80) )
  {
    FreeGestureInfo(v10, 1LL);
    *((_QWORD *)v7 + 150) = 0LL;
  }
LABEL_17:
  UserSessionSwitchLeaveCrit(v10);
  return v9;
}
