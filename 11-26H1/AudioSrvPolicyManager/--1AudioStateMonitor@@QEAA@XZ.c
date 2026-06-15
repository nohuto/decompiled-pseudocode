/*
 * XREFs of ??1AudioStateMonitor@@QEAA@XZ @ 0x1800059E8
 * Callers:
 *     ??1?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x1800053EC (--1-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@QEAA@X.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180005424 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$unique_ptr@UAudioStateMonitor@@U-$defau.c)
 *     ?RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STREAM_CATEGORY@@PEBGPEA_K@Z @ 0x180005674 (-RegisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEAW4AUDIO_DIRECTION@@PEAW4_AUDIO_STRE.c)
 *     ?UnregisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEA_K@Z @ 0x18001A954 (-UnregisterAudioStateMonitor@AudioStateMonitorManager@@QEAAJPEA_K@Z.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18002DF1C (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$unique_ptr@UAudioStateMo.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall AudioStateMonitor::~AudioStateMonitor(AudioStateMonitor *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v2 = (void *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v2 )
    operator delete(v2, (const struct std::nothrow_t *)4);
  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 )
    CoTaskMemFree(v3);
  v4 = (void *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v4 )
    operator delete(v4, (const struct std::nothrow_t *)4);
  v5 = *(void **)this;
  *(_QWORD *)this = 0LL;
  if ( v5 )
    operator delete(v5, (const struct std::nothrow_t *)4);
}
