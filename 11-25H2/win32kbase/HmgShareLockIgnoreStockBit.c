/*
 * XREFs of HmgShareLockIgnoreStockBit @ 0x14006F0F0
 * Callers:
 *     ?W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z @ 0x14006EDE0 (-W32kCddSetDeviceBitmapAdapterLuid@@YAHPEAUHSURF__@@U_LUID@@@Z.c)
 *     EngModifySurface @ 0x14006EE50 (EngModifySurface.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x140016260 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x140016B80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x140018960 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1400194C0 (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x14006FA70 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

struct OBJECT *__fastcall HmgShareLockIgnoreStockBit(unsigned int a1)
{
  struct OBJECT *EntryObject; // rdi
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+2Dh] [rbp-1Bh]
  __int64 v7; // [rsp+30h] [rbp-18h]

  EntryObject = 0LL;
  HANDLELOCK::HANDLELOCK((__int64)&v4, a1, 1u);
  if ( v5 )
  {
    if ( *(_BYTE *)(v4 + 14) != 5 || ((*(unsigned __int16 *)(v4 + 12) ^ HIWORD(a1)) & 0xFFFFFF7F) != 0 )
    {
      v6 = 1;
    }
    else
    {
      EntryObject = GdiHandleManager::GetEntryObject(*(GdiHandleManager **)(v7 + 5672), *(_DWORD *)v4);
      ++*((_DWORD *)EntryObject + 2);
      TrackHmgrReferenceIncrement(5, EntryObject);
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v4);
  return EntryObject;
}
