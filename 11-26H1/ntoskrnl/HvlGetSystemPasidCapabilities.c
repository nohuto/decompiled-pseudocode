/*
 * XREFs of HvlGetSystemPasidCapabilities @ 0x1405BFA20
 * Callers:
 *     HvlpInitializeSvmIommuSupport @ 0x1405C3864 (HvlpInitializeSvmIommuSupport.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14032D8C0 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x14032D9A0 (HvlpAcquireHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14032DB30 (HvcallInitiateHypercall.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1404DF8B8 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviGetHardwareFeatures @ 0x1404DF900 (HviGetHardwareFeatures.c)
 *     HvlpGetRegister128 @ 0x1405C3FD0 (HvlpGetRegister128.c)
 *     HviGetHypervisorFeatures @ 0x1406E09D0 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlGetSystemPasidCapabilities(__int64 a1)
{
  __int64 result; // rax
  char v3; // dl
  unsigned int v4; // ecx
  int v5; // eax
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdx
  _DWORD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int128 v16; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h]
  __int64 v19; // [rsp+48h] [rbp-B8h]
  __int128 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v22; // [rsp+68h] [rbp-98h]
  __int128 v23; // [rsp+70h] [rbp-90h] BYREF
  __int128 v24; // [rsp+80h] [rbp-80h] BYREF
  __int128 v25; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v26[32]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v27[2064]; // [rsp+C0h] [rbp-40h] BYREF

  v21 = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  LODWORD(v22) = 0;
  v18 = 0LL;
  LODWORD(v19) = 0;
  result = (unsigned int)HvlEnlightenments;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v20 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  if ( (HvlEnlightenments & 0x80u) != 0 )
  {
    result = HviGetHypervisorFeatures(&v24);
    if ( (HIDWORD(v24) & 0x10000) != 0 )
    {
      result = HviGetHypervisorVendorAndMaxFunction(&v25);
      if ( (unsigned int)v25 >= 0x40000008 )
      {
        result = HvlpGetRegister128(517LL, &v16);
        v3 = v16;
        v4 = ((unsigned int)v16 >> 1) & 1;
        if ( v4 || (v16 & 1) != 0 )
        {
          *(_DWORD *)(a1 + 4) = (unsigned int)v16 >> 11;
          if ( v4 )
            *(_DWORD *)a1 |= 4u;
          if ( (v3 & 1) != 0 )
          {
            v5 = DWORD1(v16);
            *(_DWORD *)a1 |= 1u;
            *(_DWORD *)(a1 + 8) = v5;
          }
          result = HvlpFlags;
          if ( (HvlpFlags & 2) != 0 )
          {
            HviGetHardwareFeatures((__int64)&v23);
            if ( (v23 & 0x80u) == 0LL )
              *(_DWORD *)a1 |= 2u;
            v6 = HvlpAcquireHypercallPage((__int64)&v20, 1, (__int64)v26, 16LL);
            v7 = HvlpAcquireHypercallPage((__int64)&v17, 2, (__int64)v27, 1032LL);
            v8 = v22;
            *(_OWORD *)v6 = 0LL;
            *(_DWORD *)v6 = 11;
            v9 = v7;
            if ( !(unsigned __int16)HvcallInitiateHypercall(123LL, v8) )
            {
              *(_DWORD *)(a1 + 12) = *v9;
              *(_DWORD *)(a1 + 16) = v9[1];
            }
            HvlpReleaseHypercallPage((unsigned int *)&v17, v10, v11, v12);
            return HvlpReleaseHypercallPage((unsigned int *)&v20, v13, v14, v15);
          }
        }
      }
    }
  }
  return result;
}
