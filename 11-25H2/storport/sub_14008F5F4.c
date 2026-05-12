/*
 * XREFs of sub_14008F5F4 @ 0x14008F5F4
 * Callers:
 *     sub_14005A6E4 @ 0x14005A6E4 (sub_14005A6E4.c)
 *     sub_1400624CC @ 0x1400624CC (sub_1400624CC.c)
 *     sub_14009D9F0 @ 0x14009D9F0 (sub_14009D9F0.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void __fastcall sub_14008F5F4(__int64 a1, int a2, int a3, int a4)
{
  char v4; // bl
  char *ErrorLogEntry; // rax
  char *v8; // rdi

  v4 = a2;
  ErrorLogEntry = (char *)IoAllocateErrorLogEntry(*(PVOID *)(a1 + 8), 0x40u);
  v8 = ErrorLogEntry;
  if ( ErrorLogEntry )
  {
    memset_0(ErrorLogEntry, 0, 0x40uLL);
    *((_DWORD *)v8 + 5) = 0;
    *(_WORD *)(v8 + 49) = *(_WORD *)((char *)&a2 + 1);
    *((_WORD *)v8 + 1) = 24;
    *v8 = 15;
    *((_DWORD *)v8 + 4) = a4;
    v8[48] = v4;
    *((_DWORD *)v8 + 3) = a3;
    *((_DWORD *)v8 + 13) = a3;
    IoWriteErrorLogEntry(v8);
  }
  else
  {
    _InterlockedIncrement(&dword_1401688B8);
  }
}
