/*
 * XREFs of ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180015050
 * Callers:
 *     ?OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180016010 (-OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 *     std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_6c758f270a739346e4977fa18103cf5e___ @ 0x18003EE90 (std--forward_list_IAudioSessionInfo___std--allocator_IAudioSessionInfo_____--remove_if__lambda_6.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDuckingManager::OnStateChanged(
        CDuckingManager *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        const char *a4)
{
  int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  _QWORD *v7; // rax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IAudioSessionInfo *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  try
  {
    v4 = (int)a4;
    if ( *((_BYTE *)this + 456) )
    {
      result = 0LL;
    }
    else if ( (*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a2 + 40LL))(a2) )
    {
      result = 0LL;
    }
    else
    {
      if ( !(*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v10 + 56LL))(v10) )
      {
        if ( v4 == 1 )
        {
          if ( !(*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)v10 + 48LL))(v10) )
          {
            v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
            EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
            v7 = operator new(0x10uLL);
            v7[1] = v10;
            *v7 = *((_QWORD *)this + 8);
            *((_QWORD *)this + 8) = v7;
            goto LABEL_8;
          }
        }
        else if ( !v4 )
        {
          v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
          std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_6c758f270a739346e4977fa18103cf5e___(
            (char *)this + 64,
            &v10);
LABEL_8:
          if ( v6 )
            LeaveCriticalSection(v6);
        }
        return 0LL;
      }
      result = 0LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x112,
                           (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
                           a4);
  }
  return result;
}
