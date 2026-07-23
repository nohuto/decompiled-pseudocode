/*
 * XREFs of BapdpQueryData @ 0x140CE939C
 * Callers:
 *     BapdpProcessEtwEvents @ 0x1406CEABC (BapdpProcessEtwEvents.c)
 *     BapdpProcessSpacesBootInformation @ 0x1406CEC00 (BapdpProcessSpacesBootInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140CE8894 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessBootMetadata @ 0x140CE8960 (BapdpProcessBootMetadata.c)
 *     BapdpProcessEDrvHintInfo @ 0x140CE8A9C (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140CE8B6C (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessHSTIResults @ 0x140CE8C38 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140CE8D0C (BapdpProcessResumeInformation.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140CE8DD8 (BapdpProcessVsmKeyBlobs.c)
 *     BapdpProcessWmdResults @ 0x140CE91D8 (BapdpProcessWmdResults.c)
 *     BapdpRegisterWbclData @ 0x140CE9BB4 (BapdpRegisterWbclData.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall BapdpQueryData(
        __int64 a1,
        struct _LIST_ENTRY **a2,
        int a3,
        void *a4,
        unsigned int *a5,
        struct _LIST_ENTRY *a6)
{
  struct _KTHREAD *Flink; // r8
  int i; // edx
  struct _LIST_ENTRY *Blink; // rbx
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  unsigned int Flink_high; // eax

  if ( !a5 || !a2 || *a5 && !a4 )
    return 3221225485LL;
  Flink = (struct _KTHREAD *)stru_140E62450.Header.WaitListHead.Flink;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      if ( Flink == (struct _KTHREAD *)&stru_140E62450.Header.WaitListHead )
        return 3221226021LL;
      Blink = Flink->Header.WaitListHead.Blink;
      Flink = *(struct _KTHREAD **)&Flink->Header.Lock;
      v11 = (unsigned int)Blink[2].Flink;
      if ( v11 && v11 <= 2 )
      {
        v12 = (char *)*a2 - (char *)Blink[1].Flink;
        if ( *a2 == Blink[1].Flink )
          v12 = (char *)a2[1] - (char *)Blink[1].Blink;
        if ( !v12 )
          break;
      }
    }
    if ( a3 == i )
      break;
  }
  Flink_high = HIDWORD(Blink[2].Flink);
  if ( *a5 >= Flink_high )
  {
    memmove(a4, (char *)Blink + LODWORD(Blink[2].Blink), HIDWORD(Blink[2].Flink));
    if ( a6 )
      *a6 = *Blink;
    return 0LL;
  }
  else
  {
    *a5 = Flink_high;
    return 3221225507LL;
  }
}
