/*
 * XREFs of sub_14005B15C @ 0x14005B15C
 * Callers:
 *     sub_14000B0B0 @ 0x14000B0B0 (sub_14000B0B0.c)
 *     StorPortLogError @ 0x1400742C0 (StorPortLogError.c)
 * Callees:
 *     sub_14008E1AC @ 0x14008E1AC (sub_14008E1AC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

void __fastcall sub_14005B15C(__int64 a1, int a2, unsigned int a3, int a4)
{
  char v4; // bl
  char *ErrorLogEntry; // rax
  char *v8; // rdi
  int v9; // eax

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
    v9 = sub_14008E1AC(a3);
    *((_DWORD *)v8 + 3) = v9;
    *((_DWORD *)v8 + 13) = v9;
    IoWriteErrorLogEntry(v8);
  }
  else
  {
    _InterlockedIncrement(&dword_1401688B8);
  }
}
