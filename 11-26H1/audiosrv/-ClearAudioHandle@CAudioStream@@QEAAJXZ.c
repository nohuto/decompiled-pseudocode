/*
 * XREFs of ?ClearAudioHandle@CAudioStream@@QEAAJXZ @ 0x1800AA8B4
 * Callers:
 *     ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800614D0 (-DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800FCC00 (-DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800FCD10 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??1SystemAudioStream@@QEAA@XZ @ 0x180044F00 (--1SystemAudioStream@@QEAA@XZ.c)
 *     ?SetAudioHandle@CAudioStream@@QEAAJPEAUSystemAudioStream@@KPEAUIStreamInstanceProxy@@@Z @ 0x1800AA94C (-SetAudioHandle@CAudioStream@@QEAAJPEAUSystemAudioStream@@KPEAUIStreamInstanceProxy@@@Z.c)
 */

__int64 __fastcall CAudioStream::ClearAudioHandle(CAudioStream *this)
{
  unsigned int v1; // ebx
  __int128 v3; // [rsp+20h] [rbp-E0h] BYREF
  int v4; // [rsp+30h] [rbp-D0h]
  __int64 v5; // [rsp+38h] [rbp-C8h]
  __int64 v6; // [rsp+40h] [rbp-C0h]
  __int64 v7; // [rsp+48h] [rbp-B8h]
  __int64 v8; // [rsp+50h] [rbp-B0h]
  __int64 v9; // [rsp+180h] [rbp+80h]
  __int64 v10; // [rsp+2B0h] [rbp+1B0h]
  int v11; // [rsp+3E0h] [rbp+2E0h]
  __int64 v12; // [rsp+3E8h] [rbp+2E8h]
  __int64 v13; // [rsp+518h] [rbp+418h]
  __int64 v14; // [rsp+520h] [rbp+420h]

  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v3 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v1 = CAudioStream::SetAudioHandle(this, (struct SystemAudioStream *)&v3, 0, 0LL);
  SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v3);
  return v1;
}
