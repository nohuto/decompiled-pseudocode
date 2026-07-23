/*
 * XREFs of PfTReplaceCurrentBuffer @ 0x1409F2068
 * Callers:
 *     PfpFlushBuffers @ 0x1409F13D0 (PfpFlushBuffers.c)
 *     PfpLogPageAccess @ 0x1409F1770 (PfpLogPageAccess.c)
 *     PfpCopyEvent @ 0x1409F1E30 (PfpCopyEvent.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PfTGetFreeBuffer @ 0x1409F2128 (PfTGetFreeBuffer.c)
 */

__int64 __fastcall PfTReplaceCurrentBuffer(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _DWORD *v3; // rcx
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned int v6; // ebx
  _QWORD *v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rcx
  unsigned __int16 v11; // r8
  __int64 v12; // rcx

  v2 = PfTGetFreeBuffer(a2);
  v6 = 0;
  v7 = (_QWORD *)v2;
  if ( v2 )
  {
    if ( (*v3 & 0xF) == 1 )
    {
      v11 = *(_WORD *)(v2 + 32) + *(_WORD *)(*(_QWORD *)(v4 + 24) + 36LL);
      v12 = 0xFFFF - (unsigned int)v11;
      *(_WORD *)(v2 + 36) = v11;
      if ( (unsigned int)v12 < *(_DWORD *)(v2 + 32) )
        *(_QWORD *)(((v2 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v12) = -1LL;
    }
    v8 = (_QWORD *)(v4 + 24);
    v9 = *(_QWORD *)(v4 + 24);
    if ( *(_QWORD *)(v9 + 8) != v4 + 24 )
      __fastfail(3u);
    *v7 = v9;
    v7[1] = v8;
    *(_QWORD *)(v9 + 8) = v7;
    *v8 = v7;
    if ( *(_WORD *)(v4 + 10) <= *(_WORD *)(v4 + 8) )
      KeSetEvent((PRKEVENT)(v5 + 176), 0, 0);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v6;
}
