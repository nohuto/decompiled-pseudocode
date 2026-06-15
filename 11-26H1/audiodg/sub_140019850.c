/*
 * XREFs of sub_140019850 @ 0x140019850
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140019980 @ 0x140019980 (sub_140019980.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140019850(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  _DWORD *v8; // rax
  int v9; // r8d
  int v10; // r9d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
  v5 = sub_1400B6010(a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    sub_14000C2A8((int)retaddr, 99, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp", v5);
    if ( v4 )
      LeaveCriticalSection(v4);
    return v6;
  }
  else
  {
    sub_1400B6010(a1 + 16);
    v8 = (_DWORD *)sub_140006470(v7);
    if ( *v8 > 4u )
    {
      v13 = a2;
      v14 = a1;
      sub_140019980((_DWORD)v8, (unsigned int)&unk_1400D2517, v9, v10, (__int64)&v14, (__int64)&v13);
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
}
