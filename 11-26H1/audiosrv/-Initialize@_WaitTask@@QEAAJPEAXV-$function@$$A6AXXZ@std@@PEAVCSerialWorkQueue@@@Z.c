/*
 * XREFs of ?Initialize@_WaitTask@@QEAAJPEAXV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x18001CC00
 * Callers:
 *     ?QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@J@ZV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@5@@Z @ 0x18001CA40 (-QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x18001BF60 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x18001CBC4 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _WaitTask::Initialize(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // edi
  _DWORD *v8; // rax
  __int64 v9; // rdx
  _DWORD *v10; // rbx
  std::_Ref_count_base *v11; // rcx
  HANDLE CurrentProcess; // rbx
  HANDLE v13; // rax
  signed int LastError; // eax

  v7 = 0;
  *(_QWORD *)(a1 + 32) = a4;
  v8 = operator new(0x50uLL);
  v10 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::`vftable';
    std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)(v8 + 4), a3);
  }
  else
  {
    v10 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = v10 + 4;
  v11 = *(std::_Ref_count_base **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v10;
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  if ( *(_QWORD *)(a1 + 8) )
  {
    CurrentProcess = GetCurrentProcess();
    v13 = GetCurrentProcess();
    if ( !DuplicateHandle(v13, a2, CurrentProcess, (LPHANDLE)(a1 + 24), 0, 0, 2u) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      v7 = LastError;
    }
  }
  else
  {
    v7 = -2147024882;
  }
  std::_Func_class<void,>::~_Func_class<void,>(a3, v9);
  return v7;
}
