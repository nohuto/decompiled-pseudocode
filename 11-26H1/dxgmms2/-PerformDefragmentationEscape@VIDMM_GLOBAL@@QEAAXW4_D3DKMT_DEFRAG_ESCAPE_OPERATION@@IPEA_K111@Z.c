/*
 * XREFs of ?PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z @ 0x1400A1DBC
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z @ 0x14009DE94 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@_N@Z.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E499C (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PerformDefragmentationEscape(
        VIDMM_GLOBAL *this,
        enum _D3DKMT_DEFRAG_ESCAPE_OPERATION a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned int k; // r14d
  __int64 v7; // rdx
  unsigned int i; // r15d
  __int64 v9; // r13
  unsigned __int16 j; // r14
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  VIDMM_GLOBAL *v14; // rcx
  _QWORD v15[12]; // [rsp+20h] [rbp-60h] BYREF

  if ( a2 == D3DKMT_DEFRAG_ESCAPE_DEFRAG_UPWARD || a2 == D3DKMT_DEFRAG_ESCAPE_DEFRAG_DOWNWARD )
  {
    for ( i = 0; i < *((_DWORD *)this + 1738); ++i )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 5040) + 8LL * i);
      if ( (*(_BYTE *)(v9 + 556) & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(v9 + 64) + 16LL) & 4) != 0 )
      {
        for ( j = 0; ; ++j )
        {
          if ( (unsigned int)j >= *(_DWORD *)(v9 + 136) )
            goto LABEL_24;
          v11 = *(_DWORD *)(v9 + 96);
          if ( !_bittest(&v11, j) )
            break;
        }
        if ( j == 0xFFFF )
          continue;
        memset(v15, 0, 0x58uLL);
        LODWORD(v15[0]) = 126;
        HIDWORD(v15[0]) = i;
        LODWORD(v15[5]) = 0;
        LODWORD(v15[10]) = a2 != D3DKMT_DEFRAG_ESCAPE_DEFRAG_UPWARD;
        v12 = *(_QWORD *)(v9 + 1752);
        WORD2(v15[5]) = j;
        v15[8] = 0LL;
        v13 = *(_QWORD *)(v12 + 8LL * j);
        v14 = this;
        if ( (*(_BYTE *)(v13 + 66) & 1) == 0 )
        {
          v15[9] = *(_QWORD *)(v13 + 40);
LABEL_23:
          VIDMM_GLOBAL::QueueSystemCommandAndWait(v14, (struct _VIDMM_SYSTEM_COMMAND *)v15, 1);
          continue;
        }
        LODWORD(v15[7]) = 1;
        v15[9] = 0LL;
        if ( (int)VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v15, 1) >= 0 )
        {
          LODWORD(v15[7]) = 2;
          if ( (int)VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v15, 1) >= 0 )
          {
            LODWORD(v15[7]) = 3;
            v14 = this;
            goto LABEL_23;
          }
        }
      }
LABEL_24:
      ;
    }
  }
  else if ( (unsigned int)(a2 - 3) <= 1 )
  {
    for ( k = 0; k < *((_DWORD *)this + 1738); ++k )
    {
      v7 = *((_QWORD *)this + 3);
      if ( (*(_DWORD *)(352LL * k + *(_QWORD *)(v7 + 3032) + 16) & 4) != 0 && (*(_DWORD *)(v7 + 2500) & 8) != 0 )
      {
        memset(v15, 0, 0x58uLL);
        LODWORD(v15[0]) = 126;
        HIDWORD(v15[0]) = k;
        LODWORD(v15[5]) = (a2 != D3DKMT_DEFRAG_ESCAPE_DEFRAG_PASS) + 3;
        VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v15, 1);
      }
    }
  }
}
