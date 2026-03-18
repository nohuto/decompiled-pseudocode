/*
 * XREFs of NtUserGetExtendedPointerDeviceProperty @ 0x1401E4270
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     HMValidateHandleWithDescriptor @ 0x140049640 (HMValidateHandleWithDescriptor.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     RIMGetExtendedPointerDeviceProperty @ 0x14020AC04 (RIMGetExtendedPointerDeviceProperty.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserGetExtendedPointerDeviceProperty(void *a1, void *a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  ULONG v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdi
  NTSTATUS v13; // eax
  __int128 Src; // [rsp+40h] [rbp-38h] BYREF
  int v16; // [rsp+50h] [rbp-28h]
  __int128 v17; // [rsp+58h] [rbp-20h] BYREF
  int v18; // [rsp+68h] [rbp-10h]
  __int64 v19; // [rsp+88h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v19);
  Src = 0LL;
  v16 = 0;
  v5 = 0;
  if ( !a2 )
    goto LABEL_2;
  LOBYTE(v4) = 19;
  v11 = HMValidateHandleWithDescriptor(a1, v4, 0);
  v12 = v11;
  if ( !v11 )
  {
    v6 = 6;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v11 + 184) & 0x80u) != 0 )
  {
    v17 = 0LL;
    v18 = 0;
    RtlCopyFromUser(&v17, a2, 0x14uLL);
    Src = v17;
    v16 = v18;
    v13 = RIMGetExtendedPointerDeviceProperty(*(_QWORD *)(v12 + 456), &Src);
    if ( v13 >= 0 )
    {
      RtlCopyToUser(a2, &Src, 0x14uLL);
      v5 = 1;
      goto LABEL_10;
    }
    v6 = RtlNtStatusToDosError(v13);
  }
  else
  {
LABEL_2:
    v6 = 87;
  }
LABEL_3:
  UserSetLastError(v6);
LABEL_10:
  UserSessionSwitchLeaveCritWithNonPaged(v8, v7, v9, v10);
  return v5;
}
