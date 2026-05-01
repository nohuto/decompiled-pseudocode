/*
 * XREFs of ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x18000EC70
 * Callers:
 *     ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ @ 0x18000EBD4 (--1-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ.c)
 *     ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000EC10 (--_G-$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall Microsoft::WRL::Details::TerminateMap(
        Microsoft::WRL::Details *this,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        const unsigned __int16 *a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  RTL_SRWLOCK *v7; // rbp
  void **v8; // rcx
  void *v9; // r14
  PVOID v10; // rax

  v4 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *, struct Microsoft::WRL::Details::ModuleBase *, const unsigned __int16 *))(*(_QWORD *)this + 32LL))(
         this,
         a2,
         a3)
     + 8;
  v5 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 48LL))(this);
  while ( v4 < v5 )
  {
    if ( *(_QWORD *)v4 )
    {
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this);
      if ( **(_QWORD **)(*(_QWORD *)v4 + 24LL) )
      {
        v7 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
        AcquireSRWLockExclusive(v7);
        v8 = *(void ***)(*(_QWORD *)v4 + 24LL);
        v9 = *v8;
        if ( *v8 )
        {
          *v8 = 0LL;
          if ( v7 )
            ReleaseSRWLockExclusive(v7);
          v10 = DecodePointer(v9);
          (*(void (__fastcall **)(PVOID))(*(_QWORD *)v10 + 16LL))(v10);
        }
        else if ( v7 )
        {
          ReleaseSRWLockExclusive(v7);
        }
      }
    }
    v4 += 8LL;
  }
  return (*(unsigned int (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this) == 0;
}
