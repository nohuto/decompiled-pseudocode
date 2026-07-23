/*
 * XREFs of PopPowerRequestEvaluatePendingRequestStatus @ 0x14049FD78
 * Callers:
 *     PopPowerRequestRevokeRequests @ 0x14049F650 (PopPowerRequestRevokeRequests.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14049F870 (PopApplyLegacyPowerRequestFlags.c)
 *     PopPowerRequestReferenceAcquire @ 0x14049F9A0 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestReferenceRelease @ 0x14049FB30 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestHandleRequestOverrideQueryResponse @ 0x14049FC60 (PopPowerRequestHandleRequestOverrideQueryResponse.c)
 *     PopPowerRequestHandleClose @ 0x14049FCF8 (PopPowerRequestHandleClose.c)
 *     PopPowerRequestUnrevokeRequests @ 0x1404E8960 (PopPowerRequestUnrevokeRequests.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 */

int __fastcall PopPowerRequestEvaluatePendingRequestStatus(_BYTE *Object, void **a2)
{
  void **p_KernelShadowStackInitial; // rbp
  int v4; // esi
  unsigned int v5; // r14d
  char *v6; // rdi
  void ***v7; // rax
  int v8; // r8d
  int v9; // ecx
  unsigned int v10; // ecx
  _DWORD *v11; // rdx
  int v12; // ecx
  __int64 v13; // rdx
  void ****v14; // rcx
  void ***v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rdx

  p_KernelShadowStackInitial = &stru_140F12EA0.KernelShadowStackInitial;
  if ( a2 )
    p_KernelShadowStackInitial = a2;
  v4 = 0;
  if ( !Object[32] )
  {
    v10 = 0;
    v11 = Object + 40;
    do
    {
      if ( *v11 )
        v4 |= 1 << v10;
      ++v10;
      ++v11;
    }
    while ( v10 < 6 );
  }
  if ( !Object[152] )
    v4 &= ~LODWORD(stru_140F12EA0.IoSelfBoostsEntry.Next) & ~(*((_DWORD *)Object + 6) | *((_DWORD *)Object + 7));
  v5 = 0;
  v6 = (char *)&unk_140E019F0;
  do
  {
    LODWORD(v7) = *((_DWORD *)Object + 20) & (1 << v5);
    v8 = v4 & (1 << v5);
    if ( (_DWORD)v7 != v8 )
    {
      v12 = *(_DWORD *)v6;
      if ( ((1 << v5) & *((_DWORD *)Object + 21)) == v8 )
      {
        LODWORD(v7) = v12 - 1;
        *(_DWORD *)v6 = v12 - 1;
        if ( v12 == 1 )
          LODWORD(v7) = KeSetEvent((PRKEVENT)(v6 + 8), 0, 0);
      }
      else
      {
        *(_DWORD *)v6 = v12 + 1;
        LODWORD(v7) = KeResetEvent((PRKEVENT)(v6 + 8));
      }
    }
    ++v5;
    v6 += 48;
  }
  while ( v5 < 6 );
  v9 = *((_DWORD *)Object + 22);
  *((_DWORD *)Object + 20) = v4;
  if ( v4 == *((_DWORD *)Object + 21) )
  {
    if ( v9 != 1 )
      return (int)v7;
    v16 = Object + 64;
    v17 = *((_QWORD *)Object + 8);
    if ( *(_BYTE **)(v17 + 8) == Object + 64 )
    {
      v18 = (_QWORD *)*((_QWORD *)Object + 9);
      if ( (_QWORD *)*v18 == v16 )
      {
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        *((_QWORD *)Object + 9) = Object + 64;
        *v16 = v16;
        *((_DWORD *)Object + 22) = 0;
        LODWORD(v7) = ObfDereferenceObjectWithTag(Object, 0x72506F50u);
        return (int)v7;
      }
    }
LABEL_24:
    __fastfail(3u);
  }
  if ( v9 )
  {
    if ( v9 != 1 )
      return (int)v7;
  }
  else
  {
    ObfReferenceObjectWithTag(Object, 0x72506F50u);
  }
  v7 = (void ***)(Object + 64);
  v13 = *((_QWORD *)Object + 8);
  if ( *(_BYTE **)(v13 + 8) != Object + 64 )
    goto LABEL_24;
  v14 = (void ****)*((_QWORD *)Object + 9);
  if ( *v14 != v7 )
    goto LABEL_24;
  *v14 = (void ***)v13;
  *(_QWORD *)(v13 + 8) = v14;
  v15 = (void ***)p_KernelShadowStackInitial[1];
  if ( *v15 != p_KernelShadowStackInitial )
    goto LABEL_24;
  *v7 = p_KernelShadowStackInitial;
  *((_QWORD *)Object + 9) = v15;
  *v15 = (void **)v7;
  p_KernelShadowStackInitial[1] = v7;
  *((_DWORD *)Object + 22) = 1;
  return (int)v7;
}
