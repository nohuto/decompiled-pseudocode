/*
 * XREFs of ?AddRelatedProcess@ApplicationSpecificEndpointInfo@@UEAAJK@Z @ 0x180005E80
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z @ 0x180006BA0 (--$_Emplace_reallocate@AEAK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::AddRelatedProcess(ApplicationSpecificEndpointInfo *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  const char *v5; // r9
  _DWORD *v6; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  try
  {
    if ( a2 )
    {
      v6 = (_DWORD *)*((_QWORD *)this + 8);
      if ( v6 == *((_DWORD **)this + 9) )
      {
        std::vector<unsigned long>::_Emplace_reallocate<unsigned long &>((char *)this + 56, v6);
      }
      else
      {
        *v6 = a2;
        *((_QWORD *)this + 8) += 4LL;
      }
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x167,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicati"
                                         "onspecificendpointinfo.cpp",
                           v5);
  }
  return result;
}
