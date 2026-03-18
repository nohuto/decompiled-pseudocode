/*
 * XREFs of ?CaptureUsermodeParameters@LoadFontFileRequest@@UEAAXPEAX@Z @ 0x1402847F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LoadFontFileRequest::CaptureUsermodeParameters(LoadFontFileRequest *this, char *a2)
{
  _DWORD *v4; // rdi
  _OWORD *v5; // rax

  v4 = (_DWORD *)((char *)this + 256);
  GreProbeAndReadFromUntrustedVa((char *)this + 256, 4uLL, a2 + 100, 4uLL, 1uLL);
  GreProbeAndReadFromUntrustedVa((char *)this + 248, 8uLL, a2 + 104, 8uLL, 1uLL);
  if ( *((_QWORD *)this + 31) && *v4 <= 3u )
  {
    v5 = EngAllocMem(0, 0x20u, 0x46464855u);
    *((_QWORD *)this + 33) = v5;
    if ( v5 )
    {
      *v5 = 0LL;
      v5[1] = 0LL;
      *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) = *((_DWORD *)this + 68);
      **((_QWORD **)this + 33) = *((_QWORD *)this + 31);
      *(_DWORD *)(*((_QWORD *)this + 33) + 20LL) = *v4;
      *(_BYTE *)(*((_QWORD *)this + 33) + 24LL) = 0;
    }
  }
}
