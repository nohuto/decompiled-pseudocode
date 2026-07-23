/*
 * XREFs of PspSelectNodeForProcessNoRestrictions @ 0x1407F89BC
 * Callers:
 *     PspSelectNodeForProcess @ 0x1407F8950 (PspSelectNodeForProcess.c)
 * Callees:
 *     RtlRandomEx @ 0x140200BE0 (RtlRandomEx.c)
 *     KeIsEmptyGroupMask @ 0x140404550 (KeIsEmptyGroupMask.c)
 */

__int64 PspSelectNodeForProcessNoRestrictions()
{
  unsigned int v0; // ebx
  ULONG v1; // edx
  unsigned __int16 v2; // di
  __int64 v3; // rsi
  unsigned int i; // ebx
  unsigned __int16 v5; // cx
  __int64 v6; // rbp
  int v7; // eax
  int v8; // eax
  ULONG Seed; // [rsp+50h] [rbp+8h] BYREF

  if ( PspIdealNodeRandomized )
  {
    v0 = (unsigned __int16)KeNumberNodes;
    v1 = RtlRandomEx(&Seed) % v0;
  }
  else
  {
    v1 = _InterlockedIncrement((_DWORD *)&ExpPlatformBinaryLock.SwapListEntry + 2)
       % (unsigned int)(unsigned __int16)KeNumberNodes;
  }
  v2 = v1;
  v3 = 0LL;
  for ( i = 0; ; ++i )
  {
    v5 = KeNumberNodes;
    if ( i >= (unsigned __int16)KeNumberNodes )
      break;
    v6 = KeNodeBlock[v2];
    LOBYTE(v7) = KeIsEmptyGroupMask((unsigned __int64 *)(v6 + 16));
    if ( !v7 && (*(_BYTE *)(v6 + 10) & 1) == 0 )
    {
LABEL_15:
      v3 = v6;
      goto LABEL_16;
    }
    if ( ++v2 >= (unsigned __int16)KeNumberNodes )
      v2 = 0;
  }
  for ( i = 0; i < v5; ++i )
  {
    v6 = KeNodeBlock[v2];
    LOBYTE(v8) = KeIsEmptyGroupMask((unsigned __int64 *)(v6 + 16));
    if ( !v8 )
      goto LABEL_15;
    v5 = KeNumberNodes;
    if ( ++v2 >= (unsigned __int16)KeNumberNodes )
      v2 = 0;
  }
LABEL_16:
  if ( !PspIdealNodeRandomized && i )
    _InterlockedAdd((_DWORD *)&ExpPlatformBinaryLock.SwapListEntry + 2, i);
  return v3;
}
