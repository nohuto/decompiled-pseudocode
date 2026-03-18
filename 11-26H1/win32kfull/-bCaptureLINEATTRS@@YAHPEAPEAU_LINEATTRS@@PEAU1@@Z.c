/*
 * XREFs of ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x140291A24
 * Callers:
 *     NtGdiEngStrokeAndFillPath @ 0x14032E7E0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x14032EBB0 (NtGdiEngStrokePath.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x14032FBB0 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall bCaptureLINEATTRS(struct _LINEATTRS **a1, struct _LINEATTRS *a2)
{
  unsigned int v4; // edi
  PFLOAT_LONG pstyle; // rcx
  __int64 cstyle; // rax
  __int64 v8; // r8
  union _FLOAT_LONG *v9; // rax
  union _FLOAT_LONG *v10; // r14

  v4 = 1;
  if ( *a1 )
  {
    GreProbeAndReadFromUntrustedVa(a2, 0x28uLL, *a1, 0x28uLL, 1uLL);
    pstyle = a2->pstyle;
    if ( pstyle )
    {
      cstyle = a2->cstyle;
      if ( (unsigned int)cstyle > 0x9C4000 )
        return 0LL;
      GreProbeForReadFromUntrustedVa(pstyle, 4 * cstyle, 1uLL);
      v9 = (union _FLOAT_LONG *)PALLOCNOZ(4 * a2->cstyle, 1886221639LL, v8);
      v10 = v9;
      if ( v9 )
      {
        memmove(v9, a2->pstyle, 4LL * a2->cstyle);
        a2->pstyle = v10;
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
