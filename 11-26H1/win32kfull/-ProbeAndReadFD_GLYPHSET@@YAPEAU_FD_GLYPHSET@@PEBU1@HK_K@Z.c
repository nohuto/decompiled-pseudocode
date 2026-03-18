/*
 * XREFs of ?ProbeAndReadFD_GLYPHSET@@YAPEAU_FD_GLYPHSET@@PEBU1@HK_K@Z @ 0x140282A84
 * Callers:
 *     ?UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z @ 0x140283BF0 (-UMPDDrvQueryFontTree@@YAPEAXPEAUDHPDEV__@@_KKKPEAK@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

struct _FD_GLYPHSET *__fastcall ProbeAndReadFD_GLYPHSET(struct _FD_GLYPHSET *Src, int a2, unsigned int a3, __int64 a4)
{
  ULONG *p_cRuns; // rcx
  unsigned int ULongFromUser; // esi
  int v10; // ebx
  ULONG *p_cGlyphsSupported; // rcx
  unsigned int v12; // r13d
  unsigned int v13; // edi
  unsigned int *v14; // rax
  unsigned int *v15; // rbx
  char v16; // r14
  size_t v17; // r8
  unsigned int *v18; // rdi
  unsigned int v19; // r9d
  unsigned int i; // r12d
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // eax
  __int64 v24; // rax
  _BYTE *v25; // rcx
  int v26; // [rsp+28h] [rbp-80h]
  unsigned int v27; // [rsp+34h] [rbp-74h]
  __int64 Size; // [rsp+40h] [rbp-68h]
  __int64 v29; // [rsp+48h] [rbp-60h]
  __int64 v30; // [rsp+50h] [rbp-58h]

  if ( a3 < 0x10 )
    return 0LL;
  if ( !a2 )
    ProbeForRead(Src, 0x10uLL, 8u);
  p_cRuns = &Src->cRuns;
  if ( a2 )
    ULongFromUser = *p_cRuns;
  else
    ULongFromUser = RtlReadULongFromUser(p_cRuns);
  if ( ULongFromUser > (a3 - 16) >> 4 )
    return 0LL;
  v10 = 16 * (ULongFromUser + 1);
  p_cGlyphsSupported = &Src->cGlyphsSupported;
  if ( a2 )
    v12 = *p_cGlyphsSupported;
  else
    v12 = RtlReadULongFromUser(p_cGlyphsSupported);
  if ( v12 > (a3 - v10) >> 2 )
    return 0LL;
  v13 = v10 + 4 * v12;
  if ( v13 > 0x2710000 )
    return 0LL;
  v14 = (unsigned int *)PALLOCMEM(v13, 1886221639LL);
  v15 = v14;
  if ( !v14 )
    return 0LL;
  v16 = 0;
  v26 = 0;
  v17 = 16 * (ULongFromUser + 1LL);
  if ( a2 )
    RtlCopyVolatileMemory(v14, Src, v17);
  else
    RtlCopyFromUser(v14, Src, v17);
  *v15 = v13;
  if ( v15[3] == ULongFromUser && v15[2] == v12 )
  {
    v18 = &v15[4 * ULongFromUser + 4];
    v19 = 0;
    for ( i = 0; i < ULongFromUser; ++i )
    {
      v21 = 4LL * i;
      v30 = v21 * 4;
      v22 = HIWORD(v15[v21 + 4]);
      if ( v12 - v26 < (unsigned int)v22 )
        goto LABEL_36;
      v23 = LOWORD(v15[v21 + 4]);
      if ( v23 < v19 )
        goto LABEL_36;
      v19 = v23 + v22;
      v27 = v23 + v22;
      v26 += v22;
      v24 = *(_QWORD *)&v15[v21 + 6];
      v29 = v24;
      if ( v24 )
      {
        v25 = (_BYTE *)(v24 + a4);
        if ( v24 + a4 < (unsigned __int64)Src )
          goto LABEL_36;
        if ( v25 - (_BYTE *)Src > (unsigned __int64)a3 )
          goto LABEL_36;
        Size = 4 * v22;
        if ( 4 * v22 > (unsigned __int64)Src + a3 - (_QWORD)v25 )
          goto LABEL_36;
        if ( a2 )
        {
          RtlCopyVolatileMemory(v18, v25, 4 * v22);
        }
        else
        {
          ProbeForRead(v25, 4 * v22, 4u);
          RtlCopyFromUser(v18, (void *)(a4 + v29), Size);
        }
        *(_QWORD *)((char *)v15 + v30 + 24) = v18;
        v18 += *(unsigned __int16 *)((char *)v15 + v30 + 18);
        v19 = v27;
      }
    }
    v16 = 1;
  }
LABEL_36:
  if ( !v16 )
  {
    Win32FreePool(v15);
    return 0LL;
  }
  return (struct _FD_GLYPHSET *)v15;
}
