/*
 * XREFs of ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEB_W_N@Z @ 0x1802D2890
 * Callers:
 *     ??_G?$Module@$00VInProcModule@Details@Platform@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802D2740 (--_G-$Module@$00VInProcModule@Details@Platform@@@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??_GInProcModule@Details@Platform@@UEAAPEAXI@Z @ 0x1802D27A0 (--_GInProcModule@Details@Platform@@UEAAPEAXI@Z.c)
 * Callees:
 *     wcscmp_0 @ 0x1802D373C (wcscmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall Microsoft::WRL::Details::TerminateMap(
        Microsoft::WRL::Details *this,
        const wchar_t *a2,
        const wchar_t *a3)
{
  char v3; // r12
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r15
  const wchar_t *v8; // rcx
  RTL_SRWLOCK *v9; // rdi
  void **v10; // rax
  void *v11; // rbp
  PVOID v12; // rax

  v3 = (char)a3;
  v6 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 32LL))(this) + 8;
  v7 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 48LL))(this);
  if ( v6 >= v7 )
    return (*(unsigned int (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this) == 0;
  while ( 1 )
  {
    if ( *(_QWORD *)v6 )
    {
      if ( !a2 )
        break;
      v8 = *(const wchar_t **)(*(_QWORD *)v6 + 32LL);
      if ( v8 )
      {
        if ( !wcscmp_0(v8, a2) )
          break;
      }
    }
LABEL_15:
    v6 += 8LL;
    if ( v6 >= v7 )
      return (*(unsigned int (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this) == 0;
  }
  if ( !(*(unsigned int (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 24LL))(this) || v3 )
  {
    if ( **(_QWORD **)(*(_QWORD *)v6 + 24LL) )
    {
      v9 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
      AcquireSRWLockExclusive(v9);
      v10 = *(void ***)(*(_QWORD *)v6 + 24LL);
      v11 = *v10;
      if ( *v10 )
      {
        *v10 = 0LL;
        if ( v9 )
          ReleaseSRWLockExclusive(v9);
        v12 = DecodePointer(v11);
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v12 + 16LL))(v12);
      }
      else if ( v9 )
      {
        ReleaseSRWLockExclusive(v9);
      }
    }
    goto LABEL_15;
  }
  return 0;
}
