/*
 * XREFs of ??1?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QEAA@XZ @ 0x18002E304
 * Callers:
 *     _CDuckingManager::ForEachDuckableSession_::_1_::dtor$0 @ 0x18004D76A (_CDuckingManager--ForEachDuckableSession_--_1_--dtor$0.c)
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$2 @ 0x18004E47F (_CDuckingManager--CDuckingManager_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18001ADA0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::forward_list<IAudioSessionInfo *>::~forward_list<IAudioSessionInfo *>(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rbx

  result = *a1;
  *a1 = 0LL;
  if ( result )
  {
    do
    {
      v2 = (_QWORD *)*result;
      std::_Deallocate<16>(result, (const struct std::nothrow_t *)0x10);
      result = v2;
    }
    while ( v2 );
  }
  return result;
}
