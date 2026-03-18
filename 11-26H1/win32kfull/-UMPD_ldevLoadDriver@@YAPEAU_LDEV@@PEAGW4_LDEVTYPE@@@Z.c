/*
 * XREFs of ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x14020B208
 * Callers:
 *     UMPD_ldevLoadDriverWrap @ 0x14020B1F0 (UMPD_ldevLoadDriverWrap.c)
 * Callees:
 *     ?UMPDDrvEnableDriver@@YAHPEAGPEA_K@Z @ 0x1400D88F0 (-UMPDDrvEnableDriver@@YAHPEAGPEA_K@Z.c)
 *     ?UMPDDrvDriverFn@@YAH_KPEAH@Z @ 0x14020B33C (-UMPDDrvDriverFn@@YAH_KPEAH@Z.c)
 *     ?UMPD_ldevFillTable@@YAHPEAU_LDEV@@PEBH@Z @ 0x14020B3EC (-UMPD_ldevFillTable@@YAHPEAU_LDEV@@PEBH@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_DWORD *__fastcall UMPD_ldevLoadDriver(unsigned __int16 *a1, int a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  int v6; // edi
  unsigned __int64 v8; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // [rsp+20h] [rbp-1C8h] BYREF
  int v12[104]; // [rsp+30h] [rbp-1B8h] BYREF

  v4 = EngAllocMem(1u, 0x390u, 0x706D7547u);
  if ( v4 )
  {
    v11 = 0LL;
    v6 = UMPDDrvEnableDriver(a1, &v11);
    if ( v6 )
    {
      v4[8] = a2;
      v8 = v11;
      *((_QWORD *)v4 + 6) = v11;
      *(_QWORD *)v4 = 0LL;
      *((_QWORD *)v4 + 1) = 0LL;
      v4[9] = 1;
      *((_QWORD *)v4 + 2) = 0LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
      v10 = CurrentProcessWin32Process;
      if ( CurrentProcessWin32Process )
        v10 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)CurrentProcessWin32Process >> 64) & CurrentProcessWin32Process;
      *((_QWORD *)v4 + 7) = v10;
      v6 = UMPDDrvDriverFn(v8, v12) != 0 ? v6 : 0;
      if ( v6 )
        v6 = UMPD_ldevFillTable((struct _LDEV *)v4, v12);
    }
    if ( !v6 )
    {
      EngFreeMem(v4);
      return 0LL;
    }
  }
  return v4;
}
