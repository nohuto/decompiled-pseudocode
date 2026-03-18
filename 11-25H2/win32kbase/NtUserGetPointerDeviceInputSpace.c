/*
 * XREFs of NtUserGetPointerDeviceInputSpace @ 0x1401BD920
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ResolveMouseOrPointerDevice @ 0x140067190 (ResolveMouseOrPointerDevice.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1400E102C (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetPointerDeviceInputSpace(__int64 a1, void *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 InputSpaceId; // rax
  struct _LUID Src; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11[4]; // [rsp+38h] [rbp-20h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(v11, 1u);
  v4 = 0;
  Src = 0LL;
  v13 = 0LL;
  v12 = 0;
  if ( (unsigned int)ResolveMouseOrPointerDevice(a1, &v13, &v12) )
  {
    if ( v12 )
      InputSpaceId = (__int64)InputConfig::Mouse::GetInputSpaceId(v6, v5);
    else
      InputSpaceId = *(_QWORD *)(v13 + 228);
    v11[1] = InputSpaceId;
    Src = (struct _LUID)InputSpaceId;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, &Src, 8uLL);
    v4 = 1;
  }
  else
  {
    UserSetLastError(6);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v7);
  return v4;
}
