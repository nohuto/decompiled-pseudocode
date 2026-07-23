/*
 * XREFs of MiUnmapFrameBuffer @ 0x140314AD4
 * Callers:
 *     MiDeleteRotateVa @ 0x140314480 (MiDeleteRotateVa.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403146B4 (MiReplaceRotateWithDemandZeroNoCopy.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402B1EF0 (MiSwizzleInvalidPte.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14049109C (MiCaptureWriteWatchDirtyBit.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiUnmapFrameBuffer(__int64 a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR v3; // rbx
  unsigned __int16 v6; // di
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r9d
  __int64 v11; // rcx
  ULONG_PTR BugCheckParameter4; // rcx

  v3 = *(_QWORD *)a2;
  v6 = 1;
  if ( (*(_QWORD *)a2 & 0x42) != 0 && (*(_DWORD *)(a1 + 48) & 0x180000) == 0x180000 && (*(_DWORD *)(a1 + 48) & 1) == 0 )
    MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, (__int64)(a2 << 25) >> 16, a1);
  result = (v3 >> 12) & 0xFFFFFFFFFFLL;
  if ( result <= qword_140E2D920 )
  {
    v11 = 48 * result;
    result = (*(_QWORD *)(48 * result - 0x21FFFFFFFFD8LL) >> 54) & 1LL;
    if ( (_DWORD)result )
    {
      BugCheckParameter4 = v11 - 0x220000000000LL;
      if ( (*(_QWORD *)(BugCheckParameter4 + 40) & 0x10000000000LL) != 0
        || (*(_QWORD *)(BugCheckParameter4 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
      {
        v6 = 2;
      }
      result = *(unsigned int *)(BugCheckParameter4 + 32);
      if ( (unsigned __int16)result < v6 )
        KeBugCheckEx(0x1Au, 0x6081uLL, a2, v3, BugCheckParameter4);
    }
  }
  v8 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  if ( a3 != 3 )
  {
    v9 = MiSwizzleInvalidPte(*(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | 0x80);
    if ( a3 == v10 )
    {
      v9 |= 0x300uLL;
    }
    else if ( !a3 )
    {
      v9 |= 0x100uLL;
    }
    result = v9 & 0xFFFFFFFFFFFFFF1FuLL;
    v8 = (result | ((v3 & 0x800) != 0 ? 128LL : 32LL)) ^ (result ^ (result | ((v3 & 0x800) != 0 ? 128LL : 32LL))) & 0xFFFFFFFFFFFFFC1FuLL;
  }
  *(_QWORD *)a2 = v8;
  return result;
}
