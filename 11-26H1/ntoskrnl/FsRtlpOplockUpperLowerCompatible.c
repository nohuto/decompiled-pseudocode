/*
 * XREFs of FsRtlpOplockUpperLowerCompatible @ 0x140A9E410
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x1403F8BE4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140514FAC (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1405B8984 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B8BC0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlCheckUpperOplock @ 0x140791080 (FsRtlCheckUpperOplock.c)
 *     FsRtlUpperOplockFsctrl @ 0x140791580 (FsRtlUpperOplockFsctrl.c)
 * Callees:
 *     <none>
 */

char __fastcall FsRtlpOplockUpperLowerCompatible(int a1, int a2)
{
  char result; // al
  int v3; // ecx

  result = 1;
  v3 = a1 & 0x1701E;
  if ( !v3 || v3 == 0x10000 )
    return result;
  switch ( a2 )
  {
    case 0:
      return 0;
    case 4096:
      goto LABEL_14;
    case 12288:
      if ( v3 == 12288 )
        return result;
LABEL_14:
      if ( v3 != 4096 && v3 != 16 )
        return 0;
      return result;
  }
  if ( a2 == 20480 && (v3 == 28672 || v3 == 12288 || v3 == 4) )
    return 0;
  return result;
}
