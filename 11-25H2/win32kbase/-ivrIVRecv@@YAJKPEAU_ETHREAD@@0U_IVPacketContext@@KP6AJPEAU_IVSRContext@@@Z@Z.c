/*
 * XREFs of ?ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z @ 0x14021B05C
 * Callers:
 *     ?Receive@CIVChannel@@AEAAJXZ @ 0x14021EC98 (-Receive@CIVChannel@@AEAAJXZ.c)
 *     ?sHeaderCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z @ 0x14021EE50 (-sHeaderCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ivrIVRecv(__int64 a1, __int64 a2, __int64 a3, __int128 *a4, int a5, __int64 a6)
{
  unsigned int v9; // ebp
  __int64 (__fastcall *v10)(_QWORD, __int64, __int64, __int128 *, int, __int64); // rax
  __int64 v11; // xmm1_8
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v9 = a1;
  v10 = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int128 *, int, __int64))(W32GetUserSessionState(a1, a2)
                                                                                     + 19576);
  if ( !v10 )
    return 3221225659LL;
  v11 = *((_QWORD *)a4 + 2);
  v13 = *a4;
  v14 = v11;
  return v10(v9, a2, a3, &v13, a5, a6);
}
