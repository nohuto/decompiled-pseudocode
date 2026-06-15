/*
 * XREFs of ??1?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x1800053EC
 * Callers:
 *     _AudioStateMonitorManager::RegisterAudioStateMonitor_::_1_::dtor$1 @ 0x18004BBA2 (_AudioStateMonitorManager--RegisterAudioStateMonitor_--_1_--dtor$1.c)
 * Callees:
 *     ??1AudioStateMonitor@@QEAA@XZ @ 0x1800059E8 (--1AudioStateMonitor@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wistd::unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>::~unique_ptr<AudioStateMonitor,wistd::default_delete<AudioStateMonitor>>(
        AudioStateMonitor **a1)
{
  AudioStateMonitor *v1; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    AudioStateMonitor::~AudioStateMonitor(v1);
    operator delete(v1, (const struct std::nothrow_t *)0x20);
  }
}
