/*
 * XREFs of ?HandleDestruction@CCharmsWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x1801AE610
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall CCharmsWindowManager::HandleDestruction(CCharmsWindowManager *this, HWND a2, __int64 a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 i; // rbx
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // ebx

  v5 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= *((_QWORD *)this + 4) )
    {
      v9 = -2147319765;
      goto LABEL_7;
    }
    v7 = *(__int64 **)(*((_QWORD *)this + 3) + 8 * i);
    v8 = *v7;
    if ( !a2 )
      break;
    if ( (HWND)(*(__int64 (__fastcall **)(__int64 *, HWND, __int64))(v8 + 32))(v7, a2, a3) == a2 )
      goto LABEL_9;
LABEL_5:
    ;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v8 + 48))(v7, 0LL) )
    goto LABEL_5;
LABEL_9:
  v5 = i;
  v9 = 0;
LABEL_7:
  if ( v9 >= 0 )
  {
    (*(void (__fastcall **)(char *, unsigned __int64))(*((_QWORD *)this + 2) + 16LL))((char *)this + 16, v5);
    if ( !v5 )
      *((_DWORD *)this + 14) = 0;
  }
  return v9 >= 0;
}
