/*
 * XREFs of xxxRemoteNotify @ 0x140219660
 * Callers:
 *     NtUserRemoteNotify @ 0x140219620 (NtUserRemoteNotify.c)
 * Callees:
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x140126CC4 (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 */

__int64 __fastcall xxxRemoteNotify(void *Src)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(W32GetUserGdiSessionState(Src) + 40);
  if ( PsGetCurrentProcess(v3) != v2 )
    return 3221225506LL;
  v7 = 0;
  RtlCopyFromUser(&v7, Src, 4uLL);
  if ( v7 == 11 )
  {
    v6 = 0x4000000LL;
    goto LABEL_7;
  }
  if ( v7 == 12 )
  {
    v6 = 0x8000000LL;
LABEL_7:
    HYDRA_HINT(v6, v5);
    SetConnectCompletedState(1LL);
  }
  return 0LL;
}
