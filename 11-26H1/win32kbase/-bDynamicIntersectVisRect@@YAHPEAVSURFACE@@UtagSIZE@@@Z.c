/*
 * XREFs of ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x140030690
 * Callers:
 *     bDynamicModeChange @ 0x140030E68 (bDynamicModeChange.c)
 * Callees:
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x140014910 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?reset@?$lambda_call@V_lambda_1_@?1??AcquireDcVisRgnShared@DC@@QEAA@XZ@@details@wil@@QEAAXXZ @ 0x14001A86C (-reset@-$lambda_call@V_lambda_1_@-1--AcquireDcVisRgnShared@DC@@QEAA@XZ@@details@wil@@QEAAXXZ.c)
 *     HmgSafeNextObjt @ 0x140032210 (HmgSafeNextObjt.c)
 *     GreIntersectVisRect @ 0x1401BABF0 (GreIntersectVisRect.c)
 */

__int64 __fastcall bDynamicIntersectVisRect(struct SURFACE *a1, struct tagSIZE a2)
{
  LONG cy; // r14d
  unsigned int v3; // esi
  DC *v5; // rdi
  __int64 result; // rax
  __int64 v7[5]; // [rsp+30h] [rbp-28h] BYREF
  DC *v8; // [rsp+70h] [rbp+18h] BYREF

  cy = a2.cy;
  v3 = 0;
  v8 = 0LL;
  while ( 1 )
  {
    LOBYTE(a2.cx) = 1;
    v3 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HmgSafeNextObjt)(v3, a2, &v8);
    if ( !v3 )
      break;
    v5 = v8;
    if ( (*((_DWORD *)v8 + 9) & 0x2000) == 0 && *((struct SURFACE **)v8 + 62) == a1 )
    {
      DC::AcquireDcVisRgnShared(v8, (__int64)v7);
      if ( *((_QWORD *)v5 + 142) )
      {
        _reset___lambda_call_V_lambda_1___1__AcquireDcVisRgnShared_DC__QEAA_XZ__details_wil__QEAAXXZ(v7);
        result = GreIntersectVisRect(*(HDC *)v5, cy);
        if ( !(_DWORD)result )
          return result;
      }
      else
      {
        _reset___lambda_call_V_lambda_1___1__AcquireDcVisRgnShared_DC__QEAA_XZ__details_wil__QEAAXXZ(v7);
      }
    }
  }
  return 1LL;
}
