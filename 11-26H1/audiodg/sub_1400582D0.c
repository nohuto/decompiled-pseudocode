/*
 * XREFs of sub_1400582D0 @ 0x1400582D0
 * Callers:
 *     sub_140058634 @ 0x140058634 (sub_140058634.c)
 * Callees:
 *     sub_14001FC40 @ 0x14001FC40 (sub_14001FC40.c)
 *     sub_1400257E4 @ 0x1400257E4 (sub_1400257E4.c)
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_140045508 @ 0x140045508 (sub_140045508.c)
 *     sub_1400471D8 @ 0x1400471D8 (sub_1400471D8.c)
 *     sub_14005697C @ 0x14005697C (sub_14005697C.c)
 *     sub_140058B20 @ 0x140058B20 (sub_140058B20.c)
 */

void __fastcall sub_1400582D0(char *pv, int a2, __int64 a3)
{
  __int64 v6; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  _DWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  char v10; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+68h] [rbp+20h] BYREF

  if ( *(_DWORD *)pv && !sub_140045508((__int64)pv) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)pv + 1);
    v11 = (RTL_SRWLOCK *)(pv + 8);
    if ( *(_DWORD *)pv )
    {
      if ( !sub_140045508(v6) )
      {
        v8[0] = a2;
        v8[1] = 0;
        v9 = a3;
        sub_140058B20(pv + 32, v8, 16LL);
        if ( !pv[24] )
        {
          if ( !*((_QWORD *)pv + 2) )
          {
            sub_1400257E4((__int64)&v10);
            ThreadpoolTimer = CreateThreadpoolTimer((PTP_TIMER_CALLBACK)pfnti, pv, 0LL);
            sub_1400471D8((struct _TP_TIMER **)pv + 2, ThreadpoolTimer);
            sub_14001FC40((__int64)&v10);
          }
          sub_14005697C((struct _TP_TIMER **)pv + 2, pv + 24, 300000LL);
        }
      }
    }
    sub_14003A998(&v11);
  }
}
