/*
 * XREFs of ?RemoveRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z @ 0x180027B90
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@@std@@YAPEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@00@Z @ 0x180027C78 (--$_Copy_memmove@PEAPEAUIAudioAppVolumePolicyChange@@PEAPEAU1@@std@@YAPEAPEAUIAudioAppVolumePoli.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::RemoveRelatedProcess(ApplicationSpecificEndpointInfo *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  _DWORD *v5; // r9
  _DWORD *i; // r8
  _DWORD *j; // rax
  _DWORD *v8; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v5 = (_DWORD *)*((_QWORD *)this + 8);
  for ( i = (_DWORD *)*((_QWORD *)this + 7); i != v5 && a2 != *i; ++i )
    ;
  if ( i != v5 )
  {
    for ( j = i + 1; j != v5; ++j )
    {
      if ( a2 != *j )
        *i++ = *j;
    }
  }
  v8 = (_DWORD *)*((_QWORD *)this + 8);
  if ( i != v8 )
    *((_QWORD *)this + 8) = std::_Copy_memmove<IAudioAppVolumePolicyChange * *,IAudioAppVolumePolicyChange * *>(v8);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
