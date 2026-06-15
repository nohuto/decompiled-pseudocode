/*
 * XREFs of sub_14007C690 @ 0x14007C690
 * Callers:
 *     sub_14007F160 @ 0x14007F160 (sub_14007F160.c)
 * Callees:
 *     sub_14001FC40 @ 0x14001FC40 (sub_14001FC40.c)
 *     sub_1400257E4 @ 0x1400257E4 (sub_1400257E4.c)
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_140045508 @ 0x140045508 (sub_140045508.c)
 *     sub_1400471D8 @ 0x1400471D8 (sub_1400471D8.c)
 *     sub_14005697C @ 0x14005697C (sub_14005697C.c)
 *     sub_140058B20 @ 0x140058B20 (sub_140058B20.c)
 */

void __fastcall sub_14007C690(char *pv, int a2, __int16 a3, int a4)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  RTL_SRWLOCK *v9; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+28h] [rbp-30h] BYREF
  __int16 v11; // [rsp+2Ch] [rbp-2Ch]
  __int16 v12; // [rsp+2Eh] [rbp-2Ah]
  int v13; // [rsp+30h] [rbp-28h]
  char v14; // [rsp+60h] [rbp+8h] BYREF

  if ( *pv && !sub_140045508((__int64)pv) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)pv + 5);
    v9 = (RTL_SRWLOCK *)(pv + 40);
    v12 = 0;
    v10 = a2;
    v11 = a3;
    v13 = a4;
    sub_140058B20((_QWORD *)pv + 29, (__int64)&v10, 0xCuLL);
    if ( !pv[64] )
    {
      if ( !*((_QWORD *)pv + 7) )
      {
        sub_1400257E4((__int64)&v14);
        ThreadpoolTimer = CreateThreadpoolTimer((PTP_TIMER_CALLBACK)sub_140075D90, pv, 0LL);
        sub_1400471D8((struct _TP_TIMER **)pv + 7, ThreadpoolTimer);
        sub_14001FC40((__int64)&v14);
      }
      sub_14005697C((struct _TP_TIMER **)pv + 7, pv + 64, 5000LL);
    }
    sub_14003A998(&v9);
  }
}
