/*
 * XREFs of IopStoreArcInformation @ 0x140CC4068
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x140475C38 (RtlStringCbCopyA.c)
 *     _strnicmp @ 0x140538790 (_strnicmp.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopStoreArcInformation(__int64 a1)
{
  __int64 **v1; // r14
  int Blink; // r15d
  unsigned int v3; // ebx
  __int64 *i; // rsi
  PVOID *Pool2; // rdi
  __int64 v6; // rax
  size_t v7; // rbp
  char *v8; // rax
  char *v9; // r10
  _QWORD *RelativeTimerBias; // rax
  __int64 v11; // rax
  void **j; // rax
  int v13; // edx
  void **k; // rcx
  void **m; // rcx

  v1 = *(__int64 ***)(a1 + 232);
  Blink = (int)ExpSysDbgLock.ThreadListEntry.Blink;
  v3 = 0;
  PspSiloMonitorLock.RelativeTimerBias = (unsigned __int64)&PspSiloMonitorLock.Teb;
  PspSiloMonitorLock.Teb = &PspSiloMonitorLock.Teb;
  for ( i = *v1; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v1 )
    {
      for ( j = (void **)PspSiloMonitorLock.Teb; j != &PspSiloMonitorLock.Teb; j = (void **)*j )
      {
        if ( !*((_BYTE *)j + 36) && !*((_BYTE *)j + 72) )
        {
          v13 = *((_DWORD *)j + 8);
          for ( k = (void **)*j; k != &PspSiloMonitorLock.Teb; k = (void **)*k )
          {
            if ( !*((_BYTE *)k + 36) && !*((_BYTE *)k + 72) && v13 == *((_DWORD *)k + 8) )
            {
              *((_BYTE *)j + 72) = 1;
              *((_BYTE *)k + 72) = 1;
            }
          }
        }
      }
      if ( Blink == 1 )
      {
        for ( m = (void **)PspSiloMonitorLock.Teb; m != &PspSiloMonitorLock.Teb; m = (void **)*m )
        {
          if ( *((_BYTE *)m + 76) && *((_BYTE *)m + 72) )
            IopAmbiguousSystemDisk = 1;
        }
      }
      return v3;
    }
    Pool2 = (PVOID *)ExAllocatePool2(64LL, 0x50uLL, 0x20206F49u);
    if ( !Pool2 )
    {
      v3 = -1073741670;
      goto LABEL_15;
    }
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(i[3] + v6) );
    v7 = v6 + 1;
    v8 = (char *)ExAllocatePool2(64LL, v6 + 1, 0x344E6F49u);
    if ( !v8 )
      break;
    *(_OWORD *)Pool2 = *(_OWORD *)i;
    *((_OWORD *)Pool2 + 1) = *((_OWORD *)i + 1);
    *((_OWORD *)Pool2 + 2) = *((_OWORD *)i + 2);
    *((_OWORD *)Pool2 + 3) = *((_OWORD *)i + 3);
    RtlStringCbCopyA(v8, v7, (NTSTRSAFE_PCSTR)i[3]);
    Pool2[3] = v9;
    if ( Blink == 1 && v7 >= 9 && !strnicmp(&v9[v7 - 9], "rdisk(0)", 8uLL) )
      *((_BYTE *)Pool2 + 76) = 1;
    RelativeTimerBias = (_QWORD *)PspSiloMonitorLock.RelativeTimerBias;
    if ( *(struct _KTHREAD **)PspSiloMonitorLock.RelativeTimerBias != (struct _KTHREAD *)&PspSiloMonitorLock.Teb )
LABEL_20:
      __fastfail(3u);
    *Pool2 = &PspSiloMonitorLock.Teb;
    Pool2[1] = RelativeTimerBias;
    *RelativeTimerBias = Pool2;
    PspSiloMonitorLock.RelativeTimerBias = (unsigned __int64)Pool2;
  }
  v3 = -1073741670;
  while ( 1 )
  {
    ExFreePoolWithTag(Pool2, 0);
LABEL_15:
    Pool2 = (PVOID *)PspSiloMonitorLock.Teb;
    if ( PspSiloMonitorLock.Teb == &PspSiloMonitorLock.Teb )
      return v3;
    if ( *((struct _KTHREAD **)PspSiloMonitorLock.Teb + 1) != (struct _KTHREAD *)&PspSiloMonitorLock.Teb )
      goto LABEL_20;
    v11 = *(_QWORD *)PspSiloMonitorLock.Teb;
    if ( *(void **)(*(_QWORD *)PspSiloMonitorLock.Teb + 8LL) != PspSiloMonitorLock.Teb )
      goto LABEL_20;
    PspSiloMonitorLock.Teb = *(void **)PspSiloMonitorLock.Teb;
    *(_QWORD *)(v11 + 8) = &PspSiloMonitorLock.Teb;
    ExFreePoolWithTag(Pool2[3], 0);
  }
}
