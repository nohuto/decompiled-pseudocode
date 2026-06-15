/*
 * XREFs of AUDIOSESSIONMANAGER_rundown @ 0x180084FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCAudioSessionManagerProxy@@QEAAPEAXI@Z @ 0x1800693B8 (--_GCAudioSessionManagerProxy@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CAudioSessionManagerProxy *__fastcall AUDIOSESSIONMANAGER_rundown(CAudioSessionManagerProxy *this)
{
  CAudioSessionManagerProxy *result; // rax
  __int64 (__fastcall *v3)(struct IAudioDuckingManager *, _QWORD, _QWORD); // rbx
  unsigned int v4; // eax

  result = g_DuckingManager;
  if ( g_DuckingManager )
  {
    v3 = *(__int64 (__fastcall **)(struct IAudioDuckingManager *, _QWORD, _QWORD))(*(_QWORD *)g_DuckingManager + 40LL);
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 40LL))(*((_QWORD *)this + 1));
    result = (CAudioSessionManagerProxy *)v3(g_DuckingManager, v4, 0LL);
  }
  if ( this )
    return CAudioSessionManagerProxy::`scalar deleting destructor'(this);
  return result;
}
