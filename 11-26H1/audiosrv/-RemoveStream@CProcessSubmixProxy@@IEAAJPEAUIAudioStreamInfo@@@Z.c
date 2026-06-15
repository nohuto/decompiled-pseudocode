/*
 * XREFs of ?RemoveStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18005BEF0
 * Callers:
 *     ?OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x18005C560 (-OnDisconnectedFromStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAU_GUID@@PEAU1@@std@@YAPEAU_GUID@@PEAU1@00@Z @ 0x18005C018 (--$_Copy_memmove@PEAU_GUID@@PEAU1@@std@@YAPEAU_GUID@@PEAU1@00@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProcessSubmixProxy::RemoveStream(CProcessSubmixProxy *this, struct IAudioStreamInfo *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebp
  struct IAudioStreamInfo **v6; // rcx
  struct IAudioStreamInfo **i; // r8
  struct IAudioStreamInfo **v8; // rcx
  struct IAudioStreamInfo **j; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a2;
  v11 = 0LL;
  (*(void (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v4 + 120))(a2, &v11);
  v5 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 72LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v6 = (struct IAudioStreamInfo **)*((_QWORD *)this + 23);
  for ( i = (struct IAudioStreamInfo **)*((_QWORD *)this + 22); i != v6 && *i != a2; ++i )
    ;
  if ( i != v6 )
  {
    for ( j = i + 1; j != v6; ++j )
    {
      if ( *j != a2 )
        *i++ = *j;
    }
  }
  v8 = (struct IAudioStreamInfo **)*((_QWORD *)this + 23);
  if ( i != v8 )
    *((_QWORD *)this + 23) = std::_Copy_memmove<_GUID *,_GUID *>(v8);
  if ( this != (CProcessSubmixProxy *)-136LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 232LL))(v11, 2LL, 0xFFFFFFFFLL, v5);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}
