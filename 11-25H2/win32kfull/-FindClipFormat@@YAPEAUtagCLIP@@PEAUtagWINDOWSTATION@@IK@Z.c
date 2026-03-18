/*
 * XREFs of ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1401137C0
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x140111248 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxGetClipboardData @ 0x1401118D0 (xxxGetClipboardData.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x140111A3C (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     InternalGetClipboardMetadata @ 0x140111C00 (InternalGetClipboardMetadata.c)
 *     ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x140111CEC (-InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z.c)
 *     _EnumClipboardFormats @ 0x140112A5C (_EnumClipboardFormats.c)
 *     NtUserIsClipboardFormatAvailable @ 0x1401135A0 (NtUserIsClipboardFormatAvailable.c)
 *     ?xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B3E88 (-xxxGetDummyBitmap@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B4028 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B41CC (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B43B0 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z @ 0x1402B448C (-xxxGetDummyText@@YAPEAXPEAUtagWINDOWSTATION@@IPEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     ?IsFmtBlocked@@YAHI@Z @ 0x14011169C (-IsFmtBlocked@@YAHI@Z.c)
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1401138D4 (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // xmm0_8
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-28h] BYREF
  int v19; // [rsp+28h] [rbp-20h]
  __int64 v20; // [rsp+30h] [rbp-18h] BYREF
  int v21; // [rsp+38h] [rbp-10h]

  if ( a2 )
  {
    v4 = *(_QWORD *)(a1 + 128);
    if ( v4 )
    {
      LODWORD(a1) = *(_DWORD *)(a1 + 136);
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
          v18 = *(_QWORD *)(v8 + 864);
          v10 = *(_QWORD *)(v4 + 20);
          v19 = v9;
          v11 = *(_DWORD *)(v4 + 28);
          v20 = v10;
          v21 = v11;
          if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(&v20, &v18) || !(unsigned int)IsFmtBlocked(a2, v12) )
            return (struct tagCLIP *)v4;
          v14 = *(_QWORD *)(v4 + 20);
          v15 = *(_DWORD *)(v4 + 28);
          v16 = PsGetCurrentProcessWin32Process(v13);
          v17 = v16;
          if ( v16 )
            v17 = -(__int64)(*(_QWORD *)v16 != 0LL) & v16;
          v20 = v14;
          v21 = v15;
          EtwTraceUIPIClipboardError(0LL, v17, a2, &v20);
          return 0LL;
        }
        v4 += 32LL;
      }
    }
  }
  return 0LL;
}
