/*
 * XREFs of FsRtlpOplockEnqueueRH @ 0x14030C928
 * Callers:
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F49E4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpRequestShareableOplock @ 0x140514FAC (FsRtlpRequestShareableOplock.c)
 * Callees:
 *     FsRtlpOplockSetPrivateFoExt @ 0x14030C978 (FsRtlpOplockSetPrivateFoExt.c)
 *     FsRtlpOplockDequeueRH @ 0x14030CAB8 (FsRtlpOplockDequeueRH.c)
 */

__int64 __fastcall FsRtlpOplockEnqueueRH(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // r8d

  v2 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 )
    __fastfail(3u);
  *a2 = v2;
  a2[1] = a1;
  *(_QWORD *)(v2 + 8) = a2;
  *a1 = (__int64)a2;
  v4 = FsRtlpOplockSetPrivateFoExt(a2[3]);
  v6 = v4;
  if ( v4 < 0 )
    FsRtlpOplockDequeueRH(a2, v5, (unsigned int)v4);
  return v6;
}
