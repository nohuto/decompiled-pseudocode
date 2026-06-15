/*
 * XREFs of ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBGAEA_J@Z @ 0x18002C9E4
 * Callers:
 *     _lambda_642215a69899d380996b25cb8587b28c_::operator() @ 0x18002AC1C (_lambda_642215a69899d380996b25cb8587b28c_--operator().c)
 * Callees:
 *     ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x18002CA68 (-ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV-$function@$$A6AJPEAUIAudioSessionInfo@@.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDuckingManager::RemoveDuckingGainStages(
        CDuckingManager *this,
        struct IDuckingController *a2,
        const unsigned __int16 *a3,
        __int64 *a4)
{
  _QWORD *v4; // rdx
  _QWORD v6[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v7; // [rsp+58h] [rbp-20h]
  struct IDuckingController *v8; // [rsp+88h] [rbp+10h] BYREF

  v8 = a2;
  v6[0] = off_1800531E0;
  v6[1] = &v8;
  v6[2] = a4;
  v7 = v6;
  CDuckingManager::ForEachDuckableSession(this, a3, v6);
  if ( v7 )
  {
    v4 = v6;
    LOBYTE(v4) = v7 != v6;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v7 + 32LL))(v7, v4);
  }
  return 0LL;
}
