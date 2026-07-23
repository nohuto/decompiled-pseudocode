/*
 * XREFs of KeGetTbSize @ 0x140CD1160
 * Callers:
 *     MiInitializeTbFlushing @ 0x140D05B90 (MiInitializeTbFlushing.c)
 * Callees:
 *     KiGetTbLeafInfo @ 0x140CD12CC (KiGetTbLeafInfo.c)
 */

__int64 KeGetTbSize()
{
  unsigned __int8 CpuVendor; // cl
  unsigned int v17; // r8d
  unsigned int v23; // ecx
  __int64 k; // rdx
  int v25; // eax
  unsigned int i; // edx
  unsigned int v27; // ecx
  __int64 j; // rbx
  int v29; // r8d
  __int128 v30; // [rsp+20h] [rbp-60h]
  _BYTE v31[8]; // [rsp+30h] [rbp-50h]
  __int64 v32; // [rsp+38h] [rbp-48h]
  char v33; // [rsp+40h] [rbp-40h]
  __int64 v34; // [rsp+48h] [rbp-38h]
  char v35; // [rsp+50h] [rbp-30h]
  __int64 v36; // [rsp+58h] [rbp-28h]
  char v37; // [rsp+60h] [rbp-20h]
  __int64 v38; // [rsp+68h] [rbp-18h]
  char v39; // [rsp+70h] [rbp-10h]
  __int64 v40; // [rsp+78h] [rbp-8h]

  v31[0] = -76;
  v34 = 512LL;
  v40 = 512LL;
  v30 = 0LL;
  v32 = 256LL;
  v33 = 100;
  CpuVendor = KeGetCurrentPrcb()->CpuVendor;
  v35 = -63;
  v36 = 1024LL;
  v37 = -61;
  v38 = 1536LL;
  v39 = -54;
  if ( CpuVendor == 1 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX >= 0x80000006 )
    {
      _RAX = 2147483654LL;
      __asm { cpuid }
      return WORD1(_RBX) & 0xFFF;
    }
    return 0LL;
  }
  if ( CpuVendor != 2 )
    return 0LL;
  _RAX = 0LL;
  __asm { cpuid }
  *(_QWORD *)((char *)&v30 + 4) = __PAIR64__(_RCX, _RBX);
  v17 = _RAX;
  HIDWORD(v30) = _RDX;
  if ( (unsigned int)_RAX < 2 )
    return 0LL;
  _RAX = 2LL;
  __asm { cpuid }
  *(_QWORD *)&v30 = __PAIR64__(_RBX, _RAX);
  *((_QWORD *)&v30 + 1) = __PAIR64__(_RDX, _RCX);
  if ( v17 < 0x18 )
    goto LABEL_16;
  v23 = 0;
LABEL_8:
  if ( v23 >= 0x20 )
  {
LABEL_16:
    for ( i = 0; i < 5; ++i )
    {
      v27 = 0;
LABEL_19:
      if ( v27 < 0x20 )
      {
        for ( j = 0LL; ; j = (unsigned int)(j + 1) )
        {
          if ( (unsigned int)j >= 4 )
          {
            v27 += 8;
            goto LABEL_19;
          }
          v29 = *(_DWORD *)&v31[4 * j - 16];
          if ( v29 >= 0 && (unsigned __int8)((unsigned int)v29 >> v27) == (unsigned __int8)v31[16 * i] )
            break;
        }
        return *(&v32 + 2 * i);
      }
    }
    return 0LL;
  }
  for ( k = 0LL; ; k = (unsigned int)(k + 1) )
  {
    if ( (unsigned int)k >= 4 )
    {
      v23 += 8;
      goto LABEL_8;
    }
    v25 = *(_DWORD *)&v31[4 * k - 16];
    if ( v25 >= 0 && (unsigned __int8)((unsigned int)v25 >> v23) == 0xFE )
      break;
  }
  return KiGetTbLeafInfo();
}
