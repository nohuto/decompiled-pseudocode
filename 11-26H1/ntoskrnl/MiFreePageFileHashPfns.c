/*
 * XREFs of MiFreePageFileHashPfns @ 0x1404AC10C
 * Callers:
 *     MiScanPagefiles @ 0x1402A72EC (MiScanPagefiles.c)
 *     MiDeletePagefile @ 0x140871A84 (MiDeletePagefile.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiFreePageFileHashPfn @ 0x1404AC268 (MiFreePageFileHashPfn.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall MiFreePageFileHashPfns(_SLIST_HEADER *a1)
{
  __int64 Alignment; // r15
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rbp
  int v9; // [rsp+50h] [rbp+8h] BYREF

  Alignment = a1[14].Alignment;
  v2 = 0LL;
  result = (__int64)RtlpInterlockedFlushSList(a1 + 3);
  v6 = result;
  if ( result )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = CurrentIrql;
LABEL_7:
      LOBYTE(v4) = 2;
      KiRaiseIrqlProcessIrqlFlags(v5, v4);
      goto LABEL_8;
    }
    while ( 1 )
    {
LABEL_8:
      while ( 1 )
      {
        v8 = *(_QWORD *)v6;
        v9 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v9);
          while ( *(__int64 *)(v6 + 24) < 0 );
        }
        MiFreePageFileHashPfn((v6 + 0x220000000000LL) / 48);
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        ++v2;
        v6 = v8;
        if ( (v2 & 0x3F) == 0 )
          break;
        if ( !v8 )
          goto LABEL_12;
      }
      if ( !v8 )
        break;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v5 = KeGetCurrentIrql();
      if ( (_BYTE)v5 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        goto LABEL_7;
    }
LABEL_12:
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    if ( v2 )
    {
      result = MiReleaseNonPagedResources(Alignment, v2);
      _InterlockedAdd64(&qword_140E37A28, -v2);
    }
  }
  return result;
}
