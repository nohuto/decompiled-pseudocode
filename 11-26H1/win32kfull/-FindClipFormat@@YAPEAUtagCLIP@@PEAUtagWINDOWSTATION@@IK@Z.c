/*
 * XREFs of ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140057518
 * Callers:
 *     NtUserIsClipboardFormatAvailable @ 0x140057300 (NtUserIsClipboardFormatAvailable.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401B19BC (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1401B1E8C (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     xxxGetClipboardData @ 0x1401F7070 (xxxGetClipboardData.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1401F71E0 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     _EnumClipboardFormats @ 0x14020C9DC (_EnumClipboardFormats.c)
 *     InternalGetClipboardMetadata @ 0x140225F64 (InternalGetClipboardMetadata.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CE9BC (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CEB64 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CED08 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402CEEEC (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1402CEFC8 (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x140056770 (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1401AF77C (-IsFmtBlocked@@YAHI@Z.c)
 */

struct tagCLIP *__fastcall FindClipFormat(unsigned __int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // xmm0_8
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // xmm0_8
  int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  int v18; // [rsp+28h] [rbp-20h]
  __int64 v19; // [rsp+30h] [rbp-18h] BYREF
  int v20; // [rsp+38h] [rbp-10h]

  if ( a2 )
  {
    v4 = *(_QWORD *)(a1 + 96);
    if ( v4 )
    {
      LODWORD(a1) = *(_DWORD *)(a1 + 104);
      while ( 1 )
      {
        v5 = a1;
        a1 = (unsigned int)(a1 - 1);
        if ( !v5 )
          break;
        if ( *(_DWORD *)v4 == a2 )
        {
          if ( (a3 & 1) == 0 )
            return (struct tagCLIP *)v4;
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
          v8 = CurrentProcessWin32Process;
          if ( CurrentProcessWin32Process )
            v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
          v9 = *(_DWORD *)(v8 + 872);
          v17 = *(_QWORD *)(v8 + 864);
          v10 = *(_QWORD *)(v4 + 20);
          v18 = v9;
          v11 = *(_DWORD *)(v4 + 28);
          v19 = v10;
          v20 = v11;
          if ( CheckClipboardAccessForIntegrityLevel(&v19, (const struct tagUIPI_INFO *)&v17)
            || !(unsigned int)IsFmtBlocked(a2) )
          {
            return (struct tagCLIP *)v4;
          }
          v13 = *(_QWORD *)(v4 + 20);
          v14 = *(_DWORD *)(v4 + 28);
          v15 = PsGetCurrentProcessWin32Process(v12);
          v16 = v15;
          if ( v15 )
            v16 = -(__int64)(*(_QWORD *)v15 != 0LL) & v15;
          v19 = v13;
          v20 = v14;
          EtwTraceUIPIClipboardError(0LL, v16, a2, &v19);
          return 0LL;
        }
        v4 += 32LL;
      }
    }
  }
  return 0LL;
}
