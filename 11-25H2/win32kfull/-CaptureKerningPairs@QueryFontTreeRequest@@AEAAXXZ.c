/*
 * XREFs of ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x1401A3744
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z @ 0x14010AC90 (-CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1400B284C (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

void __fastcall QueryFontTreeRequest::CaptureKerningPairs(QueryFontTreeRequest *this)
{
  unsigned __int64 v2; // rdi
  unsigned int v3; // edx
  _QWORD *v4; // r8
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // r14d
  __int64 v10; // rbx
  unsigned int v11; // eax
  char *v12; // rax
  unsigned int v13; // [rsp+30h] [rbp-28h]

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v3 = 0;
    if ( (v2 & 1) != 0 )
LABEL_17:
      ExRaiseDatatypeMisalignment();
    v4 = (_QWORD *)MmUserProbeAddress;
    if ( v2 + 6 > MmUserProbeAddress || v2 + 6 < v2 )
    {
      v3 = 0;
      v4 = (_QWORD *)MmUserProbeAddress;
    }
    while ( 1 )
    {
      v5 = 3LL * v3;
      if ( !*(_WORD *)(v2 + 6LL * v3) && !*(_WORD *)(v2 + 6LL * v3 + 2) && !*(_WORD *)(v2 + 6LL * v3 + 4) )
        break;
      v6 = v3 + 1;
      if ( (unsigned int)v6 < v3 )
        return;
      ++v3;
      v13 = v6;
      v7 = v2 + 6 * v6;
      if ( (v7 & 1) != 0 )
        goto LABEL_17;
      if ( v7 + 6 > *v4 || v7 + 6 < v7 )
      {
        v3 = v13;
        v4 = (_QWORD *)MmUserProbeAddress;
      }
    }
    v8 = v3 + 1;
    if ( (unsigned int)v8 >= v3 )
    {
      v9 = 6 * v8;
      if ( (unsigned __int64)(6 * v8) <= 0xFFFFFFFF )
      {
        v10 = **((_QWORD **)this + 8);
        v11 = (**(__int64 (__fastcall ***)(QueryFontTreeRequest *))this)(this);
        v12 = UmfdAllocation::ObtainKernelmodeAllocation(
                v11,
                v10,
                (void *)v2,
                v9,
                0LL,
                (__int64)UmfdAllocation::TryBufferHasSameContent);
        if ( v12 )
        {
          *(_DWORD *)&v12[2 * v5] = 0;
          *(_WORD *)&v12[2 * v5 + 4] = 0;
          *((_QWORD *)this + 9) = v12;
        }
      }
    }
  }
}
