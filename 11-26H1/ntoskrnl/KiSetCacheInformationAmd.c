/*
 * XREFs of KiSetCacheInformationAmd @ 0x140BFD0E8
 * Callers:
 *     KiSetCacheInformation @ 0x140BFCFC0 (KiSetCacheInformation.c)
 * Callees:
 *     KeCheckProcessorAffinityEx @ 0x140421930 (KeCheckProcessorAffinityEx.c)
 *     KeGetProcessorNode @ 0x14047B6CC (KeGetProcessorNode.c)
 *     KiGetL2L3AssociativityAmd @ 0x140BFB848 (KiGetL2L3AssociativityAmd.c)
 *     KiSetStandardizedCacheInformation @ 0x140BFDE14 (KiSetStandardizedCacheInformation.c)
 */

char KiSetCacheInformationAmd()
{
  struct _KPRCB *CurrentPrcb; // rsi
  char result; // al
  unsigned int v7; // r14d
  _CACHE_DESCRIPTOR *Cache; // r15
  int v9; // r9d
  unsigned int v15; // r13d
  unsigned int v16; // edi
  unsigned int v17; // r13d
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 ProcessorNode; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  int v28; // eax
  char L2L3AssociativityAmd; // al
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int64 GroupSetMember; // r8
  __int64 Group; // rbx
  unsigned int v44; // edi
  char *v45; // rdx
  _CACHE_DESCRIPTOR *v46; // [rsp+20h] [rbp-28h]
  char v47; // [rsp+90h] [rbp+48h]
  unsigned __int16 v48; // [rsp+98h] [rbp+50h]
  int v49; // [rsp+A0h] [rbp+58h]
  unsigned int v50; // [rsp+A8h] [rbp+60h]

  CurrentPrcb = KeGetCurrentPrcb();
  _RAX = 2147483649LL;
  __asm { cpuid }
  CurrentPrcb->CacheCount = 0;
  if ( (_RCX & 0x400000) == 0 )
  {
    v7 = 0;
    Cache = CurrentPrcb->Cache;
    v46 = CurrentPrcb->Cache;
    v50 = 0;
    v9 = 1;
    while ( 1 )
    {
      if ( v7 < 2 )
      {
        GroupSetMember = CurrentPrcb->GroupSetMember;
        v47 = v9;
        _RAX = 2147483653LL;
        __asm { cpuid }
        Group = CurrentPrcb->Group;
        v44 = _RDX;
        if ( !v7 )
          v44 = _RCX;
        v17 = HIBYTE(v44) << 10;
        v49 = 2 - (v7 != 0);
        v48 = (unsigned __int8)v44;
        v16 = HIWORD(v44);
        v45 = (char *)CurrentPrcb + 264 * v7;
        if ( *((_WORD *)v45 + 22400) <= (unsigned __int16)Group )
        {
          if ( *((_WORD *)v45 + 22401) <= (unsigned __int16)Group )
            goto LABEL_25;
          *((_WORD *)v45 + 22400) = v9 + Group;
        }
        *(_QWORD *)&v45[8 * Group + 44808] |= GroupSetMember;
        goto LABEL_25;
      }
      if ( v7 == 2 )
      {
        v47 = 2;
        _RAX = 2147483654LL;
        v49 = 0;
        __asm { cpuid }
        v17 = WORD1(_RCX) << 10;
        v48 = (unsigned __int8)_RCX;
        L2L3AssociativityAmd = KiGetL2L3AssociativityAmd(BYTE1(_RCX) >> 4);
        v35 = CurrentPrcb->Group;
        LOBYTE(v16) = L2L3AssociativityAmd;
        v36 = CurrentPrcb->GroupSetMember;
        if ( CurrentPrcb->CacheProcessorSet[2].Count > (unsigned __int16)v35 )
          goto LABEL_31;
        if ( CurrentPrcb->CacheProcessorSet[2].Size > (unsigned __int16)v35 )
        {
          CurrentPrcb->CacheProcessorSet[2].Count = v9 + v35;
LABEL_31:
          CurrentPrcb->CacheProcessorSet[2].Bitmap[v35] |= v36;
        }
LABEL_25:
        v28 = v49;
        goto LABEL_26;
      }
      v47 = 3;
      _RAX = 2147483654LL;
      v49 = 0;
      __asm { cpuid }
      v15 = _RDX;
      v48 = (unsigned __int8)_RDX;
      result = KiGetL2L3AssociativityAmd(BYTE1(_RDX) >> 4);
      LOBYTE(v16) = result;
      v17 = v15 >> 18 << 19;
      if ( !v17 )
        return result;
      v18 = CurrentPrcb->Group;
      v19 = CurrentPrcb->GroupSetMember;
      if ( CurrentPrcb->CacheProcessorSet[3].Count > (unsigned __int16)v18 )
        goto LABEL_10;
      if ( CurrentPrcb->CacheProcessorSet[3].Size > (unsigned __int16)v18 )
        break;
LABEL_11:
      if ( CurrentPrcb->CpuType > 21 )
        goto LABEL_25;
      v20 = 0LL;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        while ( 1 )
        {
          v21 = KiProcessorBlock[v20];
          if ( !(unsigned int)KeCheckProcessorAffinityEx(&CurrentPrcb->PackageProcessorSet.Count, v20) )
            goto LABEL_23;
          KeGetProcessorNode(v21);
          ProcessorNode = KeGetProcessorNode((__int64)CurrentPrcb);
          if ( ProcessorNode != v23 )
            goto LABEL_23;
          v24 = *(unsigned __int8 *)(v21 + 208);
          v25 = *(_QWORD *)(v21 + 200);
          if ( CurrentPrcb->CacheProcessorSet[3].Count <= (unsigned __int16)v24 )
          {
            if ( CurrentPrcb->CacheProcessorSet[3].Size <= (unsigned __int16)v24 )
              goto LABEL_19;
            CurrentPrcb->CacheProcessorSet[3].Count = v24 + 1;
          }
          CurrentPrcb->CacheProcessorSet[3].Bitmap[v24] |= v25;
LABEL_19:
          v26 = CurrentPrcb->Group;
          v27 = CurrentPrcb->GroupSetMember;
          if ( *(_WORD *)(v21 + 45592) > (unsigned __int16)v26 )
            goto LABEL_22;
          if ( *(_WORD *)(v21 + 45594) > (unsigned __int16)v26 )
          {
            *(_WORD *)(v21 + 45592) = v26 + 1;
LABEL_22:
            *(_QWORD *)(v21 + 8 * v26 + 45600) |= v27;
          }
LABEL_23:
          v20 = (unsigned int)(v20 + 1);
          if ( (unsigned int)v20 >= (unsigned int)KeNumberProcessors_0 )
          {
            v7 = v50;
            v9 = 1;
            Cache = v46;
            goto LABEL_25;
          }
        }
      }
      v28 = 0;
LABEL_26:
      Cache->Type = v28;
      Cache->Level = v47;
      Cache->LineSize = v48;
      Cache->Associativity = v16;
      Cache->Size = v17;
      ++Cache;
      CurrentPrcb->CacheCount += v9;
      v46 = Cache;
      result = v9;
      v7 += v9;
      v50 = v7;
      if ( v7 >= 4 )
        return result;
    }
    CurrentPrcb->CacheProcessorSet[3].Count = v9 + v18;
LABEL_10:
    CurrentPrcb->CacheProcessorSet[3].Bitmap[v18] |= v19;
    goto LABEL_11;
  }
  return KiSetStandardizedCacheInformation(CurrentPrcb, 2147483677LL);
}
