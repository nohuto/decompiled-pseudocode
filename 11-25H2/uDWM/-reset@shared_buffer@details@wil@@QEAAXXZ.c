/*
 * XREFs of ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18004D058
 * Callers:
 *     ??1?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004C180 (--1-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBas.c)
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18004C968 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@V.c)
 *     ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180097960 (--1-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180097960.c)
 *     ??1ResultException@wil@@UEAA@XZ @ 0x18009D29C (--1ResultException@wil@@UEAA@XZ.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18009EFB8 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x18009F934 (-assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z.c)
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x18009FDD0 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 *     ??_GStoredFailureInfo@wil@@QEAAPEAXI@Z @ 0x1800D57AC (--_GStoredFailureInfo@wil@@QEAAPEAXI@Z.c)
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@U12345@@details@tip2@@@tip2@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1800D60E0 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Pri.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::shared_buffer::reset(volatile signed __int32 **this)
{
  volatile signed __int32 *v2; // rcx
  volatile signed __int32 *v3; // rbx
  HANDLE ProcessHeap; // rax

  v2 = *this;
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *this;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, (LPVOID)v3);
    }
    *this = 0LL;
    this[1] = 0LL;
  }
}
