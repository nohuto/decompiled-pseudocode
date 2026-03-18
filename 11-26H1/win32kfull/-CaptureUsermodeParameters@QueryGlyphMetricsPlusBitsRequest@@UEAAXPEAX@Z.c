/*
 * XREFs of ?CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAXPEAX@Z @ 0x140284FE0
 * Callers:
 *     <none>
 * Callees:
 *     FONTOBJ_bEnsureGlyphCacheBuffer @ 0x140183D8C (FONTOBJ_bEnsureGlyphCacheBuffer.c)
 *     ?ValidateGlyphBitsBuffer@@YA_NKJJKK@Z @ 0x1401E9D88 (-ValidateGlyphBitsBuffer@@YA_NKJJKK@Z.c)
 *     FONTOBJ_AdvanceGlyphCacheBuffer @ 0x1401EDAFC (FONTOBJ_AdvanceGlyphCacheBuffer.c)
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x140284564 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 */

void __fastcall QueryGlyphMetricsPlusBitsRequest::CaptureUsermodeParameters(
        QueryGlyphMetricsPlusBitsRequest *this,
        char *a2)
{
  unsigned int v4; // edx
  char *v5; // r14
  void **v6; // rsi
  _QWORD *v7; // rdi
  void *v8; // r11
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // r9d
  _QWORD *v12; // rcx
  struct _FONTOBJ *v13; // [rsp+30h] [rbp-38h] BYREF
  int v14[2]; // [rsp+38h] [rbp-30h] BYREF
  int v15; // [rsp+78h] [rbp+10h] BYREF
  const void *v16; // [rsp+80h] [rbp+18h] BYREF
  const void *v17; // [rsp+88h] [rbp+20h] BYREF

  v13 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v15 = 0;
  GreProbeAndReadFromUntrustedVa(&v13, 8uLL, a2 + 16, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(&v16, 8uLL, a2 + 24, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(&v17, 8uLL, a2 + 32, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(&v15, 4uLL, a2 + 44, 4uLL, 1uLL);
  if ( v13 != *((struct _FONTOBJ **)this + 13) )
    return;
  if ( !FontDriverDdiRequest::CaptureUsermodeFontObj(*((struct _FONTOBJ **)this + 7), v13) )
    return;
  v4 = v15;
  if ( v15 < 0 )
    return;
  if ( v16 != *((const void **)this + 14) )
    return;
  if ( v17 != *((const void **)this + 15) )
    return;
  if ( (unsigned int)v15 > *((_DWORD *)this + 20) )
    return;
  if ( (unsigned int)v15 < 0x10 )
    return;
  *((_DWORD *)this + 20) = v15;
  *(_QWORD *)v14 = 0LL;
  v5 = (char *)this + 72;
  v6 = (void **)((char *)this + 64);
  if ( !(unsigned int)FONTOBJ_bEnsureGlyphCacheBuffer(
                        *((_QWORD *)this + 7),
                        v4,
                        (struct _GLYPHDATA **)(((unsigned __int64)this + 64) & -(__int64)(*((_QWORD *)this + 11) != 0LL)),
                        (unsigned __int64 *)v14,
                        (struct _GLYPHBITS **)this + 9) )
    return;
  v7 = (_QWORD *)((char *)this + 64);
  if ( *((_QWORD *)this + 11) )
  {
    GreProbeAndReadFromUntrustedVa(*v6, *(unsigned __int64 *)v14, v16, *(unsigned __int64 *)v14, 1uLL);
    v7 = (_QWORD *)((char *)this + 64);
  }
  v8 = *(void **)v5;
  if ( *(_QWORD *)v5 )
  {
    GreProbeAndReadFromUntrustedVa(v8, *((unsigned int *)this + 20), v17, *((unsigned int *)this + 20), 1uLL);
    v9 = *(_DWORD *)(*(_QWORD *)v5 + 8LL);
    v10 = *(_DWORD *)(*((_QWORD *)this + 7) + 12LL);
    if ( (v10 & 0x10000) != 0 )
    {
      if ( (v10 & 0x10000000) != 0 )
        v11 = *(_DWORD *)(*(_QWORD *)v5 + 8LL);
      else
        v11 = (unsigned int)(v9 + 1) >> 1;
    }
    else
    {
      v11 = (unsigned int)(v9 + 7) >> 3;
    }
    if ( !ValidateGlyphBitsBuffer(*((_DWORD *)this + 20), v9, *(_DWORD *)(*(_QWORD *)v5 + 12LL), v11, 0x10u) )
      return;
    v7 = (_QWORD *)((char *)this + 64);
  }
  if ( *v6 )
    *(_QWORD *)*v6 = v8;
  FONTOBJ_AdvanceGlyphCacheBuffer(
    *((_QWORD *)this + 7),
    *((_QWORD *)this + 8),
    *((_QWORD *)this + 9),
    *((_DWORD *)this + 20));
  v12 = (_QWORD *)*((_QWORD *)this + 11);
  if ( v12 )
    *v12 = *v7;
  **((_QWORD **)this + 12) = *((_QWORD *)this + 9);
  *((_DWORD *)this + 21) = v15;
}
