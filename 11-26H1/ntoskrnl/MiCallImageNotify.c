/*
 * XREFs of MiCallImageNotify @ 0x1409E50E8
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1409E4E98 (MiDriverLoadSucceeded.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     PsCallImageNotifyRoutines @ 0x1409E6750 (PsCallImageNotifyRoutines.c)
 */

void __fastcall MiCallImageNotify(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // ecx
  ULONG_PTR v8; // rbx
  __int128 v9; // [rsp+20h] [rbp-40h] BYREF
  __int128 v10; // [rsp+30h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-10h]

  v12 = 0LL;
  v2 = *(_QWORD *)(a1 + 112);
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v4 = (__int64 *)MiSectionControlArea(v2);
  v5 = *v4;
  BYTE8(v9) = 3;
  LODWORD(v5) = *(unsigned __int8 *)(v5 + 15);
  v7 = DWORD2(v9) ^ (WORD4(v9) ^ (unsigned __int16)((_WORD)v5 << 12)) & 0xF000;
  *(_QWORD *)&v11 = *(unsigned int *)(v6 + 64);
  *(_QWORD *)&v10 = *(_QWORD *)(v6 + 48);
  DWORD2(v10) = 0;
  DWORD2(v9) = v7 ^ (v7 ^ ((_DWORD)v5 << 12)) & 0x70000 | 0x100;
  DWORD2(v11) = 0;
  v8 = MiReferenceControlAreaFile((__int64)v4);
  PsCallImageNotifyRoutines(a2, 0LL, &v9, v8);
  MiDereferenceControlAreaFile((__int64)v4, v8);
}
