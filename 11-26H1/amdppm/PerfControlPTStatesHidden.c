/*
 * XREFs of PerfControlPTStatesHidden @ 0x14000C140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

_UNKNOWN **__fastcall PerfControlPTStatesHidden(__int64 a1, __int64 a2, char a3, char a4)
{
  _UNKNOWN **result; // rax
  __int64 v6; // rbx
  __int64 *v7; // rsi
  int v8; // ebp
  unsigned int v9; // ebp
  __int64 v10; // rcx
  __int64 v11; // rdx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  if ( a4 )
  {
    result = &retaddr;
    if ( a3 )
    {
      v6 = *(_QWORD *)(a1 + 56);
      v7 = (__int64 *)(v6 + 56);
      if ( *(_DWORD *)(v6 + 72) )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(v6 + 16))(
          *(unsigned int *)(*(_QWORD *)a1 + 84LL),
          *(_QWORD *)(v6 + 48),
          *(_QWORD *)(32LL * *(unsigned int *)(v6 + 68) + *v7),
          *(_QWORD *)(32LL * *(unsigned int *)(v6 + 68) + *v7 + 8),
          0);
      v8 = *(_DWORD *)(v6 + 68);
      if ( v8 )
      {
        v9 = v8 - 1;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(v6 + 24))(
          *(unsigned int *)(*(_QWORD *)a1 + 84LL),
          *(_QWORD *)(v6 + 40),
          *(_QWORD *)(32LL * v9 + *v7),
          *(_QWORD *)(32LL * v9 + *v7 + 8),
          0);
      }
      else
      {
        v9 = 0;
      }
      v10 = *v7;
      *(_DWORD *)(a1 + 48) = v9;
      v11 = 32LL * v9;
      *(_DWORD *)(a1 + 40) = *(unsigned __int8 *)(v11 + v10 + 25);
      result = (_UNKNOWN **)*(unsigned __int8 *)(v11 + v10 + 24);
      *(_DWORD *)(a1 + 44) = (_DWORD)result;
    }
  }
  return result;
}
