/*
 * XREFs of ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x140113F54
 * Callers:
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x14001161C (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140015950 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x140021698 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140021D3C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z @ 0x140022C50 (--$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z.c)
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x140022E10 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1400322FC (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     SURFACE_Allocate @ 0x140113EC0 (SURFACE_Allocate.c)
 * Callees:
 *     ?Create@CPlatformSignal@NSInstrumentation@@SAPEAV12@XZ @ 0x140114030 (-Create@CPlatformSignal@NSInstrumentation@@SAPEAV12@XZ.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x140114080 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 */

_QWORD *__fastcall NSInstrumentation::CReferenceTracker::CReferenceCountedType::BeginTrack(
        NSInstrumentation::CPointerHashTable **this,
        void *a2)
{
  __int64 Pool2; // rax
  _QWORD *v5; // rbx
  struct NSInstrumentation::CPlatformSignal *v6; // rax
  void *v7; // rcx
  void *v8; // rcx

  Pool2 = ExAllocatePool2(258LL, 4096LL, 1648980821LL);
  v5 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_QWORD *)(Pool2 + 8) = Pool2;
  *(_QWORD *)Pool2 = Pool2;
  *(_QWORD *)(Pool2 + 40) = -1LL;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_DWORD *)(Pool2 + 48) = 0;
  *(_QWORD *)(Pool2 + 16) = NSInstrumentation::CPlatformSignal::Create();
  v6 = NSInstrumentation::CPlatformSignal::Create();
  v7 = (void *)v5[2];
  v5[3] = v6;
  if ( !v7 )
  {
LABEL_3:
    v8 = (void *)v5[3];
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  if ( !v6 )
  {
    ExFreePoolWithTag(v7, 0);
    goto LABEL_3;
  }
  NSInstrumentation::CPointerHashTable::Insert(this[3], v5, a2);
  return v5;
}
