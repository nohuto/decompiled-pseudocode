/*
 * XREFs of ?bRotate@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x1401A90FC
 * Callers:
 *     ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x14016BC94 (-GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECOR.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x14031D908 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ @ 0x14006AC08 (--0-$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z @ 0x1401A91A0 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0KE@Z.c)
 *     ??0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401AA450 (--0DCOBJ@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall BLTRECORD::bRotate(
        BLTRECORD *this,
        struct Gre::Base::SESSION_GLOBALS **a2,
        struct BLTRECORD::PROXYDCOBJ *a3,
        unsigned int a4,
        char a5)
{
  struct Gre::Base::SESSION_GLOBALS **v5; // rbx
  _QWORD v10[8]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v11; // [rsp+70h] [rbp-38h] BYREF
  char v12; // [rsp+90h] [rbp-18h]
  __int64 v13; // [rsp+98h] [rbp-10h]

  v5 = a2;
  DCOBJ::DCOBJ((DCOBJ *)v10, a2[2]);
  UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>(&v11);
  v10[0] = *v5;
  v12 = 0;
  v13 = 0LL;
  LODWORD(v5) = BLTRECORD::bRotate(this, (struct BLTRECORD::PROXYDCOBJ *)v10, a3, a4, a5);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v10);
  return (unsigned int)v5;
}
