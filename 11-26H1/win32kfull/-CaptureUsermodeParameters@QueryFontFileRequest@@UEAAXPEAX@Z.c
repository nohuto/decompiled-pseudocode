/*
 * XREFs of ?CaptureUsermodeParameters@QueryFontFileRequest@@UEAAXPEAX@Z @ 0x140284C60
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x14034FF00 (memmove.c)
 */

void __fastcall QueryFontFileRequest::CaptureUsermodeParameters(QueryFontFileRequest *this, char *a2)
{
  int v4; // ecx
  int v5; // [rsp+48h] [rbp+10h] BYREF
  void *Src; // [rsp+50h] [rbp+18h] BYREF

  Src = 0LL;
  v5 = 0;
  GreProbeAndReadFromUntrustedVa(&Src, 8uLL, a2 + 16, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(&v5, 4uLL, a2 + 24, 4uLL, 1uLL);
  v4 = v5;
  if ( v5 >= 0 && Src == *((void **)this + 9) )
  {
    if ( *((_DWORD *)this + 12) == 1 )
    {
      if ( (v5 & 1) != 0 )
        return;
      if ( *((_QWORD *)this + 7) )
      {
        if ( (unsigned int)v5 > *((_DWORD *)this + 13) )
          return;
        if ( v5 > 0 )
        {
          memmove(*((void **)this + 7), Src, v5);
          *(_WORD *)(*((_QWORD *)this + 7) + 2 * ((unsigned __int64)v5 >> 1) - 2) = 0;
          v4 = v5;
        }
      }
    }
    else if ( *((_DWORD *)this + 12) != 2 )
    {
      return;
    }
    *((_DWORD *)this + 16) = v4;
  }
}
