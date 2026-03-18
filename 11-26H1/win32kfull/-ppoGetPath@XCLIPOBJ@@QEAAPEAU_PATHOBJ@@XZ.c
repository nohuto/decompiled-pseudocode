/*
 * XREFs of ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1400D86E8
 * Callers:
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1400D865C (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     CLIPOBJ_ppoGetPath @ 0x1400D9660 (CLIPOBJ_ppoGetPath.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1403494A0 (VerifierCLIPOBJ_ppoGetPath.c)
 * Callees:
 *     ?bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z @ 0x14019BF40 (-bDiagonalizePath@RTP_PATHMEMOBJ@@QEAAHPEAVEPATHOBJ@@@Z.c)
 *     ?vLock@EPATHOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHPATH__@@@Z @ 0x1401DEB20 (-vLock@EPATHOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHPATH__@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

struct _PATHOBJ *__fastcall XCLIPOBJ::ppoGetPath(XCLIPOBJ *this, __int64 a2, __int64 a3)
{
  EPATHOBJ *v4; // rbx
  Gre::Base *v5; // rcx
  struct Gre::Base::SESSION_GLOBALS *v6; // rax
  void *v8; // [rsp+20h] [rbp-E0h] BYREF
  char v9; // [rsp+28h] [rbp-D8h]
  _OWORD v10[8]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v11[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v12; // [rsp+B8h] [rbp-48h]

  v4 = (EPATHOBJ *)Win32AllocPool(80LL, 1869639751LL, a3);
  if ( v4 )
  {
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v10);
    if ( *((_QWORD *)&v10[0] + 1) )
    {
      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v11);
      v8 = &unk_14036FDC0;
      v9 = 1;
      if ( v12
        && RGNOBJ::bCreate((XCLIPOBJ *)((char *)this + 56), (struct EPATHOBJ *)v11, (const struct EXFORMOBJR *)&v8)
        && (unsigned int)RTP_PATHMEMOBJ::bDiagonalizePath((RTP_PATHMEMOBJ *)v11, (struct EPATHOBJ *)v10) )
      {
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v11);
        *(_OWORD *)v4 = v10[0];
        *((_OWORD *)v4 + 1) = v10[1];
        *((_OWORD *)v4 + 2) = v10[2];
        *((_OWORD *)v4 + 3) = v10[3];
        *((_OWORD *)v4 + 4) = v10[4];
        v6 = Gre::Base::Globals(v5);
        EPATHOBJ::vLock(v4, v6, **((struct HPATH__ ***)&v10[0] + 1));
        *(_QWORD *)v4 = *(_QWORD *)&v10[0];
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v10);
        return (struct _PATHOBJ *)v4;
      }
      Win32FreePool(v4);
      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v11);
    }
    else
    {
      Win32FreePool(v4);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v10);
  }
  return 0LL;
}
