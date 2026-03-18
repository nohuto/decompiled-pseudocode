/*
 * XREFs of GreIntersectVisRect @ 0x1401BABF0
 * Callers:
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x140030690 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?ReleaseLock@GreInnermostPushLock@@QEBAXXZ @ 0x14001B2E0 (-ReleaseLock@GreInnermostPushLock@@QEBAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x140021698 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140021D3C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ?vReleaseRao@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140035F30 (-vReleaseRao@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14003BBF4 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400C4ED4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1400C4FD4 (--1DCOBJA@@QEAA@XZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1400C5470 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1400C6CF8 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vStamp@REGION@@AEAAXXZ @ 0x14010F950 (-vStamp@REGION@@AEAAXXZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1401388B8 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall GreIntersectVisRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v5; // r15d
  unsigned int sizeScan; // eax
  __int64 v11; // [rsp+20h] [rbp-E0h] BYREF
  REGION *v12; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  char v15; // [rsp+40h] [rbp-C0h]
  DC *v16[8]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[160]; // [rsp+90h] [rbp-70h] BYREF
  struct _RECTL v18; // [rsp+130h] [rbp+30h] BYREF

  v5 = 0;
  if ( a2 >= a4 || a3 >= a5 || a2 < -134217728 || a4 > 0x7FFFFFF || a3 < -134217728 || a5 > 0x7FFFFFF )
    return 0LL;
  DCOBJA::DCOBJA((DCOBJA *)v16, a1);
  if ( v16[0] )
  {
    v11 = *((_QWORD *)v16[0] + 6);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v17, (struct PDEVOBJ *)&v11);
    DC::AcquireDcVisRgnExclusive(v16[0], (__int64)&v14);
    if ( (v17[24] & 1) != 0 )
    {
      v12 = (REGION *)*((_QWORD *)v16[0] + 142);
      v18.left = a2;
      v18.top = a3;
      v18.right = a4;
      v18.bottom = a5;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
      sizeScan = REGION_CORE::get_sizeScan((REGION *)((char *)v12 + 24));
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13, sizeScan);
      if ( v11 && v13 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v11, &v18);
        RGNOBJ::vCopy((RGNOBJ *)&v13, (struct RGNOBJ *)&v12);
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v12, (struct RGNOBJ *)&v11, (struct RGNOBJ *)&v13, 1) )
        {
          *((_QWORD *)v16[0] + 142) = v12;
          REGION::vStamp(v12);
          DC::vReleaseRao(v16[0], v16[2]);
          v5 = 1;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v13);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
    }
    if ( v15 )
      GreInnermostPushLock::ReleaseLock((GreInnermostPushLock *)(v14 + 1112));
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v17);
  }
  DCOBJA::~DCOBJA((unsigned int **)v16);
  return v5;
}
