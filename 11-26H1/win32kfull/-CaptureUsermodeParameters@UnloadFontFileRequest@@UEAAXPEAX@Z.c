/*
 * XREFs of ?CaptureUsermodeParameters@UnloadFontFileRequest@@UEAAXPEAX@Z @ 0x140285610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UnloadFontFileRequest::CaptureUsermodeParameters(UnloadFontFileRequest *this, char *a2)
{
  GreProbeAndReadFromUntrustedVa((char *)this + 48, 4uLL, a2 + 8, 4uLL, 1uLL);
}
