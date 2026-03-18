/*
 * XREFs of ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@K@Z @ 0x14006AB54
 * Callers:
 *     ?bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z @ 0x14007F744 (-bStretch@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KE@Z.c)
 *     ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x14016BC94 (-GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECOR.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KJJ@Z @ 0x140215C74 (-bBitBlt@BLTRECORD@@QEAAHAEAVXDCOBJ@@AEAVPROXYDCOBJ@1@KJJ@Z.c)
 *     ?GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z @ 0x14031D908 (-GrepPlgBlt@@YAHAEAVXDCOBJ@@PEAUtagPOINT@@0HHHHPEAUHBITMAP__@@HHK@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14006AB10 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ @ 0x14006AC08 (--0-$UnexpectedThreadTerminationHandler@VAPIDCOBJ@@@@QEAA@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z @ 0x14006BEDC (-bBitBlt@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@0K@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall BLTRECORD::bBitBlt(
        BLTRECORD *this,
        struct XDCOBJ *a2,
        struct BLTRECORD::PROXYDCOBJ *a3,
        unsigned int a4)
{
  struct XDCOBJ *v7; // rbx
  __int64 v9; // [rsp+20h] [rbp-78h] BYREF
  int v10; // [rsp+28h] [rbp-70h]
  __int64 v11; // [rsp+30h] [rbp-68h]
  __int64 v12; // [rsp+38h] [rbp-60h]
  __int128 v13; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v14[40]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v15; // [rsp+88h] [rbp-10h]

  v11 = *((_QWORD *)a2 + 2);
  v12 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v7 = a2;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(&v13);
  UnexpectedThreadTerminationHandler<APIDCOBJ>::UnexpectedThreadTerminationHandler<APIDCOBJ>(v14);
  v9 = *(_QWORD *)v7;
  v14[32] = 0;
  v15 = 0LL;
  LODWORD(v7) = BLTRECORD::bBitBlt(this, (struct BLTRECORD::PROXYDCOBJ *)&v9, a3, a4);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v9);
  return (unsigned int)v7;
}
