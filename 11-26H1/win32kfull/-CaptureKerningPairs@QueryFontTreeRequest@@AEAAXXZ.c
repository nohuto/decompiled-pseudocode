/*
 * XREFs of ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x14028433C
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z @ 0x140284F10 (-CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1400D1DD0 (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall QueryFontTreeRequest::CaptureKerningPairs(QueryFontTreeRequest *this)
{
  __int64 v2; // r15
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v6; // rbx
  unsigned int v7; // eax
  char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int16 v12; // [rsp+80h] [rbp+8h] BYREF
  __int16 v13; // [rsp+88h] [rbp+10h] BYREF
  __int16 v14; // [rsp+90h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v3 = 0;
    ProbeForRead(*((volatile void **)this + 11), 6uLL, 2u);
    v12 = 0;
    v13 = 0;
    v14 = 0;
    GreProbeAndReadFromUntrustedVa(&v12, 2uLL, (const void *)v2, 2uLL, 1uLL);
    GreProbeAndReadFromUntrustedVa(&v13, 2uLL, (const void *)(v2 + 2), 2uLL, 1uLL);
    GreProbeAndReadFromUntrustedVa(&v14, 2uLL, (const void *)(v2 + 4), 2uLL, 1uLL);
    while ( v12 || v13 || v14 )
    {
      v10 = v3 + 1;
      if ( (unsigned int)v10 < v3 )
        return;
      ++v3;
      v11 = v2 + 6 * v10;
      ProbeForRead((volatile void *)v11, 6uLL, 2u);
      GreProbeAndReadFromUntrustedVa(&v12, 2uLL, (const void *)v11, 2uLL, 1uLL);
      GreProbeAndReadFromUntrustedVa(&v13, 2uLL, (const void *)(v11 + 2), 2uLL, 1uLL);
      GreProbeAndReadFromUntrustedVa(&v14, 2uLL, (const void *)(v11 + 4), 2uLL, 1uLL);
    }
    v4 = v3 + 1;
    if ( (unsigned int)v4 >= v3 )
    {
      v5 = 6 * v4;
      if ( (unsigned __int64)(6 * v4) <= 0xFFFFFFFF )
      {
        v6 = **((_QWORD **)this + 8);
        v7 = (**(__int64 (__fastcall ***)(QueryFontTreeRequest *))this)(this);
        v8 = UmfdAllocation::ObtainKernelmodeAllocation(
               v7,
               v6,
               (void *)v2,
               v5,
               0LL,
               (__int64)UmfdAllocation::TryBufferHasSameContent);
        if ( v8 )
        {
          v9 = 3LL * v3;
          *(_DWORD *)&v8[2 * v9] = 0;
          *(_WORD *)&v8[2 * v9 + 4] = 0;
          *((_QWORD *)this + 9) = v8;
        }
      }
    }
  }
}
