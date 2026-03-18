/*
 * XREFs of HmgCheckDCForPrivateReferences @ 0x1401F0A88
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1400CA374 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x140034B64 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x140034C24 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x14003AC58 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     HmgIsObjectOwnedByW32Pid @ 0x14013A880 (HmgIsObjectOwnedByW32Pid.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall HmgCheckDCForPrivateReferences(DC *this, int a2)
{
  struct REGION *v4; // rax
  __int64 v5; // rdx
  struct HPATH__ *v7; // rdx
  __int64 v8; // rdx
  _BYTE v9[8]; // [rsp+20h] [rbp-49h] BYREF
  _QWORD *v10; // [rsp+28h] [rbp-41h]
  int v11; // [rsp+A0h] [rbp+37h] BYREF
  __int64 v12; // [rsp+A4h] [rbp+3Bh]

  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*((_QWORD **)this + 17), a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*((_QWORD **)this + 18), a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*((_QWORD **)this + 19), a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*((_QWORD **)this + 11), a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*((_QWORD **)this + 141), a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*((_QWORD **)this + 148), a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*((_QWORD **)this + 20), a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*((_QWORD **)this + 147), a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*((_QWORD **)this + 21), a2) )
    return 1LL;
  v4 = DC::prgnRao(this);
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(v4, a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(*((_QWORD **)this + 62), a2)
    || (unsigned int)HmgIsObjectOwnedByW32Pid(*((_QWORD **)this + 265), a2) )
  {
    return 1LL;
  }
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(*((_QWORD **)this + 12), a2) )
  {
    v11 = 47405468;
    v12 = 1LL;
    RtlLogUnexpectedCodepath(&v11, v5);
    return 1LL;
  }
  v7 = (struct HPATH__ *)*((_QWORD *)this + 25);
  if ( v7 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v9, v7);
    if ( (unsigned int)HmgIsObjectOwnedByW32Pid(v10, a2) )
    {
      v11 = 49402819;
      v12 = 0x100000001LL;
      RtlLogUnexpectedCodepath(&v11, v8);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v9);
      return 1LL;
    }
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v9);
  }
  return 0LL;
}
