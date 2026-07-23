/*
 * XREFs of HalpFindDevice @ 0x140C18214
 * Callers:
 *     HalpKdReleaseDebuggingDevice @ 0x140C18760 (HalpKdReleaseDebuggingDevice.c)
 *     HalpKdSetupDebuggingDevice @ 0x140C187C0 (HalpKdSetupDebuggingDevice.c)
 *     HalpRegisterDeviceInUse @ 0x140C189D4 (HalpRegisterDeviceInUse.c)
 * Callees:
 *     wcsncmp @ 0x14053A620 (wcsncmp.c)
 */

struct _KTHREAD *__fastcall HalpFindDevice(__int64 a1)
{
  struct _KTHREAD *v1; // rsi
  __int64 v2; // rbx
  struct _KTHREAD *v3; // r14
  char v4; // bp
  struct _LIST_ENTRY *Blink; // rcx
  int v7; // eax
  bool v8; // zf
  unsigned int v9; // eax
  const wchar_t *Flink; // rdx

  v1 = *(struct _KTHREAD **)&IommuInterfaceStateChangeCallbackPushLock.ApcStateFill[40];
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  while ( v1 != (struct _KTHREAD *)&IommuInterfaceStateChangeCallbackPushLock.ApcStateFill[40] )
  {
    Blink = v1->Header.WaitListHead.Blink;
    v3 = v1;
    v7 = *(_DWORD *)(a1 + 220);
    if ( HIDWORD(Blink[13].Blink) != v7 )
      goto LABEL_13;
    if ( v7 )
    {
      v9 = *(_DWORD *)(a1 + 232);
      if ( LODWORD(Blink[14].Blink) != v9 )
        goto LABEL_13;
      if ( !*(_QWORD *)(a1 + 224) )
        goto LABEL_13;
      Flink = (const wchar_t *)Blink[14].Flink;
      if ( !Flink )
        goto LABEL_13;
      v8 = wcsncmp(*(const wchar_t **)(a1 + 224), Flink, v9) == 0;
    }
    else
    {
      if ( LODWORD(Blink->Flink) != *(_DWORD *)a1 || HIDWORD(Blink->Flink) != *(_DWORD *)(a1 + 4) )
        goto LABEL_13;
      v8 = LOWORD(Blink->Blink) == *(_WORD *)(a1 + 8);
    }
    if ( v8 )
    {
      v4 = 1;
      break;
    }
LABEL_13:
    v1 = *(struct _KTHREAD **)&v1->Header.Lock;
  }
  if ( v4 == 1 )
    return v3;
  return (struct _KTHREAD *)v2;
}
