/*
 * XREFs of NtUserGetPointerDeviceInputSpace @ 0x1401E4C50
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ResolveMouseOrPointerDevice @ 0x14006E740 (ResolveMouseOrPointerDevice.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x140106C58 (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall NtUserGetPointerDeviceInputSpace(__int64 a1, __int64 a2)
{
  int v4; // esi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _LUID InputSpaceId; // rax
  __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v14);
  v4 = 0;
  v15 = 0LL;
  LODWORD(v14) = 0;
  if ( (unsigned int)ResolveMouseOrPointerDevice(a1, &v15, &v14) )
  {
    if ( (_DWORD)v14 )
      InputSpaceId = InputConfig::Mouse::GetInputSpaceId(v6, v5, v7);
    else
      InputSpaceId = *(struct _LUID *)(v15 + 228);
    ((void (__fastcall *)(_QWORD, _QWORD))RtlWriteULong64ToUser)(a2, InputSpaceId);
    v4 = 1;
  }
  else
  {
    UserSetLastError(6);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v9, v8, v10, v11);
  return v4;
}
