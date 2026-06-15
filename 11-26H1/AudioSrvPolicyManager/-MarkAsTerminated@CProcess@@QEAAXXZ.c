/*
 * XREFs of ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x18002099C
 * Callers:
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180020618 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180008500 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B770 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000BE20 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x18002129C (-CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003AD8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::MarkAsTerminated(CProcess *this)
{
  volatile signed __int32 *v2; // rbx
  volatile int *v3; // rdx
  volatile int *v4; // rdx
  Microsoft::WRL::Details *v5; // rcx
  int v6; // eax
  __int64 i; // rcx
  __int64 v8; // rbx
  _QWORD *v9; // r9
  __int64 v10; // r10
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13[8]; // [rsp+20h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  volatile signed __int32 *v15; // [rsp+80h] [rbp+20h] BYREF
  volatile signed __int32 *v16; // [rsp+88h] [rbp+28h] BYREF

  v2 = (volatile signed __int32 *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v15 = v2;
  CProcess::CleanupProcessTerminationWatcher(this, 0);
  *((_DWORD *)this + 104) = 2;
  v16 = (volatile signed __int32 *)this;
  Microsoft::WRL::Details::SafeUnknownIncrementReference((CProcess *)((char *)this + 20), v3);
  Microsoft::WRL::Details::SafeUnknownIncrementReference(v5, v4);
  v13[0] = (__int64)off_180053180;
  v15 = 0LL;
  v13[1] = (__int64)this;
  v13[7] = (__int64)v13;
  v6 = QueueGenericWorkItem(v13);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xE6A,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\application.cpp",
      (const char *)(unsigned int)v6,
      v13[0]);
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v15);
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v16);
  if ( v2 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 592));
  v15 = (volatile signed __int32 *)((char *)this + 592);
  if ( *((_QWORD *)this + 80) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 162); i = (unsigned int)(i + 1) )
    {
      if ( *(_QWORD *)(*((_QWORD *)this + 79) + 8 * i) )
      {
        _mm_lfence();
        v8 = *(_QWORD *)(*((_QWORD *)this + 79) + 8 * i);
        while ( v8 )
        {
          v9 = (_QWORD *)v8;
          v10 = v8;
          if ( *(_QWORD *)(v8 + 16) )
          {
            v8 = *(_QWORD *)(v8 + 16);
          }
          else
          {
            v11 = *((_DWORD *)this + 162);
            LODWORD(v12) = *(_DWORD *)(v8 + 24) % v11;
            do
            {
              v12 = (unsigned int)(v12 + 1);
              v8 = 0LL;
              if ( (unsigned int)v12 >= v11 )
                break;
              v8 = *(_QWORD *)(*((_QWORD *)this + 79) + 8 * v12);
            }
            while ( !v8 );
          }
          (*(void (__fastcall **)(_QWORD, CProcess *, _QWORD))(**(_QWORD **)(v10 + 8) + 24LL))(
            *(_QWORD *)(v10 + 8),
            this,
            *v9);
        }
        break;
      }
    }
  }
  if ( this != (CProcess *)-592LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 592));
}
