/*
 * XREFs of GreCopyVisRgn @ 0x1400C4DA0
 * Callers:
 *     GetMonitorDC @ 0x140036C34 (GetMonitorDC.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012FA0 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x140014910 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?reset@?$lambda_call@V_lambda_1_@?1??AcquireDcVisRgnShared@DC@@QEAA@XZ@@details@wil@@QEAAXXZ @ 0x14001A86C (-reset@-$lambda_call@V_lambda_1_@-1--AcquireDcVisRgnShared@DC@@QEAA@XZ@@details@wil@@QEAAXXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14001D9B8 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400C4ED4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400C4FD4 (--1DCOBJA@@QEAA@XZ.c)
 *     ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1400C5040 (-bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z.c)
 */

__int64 __fastcall GreCopyVisRgn(HDC a1, HRGN a2)
{
  unsigned int v3; // edi
  __int64 v5[2]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v6[8]; // [rsp+30h] [rbp-29h] BYREF
  DC *v7[8]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v8; // [rsp+D0h] [rbp+77h] BYREF

  v3 = 0;
  DCOBJA::DCOBJA((DCOBJA *)v7, a1);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, a2, 0, 0);
  if ( v7[0] && v6[0] )
  {
    DC::AcquireDcVisRgnShared(v7[0], (__int64)v5);
    v8 = *((_QWORD *)v7[0] + 142);
    if ( v8 && (unsigned int)RGNOBJAPI::bCopy((RGNOBJAPI *)v6, (struct RGNOBJ *)&v8) )
      v3 = RGNOBJ::iComplexity((RGNOBJ *)v6);
    _reset___lambda_call_V_lambda_1___1__AcquireDcVisRgnShared_DC__QEAA_XZ__details_wil__QEAAXXZ(v5);
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
  DCOBJA::~DCOBJA((DCOBJA *)v7);
  return v3;
}
