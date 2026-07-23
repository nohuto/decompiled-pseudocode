/*
 * XREFs of KiIntersectFeaturesWithPolicy @ 0x140BFA930
 * Callers:
 *     KiInitializeXSaveConfiguration @ 0x140BFA4A0 (KiInitializeXSaveConfiguration.c)
 * Callees:
 *     KiGetProcessorInformation @ 0x1405F7318 (KiGetProcessorInformation.c)
 *     KiIsXSaveFeatureAllowed @ 0x140BFAAAC (KiIsXSaveFeatureAllowed.c)
 *     KeHwPolicyLocateResource @ 0x140CD0520 (KeHwPolicyLocateResource.c)
 */

void __fastcall KiIntersectFeaturesWithPolicy(int a1, __int64 *a2)
{
  __int64 v2; // r15
  unsigned int v5; // edi
  __int64 v6; // r14
  int Resource; // eax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v9; // r15
  unsigned __int64 v10; // rsi
  __int64 v11; // r13
  __int64 v12; // rax
  unsigned int v13; // r12d
  unsigned int v14; // ecx
  _DWORD *v15; // rax
  char IsXSaveFeatureAllowed; // al
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+98h] [rbp+48h] BYREF
  _DWORD *v21; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0LL;
  v18 = 0LL;
  v5 = 0;
  v19[0] = 0LL;
  v6 = 0LL;
  if ( *a2 )
  {
    v22 = 0LL;
    v17 = 0LL;
    Resource = KeHwPolicyLocateResource(a1, 101, KeXSavePolicyId, (unsigned int)&v22, (__int64)&v17);
    if ( Resource < 0 && KeXSavePolicyId != 1 )
    {
      KeXSavePolicyId = 1LL;
      Resource = KeHwPolicyLocateResource(a1, 101, 1, (unsigned int)&v22, (__int64)&v17);
    }
    if ( Resource == -1073741204 )
    {
      *((_DWORD *)a2 + 5) &= 0xFFFFFFF8;
      a2[67] = 0LL;
    }
    else
    {
      KiGetProcessorInformation(&v18, (_DWORD *)v19 + 1, &v21, &v20);
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = *a2;
      v10 = a2[67] | *a2;
      v19[1] = CurrentPrcb->UpdateSignature.QuadPart;
      if ( v10 )
      {
        v11 = v22;
        do
        {
          if ( v5 >= 0x40 )
            break;
          if ( (v10 & 1) != 0 )
          {
            v12 = *(_QWORD *)(v11 + 16);
            if ( _bittest64(&v12, v5) )
            {
              v13 = 0;
              v20 = *(_DWORD *)(v11 + 24);
              if ( v20 )
              {
                v14 = v20;
                v15 = (_DWORD *)(v11 + 32);
                v21 = (_DWORD *)(v11 + 32);
                do
                {
                  if ( *v15 == v5 )
                  {
                    IsXSaveFeatureAllowed = KiIsXSaveFeatureAllowed(v11, v13, CurrentPrcb, &v18);
                    v14 = v20;
                    if ( IsXSaveFeatureAllowed )
                      _bittestandset64(&v6, v5);
                    v15 = v21;
                  }
                  v15 += 4;
                  ++v13;
                  v21 = v15;
                }
                while ( v13 < v14 );
              }
            }
          }
          ++v5;
          v10 >>= 1;
        }
        while ( v10 );
      }
      v2 = v6 & v9;
      a2[67] &= v6;
    }
    *a2 = v2;
  }
}
