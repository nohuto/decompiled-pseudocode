/*
 * XREFs of DxgkQueryProcessOfferInfo @ 0x1402C3CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1400422B8 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlReadULongFromUser @ 0x14019678C (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140196810 (RtlWriteULong64ToUser.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1402C2A04 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1402C2A24 (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1402C30E8 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 */

__int64 __fastcall DxgkQueryProcessOfferInfo(unsigned int *Src)
{
  unsigned int ULongFromUser; // eax
  int v4; // edi
  void *v5[2]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v6; // [rsp+30h] [rbp-78h]
  _BYTE v7[80]; // [rsp+40h] [rbp-68h] BYREF

  *(_OWORD *)v5 = 0LL;
  v6 = 0LL;
  ULongFromUser = RtlReadULongFromUser(Src);
  if ( ULongFromUser >= 0x20 )
  {
    if ( ULongFromUser > 0x20 )
      ULongFromUser = 32;
    RtlCopyFromUser(v5, Src, ULongFromUser);
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v7, v5[1], 4096);
    v4 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v7, 0);
    if ( v4 < 0 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 854;
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v7);
      return (unsigned int)v4;
    }
    else
    {
      v6 = *((_OWORD *)DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v7) + 27);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v7);
      RtlWriteULong64ToUser((_QWORD *)Src + 2, v6);
      RtlWriteULong64ToUser((_QWORD *)Src + 3, *((__int64 *)&v6 + 1));
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 820;
    return 3221225485LL;
  }
}
