/*
 * XREFs of ?CaptureUsermodeParameters@GetTrueTypeFileRequest@@UEAAXPEAX@Z @ 0x140284710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GetTrueTypeFileRequest::CaptureUsermodeParameters(void **this, char *a2)
{
  const void *v4; // [rsp+58h] [rbp+10h] BYREF
  volatile void *Address; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0LL;
  Address = 0LL;
  GreProbeAndReadFromUntrustedVa(&v4, 8uLL, a2 + 8, 8uLL, 1uLL);
  if ( v4 )
  {
    GreProbeAndReadFromUntrustedVa(&Address, 8uLL, a2 + 16, 8uLL, 1uLL);
    if ( v4 == this[8] )
    {
      GreProbeAndReadFromUntrustedVa(this[6], 4uLL, v4, 4uLL, 1uLL);
      ProbeForRead(Address, *(unsigned int *)this[6], 8u);
      this[7] = (void *)Address;
    }
  }
}
