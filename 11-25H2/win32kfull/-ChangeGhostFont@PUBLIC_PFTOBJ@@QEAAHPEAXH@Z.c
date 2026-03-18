/*
 * XREFs of ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x14030EDE0
 * Callers:
 *     ?GreChangeGhostFont@@YAHPEAXH@Z @ 0x1403274F4 (-GreChangeGhostFont@@YAHPEAXH@Z.c)
 * Callees:
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x1400B55FC (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1401C2EFC (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030F07C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::ChangeGhostFont(PUBLIC_PFTOBJ *this, __int64 a2, __int64 a3)
{
  int v3; // ebp
  unsigned int v4; // esi
  unsigned int v6; // edi
  __int64 result; // rax
  unsigned int v8; // r15d
  unsigned int CurrentThreadId; // r13d
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rbx
  struct PFF *PFFFromId; // rax
  unsigned int v14; // ebx
  struct PFF *v15; // r12
  __int64 v16; // rsi
  struct PFF **v17; // rcx
  struct PFF *i; // rcx
  __int64 j; // rcx
  int v20; // edx
  int v21; // eax
  bool v22; // zf
  int v23; // eax
  struct PFF *v24; // rax
  struct PFF *v25; // r8
  HSEMAPHORE v26; // [rsp+68h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 0;
  result = PFTOBJ::bIsPrivatePFT(this, a2, a3);
  if ( (_DWORD)result )
  {
    v8 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    v12 = *(_QWORD *)(W32GetSessionState(v11, v10) + 96);
    SEMOBJ<17>::SEMOBJ<17>(&v26, v12 + 4872);
    PFFFromId = GetPFFFromId(*(struct PFT **)(v12 + 20408), v4, 0LL);
    v14 = 0;
    v15 = PFFFromId;
    v16 = 40LL;
    do
    {
      if ( v6 )
        break;
      v17 = (struct PFF **)(v16 + *(_QWORD *)this);
      if ( v17 )
      {
        for ( i = *v17; ; i = (struct PFF *)*((_QWORD *)v25 + 1) )
        {
          v24 = SkipInvalidPff(i);
          v25 = v24;
          if ( !v24 )
            break;
          if ( v15 == v24 )
          {
            for ( j = *((_QWORD *)v24 + 19); j; j = *(_QWORD *)(j + 16) )
            {
              v20 = *(_DWORD *)(j + 8);
              v21 = *(_DWORD *)(j + 12);
              if ( (v20 & 4) != 0 )
                v22 = v21 == CurrentThreadId;
              else
                v22 = v21 == v8;
              if ( v22 )
              {
                v23 = *(_DWORD *)(j + 4);
                if ( v3 )
                {
                  v6 = 1;
                  *(_DWORD *)(j + 4) = v23 + 1;
                  *(_DWORD *)(j + 8) = v20 | 0x40;
                  goto LABEL_22;
                }
                if ( v23 )
                {
                  *(_DWORD *)(j + 4) = v23 - 1;
                  *(_DWORD *)(j + 8) = v20 & 0xFFFFFFBF;
                }
                break;
              }
            }
          }
        }
      }
LABEL_22:
      ++v14;
      v16 += 8LL;
    }
    while ( v14 < 0x14 );
    SEMOBJ<17>::vUnlock(&v26);
    return v6;
  }
  return result;
}
