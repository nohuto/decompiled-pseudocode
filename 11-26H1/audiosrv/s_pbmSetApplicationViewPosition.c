/*
 * XREFs of s_pbmSetApplicationViewPosition @ 0x18010AC80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 s_pbmSetApplicationViewPosition()
{
  int v0; // eax
  unsigned int v1; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !g_PolicyManager )
    return 0LL;
  v0 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 328LL))(g_PolicyManager);
  v1 = v0;
  if ( v0 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3D4,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\playbackmanagerrpc.cpp",
    (const char *)(unsigned int)v0);
  return v1;
}
