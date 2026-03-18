/*
 * XREFs of GreIntersectVisRect @ 0x14017D540
 * Callers:
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1401792DC (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x14000DD20 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x14000E530 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x14000E8F4 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14000EAFC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000EB3C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011FD0 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x14001C880 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140065280 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x14008B5C0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x14008B640 (--1DCOBJA@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008E1A8 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vStamp@REGION@@AEAAXXZ @ 0x1400C7DE0 (-vStamp@REGION@@AEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14014ED30 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1401C629C (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall GreIntersectVisRect(__int64 a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v5; // esi
  __int64 v9; // rdx
  unsigned int sizeScan; // eax
  const struct REGION_CORE *v11; // r8
  __int64 v13; // [rsp+20h] [rbp-E0h] BYREF
  REGION *v14; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+40h] [rbp-C0h]
  DC *v17[10]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[144]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v19; // [rsp+130h] [rbp+30h] BYREF

  v5 = 0;
  if ( a2 >= a4 || a3 >= a5 || a2 < -134217728 || a4 > 0x7FFFFFF || a3 < -134217728 || a5 > 0x7FFFFFF )
    return 0LL;
  DCOBJA::DCOBJA((DCOBJA *)v17, a1);
  if ( v17[0] )
  {
    v13 = *((_QWORD *)v17[0] + 6);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v18, (struct PDEVOBJ *)&v13);
    DC::AcquireDcVisRgnExclusive(v17[0]);
    if ( (v18[24] & 1) != 0 )
    {
      v14 = (REGION *)*((_QWORD *)v17[0] + 142);
      v19.left = a2;
      v19.top = a3;
      v19.right = a4;
      v19.bottom = a5;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13, v9);
      sizeScan = REGION_CORE::get_sizeScan((REGION *)((char *)v14 + 24));
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v15, sizeScan);
      if ( v13 && v15[0] )
      {
        RGNOBJ::vSet((RGNOBJ *)&v13, &v19);
        RGNOBJ::vCopy((RGNOBJ *)v15, (struct RGNOBJ *)&v14, v11);
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v14, (struct RGNOBJ *)&v13, (struct RGNOBJ *)v15, 1) )
        {
          *((_QWORD *)v17[0] + 142) = v14;
          REGION::vStamp(v14);
          DC::vReleaseRao(v17[0]);
          v5 = 1;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13);
    }
    if ( v16 )
      CPushLock::ReleaseLock((CPushLock *)(v15[1] + 1112LL));
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v18);
  }
  DCOBJA::~DCOBJA((DCOBJA *)v17);
  return v5;
}
