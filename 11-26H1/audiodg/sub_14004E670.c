/*
 * XREFs of sub_14004E670 @ 0x14004E670
 * Callers:
 *     sub_14004E30C @ 0x14004E30C (sub_14004E30C.c)
 *     sub_14004EFD0 @ 0x14004EFD0 (sub_14004EFD0.c)
 *     sub_14004F3B0 @ 0x14004F3B0 (sub_14004F3B0.c)
 *     sub_140058B84 @ 0x140058B84 (sub_140058B84.c)
 *     sub_14007B9C8 @ 0x14007B9C8 (sub_14007B9C8.c)
 * Callees:
 *     sub_14004BA88 @ 0x14004BA88 (sub_14004BA88.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

LPVOID __fastcall sub_14004E670(DWORD dwFlags, SIZE_T dwBytes)
{
  HANDLE ProcessHeap; // rsi
  LPVOID v5; // rbx
  HMODULE ModuleHandleW; // rax
  FARPROC v7; // rax

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, dwFlags, dwBytes);
  if ( qword_1400E8478
    || !byte_1400E8404
    && ((ModuleHandleW = GetModuleHandleW(L"ntdll.dll")) == 0LL
      ? (v7 = (FARPROC)qword_1400E8478)
      : (FARPROC)(v7 = sub_14004BA88(ModuleHandleW), qword_1400E8478 = (__int64)v7),
        byte_1400E8404 = 1,
        v7) )
  {
    sub_1400B6010(ProcessHeap);
  }
  return v5;
}
