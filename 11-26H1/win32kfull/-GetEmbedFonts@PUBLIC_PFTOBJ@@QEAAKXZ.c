/*
 * XREFs of ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x140326C0C
 * Callers:
 *     NtGdiGetEmbedFonts @ 0x14032AE00 (NtGdiGetEmbedFonts.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C6908 (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x140173DA8 (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 *     PFTOBJ::EnumeratePFFs__PUBLIC_PFTOBJ::GetEmbedFonts_::_2_::_lambda_1___ @ 0x14032684C (PFTOBJ--EnumeratePFFs__PUBLIC_PFTOBJ--GetEmbedFonts_--_2_--_lambda_1___.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::GetEmbedFonts(PUBLIC_PFTOBJ *this, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  int v6; // ecx
  __int64 SessionState; // rax
  unsigned int v8; // ebx
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+28h] [rbp-38h] BYREF
  HSEMAPHORE v11[6]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+18h] BYREF
  unsigned int CurrentThreadId; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v14; // [rsp+88h] [rbp+28h] BYREF

  v12 = 0;
  v9 = 0LL;
  v10 = 0LL;
  result = PFTOBJ::bIsPrivatePFT(this, a2, a3);
  if ( (_DWORD)result )
  {
    v14 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    SessionState = W32GetSessionState(v6, v5);
    SEMOBJ<17>::SEMOBJ<17>(v11, *(_QWORD *)(SessionState + 96) + 4864LL);
    v11[1] = (HSEMAPHORE)&v9;
    v11[2] = (HSEMAPHORE)&v10;
    v11[3] = (HSEMAPHORE)&CurrentThreadId;
    v11[4] = (HSEMAPHORE)&v12;
    v11[5] = (HSEMAPHORE)&v14;
    PFTOBJ::EnumeratePFFs__PUBLIC_PFTOBJ::GetEmbedFonts_::_2_::_lambda_1___((__int64 *)this);
    v8 = v12;
    SEMOBJ<17>::vUnlock(v11);
    return v8;
  }
  return result;
}
