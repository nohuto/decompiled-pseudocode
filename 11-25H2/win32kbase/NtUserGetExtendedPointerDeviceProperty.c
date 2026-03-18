/*
 * XREFs of NtUserGetExtendedPointerDeviceProperty @ 0x1401BD4C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     HMValidateHandleWithDescriptor @ 0x1400A1BA0 (HMValidateHandleWithDescriptor.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     RIMGetExtendedPointerDeviceProperty @ 0x1401EC158 (RIMGetExtendedPointerDeviceProperty.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetExtendedPointerDeviceProperty(__int64 a1, void *a2)
{
  int v4; // ebx
  ULONG v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  NTSTATUS v9; // eax
  __int128 Src; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+40h] [rbp-48h]
  __int128 v13; // [rsp+50h] [rbp-38h] BYREF
  int v14; // [rsp+60h] [rbp-28h]
  __int64 v15; // [rsp+98h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v15, 1u);
  Src = 0LL;
  v12 = 0;
  v4 = 0;
  if ( !a2 )
    goto LABEL_2;
  v7 = HMValidateHandleWithDescriptor(a1, 0x13u, 0);
  v8 = v7;
  if ( !v7 )
  {
    v5 = 6;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v7 + 184) & 0x80u) == 0 )
  {
LABEL_2:
    v5 = 87;
LABEL_3:
    UserSetLastError(v5);
    goto LABEL_12;
  }
  v13 = 0LL;
  v14 = 0;
  RtlCopyFromUser(&v13, a2, 0x14uLL);
  Src = v13;
  v12 = v14;
  v9 = RIMGetExtendedPointerDeviceProperty(*(_QWORD *)(v8 + 456), &Src);
  if ( v9 < 0 )
  {
    v5 = RtlNtStatusToDosError(v9);
    goto LABEL_3;
  }
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    a2 = (void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(a2, &Src, 0x14uLL);
  v4 = 1;
LABEL_12:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v6);
  return v4;
}
