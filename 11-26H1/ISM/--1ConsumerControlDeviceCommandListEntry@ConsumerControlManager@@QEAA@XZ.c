/*
 * XREFs of ??1ConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAA@XZ @ 0x1800E4FF4
 * Callers:
 *     ??_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z @ 0x1800E5128 (--_GConsumerControlDeviceCommandListEntry@ConsumerControlManager@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180021CF0 (-Release@InputContext@@UEAAKXZ.c)
 *     ?Release@ConsumerControlManager@@UEAAKXZ @ 0x1800E5790 (-Release@ConsumerControlManager@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ConsumerControlManager::ConsumerControlDeviceCommandListEntry::~ConsumerControlDeviceCommandListEntry(
        ConsumerControlManager::ConsumerControlDeviceCommandListEntry *this)
{
  InputContext *v2; // rcx
  ULONG_PTR v3; // rcx

  v2 = (InputContext *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0LL;
    InputContext::Release(v2);
  }
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    *((_QWORD *)this + 3) = 0LL;
    ConsumerControlManager::Release(v3);
  }
}
