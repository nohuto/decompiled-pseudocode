/*
 * XREFs of ?PerformDelayedInitialization@KioskPositioner@@UEAAJXZ @ 0x18022C4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KioskPositioner::PerformDelayedInitialization(KioskPositioner *this)
{
  __int64 result; // rax
  __int64 v2; // rcx
  int v3; // eax
  const char *v4; // r9
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)this + 592) )
    return 0LL;
  v2 = *((_QWORD *)this + 23);
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x246,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v3,
        v5);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x249,
                           (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v4);
  }
  return result;
}
