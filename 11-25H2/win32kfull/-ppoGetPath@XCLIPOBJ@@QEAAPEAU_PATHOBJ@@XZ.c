/*
 * XREFs of ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1400D4F14
 * Callers:
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1400D4E94 (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     CLIPOBJ_ppoGetPath @ 0x1400D6980 (CLIPOBJ_ppoGetPath.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x140331E30 (VerifierCLIPOBJ_ppoGetPath.c)
 * Callees:
 *     ?bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z @ 0x1400D50BC (-bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z.c)
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1400D51DC (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

struct _PATHOBJ *__fastcall XCLIPOBJ::ppoGetPath(XCLIPOBJ *this)
{
  _OWORD *v2; // rbx
  void *v4; // [rsp+20h] [rbp-E0h] BYREF
  char v5; // [rsp+28h] [rbp-D8h]
  _OWORD v6[8]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v7[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v8; // [rsp+B8h] [rbp-48h]

  v2 = (_OWORD *)Win32AllocPool(80LL, 1869639751LL);
  if ( !v2 )
    return 0LL;
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v6);
  if ( !*((_QWORD *)&v6[0] + 1) )
  {
    Win32FreePool(v2);
LABEL_4:
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v6);
    return 0LL;
  }
  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v7);
  v4 = &unk_140362910;
  v5 = 1;
  if ( !v8
    || !RGNOBJ::bCreate((XCLIPOBJ *)((char *)this + 56), (struct EPATHOBJ *)v7, (const struct EXFORMOBJR *)&v4)
    || !(unsigned int)RTP_PATHMEMOBJ::bDiagonalizePath((RTP_PATHMEMOBJ *)v7, (struct EPATHOBJ *)v6) )
  {
    Win32FreePool(v2);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v7);
    goto LABEL_4;
  }
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v7);
  *v2 = v6[0];
  v2[1] = v6[1];
  v2[2] = v6[2];
  v2[3] = v6[3];
  v2[4] = v6[4];
  EPATHOBJ::vLock((EPATHOBJ *)v2, **((struct HPATH__ ***)&v6[0] + 1));
  *(_QWORD *)v2 = *(_QWORD *)&v6[0];
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v6);
  return (struct _PATHOBJ *)v2;
}
