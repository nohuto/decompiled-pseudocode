/*
 * XREFs of ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x140284D50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1400D1C9C (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1400D1DD0 (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1401C3600 (-ValidateIFIMETRICS@@YA_NPEAU_IFIMETRICS@@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall QueryFontRequest::CaptureUsermodeParameters(void **this, char *a2)
{
  const void **v4; // rdi
  volatile void *v5; // rcx
  unsigned int v6; // esi
  void *v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // eax
  struct _IFIMETRICS *v10; // rax
  char *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // [rsp+68h] [rbp+10h] BYREF
  ULONG v15; // [rsp+70h] [rbp+18h] BYREF
  const void *v16; // [rsp+78h] [rbp+20h] BYREF

  v16 = 0LL;
  GreProbeAndReadFromUntrustedVa(&v16, 8uLL, a2 + 24, 8uLL, 1uLL);
  v4 = (const void **)(this + 11);
  GreProbeAndReadFromUntrustedVa(this + 11, 8uLL, a2 + 32, 8uLL, 1uLL);
  if ( v16 == this[10] )
  {
    GreProbeAndReadFromUntrustedVa(this[8], 8uLL, v16, 8uLL, 1uLL);
    v5 = (volatile void *)*v4;
    if ( *v4 )
    {
      v14 = 0;
      v15 = 0;
      ProbeForRead(v5, 0xC0uLL, 8u);
      GreProbeAndReadFromUntrustedVa(&v14, 4uLL, *v4, 4uLL, 1uLL);
      GreProbeAndReadFromUntrustedVa(&v15, 4uLL, (char *)*v4 + 4, 4uLL, 1uLL);
      v6 = v14;
      if ( v14 >= 0xB6 && (!v15 || v14 >= 0xC0 && v15 < v14 && v14 - v15 >= 0xC0) )
      {
        v7 = (void *)*v4;
        v8 = *(_QWORD *)this[8];
        v9 = (*(__int64 (__fastcall **)(void **))*this)(this);
        v10 = (struct _IFIMETRICS *)UmfdAllocation::ObtainKernelmodeAllocation(
                                      v9,
                                      v8,
                                      v7,
                                      v6,
                                      0LL,
                                      (__int64)UmfdAllocation::TryBufferHasSameContent);
        v11 = (char *)v10;
        if ( v10 )
        {
          v10->cjThis = v14;
          v10->cjIfiExtra = v15;
          if ( ValidateIFIMETRICS(v10) )
            this[9] = v11;
          else
            UmfdAllocation::ReleaseKernelmodeAllocation(v11, v12, v13);
        }
      }
    }
  }
}
