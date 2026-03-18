/*
 * XREFs of ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x14030F0D4
 * Callers:
 *     NtGdiAddEmbFontToDC @ 0x140328B60 (NtGdiAddEmbFontToDC.c)
 * Callees:
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x1400B55FC (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030F07C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::VerifyPFF(PUBLIC_PFTOBJ *this, struct PFF *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  int v7; // ecx
  __int64 SessionState; // rax
  unsigned int v9; // edi
  __int64 v10; // rsi
  unsigned int v11; // ebx
  struct PFF **v12; // rcx
  struct PFF *i; // rcx
  struct PFF *v14; // rax
  HSEMAPHORE v15; // [rsp+50h] [rbp+18h] BYREF

  result = PFTOBJ::bIsPrivatePFT(this, (__int64)a2, a3);
  if ( (_DWORD)result )
  {
    SessionState = W32GetSessionState(v7, v6);
    SEMOBJ<17>::SEMOBJ<17>(&v15, *(_QWORD *)(SessionState + 96) + 4872LL);
    v9 = 0;
    v10 = 40LL;
    v11 = 1;
    do
    {
      v12 = (struct PFF **)(v10 + *(_QWORD *)this);
      if ( v12 )
      {
        for ( i = *v12; ; i = (struct PFF *)*((_QWORD *)v14 + 1) )
        {
          v14 = SkipInvalidPff(i);
          if ( !v14 )
            break;
          if ( a2 == v14 )
            goto LABEL_10;
        }
      }
      ++v9;
      v10 += 8LL;
    }
    while ( v9 < 0x14 );
    v11 = 0;
LABEL_10:
    SEMOBJ<17>::vUnlock(&v15);
    return v11;
  }
  return result;
}
