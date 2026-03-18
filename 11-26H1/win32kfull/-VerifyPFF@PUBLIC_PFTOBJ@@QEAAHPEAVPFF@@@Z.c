/*
 * XREFs of ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1403270F0
 * Callers:
 *     NtGdiAddEmbFontToDC @ 0x140312030 (NtGdiAddEmbFontToDC.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C6908 (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x140173DA8 (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 *     ?PffBucket@PFT@@QEBA?AVPffIterator@@K@Z @ 0x14025A850 (-PffBucket@PFT@@QEBA-AVPffIterator@@K@Z.c)
 *     ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4 (--EPffIterator@@QEAAAEAV0@XZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::VerifyPFF(PUBLIC_PFTOBJ *this, struct PFF *a2, __int64 a3)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // ecx
  __int64 SessionState; // rax
  unsigned int i; // r10d
  int v11; // r10d
  struct PFF *v12; // [rsp+40h] [rbp+18h] BYREF
  HSEMAPHORE v13; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0;
  result = PFTOBJ::bIsPrivatePFT(this, (__int64)a2, a3);
  if ( (_DWORD)result )
  {
    SessionState = W32GetSessionState(v8, v7);
    SEMOBJ<17>::SEMOBJ<17>(&v13, *(_QWORD *)(SessionState + 96) + 4864LL);
    for ( i = 0; i < 0x14; i = v11 + 1 )
    {
      if ( v5 )
        break;
      PFT::PffBucket(*(_QWORD *)this, (PffIterator *)&v12, i);
      while ( v12 )
      {
        if ( a2 == v12 )
        {
          v5 = 1;
          break;
        }
        PffIterator::operator++((__int64 *)&v12);
      }
    }
    SEMOBJ<17>::vUnlock(&v13);
    return v5;
  }
  return result;
}
