/*
 * XREFs of HandleInformation @ 0x140132940
 * Callers:
 *     <none>
 * Callees:
 *     sub_140131CA0 @ 0x140131CA0 (sub_140131CA0.c)
 *     sub_140131D8C @ 0x140131D8C (sub_140131D8C.c)
 *     sub_140131F80 @ 0x140131F80 (sub_140131F80.c)
 *     sub_140132010 @ 0x140132010 (sub_140132010.c)
 */

void __fastcall HandleInformation(char *StartContext)
{
  char v1; // di
  int Flink; // eax
  PLIST_ENTRY v4; // rax
  PLIST_ENTRY v5; // rbx
  KIRQL v6; // bl

  v1 = 0;
  if ( StartContext )
  {
    if ( *((_QWORD *)StartContext + 2) )
    {
      KeWaitForSingleObject(StartContext + 88, Executive, 0, 0, 0LL);
      while ( (*((_DWORD *)StartContext + 3) & 4) == 0 )
      {
        while ( 1 )
        {
          v4 = ExInterlockedRemoveHeadList((PLIST_ENTRY)StartContext + 9, (PKSPIN_LOCK)StartContext + 20);
          v5 = v4;
          if ( !v4 )
            break;
          Flink = (int)v4[1].Flink;
          switch ( LODWORD(v5[1].Flink) )
          {
            case 1:
            case 2:
              sub_140131D8C((__int64)StartContext, Flink);
              v1 = 1;
              break;
            case 3:
            case 4:
            case 5:
              sub_140131CA0((__int64)StartContext, Flink);
              break;
            case 6:
              sub_140131F80((__int64)StartContext, *((_DWORD *)StartContext + 2));
              break;
          }
          if ( (BYTE4(v5[1].Flink) & 1) != 0 )
            ExFreePoolWithTag(v5, 0x4D4C6152u);
          else
            ExInterlockedInsertTailList((PLIST_ENTRY)(StartContext + 120), v5, (PKSPIN_LOCK)StartContext + 17);
        }
        sub_140132010((__int64)StartContext);
        if ( v1 )
        {
          v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)StartContext + 14);
          *((_QWORD *)StartContext + 5) = KeQueryUnbiasedInterruptTime();
          *((_QWORD *)StartContext + 6) = KeQueryUnbiasedInterruptTime();
          KeReleaseSpinLock((PKSPIN_LOCK)StartContext + 14, v6);
          _InterlockedExchange64((volatile __int64 *)StartContext + 3, 0LL);
          _InterlockedExchange64((volatile __int64 *)StartContext + 4, 0LL);
          _interlockedbittestandreset((volatile signed __int32 *)StartContext + 3, 1u);
          v1 = 0;
        }
        KeWaitForSingleObject(StartContext + 88, Executive, 0, 0, 0LL);
      }
    }
  }
  PsTerminateSystemThread(0);
}
