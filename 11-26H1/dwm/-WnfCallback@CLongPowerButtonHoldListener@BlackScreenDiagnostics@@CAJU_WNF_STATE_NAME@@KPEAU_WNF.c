/*
 * XREFs of ?WnfCallback@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x140003C20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400049A0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x140006146 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140010010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BlackScreenDiagnostics::CLongPowerButtonHoldListener::WnfCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _BYTE *a4,
        char *a5,
        unsigned int a6)
{
  bool v6; // zf
  int v8; // eax
  void (__fastcall *v9)(__int128 *); // rax
  __int128 Buf1; // [rsp+20h] [rbp-28h] BYREF

  v6 = *a4 == 0;
  *(struct _WNF_STATE_NAME *)&Buf1 = a1;
  if ( !v6 && !memcmp_0(&Buf1, &WNF_PO_POWER_BUTTON_STATE, 8uLL) && a6 == 24 )
  {
    v8 = *(_DWORD *)a5 >> 1;
    v6 = (*a5 & 1) == 0;
    Buf1 = *(_OWORD *)(a5 + 8);
    if ( v6 )
    {
      a4[16] = 0;
    }
    else if ( v8 >= *((_DWORD *)a4 + 5) && !a4[16] )
    {
      v9 = (void (__fastcall *)(__int128 *))*((_QWORD *)a4 + 3);
      a4[16] = 1;
      v9(&Buf1);
    }
  }
  return 0LL;
}
