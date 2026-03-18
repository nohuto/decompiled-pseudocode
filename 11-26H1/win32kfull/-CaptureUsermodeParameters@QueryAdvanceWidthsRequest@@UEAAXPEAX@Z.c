/*
 * XREFs of ?CaptureUsermodeParameters@QueryAdvanceWidthsRequest@@UEAAXPEAX@Z @ 0x1402848F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x140284564 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 */

void __fastcall QueryAdvanceWidthsRequest::CaptureUsermodeParameters(QueryAdvanceWidthsRequest *this, char *a2)
{
  int v4; // ebx
  const void *v5; // r8
  const void *v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+78h] [rbp+10h] BYREF
  struct _FONTOBJ *v8; // [rsp+80h] [rbp+18h] BYREF
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v6 = 0LL;
  v7 = 0;
  GreProbeAndReadFromUntrustedVa(&v8, 8uLL, a2 + 8, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(&v9, 8uLL, a2 + 24, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(&v6, 8uLL, a2 + 32, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(&v7, 4uLL, a2 + 44, 4uLL, 1uLL);
  if ( v8 == *((struct _FONTOBJ **)this + 11) )
  {
    if ( FontDriverDdiRequest::CaptureUsermodeFontObj(*((struct _FONTOBJ **)this + 6), v8) )
    {
      LOBYTE(v4) = *((_DWORD *)this + 14) != 1;
      if ( v7 != v4 - 1 && v9 == *((_QWORD *)this + 12) )
      {
        v5 = (const void *)*((_QWORD *)this + 13);
        if ( v6 == v5 )
        {
          GreProbeAndReadFromUntrustedVa(
            *((void **)this + 9),
            2LL * *((unsigned int *)this + 20),
            v5,
            2LL * *((unsigned int *)this + 20),
            1uLL);
          *((_DWORD *)this + 21) = v7;
        }
      }
    }
  }
}
