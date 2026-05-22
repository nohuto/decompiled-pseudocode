/*
 * XREFs of ?IsTargetForRoutingInfoAndHwnd@InputRedirectionTarget@@QEAA_NUtagMsgRoutingInfo@@_K@Z @ 0x1801B4CD8
 * Callers:
 *     ?DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x1801B43D0 (-DisableInputRedirection@InputRedirectionProcessor@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18009CC56 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall InputRedirectionTarget::IsTargetForRoutingInfoAndHwnd(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v7; // rdx
  _OWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v4 = a1[4];
  memset(v9, 0, sizeof(v9));
  v7 = a1[5];
  v10 = 0LL;
  return (*(int (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v4 + 136LL))(v4, v7, v9) >= 0
      && *(_QWORD *)a2 == *(_QWORD *)&v9[0]
      && *(_OWORD *)(a2 + 8) == *(_OWORD *)((char *)v9 + 8)
      && !memcmp_0((const void *)(a2 + 24), (char *)&v9[1] + 8, 0x10uLL)
      && a1[7] == a3;
}
