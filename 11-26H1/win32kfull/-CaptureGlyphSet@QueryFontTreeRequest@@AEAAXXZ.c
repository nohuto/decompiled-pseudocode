/*
 * XREFs of ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1400D1B40
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z @ 0x140284F10 (-CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1400D1C9C (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z @ 0x1400D1D2C (-TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1400D1DD0 (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall QueryFontTreeRequest::CaptureGlyphSet(QueryFontTreeRequest *this)
{
  __int64 v1; // rsi
  unsigned __int64 v3; // rdi
  unsigned int v4; // r15d
  __int64 *v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // eax
  unsigned int *v8; // rax
  unsigned __int64 *v9; // r8
  unsigned int v10; // r9d
  unsigned int v11; // r11d
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  char v16; // [rsp+70h] [rbp+40h] BYREF
  unsigned int v17; // [rsp+78h] [rbp+48h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+50h] BYREF

  v1 = *((_QWORD *)this + 11);
  if ( v1 )
  {
    v17 = 0;
    v18 = 0;
    if ( QueryFontTreeRequest::TryProbeAndReadUserModeGlyphSet(this, &v17, &v18) )
    {
      v3 = v1 + 16 * (v18 + 1LL);
      if ( v3 >= v1 + 16 )
      {
        v4 = v17;
        if ( v17 >= 16 * ((unsigned __int64)v18 + 1) )
        {
          v5 = (__int64 *)*((_QWORD *)this + 8);
          v16 = 0;
          v6 = *v5;
          v7 = (**(__int64 (__fastcall ***)(QueryFontTreeRequest *))this)(this);
          v8 = (unsigned int *)UmfdAllocation::ObtainKernelmodeAllocation(
                                 v7,
                                 v6,
                                 v1,
                                 v4,
                                 &v16,
                                 QueryFontTreeRequest::TryGlyphSetHasSameContent);
          if ( v8 )
          {
            if ( v16 )
            {
              v9 = (unsigned __int64 *)(v8 + 6);
              *v8 = v17;
              v10 = 0;
              v11 = 0;
              v8[3] = v18;
              v12 = v1 + v17;
              while ( v11 < v18 )
              {
                v13 = *v9;
                if ( *v9 )
                {
                  v14 = *((unsigned __int16 *)v9 - 3);
                  if ( !(_WORD)v14 )
                    goto LABEL_14;
                  if ( v13 >= v12 )
                    goto LABEL_14;
                  if ( v13 < v3 )
                    goto LABEL_14;
                  v15 = v13 + 4 * v14;
                  if ( v15 < v13 )
                    goto LABEL_14;
                  if ( v15 > v12 )
                    goto LABEL_14;
                  *v9 = (unsigned __int64)v8 + v13 - v1;
                  if ( v10 + (unsigned int)v14 < v10 )
                    goto LABEL_14;
                  v10 += v14;
                }
                else if ( *((_WORD *)v9 - 3) )
                {
                  goto LABEL_14;
                }
                ++v11;
                v9 += 2;
              }
              if ( v10 != v8[2] )
              {
LABEL_14:
                UmfdAllocation::ReleaseKernelmodeAllocation(v8);
                return;
              }
            }
            *((_QWORD *)this + 9) = v8;
          }
        }
      }
    }
  }
}
