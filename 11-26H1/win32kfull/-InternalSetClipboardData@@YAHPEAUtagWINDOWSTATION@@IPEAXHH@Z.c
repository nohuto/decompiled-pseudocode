/*
 * XREFs of ?InternalSetClipboardData@@YAHPEAUtagWINDOWSTATION@@IPEAXHH@Z @ 0x1401B1E8C
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401B19BC (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     _SetClipboardData @ 0x1401B1CEC (_SetClipboardData.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1402CE6D4 (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140057518 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1401B22B4 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall InternalSetClipboardData(struct tagWINDOWSTATION *a1, unsigned int a2, void *a3, int a4, int a5)
{
  struct tagCLIP *ClipFormat; // rax
  struct tagCLIP *v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  _BYTE v21[512]; // [rsp+20h] [rbp-228h] BYREF

  if ( !*((_QWORD *)a1 + 6) || !a2 )
  {
    UserSetLastError(1418);
    return 0LL;
  }
  ClipFormat = FindClipFormat((unsigned __int64)a1, a2, 2);
  v10 = ClipFormat;
  if ( !ClipFormat )
  {
    v11 = *((_QWORD *)a1 + 12);
    if ( v11 )
    {
      v12 = 32LL * *((unsigned int *)a1 + 26);
      if ( v12 > 0xFFFFFFFF || (int)v12 + 32 < (unsigned int)v12 )
        return 0LL;
      v15 = UserReAllocPool(v11, (unsigned int)v12, (unsigned int)(v12 + 32), 1650684757LL);
    }
    else
    {
      v15 = Win32AllocPoolZInit(32LL, 1650684757LL);
    }
    v16 = v15;
    if ( v15 )
    {
      *((_QWORD *)a1 + 12) = v15;
      if ( (unsigned int)UserGetAtomName((unsigned __int16)a2, v21, 256LL) )
      {
        UserAddAtomEx(v21, 0LL, 2LL);
        v14 = *((unsigned int *)a1 + 26);
        *((_DWORD *)a1 + 26) = v14 + 1;
        v10 = (struct tagCLIP *)(32LL * (unsigned int)v14 + v16);
        *(_DWORD *)v10 = a2;
        goto LABEL_12;
      }
    }
    return 0LL;
  }
  UT_FreeCBFormat(ClipFormat);
LABEL_12:
  *((_QWORD *)v10 + 1) = a3;
  *((_DWORD *)v10 + 4) = a4;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
  if ( CurrentProcessWin32Process )
  {
    v18 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  *((_DWORD *)v10 + 5) = *(_DWORD *)(CurrentProcessWin32Process + 864);
  v19 = PsGetCurrentProcessWin32Process(v18);
  if ( v19 )
  {
    v20 = -*(_QWORD *)v19;
    v19 &= -(__int64)(*(_QWORD *)v19 != 0LL);
  }
  *((_DWORD *)v10 + 6) = *(_DWORD *)(v19 + 868);
  if ( a5 )
  {
    *((_DWORD *)a1 + 8) |= 0x40u;
    if ( (*((_DWORD *)a1 + 8) & 0x80u) == 0 )
      ++*((_DWORD *)a1 + 28);
  }
  if ( !*((_QWORD *)a1 + 10) || *(struct tagTHREADINFO **)(*((_QWORD *)a1 + 10) + 16LL) != PtiCurrent(v20) )
  {
    if ( a5 )
      ++*((_DWORD *)a1 + 27);
  }
  return 1LL;
}
