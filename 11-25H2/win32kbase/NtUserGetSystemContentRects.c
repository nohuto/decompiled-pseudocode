/*
 * XREFs of NtUserGetSystemContentRects @ 0x1401BD9F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1401AC540 (-GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ?GetCount@CContentRects@@SAIXZ @ 0x1401AC5B8 (-GetCount@CContentRects@@SAIXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall NtUserGetSystemContentRects(__int64 a1, volatile void *a2)
{
  unsigned int *v3; // rdi
  int v4; // ebx
  int v5; // ecx
  unsigned int Count; // eax
  unsigned int *v7; // rax
  __int64 CurrentProcessWow64Process; // rax
  char ContentRects; // r14
  unsigned int v10; // eax
  unsigned int v12[20]; // [rsp+40h] [rbp-B8h] BYREF
  struct tagRECT Src[4]; // [rsp+90h] [rbp-68h] BYREF

  v3 = (unsigned int *)a1;
  v4 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      memset(Src, 0, sizeof(Src));
      v12[0] = 0;
      v7 = v3;
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v7 = (unsigned int *)MmUserProbeAddress;
      v12[0] = *v7;
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
      ProbeForWrite(a2, 16LL * v12[0], CurrentProcessWow64Process != 0 ? 1 : 4);
      ContentRects = CContentRects::GetContentRects(v12[0], Src, v12);
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (unsigned int *)MmUserProbeAddress;
      v10 = v12[0];
      *v3 = v12[0];
      if ( !ContentRects )
      {
        v5 = 122;
        goto LABEL_3;
      }
      RtlCopyVolatileMemory((void *)a2, Src, 16LL * v10);
    }
    else
    {
      Count = CContentRects::GetCount(a1, 0LL);
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (unsigned int *)MmUserProbeAddress;
      *v3 = Count;
    }
    return 1;
  }
  v5 = 87;
LABEL_3:
  UserSetLastError(v5);
  return v4;
}
