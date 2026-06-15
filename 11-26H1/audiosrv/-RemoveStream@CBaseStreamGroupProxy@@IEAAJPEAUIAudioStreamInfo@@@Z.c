/*
 * XREFs of ?RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18005BD8C
 * Callers:
 *     ?OnDisconnectedFromStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x18005BCD4 (-OnDisconnectedFromStream@CSharedStreamGroupProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     ?DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800FCC00 (-DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAU_GUID@@PEAU1@@std@@YAPEAU_GUID@@PEAU1@00@Z @ 0x18005C018 (--$_Copy_memmove@PEAU_GUID@@PEAU1@@std@@YAPEAU_GUID@@PEAU1@00@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CBaseStreamGroupProxy::RemoveStream(CBaseStreamGroupProxy *this, struct IAudioStreamInfo *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebp
  struct IAudioStreamInfo **v6; // rcx
  struct IAudioStreamInfo **i; // r8
  struct IAudioStreamInfo **j; // rax
  struct IAudioStreamInfo **v9; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a2;
  v11 = 0LL;
  (*(void (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v4 + 120))(a2, &v11);
  v5 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 72LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v6 = (struct IAudioStreamInfo **)*((_QWORD *)this + 28);
  for ( i = (struct IAudioStreamInfo **)*((_QWORD *)this + 27); i != v6 && *i != a2; ++i )
    ;
  if ( i != v6 )
  {
    for ( j = i + 1; j != v6; ++j )
    {
      if ( *j != a2 )
        *i++ = *j;
    }
  }
  v9 = (struct IAudioStreamInfo **)*((_QWORD *)this + 28);
  if ( i != v9 )
    *((_QWORD *)this + 28) = std::_Copy_memmove<_GUID *,_GUID *>(v9);
  if ( this != (CBaseStreamGroupProxy *)-176LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 232LL))(v11, 2LL, 0xFFFFFFFFLL, v5);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}
