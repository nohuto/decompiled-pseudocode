/*
 * XREFs of ?CreateCLIPOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@XZ @ 0x140214BD0
 * Callers:
 *     NtGdiEngCreateClip @ 0x140214B80 (NtGdiEngCreateClip.c)
 * Callees:
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D38E8 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 */

struct _CLIPOBJ *__fastcall UMPDOBJ::CreateCLIPOBJ(UMPDOBJ *this)
{
  CLIPOBJ *v2; // rbx
  void *Clip; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 19) )
  {
    Clip = EngCreateClip();
    v2 = (CLIPOBJ *)Clip;
    if ( Clip )
    {
      if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(this, (UMPDOBJ *)((char *)this + 144), (const void **)&Clip, 0x18u, 0LL) )
        return (struct _CLIPOBJ *)Clip;
      EngDeleteClip(v2);
    }
  }
  return 0LL;
}
