/*
 * XREFs of ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1401407C8
 * Callers:
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1401387F4 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     DelQEntry @ 0x140095C20 (DelQEntry.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x140140934 (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     xxxRetrievePointerInputMessage @ 0x140140B4C (xxxRetrievePointerInputMessage.c)
 */

__int64 __fastcall DiscardPointerMessage(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v6; // r8d
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // esi
  _QWORD *v12; // rax
  __int64 v13; // rax
  int v15; // [rsp+78h] [rbp+17h] BYREF
  _QWORD *v16; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v17; // [rsp+88h] [rbp+27h] BYREF
  __int64 v18; // [rsp+90h] [rbp+2Fh] BYREF
  struct tagQMSG *v19; // [rsp+98h] [rbp+37h] BYREF
  int v20; // [rsp+D0h] [rbp+6Fh] BYREF
  int v21; // [rsp+E0h] [rbp+7Fh] BYREF

  v16 = 0LL;
  v20 = 0;
  v6 = *(_DWORD *)(a2 + 24);
  v17 = 0LL;
  v18 = 0LL;
  v15 = 1;
  v21 = 0;
  v19 = 0LL;
  v9 = xxxRetrievePointerInputMessage(
         a1,
         a3,
         v6,
         v6,
         0,
         1,
         &v15,
         (struct tagQMSG *)a2,
         (__int64)&v16,
         (__int64)&v20,
         (__int64)&v17,
         (__int64)&v18,
         &v21,
         &v19);
  LOBYTE(v10) = 1;
  v11 = v9;
  InputTraceLogging::Pointer::RetrieveMessage(a2, v10, v9);
  if ( a4 && v11 == 1 )
  {
    v12 = v16;
    *(_OWORD *)a4 = 0LL;
    *(_OWORD *)(a4 + 16) = 0LL;
    *(_OWORD *)(a4 + 32) = 0LL;
    if ( v12 )
      v12 = (_QWORD *)*v12;
    *(_QWORD *)a4 = v12;
    *(_DWORD *)(a4 + 8) = v20;
    *(_QWORD *)(a4 + 16) = v17;
    *(_QWORD *)(a4 + 24) = v18;
    *(_DWORD *)(a4 + 32) = *(_DWORD *)(a2 + 48);
    *(_QWORD *)(a4 + 36) = *(_QWORD *)(a2 + 52);
  }
  else if ( v11 == 2 )
  {
    return v11;
  }
  v13 = *(_QWORD *)(a1 + 464);
  if ( *(_QWORD *)(v13 + 88) == a2 )
    *(_QWORD *)(v13 + 88) = 0LL;
  DelQEntry(*(_QWORD *)(a1 + 464) + 24LL, a2, 1);
  return v11;
}
