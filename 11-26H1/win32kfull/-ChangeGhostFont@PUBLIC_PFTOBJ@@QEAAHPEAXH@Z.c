/*
 * XREFs of ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x140326AC4
 * Callers:
 *     ?GreChangeGhostFont@@YAHPEAXH@Z @ 0x1403106A8 (-GreChangeGhostFont@@YAHPEAXH@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400C6908 (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IAEAI@Z @ 0x1400FE480 (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IAEAI@Z.c)
 *     ?bIsPrivatePFT@PFTOBJ@@QEBAHXZ @ 0x140173DA8 (-bIsPrivatePFT@PFTOBJ@@QEBAHXZ.c)
 *     ?PffBucket@PFT@@QEBA?AVPffIterator@@K@Z @ 0x14025A850 (-PffBucket@PFT@@QEBA-AVPffIterator@@K@Z.c)
 *     ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4 (--EPffIterator@@QEAAAEAV0@XZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::ChangeGhostFont(PUBLIC_PFTOBJ *this, __int64 a2, __int64 a3)
{
  int v3; // ebp
  unsigned int v4; // esi
  unsigned int v6; // edi
  __int64 result; // rax
  unsigned int v8; // r15d
  unsigned int CurrentThreadId; // r12d
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rbx
  struct PFT *v13; // rcx
  struct PFF *PFFFromId; // rbx
  unsigned int i; // r11d
  int v16; // r11d
  __int64 j; // rcx
  int v18; // edx
  bool v19; // zf
  int v20; // eax
  HSEMAPHORE v21[7]; // [rsp+20h] [rbp-38h] BYREF
  struct PFF *v22; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 0;
  result = PFTOBJ::bIsPrivatePFT(this, a2, a3);
  if ( (_DWORD)result )
  {
    v8 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    v12 = *(_QWORD *)(W32GetSessionState(v11, v10) + 96);
    SEMOBJ<17>::SEMOBJ<17>(v21, v12 + 4864);
    v13 = *(struct PFT **)(v12 + 20384);
    LODWORD(v22) = 0;
    PFFFromId = GetPFFFromId(v13, v4, (unsigned int *)&v22);
    for ( i = 0; i < 0x14; i = v16 + 1 )
    {
      if ( v6 )
        break;
      PFT::PffBucket(*(_QWORD *)this, (PffIterator *)&v22, i);
      while ( v22 )
      {
        if ( PFFFromId == v22 )
        {
          for ( j = *((_QWORD *)v22 + 19); j; j = *(_QWORD *)(j + 16) )
          {
            v18 = *(_DWORD *)(j + 8);
            if ( (v18 & 4) != 0 )
              v19 = *(_DWORD *)(j + 12) == CurrentThreadId;
            else
              v19 = *(_DWORD *)(j + 12) == v8;
            if ( v19 )
            {
              v20 = *(_DWORD *)(j + 4);
              if ( v3 )
              {
                v6 = 1;
                *(_DWORD *)(j + 4) = v20 + 1;
                *(_DWORD *)(j + 8) = v18 | 0x40;
                goto LABEL_20;
              }
              if ( v20 )
              {
                *(_DWORD *)(j + 4) = v20 - 1;
                *(_DWORD *)(j + 8) = v18 & 0xFFFFFFBF;
              }
              break;
            }
          }
        }
        PffIterator::operator++((__int64 *)&v22);
      }
LABEL_20:
      ;
    }
    SEMOBJ<17>::vUnlock(v21);
    return v6;
  }
  return result;
}
