/*
 * XREFs of sub_14007CA54 @ 0x14007CA54
 * Callers:
 *     sub_14007F160 @ 0x14007F160 (sub_14007F160.c)
 * Callees:
 *     sub_14001FC40 @ 0x14001FC40 (sub_14001FC40.c)
 *     sub_1400257E4 @ 0x1400257E4 (sub_1400257E4.c)
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_140045508 @ 0x140045508 (sub_140045508.c)
 *     sub_1400471D8 @ 0x1400471D8 (sub_1400471D8.c)
 *     sub_14005697C @ 0x14005697C (sub_14005697C.c)
 *     sub_1400791E0 @ 0x1400791E0 (sub_1400791E0.c)
 *     sub_14007C98C @ 0x14007C98C (sub_14007C98C.c)
 */

void __fastcall sub_14007CA54(char *pv, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  RTL_SRWLOCK *v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+40h] [rbp+8h] BYREF

  if ( *pv && sub_1400791E0((RTL_SRWLOCK *)pv) && sub_14007C98C(*((_QWORD *)pv + 3), a2, a3, a4) && !sub_140045508(v8) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)pv + 4);
    v10 = (RTL_SRWLOCK *)(pv + 32);
    if ( !pv[65] )
    {
      if ( !*((_QWORD *)pv + 6) )
      {
        sub_1400257E4((__int64)&v11);
        ThreadpoolTimer = CreateThreadpoolTimer((PTP_TIMER_CALLBACK)sub_140075E00, pv, 0LL);
        sub_1400471D8((struct _TP_TIMER **)pv + 6, ThreadpoolTimer);
        sub_14001FC40((__int64)&v11);
      }
      sub_14005697C((struct _TP_TIMER **)pv + 6, pv + 65, 300000LL);
    }
    sub_14003A998(&v10);
  }
}
