/*
 * XREFs of MiCaptureAndResetWorkingSetAccessBits @ 0x1403C4EDC
 * Callers:
 *     MiCaptureTargetedWorkingSetAccessBits @ 0x1403C3BE8 (MiCaptureTargetedWorkingSetAccessBits.c)
 * Callees:
 *     MiWalkPageTables @ 0x140328AB0 (MiWalkPageTables.c)
 *     MiDrainSystemAccessLog @ 0x1403C508C (MiDrainSystemAccessLog.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiCaptureAndResetWorkingSetAccessBits(__int64 a1, char a2, int a3)
{
  int v6; // eax
  bool v7; // zf
  int v8; // eax
  ULONG *v9; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-91h] BYREF
  __int128 v12; // [rsp+38h] [rbp-79h]
  _DWORD v13[2]; // [rsp+48h] [rbp-69h] BYREF
  char v14; // [rsp+51h] [rbp-60h]
  __int64 v15; // [rsp+68h] [rbp-49h]
  __int64 v16; // [rsp+78h] [rbp-39h]
  __int64 (__fastcall *v17)(__int64, unsigned __int64, __int64); // [rsp+F0h] [rbp+3Fh]
  __int64 (__fastcall *v18)(); // [rsp+F8h] [rbp+47h]
  _QWORD *v19; // [rsp+100h] [rbp+4Fh]

  *(_OWORD *)&v11[1] = 0LL;
  v12 = 0LL;
  memset_0(v13, 0, 0xC0uLL);
  v13[0] = 6;
  v17 = MiResetAccessBitPte;
  v16 = -1LL;
  v18 = MiResetAccessBitsTail;
  v6 = *(_DWORD *)(a1 + 184);
  v15 = a1;
  v14 = a2;
  if ( (v6 & 0xF) == 0 )
  {
    if ( *(_QWORD *)(a1 + 624) )
    {
LABEL_5:
      *((_QWORD *)&v12 + 1) = 1LL;
      goto LABEL_6;
    }
    v7 = (*(_QWORD *)(a1 - 656) & 0xFFFFFFFFFFFFFFFCuLL) == 0;
LABEL_4:
    if ( v7 )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( _bittest64(&MiFlags, 0x26u) )
  {
    v7 = (v6 & 0x40) == 0;
    goto LABEL_4;
  }
LABEL_6:
  v8 = HIDWORD(v11[1]);
  if ( a3 == 7 )
    v8 = 1;
  HIDWORD(v11[1]) = v8;
  if ( (*(_DWORD *)(a1 + 184) & 0xF) == 1 )
    v9 = &MiSystemPartition;
  else
    v9 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a1 + 174));
  LODWORD(v11[1]) = v9[4539];
  v19 = &v11[1];
  MiWalkPageTables((__int64)v13);
  return MiDrainSystemAccessLog(a1);
}
