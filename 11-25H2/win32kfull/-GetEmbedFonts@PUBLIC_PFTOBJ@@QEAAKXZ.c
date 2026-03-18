/*
 * XREFs of ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x14030EF2C
 * Callers:
 *     NtGdiGetEmbedFonts @ 0x140339AB0 (NtGdiGetEmbedFonts.c)
 * Callees:
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x1400B55FC (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030F07C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::GetEmbedFonts(PUBLIC_PFTOBJ *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 result; // rax
  unsigned int v6; // r14d
  unsigned int CurrentThreadId; // r15d
  __int64 v8; // rdx
  int v9; // ecx
  __int64 SessionState; // rax
  __int64 v11; // rdi
  __int64 v12; // rbp
  struct PFF **v13; // rcx
  struct PFF *i; // rcx
  __int64 j; // rdx
  int v16; // r8d
  bool v17; // zf
  struct PFF *v18; // rax
  HSEMAPHORE v19; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  result = PFTOBJ::bIsPrivatePFT(this, a2, a3);
  if ( (_DWORD)result )
  {
    v6 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    SessionState = W32GetSessionState(v9, v8);
    SEMOBJ<17>::SEMOBJ<17>(&v19, *(_QWORD *)(SessionState + 96) + 4872LL);
    v11 = 40LL;
    v12 = 20LL;
    do
    {
      v13 = (struct PFF **)(v11 + *(_QWORD *)this);
      if ( v13 )
      {
        for ( i = *v13; ; i = (struct PFF *)*((_QWORD *)v18 + 1) )
        {
          v18 = SkipInvalidPff(i);
          if ( !v18 )
            break;
          for ( j = *((_QWORD *)v18 + 19); j; j = *(_QWORD *)(j + 16) )
          {
            v16 = *(_DWORD *)(j + 12);
            if ( (*(_DWORD *)(j + 8) & 4) != 0 )
              v17 = v16 == CurrentThreadId;
            else
              v17 = v16 == v6;
            if ( v17 )
              ++v4;
          }
        }
      }
      v11 += 8LL;
      --v12;
    }
    while ( v12 );
    SEMOBJ<17>::vUnlock(&v19);
    return v4;
  }
  return result;
}
