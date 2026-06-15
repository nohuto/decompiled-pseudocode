/*
 * XREFs of ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z @ 0x18003F828
 * Callers:
 *     _lambda_4b31922d8a1cd873a528cca5d3f4e6eb_::operator() @ 0x18003F204 (_lambda_4b31922d8a1cd873a528cca5d3f4e6eb_--operator().c)
 * Callees:
 *     ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x18002CA68 (-ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV-$function@$$A6AJPEAUIAudioSessionInfo@@.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDuckingManager::ApplyDuckingGainStages(
        CDuckingManager *this,
        struct IDuckingController *a2,
        const unsigned __int16 *a3)
{
  _QWORD *v3; // rdx
  _QWORD v5[7]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v6; // [rsp+58h] [rbp-20h]
  struct IDuckingController *v7; // [rsp+88h] [rbp+10h] BYREF

  v7 = a2;
  v5[0] = off_180053640;
  v5[1] = this;
  v5[2] = &v7;
  v6 = v5;
  CDuckingManager::ForEachDuckableSession((__int64)this, (__int64)a3, (__int64)v5);
  if ( v6 )
  {
    v3 = v5;
    LOBYTE(v3) = v6 != v5;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v6 + 32LL))(v6, v3);
  }
  return 0LL;
}
