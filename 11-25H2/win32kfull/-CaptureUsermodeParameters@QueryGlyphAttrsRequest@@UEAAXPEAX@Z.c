/*
 * XREFs of ?CaptureUsermodeParameters@QueryGlyphAttrsRequest@@UEAAXPEAX@Z @ 0x1403412D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x1400FD7B4 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 *     ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1401AC084 (-Win32ProbeForRead@@YAXPEAX_KK@Z.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

void __fastcall QueryGlyphAttrsRequest::CaptureUsermodeParameters(QueryGlyphAttrsRequest *this, struct _FONTOBJ **a2)
{
  struct _FONTOBJ *v4; // rdx
  struct _FONTOBJ *v5; // rdi
  size_t iUniq; // rsi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // ecx

  v4 = *a2;
  v5 = a2[2];
  if ( v4 == *((struct _FONTOBJ **)this + 8) )
  {
    if ( FontDriverDdiRequest::CaptureUsermodeFontObj(*((struct _FONTOBJ **)this + 5), v4) )
    {
      if ( v5 )
      {
        Win32ProbeForRead(v5, 16LL, 8);
        iUniq = v5->iUniq;
        if ( (unsigned int)iUniq >= 0x10 )
        {
          Win32ProbeForRead(v5, iUniq, 8);
          v7 = EngAllocMem(0, iUniq, 0x74614446u);
          v8 = v7;
          if ( v7 )
          {
            memmove(v7, v5, iUniq);
            *v8 = iUniq;
            v9 = v8[1];
            if ( v9 + 7 >= v9 && (v10 = ((v9 + 7) >> 3) + 12, v10 >= 0xC) && v10 == (_DWORD)iUniq )
              *((_QWORD *)this + 7) = v8;
            else
              EngFreeMem(v8);
          }
        }
      }
    }
  }
}
