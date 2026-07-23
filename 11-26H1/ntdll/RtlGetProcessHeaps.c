/*
 * XREFs of RtlGetProcessHeaps @ 0x18010FBA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEnumProcessHeaps @ 0x180076180 (RtlpEnumProcessHeaps.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

ULONG __cdecl RtlGetProcessHeaps(ULONG NumberOfHeaps, PVOID *ProcessHeaps)
{
  __int64 v4; // rax
  ULONG v5; // ebx
  unsigned int v6; // edi
  PVOID *v8; // [rsp+20h] [rbp-28h] BYREF
  PVOID *v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v9 = ProcessHeaps;
  v10 = 0LL;
  v8 = &ProcessHeaps[NumberOfHeaps];
  RtlpEnumProcessHeaps((__int64 (__fastcall *)(__int64, _QWORD, __int64))RtlGetProcessHeapsCallback, (__int64)&v8, 2);
  v4 = (char *)v9 - (char *)ProcessHeaps;
  v5 = v10;
  v6 = NumberOfHeaps - (v4 >> 3);
  if ( dword_1801C4588 )
    v5 += ((__int64 (__fastcall *)(_QWORD))qword_1801C45D0)(v6);
  return v5;
}
