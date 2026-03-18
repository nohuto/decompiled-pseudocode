/*
 * XREFs of ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x140054C28
 * Callers:
 *     xxxRetrievePointerInputMessage @ 0x140140B4C (xxxRetrievePointerInputMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     CalcWakeMask @ 0x140055540 (CalcWakeMask.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x140094B10 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 */

__int64 __fastcall CheckCrossThreadInput(
        struct tagTHREADINFO **a1,
        struct tagQMSG *a2,
        int *a3,
        int *a4,
        struct tagQMSG **a5)
{
  struct tagTHREADINFO **CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO *v10; // r11
  int v11; // esi
  int v12; // eax
  __int64 result; // rax

  CurrentThreadWin32Thread = (struct tagTHREADINFO **)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v10 = *CurrentThreadWin32Thread;
  else
    v10 = 0LL;
  if ( *((_QWORD *)v10 + 88) || *(struct tagQMSG **)(*((_QWORD *)v10 + 58) + 88LL) != a2 )
    goto LABEL_8;
  v11 = *((_DWORD *)a2 + 25);
  if ( (v11 & 0x20) != 0 )
  {
    *a3 = 0;
    *a5 = a2;
    return 0LL;
  }
  if ( (v11 & 0x40) != 0
    || (v12 = *((_DWORD *)a1 + 65)) == 0
    || (v12 & 2) == 0
    || (CalcWakeMask(*((unsigned int *)a2 + 6), *((unsigned int *)a2 + 6), 0LL) & 2) == 0
    || v10 == a1[33] )
  {
LABEL_8:
    *a3 = a1[2] != v10;
    *a5 = 0LL;
    return 0LL;
  }
  *((_DWORD *)a2 + 25) = v11 | 0x20;
  ReassignInputMessage(v10, a1[33], a2);
  *((_QWORD *)a2 + 2) = *a1;
  result = 1LL;
  *a4 = 0;
  *a3 = 0;
  return result;
}
