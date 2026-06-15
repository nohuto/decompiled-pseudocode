/*
 * XREFs of ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x18001AE10
 * Callers:
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x18001C520 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     _lambda_e84261e39c6833060792dde3988d9fd4_::operator() @ 0x1800453DC (_lambda_e84261e39c6833060792dde3988d9fd4_--operator().c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800494A0 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?OnProcessTerminated@CAudioSession@@UEAAXPEAUIAudioProcess@@@Z @ 0x180081A20 (-OnProcessTerminated@CAudioSession@@UEAAXPEAUIAudioProcess@@@Z.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x18001BEB0 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x18001BF60 (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x18001BFA0 (-Initialize@CSerialWorkQueue@@AEAAJXZ.c)
 *     ??_G_WorkTask@@QEAAPEAXI@Z @ 0x18001C8B8 (--_G_WorkTask@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CAudioSession::PostStateCheckExpirationWork(CAudioSession *this)
{
  __int64 v2; // r15
  signed int v3; // edi
  __int64 *v4; // rax
  unsigned int v5; // edx
  __int64 *v6; // rbx
  _QWORD *v7; // rdx
  HANDLE ProcessHeap; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rdi
  volatile signed __int32 *v11; // r14
  __int64 v12; // r14
  _BYTE *v13; // rdx
  struct _TP_WORK *ThreadpoolWork; // r14
  signed int LastError; // eax
  _BYTE *v16; // [rsp+20h] [rbp-69h]
  _QWORD v17[7]; // [rsp+28h] [rbp-61h] BYREF
  _QWORD *v18; // [rsp+60h] [rbp-29h]
  _DWORD *v19; // [rsp+68h] [rbp-21h]
  _BYTE v20[56]; // [rsp+70h] [rbp-19h] BYREF
  _BYTE *v21; // [rsp+A8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  if ( this )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
  v2 = (*(__int64 (__fastcall **)(struct IAudioService *))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
  if ( this )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
  v17[0] = off_1801715A0;
  v17[1] = this;
  v18 = v17;
  v3 = 0;
  if ( !(unsigned __int8)std::_Atomic_storage<bool,1>::load(v2 + 80) )
  {
    v3 = CSerialWorkQueue::Initialize((CSerialWorkQueue *)v2);
    if ( v3 >= 0 )
    {
      v4 = (__int64 *)operator new[](0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v6 = v4;
      if ( v4 )
      {
        *v4 = 0LL;
        v4[1] = 0LL;
        v4[2] = 0LL;
      }
      else
      {
        v6 = 0LL;
      }
      if ( v6 )
      {
        v21 = 0LL;
        if ( v18 )
          v21 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))*v18)(v18, v20);
        v16 = v20;
        v6[2] = v2;
        ProcessHeap = GetProcessHeap();
        v9 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
        v10 = v9;
        v19 = v9;
        if ( v9 )
        {
          *(_OWORD *)v9 = 0LL;
          v9[2] = 1;
          v9[3] = 1;
          *(_QWORD *)v9 = &std::_Ref_count_obj2<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::`vftable';
          std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>(v9 + 4, v20);
        }
        else
        {
          v10 = 0LL;
        }
        *v6 = (__int64)(v10 + 4);
        v11 = (volatile signed __int32 *)v6[1];
        v6[1] = (__int64)v10;
        if ( v11 )
        {
          if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
            if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          }
        }
        v12 = *v6;
        v3 = *v6 == 0 ? 0x8007000E : 0;
        if ( v21 )
        {
          v13 = v20;
          LOBYTE(v13) = v21 != v20;
          (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v21 + 32LL))(v21, v13);
        }
        if ( !v12 )
          goto LABEL_11;
        ThreadpoolWork = CreateThreadpoolWork(CSerialWorkQueue::WorkCallback, v6, (PTP_CALLBACK_ENVIRON)(v2 + 8));
        if ( ThreadpoolWork )
        {
          v3 = 0;
        }
        else
        {
          LastError = GetLastError();
          v3 = LastError;
          if ( LastError > 0 )
            v3 = (unsigned __int16)LastError | 0x80070000;
          if ( v3 < 0 )
            goto LABEL_11;
        }
        v6 = 0LL;
        SubmitThreadpoolWork(ThreadpoolWork);
      }
      else
      {
        v3 = -2147024882;
      }
LABEL_11:
      if ( v6 )
        _WorkTask::`scalar deleting destructor'((_WorkTask *)v6, v5);
    }
  }
  if ( v18 )
  {
    v7 = v17;
    LOBYTE(v7) = v18 != v17;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v18 + 32LL))(v18, v7);
    v18 = 0LL;
  }
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD92,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v3,
      (int)v16);
  if ( this )
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
}
