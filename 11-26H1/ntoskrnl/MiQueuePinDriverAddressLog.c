/*
 * XREFs of MiQueuePinDriverAddressLog @ 0x14024E374
 * Callers:
 *     MmBuildMdlForNonPagedPool @ 0x14024DE40 (MmBuildMdlForNonPagedPool.c)
 *     MiGetVirtualAddressState @ 0x14024EBD4 (MiGetVirtualAddressState.c)
 *     MiGetContainingPageTable @ 0x1402BB9B0 (MiGetContainingPageTable.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     RtlInterlockedSetClearRun @ 0x140359A90 (RtlInterlockedSetClearRun.c)
 *     RtlFindClearBits @ 0x14035A520 (RtlFindClearBits.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MiQueuePinDriverAddressLog(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v7; // rcx
  __int64 v8; // rbp
  ULONG ClearBits; // eax
  int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  int v13; // edx
  int v14; // ecx
  unsigned __int64 v15; // rsi
  char *v16; // rdx
  __int64 v17; // [rsp+68h] [rbp+20h]

  v3 = a2;
  v4 = a3;
  if ( !PoAllProcIntrDisabled && ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) == 0 && !KdEnteredDebugger )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 2u )
    {
      v7 = KeGetCurrentIrql();
      if ( (_BYTE)v7 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(v7, a2);
      }
    }
    LODWORD(v8) = -1;
    if ( (word_140EF8F72 & 1) != 0 )
    {
      while ( 1 )
      {
        ClearBits = RtlFindClearBits(&BitMapHeader, 1u, v8 + 1);
        v8 = ClearBits;
        if ( ClearBits == -1 )
          break;
        if ( (unsigned int)RtlInterlockedSetClearRun(&BitMapHeader, ClearBits, 1LL) )
        {
          if ( (unsigned int)v8 >= 0x800 )
            break;
          HIDWORD(v17) = HIDWORD(a1);
          v10 = a1 & 0xFFFFF000 | (2 * (v4 & 1)) | 1;
          if ( (((unsigned __int64)MiFlags >> 4) & 3) != 0 )
          {
            if ( (((unsigned __int64)MiFlags >> 4) & 3) == 1 )
              v11 = v10 & 0xFFFFFCFF | 0x100;
            else
              v11 = v10 & 0xFFFFFCFF | 0x200;
          }
          else
          {
            v11 = v10 & 0xFFFFFCFF;
          }
          if ( CurrentIrql >= 2u )
          {
            if ( CurrentIrql == 2 )
              v12 = v11 & 0xFFFFFF3F | 0x40;
            else
              v12 = v11 & 0xFFFFFF3F | 0x80;
          }
          else
          {
            v12 = v11 & 0xFFFFFF3F;
          }
          if ( (_BYTE)KdDebuggerEnabled )
          {
            if ( (_BYTE)KdDebuggerNotPresent )
              v12 = v12 & 0xFFFFF3FF | 0x400;
            else
              v12 = v12 & 0xFFFFF3FF | 0x800;
          }
          if ( (v3 & 1) != 0 )
          {
            v13 = v12 | 8;
            if ( (v3 & 0x800) == 0 )
              v13 = v12;
            LODWORD(v17) = v13;
            v14 = v13 | 0x10;
            if ( v3 < 0 )
              v14 = v13;
            else
              LODWORD(v17) = v13 | 0x10;
            v15 = ((unsigned __int64)v3 >> 12) & 0xFFFFFFFFFFLL;
            if ( (MiFlags & 0x80000000) != 0
              && v15 <= qword_140E2D920
              && ((*(_QWORD *)(48 * v15 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0
              && (unsigned __int16)*(_DWORD *)(48 * v15 - 0x21FFFFFFFFE0LL) > 1u )
            {
              LODWORD(v17) = v14 | 0x20;
            }
          }
          else
          {
            LODWORD(v17) = v12 | 4;
          }
          MiPinDriverAddressLog[v8] = v17;
          goto LABEL_34;
        }
      }
    }
    v16 = (char *)&unk_140EF8F18;
    if ( !(_BYTE)KdDebuggerEnabled )
      v16 = (char *)&unk_140EF8F10;
    _InterlockedAdd((volatile signed __int32 *)&v16[32 * v4 + (CurrentIrql > 2u ? 0x10 : 0)], 1u);
LABEL_34:
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
  }
}
