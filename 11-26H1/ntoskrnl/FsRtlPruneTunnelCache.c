/*
 * XREFs of FsRtlPruneTunnelCache @ 0x1409DE700
 * Callers:
 *     FsRtlFindInTunnelCacheEx @ 0x1409DE060 (FsRtlFindInTunnelCacheEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1409DE220 (FsRtlAddToTunnelCacheEx.c)
 * Callees:
 *     RtlDelete @ 0x14030A0F0 (RtlDelete.c)
 *     FsRtlFreeTunnelNode @ 0x1403C0510 (FsRtlFreeTunnelNode.c)
 *     RtlDeleteNoSplay @ 0x1403C0570 (RtlDeleteNoSplay.c)
 */

__int64 __fastcall FsRtlPruneTunnelCache(__int64 a1, __int64 *a2)
{
  __int64 *v3; // r15
  char v4; // r12
  __int64 v5; // rdi
  _WORD *v6; // rsi
  __int64 v7; // rbx
  char **i; // rcx
  char *v9; // r14
  __int64 v10; // rax
  __int64 result; // rax
  _RTL_SPLAY_LINKS *v12; // rcx
  __int64 v13; // rcx
  char **v14; // rax
  char *v15; // rbx
  _RTL_SPLAY_LINKS *v16; // rdi
  __int64 v17; // rcx
  char **v18; // rax

  v3 = a2;
  v4 = 1;
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = (_WORD *)(a1 + 80);
  v7 = MEMORY[0xFFFFF78000000014] - HIDWORD(ExpPlatformBinaryLock.QuantumTarget);
  for ( i = (char **)(a1 + 64); ; i = (char **)(a1 + 64) )
  {
    v9 = *i;
    if ( *i == (char *)i )
      break;
    v10 = *((_QWORD *)v9 + 2);
    if ( v10 >= v7 && v10 <= v5 )
      break;
    v12 = (_RTL_SPLAY_LINKS *)(v9 - 24);
    if ( v4 )
    {
      *(_QWORD *)(a1 + 56) = RtlDelete(v12);
      v4 = 0;
    }
    else
    {
      RtlDeleteNoSplay(v12, (PRTL_SPLAY_LINKS *)(a1 + 56));
    }
    v13 = *(_QWORD *)v9;
    if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 )
      goto LABEL_18;
    v14 = (char **)*((_QWORD *)v9 + 1);
    if ( *v14 != v9 )
      goto LABEL_18;
    v3 = a2;
    *v14 = (char *)v13;
    *(_QWORD *)(v13 + 8) = v14;
    --*(_WORD *)(a1 + 80);
    FsRtlFreeTunnelNode(v9 - 24, a2);
  }
  result = (unsigned __int16)*v6;
  if ( (unsigned int)result > TunnelMaxEntries )
  {
    while ( 1 )
    {
      v15 = *i;
      v16 = (_RTL_SPLAY_LINKS *)(*i - 24);
      if ( v4 )
      {
        *(_QWORD *)(a1 + 56) = RtlDelete(v16);
        v4 = 0;
      }
      else
      {
        RtlDeleteNoSplay(v16, (PRTL_SPLAY_LINKS *)(a1 + 56));
      }
      v17 = *(_QWORD *)v15;
      if ( *(char **)(*(_QWORD *)v15 + 8LL) != v15 )
        break;
      v18 = (char **)*((_QWORD *)v15 + 1);
      if ( *v18 != v15 )
        break;
      *v18 = (char *)v17;
      *(_QWORD *)(v17 + 8) = v18;
      --*v6;
      FsRtlFreeTunnelNode((char *)v16, v3);
      result = (unsigned __int16)*v6;
      if ( (unsigned int)result <= TunnelMaxEntries )
        return result;
      i = (char **)(a1 + 64);
    }
LABEL_18:
    __fastfail(3u);
  }
  return result;
}
