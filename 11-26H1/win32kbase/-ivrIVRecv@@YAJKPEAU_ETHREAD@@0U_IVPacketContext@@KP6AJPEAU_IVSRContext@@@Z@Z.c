/*
 * XREFs of ?ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z @ 0x14021F848
 * Callers:
 *     ?Receive@CIVChannel@@AEAAJXZ @ 0x140222420 (-Receive@CIVChannel@@AEAAJXZ.c)
 *     ?sHeaderCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z @ 0x1402225F0 (-sHeaderCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ivrIVRecv(unsigned int a1, __int64 a2, __int64 a3, __int128 *a4, int a5, __int64 a6)
{
  __int64 (__fastcall *v10)(_QWORD, __int64, __int64, __int128 *, int, __int64); // rax
  __int64 v11; // xmm1_8
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v10 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int128 *, int, __int64))(W32GetUserSessionState(
                                                                                         a1,
                                                                                         a2,
                                                                                         a3)
                                                                                     + 19608);
  if ( !v10 )
    return 3221225659LL;
  v11 = *((_QWORD *)a4 + 2);
  v13 = *a4;
  v14 = v11;
  return v10(a1, a2, a3, &v13, a5, a6);
}
