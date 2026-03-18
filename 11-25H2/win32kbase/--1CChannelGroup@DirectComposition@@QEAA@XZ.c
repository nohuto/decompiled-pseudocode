/*
 * XREFs of ??1CChannelGroup@DirectComposition@@QEAA@XZ @ 0x1401A08C0
 * Callers:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1400E4978 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ @ 0x140058A00 (--1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ.c)
 */

void __fastcall DirectComposition::CChannelGroup::~CChannelGroup(DirectComposition::CChannelGroup *this)
{
  struct _ERESOURCE *v2; // rcx

  v2 = (struct _ERESOURCE *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    ExDeleteResourceLite(v2);
    GreDeleteFastMutex(*((char **)this + 7));
  }
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((char **)this);
}
