/*
 * XREFs of ??1CChannelGroup@DirectComposition@@QEAA@XZ @ 0x1401B56C0
 * Callers:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1401B55DC (--1CConnection@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ @ 0x1401292D4 (--1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ.c)
 */

void __fastcall DirectComposition::CChannelGroup::~CChannelGroup(
        DirectComposition::CChannelGroup *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _ERESOURCE *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    GreDeleteFastMutex(*((char **)this + 7), v6, v7, v8);
  }
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((char **)this, a2, a3, a4);
}
