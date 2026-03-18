/*
 * XREFs of ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1401DF768
 * Callers:
 *     UMPD_ldevLoadDriverWrap @ 0x1401DF750 (UMPD_ldevLoadDriverWrap.c)
 * Callees:
 *     ?UMPDDrvEnableDriver@@YAHPEAGPEA_K@Z @ 0x1401DF87C (-UMPDDrvEnableDriver@@YAHPEAGPEA_K@Z.c)
 *     ?UMPDDrvDriverFn@@YAH_KPEAH@Z @ 0x1401DF97C (-UMPDDrvDriverFn@@YAH_KPEAH@Z.c)
 *     ?UMPD_ldevFillTable@@YAHPEAU_LDEV@@PEBH@Z @ 0x1401DFA38 (-UMPD_ldevFillTable@@YAHPEAU_LDEV@@PEBH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

_QWORD *__fastcall UMPD_ldevLoadDriver(unsigned __int16 *a1, int a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  int v6; // esi
  unsigned __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  int v9; // eax
  unsigned __int64 v11; // [rsp+20h] [rbp-1C8h] BYREF
  int v12[104]; // [rsp+30h] [rbp-1B8h] BYREF

  v4 = EngAllocMem(1u, 0x390u, 0x706D7547u);
  if ( v4 )
  {
    v11 = 0LL;
    v6 = UMPDDrvEnableDriver(a1, &v11);
    if ( !v6 )
      goto LABEL_3;
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    *((_DWORD *)v4 + 8) = a2;
    v7 = v11;
    v4[6] = v11;
    *((_DWORD *)v4 + 9) = 1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v4[7] = CurrentProcessWin32Process;
    v9 = UMPDDrvDriverFn(v7, v12) != 0 ? v6 : 0;
    if ( v9 )
      v9 = UMPD_ldevFillTable((struct _LDEV *)v4, v12);
    if ( !v9 )
    {
LABEL_3:
      EngFreeMem(v4);
      return 0LL;
    }
  }
  return v4;
}
