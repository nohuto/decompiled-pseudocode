/*
 * XREFs of HampIpcChannelAddCallbackUnsafe @ 0x180009AD0
 * Callers:
 *     HamCreateActivityForProcess @ 0x180009610 (HamCreateActivityForProcess.c)
 *     HamCreateActivityEx @ 0x180009830 (HamCreateActivityEx.c)
 *     HamCreateExtendedExecution @ 0x18000C7C0 (HamCreateExtendedExecution.c)
 *     HamAssociateActivityContext @ 0x18001A4B0 (HamAssociateActivityContext.c)
 * Callees:
 *     HampIpcChannelObjectCompareObjectsForTree @ 0x180009C20 (HampIpcChannelObjectCompareObjectsForTree.c)
 */

__int64 __fastcall HampIpcChannelAddCallbackUnsafe(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rbx
  int v6; // edi
  int v7; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  int v10; // edi
  unsigned __int64 v11; // rax

  v4 = *(_QWORD *)(a1 + 40) + 24LL;
  v5 = *(_QWORD *)v4;
  v6 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 32LL) & 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 32LL) & 1) == 0 )
  {
LABEL_2:
    if ( !v5 )
      goto LABEL_8;
    while ( 1 )
    {
      v7 = HampIpcChannelObjectCompareObjectsForTree(a1, v5);
      if ( v7 < 0 )
      {
        v8 = *(_QWORD *)v5;
        if ( v6 && v8 )
          goto LABEL_23;
      }
      else
      {
        if ( v7 <= 0 )
        {
          __int2c();
          goto LABEL_8;
        }
        v8 = *(_QWORD *)(v5 + 8);
        if ( v6 && v8 )
        {
LABEL_23:
          v5 ^= v8;
          goto LABEL_7;
        }
      }
      v5 = v8;
LABEL_7:
      if ( !v5 )
        goto LABEL_8;
    }
  }
  if ( v5 )
  {
    v5 ^= v4;
    goto LABEL_2;
  }
LABEL_8:
  v9 = *(_QWORD *)v4;
  v10 = *(_BYTE *)(v4 + 8) & 1;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
  {
    if ( !v9 )
    {
LABEL_32:
      LOBYTE(a3) = 0;
      return RtlRbInsertNodeEx(v4, v9, a3, a1);
    }
    v9 ^= v4;
  }
  LOBYTE(a3) = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      if ( (int)HampIpcChannelObjectCompareObjectsForTree(a1, v9) < 0 )
      {
        v11 = *(_QWORD *)v9;
        if ( v10 )
        {
          if ( !v11 )
            goto LABEL_32;
          v11 ^= v9;
        }
        if ( !v11 )
          goto LABEL_32;
      }
      else
      {
        v11 = *(_QWORD *)(v9 + 8);
        if ( v10 )
        {
          if ( !v11 )
          {
LABEL_18:
            LOBYTE(a3) = 1;
            return RtlRbInsertNodeEx(v4, v9, a3, a1);
          }
          v11 ^= v9;
        }
        if ( !v11 )
          goto LABEL_18;
      }
      v9 = v11;
    }
  }
  return RtlRbInsertNodeEx(v4, v9, a3, a1);
}
