/*
 * XREFs of RtlGetProcessHeaps @ 0x180110010
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180091420 (RtlpEnumProcessHeaps.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlGetProcessHeaps(unsigned int a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned int v6; // edi
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v9 = a2;
  v10 = 0LL;
  v8 = a2 + 8LL * a1;
  RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlGetProcessHeapsCallback, (__int64)&v8, 2);
  v4 = v9 - a2;
  v5 = v10;
  v6 = a1 - (v4 >> 3);
  if ( dword_1801C5588 )
    v5 += ((__int64 (__fastcall *)(_QWORD))qword_1801C55D0)(v6);
  return v5;
}
