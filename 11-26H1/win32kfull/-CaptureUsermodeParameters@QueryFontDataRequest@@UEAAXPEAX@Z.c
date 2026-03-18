/*
 * XREFs of ?CaptureUsermodeParameters@QueryFontDataRequest@@UEAAXPEAX@Z @ 0x140284A20
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateGlyphBitsBuffer@@YA_NKJJKK@Z @ 0x1401E9D88 (-ValidateGlyphBitsBuffer@@YA_NKJJKK@Z.c)
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x140284564 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 */

void __fastcall QueryFontDataRequest::CaptureUsermodeParameters(QueryFontDataRequest *this, char *a2)
{
  unsigned int v4; // edi
  const void *v5; // r8
  void *v6; // rcx
  const void **v7; // rcx
  const void *v8; // rax
  void *v9; // rcx
  unsigned __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  _DWORD *v13; // rdx
  int v14; // r10d
  unsigned int v15; // r9d
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // r9d
  struct _FONTOBJ *v19; // [rsp+30h] [rbp-28h] BYREF
  int v20; // [rsp+68h] [rbp+10h] BYREF
  const void *v21; // [rsp+70h] [rbp+18h] BYREF
  const void *v22; // [rsp+78h] [rbp+20h] BYREF

  v19 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v20 = 0;
  GreProbeAndReadFromUntrustedVa(&v19, 8uLL, a2 + 16, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(&v22, 8uLL, a2 + 24, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(&v21, 8uLL, a2 + 32, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(&v20, 4uLL, a2 + 44, 4uLL, 1uLL);
  if ( v19 == *((struct _FONTOBJ **)this + 11) )
  {
    if ( FontDriverDdiRequest::CaptureUsermodeFontObj(*((struct _FONTOBJ **)this + 7), v19) )
    {
      v4 = v20;
      if ( v20 >= 0 )
      {
        v5 = v21;
        if ( v21 == *((const void **)this + 13) )
        {
          v6 = (void *)*((_QWORD *)this + 8);
          if ( v6 )
          {
            if ( v22 != *((const void **)this + 12) )
              return;
            GreProbeAndReadFromUntrustedVa(v6, 0x40uLL, v22, 0x40uLL, 1uLL);
            v7 = (const void **)*((_QWORD *)this + 8);
            if ( *v7 == v21 )
              v8 = (const void *)*((_QWORD *)this + 9);
            else
              v8 = 0LL;
            *v7 = v8;
            v5 = v21;
          }
          else if ( v22 )
          {
            return;
          }
          v9 = (void *)*((_QWORD *)this + 9);
          if ( !v9 )
            goto LABEL_27;
          v10 = *((unsigned int *)this + 20);
          if ( !(_DWORD)v10 )
            goto LABEL_27;
          v11 = *((_DWORD *)this + 12);
          if ( v11 == 2 )
            goto LABEL_27;
          if ( v4 <= (unsigned int)v10 && (v11 != 3 || v4 == 124) )
          {
            GreProbeAndReadFromUntrustedVa(v9, *((unsigned int *)this + 20), v5, v10, 1uLL);
            v12 = *((_DWORD *)this + 12);
            if ( v12 != 3 )
            {
              v13 = (_DWORD *)*((_QWORD *)this + 8);
              if ( v13 )
              {
                v14 = v13[10] - v13[8];
                v15 = 0;
                v16 = v12 - 5;
                if ( v16 )
                {
                  v17 = v16 - 1;
                  if ( v17 && (unsigned int)(v17 - 2) > 1 )
                  {
LABEL_26:
                    if ( !ValidateGlyphBitsBuffer(*((_DWORD *)this + 20), v14, v13[11] - v13[9], v15, 0) )
                      return;
                    goto LABEL_27;
                  }
                  v18 = v14 + 3;
                }
                else
                {
                  v18 = ((unsigned int)(v14 + 7) >> 3) + 3;
                }
                v15 = v18 & 0xFFFFFFFC;
                goto LABEL_26;
              }
            }
LABEL_27:
            *((_DWORD *)this + 21) = v20;
          }
        }
      }
    }
  }
}
