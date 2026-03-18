/*
 * XREFs of ?CaptureUsermodeParameters@FontManagementRequest@@UEAAXPEAX@Z @ 0x1402845E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z @ 0x140284564 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KA_NPEAU_FONTOBJ@@0@Z.c)
 */

void __fastcall FontManagementRequest::CaptureUsermodeParameters(FontManagementRequest *this, char *a2)
{
  struct _FONTOBJ *v4; // rcx
  void *v5; // rcx
  struct _FONTOBJ *v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  const void *v8; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  v6 = 0LL;
  GreProbeAndReadFromUntrustedVa(&v7, 8uLL, a2 + 24, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(&v8, 8uLL, a2 + 40, 8uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa(&v6, 8uLL, a2 + 8, 8uLL, 1uLL);
  v4 = (struct _FONTOBJ *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    if ( v6 != *((struct _FONTOBJ **)this + 12) || !FontDriverDdiRequest::CaptureUsermodeFontObj(v4, v6) )
      return;
  }
  else if ( v6 )
  {
    return;
  }
  if ( v7 == *((_QWORD *)this + 13) && v8 == *((const void **)this + 14) )
  {
    v5 = (void *)*((_QWORD *)this + 10);
    if ( v5 )
      GreProbeAndReadFromUntrustedVa(v5, *((unsigned int *)this + 18), v8, *((unsigned int *)this + 18), 1uLL);
    GreProbeAndReadFromUntrustedVa((char *)this + 88, 4uLL, a2 + 48, 4uLL, 1uLL);
  }
}
