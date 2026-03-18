/*
 * XREFs of GetClassIcoCur @ 0x1400C1210
 * Callers:
 *     NtUserGetClassIcoCur @ 0x140248E60 (NtUserGetClassIcoCur.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B33E0 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1400C12A0 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall GetClassIcoCur(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v6, *(_QWORD *)(a1 + 136));
  switch ( a2 )
  {
    case -14:
      v4 = *(_QWORD *)(*(_QWORD *)v6[0] + 80LL);
      break;
    case -12:
      v4 = *(_QWORD *)(*(_QWORD *)v6[0] + 88LL);
      break;
    case -34:
      v4 = *(_QWORD *)(*(_QWORD *)v6[0] + 112LL);
      break;
    default:
      v4 = 0LL;
      break;
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v6, v3);
  return v4;
}
