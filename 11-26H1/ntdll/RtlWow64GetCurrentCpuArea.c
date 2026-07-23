/*
 * XREFs of RtlWow64GetCurrentCpuArea @ 0x1800B1690
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetExtendedContextLength3 @ 0x1800B17C0 (RtlGetExtendedContextLength3.c)
 */

__int64 __fastcall RtlWow64GetCurrentCpuArea(_WORD *a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // r8
  _WORD *v7; // r15
  __int16 v8; // bp
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  unsigned int v14; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  v14 = 0;
  v7 = NtCurrentTeb()->TlsSlots[1];
  v8 = v7[1];
  if ( v8 == 332 )
  {
    v10 = 0x10000LL;
    v11 = 2LL;
    v4 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x40000000000001FCLL;
    if ( v4 )
      v10 = 65600LL;
  }
  else if ( v7[1] == 452 )
  {
    v10 = 0x200000LL;
    v11 = 4LL;
  }
  else if ( (unsigned __int16)v7[1] == 34404 )
  {
    v10 = 0x100000LL;
    v11 = 8LL;
  }
  else
  {
    if ( (unsigned __int16)v7[1] != 43620 )
      return 3221225485LL;
    v10 = 0x400000LL;
    v11 = 8LL;
  }
  RtlGetExtendedContextLength3(v10, &v14, v4, 2147353560LL);
  v12 = ~(v11 * 2 - 1) & ((unsigned __int64)&v7[v11 + 1] + 1);
  v13 = (_QWORD *)((v12 + v14 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
  if ( a1 )
    *a1 = v8;
  if ( a2 )
    *a2 = v12;
  if ( a3 )
    *a3 = *v13;
  return 0LL;
}
