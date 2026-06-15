/*
 * XREFs of sub_14007E828 @ 0x14007E828
 * Callers:
 *     sub_14007F1E0 @ 0x14007F1E0 (sub_14007F1E0.c)
 * Callees:
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_14004FC0C @ 0x14004FC0C (sub_14004FC0C.c)
 *     sub_14007E9FC @ 0x14007E9FC (sub_14007E9FC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

void __fastcall sub_14007E828(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  RTL_SRWLOCK *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  RTL_SRWLOCK *v11; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( *(_BYTE *)a1 )
  {
    v8 = (RTL_SRWLOCK *)(a1 + 32);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 32));
    v11 = v8;
    if ( *(_QWORD *)(a1 + 144)
      || ((v9 = qword_1400E9790, *(_QWORD *)(a1 + 144) = 0LL, v9)
       || (qword_1400E9790 = (__int64)sub_14004FC0C("RtlRegisterFeatureConfigurationChangeNotification")) != 0
        ? (v10 = sub_1400B6010(sub_140075D60))
        : (v10 = -1073741511),
          !v10) )
    {
      sub_14007E9FC(a1 + 72, a2, a3, a4);
    }
    sub_14003A998(&v11);
  }
}
