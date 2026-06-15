/*
 * XREFs of sub_1400196D0 @ 0x1400196D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140019980 @ 0x140019980 (sub_140019980.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400196D0(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rcx
  _DWORD *v9; // rax
  int v10; // r8d
  int v11; // r9d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
  v5 = sub_1400B6010(a2);
  v6 = v5;
  if ( v5 < 0 )
  {
    sub_14000C2A8((int)retaddr, 77, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp", v5);
  }
  else
  {
    v7 = sub_1400B6010(a1 + 16);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v9 = (_DWORD *)sub_140006470(v8);
      if ( *v9 > 4u )
      {
        v14 = a2;
        v15 = a1;
        sub_140019980((_DWORD)v9, (unsigned int)&unk_1400D255E, v10, v11, (__int64)&v15, (__int64)&v14);
      }
      if ( v4 )
        LeaveCriticalSection(v4);
      return 0LL;
    }
    sub_14000C2A8((int)retaddr, 79, (int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp", v7);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v6;
}
