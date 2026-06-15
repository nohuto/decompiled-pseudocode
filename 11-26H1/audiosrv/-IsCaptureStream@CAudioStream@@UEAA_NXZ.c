/*
 * XREFs of ?IsCaptureStream@CAudioStream@@UEAA_NXZ @ 0x180082530
 * Callers:
 *     ?IsCaptureStream@CAudioStream@@W7EAA_NXZ @ 0x180112AE0 (-IsCaptureStream@CAudioStream@@W7EAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CAudioStream::IsCaptureStream(CAudioStream *this)
{
  int v1; // eax
  char v2; // cl

  v1 = *((_DWORD *)this + 99);
  v2 = 1;
  if ( v1 != 1 )
    return (unsigned int)(v1 - 2) <= 1;
  return v2;
}
