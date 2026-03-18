/*
 * XREFs of UmfdUnloadFontFileInternal @ 0x14010A388
 * Callers:
 *     UmfdLoadFontFile @ 0x140107CD0 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFile @ 0x14010A840 (UmfdUnloadFontFile.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x140109CBC (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x14010A208 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x14010A470 (-Remove@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall UmfdUnloadFontFileInternal(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct W32_PUSH_LOCK *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // eax
  unsigned int v12; // ecx
  _QWORD v14[6]; // [rsp+28h] [rbp-50h] BYREF
  unsigned int v15; // [rsp+58h] [rbp-20h]

  SessionState = W32GetSessionState(a1, a2, a3);
  v8 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(SessionState + 96) + 24248LL);
  if ( *(_QWORD *)(SessionState + 96) != -24248LL )
    GreAcquirePushLockExclusive(v8);
  v9 = W32GetSessionState(v6, v5, v7);
  NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Remove(*(struct W32_PUSH_LOCK **)(*(_QWORD *)(v9 + 96) + 24176LL));
  if ( v8 )
    GreReleasePushLockExclusive(v8);
  FontDriverDdiRequest::FontDriverDdiRequest((__int64)v14, 5);
  v14[5] = a1;
  v14[0] = &UnloadFontFileRequest::`vftable';
  v15 = 0;
  v11 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(a1 + 20), (__int64)v14, v10);
  v12 = v15;
  if ( v11 < 0 )
    return 0;
  return v12;
}
