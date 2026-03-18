/*
 * XREFs of ?CreateCLIPOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@XZ @ 0x1402495E0
 * Callers:
 *     NtGdiEngCreateClip @ 0x140249590 (NtGdiEngCreateClip.c)
 * Callees:
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z @ 0x1400D7414 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXKPEAX@Z.c)
 */

struct _CLIPOBJ *__fastcall UMPDOBJ::CreateCLIPOBJ(UMPDOBJ *this)
{
  struct _DDIOBJMAP *v1; // rsi
  CLIPOBJ *v3; // rbx
  void *Clip; // [rsp+40h] [rbp+8h] BYREF

  v1 = (UMPDOBJ *)((char *)this + 128);
  if ( !*((_QWORD *)this + 17) )
  {
    Clip = EngCreateClip();
    v3 = (CLIPOBJ *)Clip;
    if ( Clip )
    {
      if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(this, v1, &Clip, 0x18u, 0LL) )
        return (struct _CLIPOBJ *)Clip;
      EngDeleteClip(v3);
    }
  }
  return 0LL;
}
