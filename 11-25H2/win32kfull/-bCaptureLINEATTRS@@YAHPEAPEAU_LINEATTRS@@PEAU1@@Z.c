/*
 * XREFs of ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1402193FC
 * Callers:
 *     NtGdiEngStrokePath @ 0x140264B40 (NtGdiEngStrokePath.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033C2E0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x14033D130 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     PALLOCNOZ @ 0x1400FD16C (PALLOCNOZ.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall bCaptureLINEATTRS(struct _LINEATTRS **a1, struct _LINEATTRS *a2)
{
  unsigned int v4; // edi
  const void *v5; // rdx
  PFLOAT_LONG pstyle; // rdx
  __int64 cstyle; // rax
  __int64 v9; // rax
  union _FLOAT_LONG *v10; // rax
  union _FLOAT_LONG *v11; // r14

  v4 = 1;
  v5 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, v5, 0x28uLL);
    pstyle = a2->pstyle;
    if ( pstyle )
    {
      cstyle = a2->cstyle;
      if ( (unsigned int)cstyle > 0x9C4000 )
        return 0LL;
      v9 = cstyle;
      if ( v9 * 4 && ((unsigned __int64)&pstyle[v9] > MmUserProbeAddress || &pstyle[v9] < pstyle) )
        v4 = 1;
      v10 = (union _FLOAT_LONG *)PALLOCNOZ(4 * a2->cstyle, 1886221639LL);
      v11 = v10;
      if ( v10 )
      {
        memmove(v10, a2->pstyle, 4LL * a2->cstyle);
        a2->pstyle = v11;
      }
      else
      {
        a2->pstyle = 0LL;
        v4 = 0;
      }
    }
    *a1 = a2;
  }
  return v4;
}
