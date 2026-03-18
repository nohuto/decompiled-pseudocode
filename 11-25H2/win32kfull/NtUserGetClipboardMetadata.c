/*
 * XREFs of NtUserGetClipboardMetadata @ 0x1401FF950
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     InternalGetClipboardMetadata @ 0x140111C00 (InternalGetClipboardMetadata.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetClipboardMetadata(unsigned int a1, void *Src)
{
  __int64 v4; // rcx
  int ClipboardMetadata; // ebx
  __int64 v7; // [rsp+28h] [rbp-50h] BYREF
  int v8; // [rsp+30h] [rbp-48h]
  _BYTE v9[24]; // [rsp+40h] [rbp-38h] BYREF
  __int64 Srca; // [rsp+58h] [rbp-20h] BYREF
  int v11; // [rsp+60h] [rbp-18h]

  EnterLeaveCritShared::EnterLeaveCritShared(v9, 1LL);
  Srca = 0LL;
  v11 = 0;
  v7 = 0LL;
  v8 = 0;
  RtlCopyFromUser(&v7, Src, 0xCuLL);
  Srca = v7;
  v11 = v8;
  ClipboardMetadata = InternalGetClipboardMetadata(a1, &Srca);
  if ( ClipboardMetadata == 1 )
  {
    if ( (unsigned __int64)Src >= MmUserProbeAddress )
      Src = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(Src, &Srca, 0xCuLL);
  }
  UserSessionSwitchLeaveCrit(v4);
  return ClipboardMetadata;
}
