/*
 * XREFs of ??$CreateFlipPropertySetWorker@VCFlipConsumerMessage@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipConsumerMessage@@@Z @ 0x14001BA64
 * Callers:
 *     ?PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z @ 0x140019E94 (-PostFlipManagerIFlipFrameStatistics@CFlipManager@@AEAAJPEAVCFlipManagerToken@@@Z.c)
 *     NtFlipObjectConsumerPostMessage @ 0x14001AEA0 (NtFlipObjectConsumerPostMessage.c)
 *     ?PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z @ 0x14001B988 (-PostFlipManagerPresentStatusStatistics@CFlipManager@@AEAAJ_K0W4FlipPresentProcessResult@@@Z.c)
 * Callees:
 *     ??0CFlipConsumerMessage@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z @ 0x14001BE08 (--0CFlipConsumerMessage@@QEAA@IPEAUFlipPropertyItem@@PEAXI@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall CreateFlipPropertySetWorker<CFlipConsumerMessage>(
        unsigned int a1,
        void *a2,
        char a3,
        CFlipConsumerMessage **a4)
{
  char v4; // r9
  unsigned int v6; // eax
  signed int v7; // ebx
  unsigned int v8; // r13d
  char *v9; // r14
  char *Pool2; // rsi
  unsigned int v11; // edi
  unsigned __int64 v12; // rax
  unsigned int v13; // r12d
  unsigned int i; // edx
  unsigned int v15; // r9d
  __int64 v16; // rax
  int v17; // ecx
  unsigned int v18; // ecx
  int v19; // eax
  char *v20; // r12
  unsigned int v21; // r15d
  unsigned int v22; // r13d
  __int64 v23; // rbx
  void *v24; // rdx
  size_t v25; // r8
  __int64 v26; // rdx
  CFlipConsumerMessage *v27; // rax
  CFlipConsumerMessage *v28; // rcx

  v4 = a3;
  v6 = a1;
  v7 = 0;
  if ( !a1 )
    return (unsigned int)v7;
  v8 = 0;
  v9 = 0LL;
  Pool2 = 0LL;
  v11 = 0;
  if ( !a2 )
  {
    v7 = -1073741811;
    goto LABEL_13;
  }
  v12 = 32LL * a1;
  v13 = -1;
  if ( v12 <= 0xFFFFFFFF )
    v13 = 32 * a1;
  v7 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v12 <= 0xFFFFFFFF )
  {
    Pool2 = (char *)ExAllocatePool2(257LL, v13, 1768964934LL);
    if ( !Pool2 )
      v7 = -1073741801;
    v4 = a3;
  }
  if ( v7 >= 0 )
  {
    if ( v4 )
    {
      RtlCopyFromUser(Pool2, a2, v13);
      v6 = a1;
      goto LABEL_13;
    }
    memmove(Pool2, a2, v13);
  }
  v6 = a1;
LABEL_13:
  for ( i = 0; v7 >= 0; ++i )
  {
    v15 = v8;
    if ( i >= v6 )
      break;
    v16 = 32LL * i;
    v17 = *(_DWORD *)&Pool2[v16 + 16];
    if ( v17 && *(_QWORD *)&Pool2[v16 + 24] )
    {
      v18 = v8 + v17;
      v19 = -1;
      if ( v18 >= v8 )
        v19 = v18;
      v8 = v19;
      v7 = v18 < v15 ? 0xC0000095 : 0;
    }
    else
    {
      v7 = -1073741811;
    }
    v6 = a1;
  }
  if ( v7 < 0 )
    goto LABEL_54;
  v9 = (char *)ExAllocatePool2(257LL, v8, 1651524422LL);
  if ( !v9 )
    v7 = -1073741801;
  if ( v7 < 0 )
  {
LABEL_54:
    v22 = a1;
  }
  else
  {
    v20 = v9;
    v21 = 0;
    v22 = a1;
    while ( v7 >= 0 && v21 < a1 )
    {
      v23 = 32LL * v21;
      v24 = *(void **)&Pool2[v23 + 24];
      v25 = *(unsigned int *)&Pool2[v23 + 16];
      if ( a3 )
        RtlCopyFromUser(v20, v24, v25);
      else
        memmove(v20, v24, v25);
      *(_QWORD *)&Pool2[v23 + 24] = v20;
      v26 = *(unsigned int *)&Pool2[v23 + 16];
      v20 += v26;
      if ( v11 + 16 < v11 )
      {
        v11 = -1;
        v7 = -1073741675;
      }
      else
      {
        v11 += 16;
        v7 = 0;
      }
      if ( v7 >= 0 )
      {
        if ( v11 + 4 < v11 )
        {
          v11 = -1;
          v7 = -1073741675;
        }
        else
        {
          v11 += 4;
          v7 = 0;
        }
        if ( v7 >= 0 )
        {
          if ( (unsigned int)v26 + v11 < v11 )
          {
            v11 = -1;
            v7 = -1073741675;
          }
          else
          {
            v11 += v26;
            v7 = 0;
          }
        }
      }
      ++v21;
    }
  }
  if ( v7 >= 0 )
  {
    v27 = (CFlipConsumerMessage *)ExAllocatePool2(257LL, 64LL, 1835221830LL);
    if ( v27 )
      v28 = CFlipConsumerMessage::CFlipConsumerMessage(v27, v22, (struct FlipPropertyItem *)Pool2, v9, v11);
    else
      v28 = 0LL;
    *a4 = v28;
    if ( v28 )
    {
      v9 = 0LL;
      Pool2 = 0LL;
    }
    else
    {
      v7 = -1073741801;
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v7;
}
