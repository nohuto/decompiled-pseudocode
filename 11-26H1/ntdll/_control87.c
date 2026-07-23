/*
 * XREFs of _control87 @ 0x18012FD30
 * Callers:
 *     _controlfp @ 0x18012FFE0 (_controlfp.c)
 * Callees:
 *     _get_fpsr @ 0x180132510 (_get_fpsr.c)
 *     _set_fpsr @ 0x180132520 (_set_fpsr.c)
 */

unsigned int __cdecl control87(unsigned int NewValue, unsigned int Mask)
{
  unsigned int v3; // edi
  unsigned int fpsr; // eax
  __int16 v5; // r11
  int v6; // r10d
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // edx
  bool v11; // zf
  int v12; // ecx
  unsigned int result; // eax
  int v14; // r11d
  int v15; // r11d
  unsigned int v16; // r8d
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  unsigned int v23; // ebx
  int v24; // r8d
  int v25; // edx
  int v26; // ecx
  int v27; // edx
  int v28; // ecx
  unsigned int v29; // edx
  int v30; // ecx
  int v31; // ebx
  int v32; // ebx

  v3 = Mask & 0x308031F;
  fpsr = get_fpsr();
  v5 = fpsr;
  v6 = (fpsr >> 3) & 0x10 | 8;
  if ( (fpsr & 0x200) == 0 )
    v6 = (fpsr >> 3) & 0x10;
  v7 = v6 | 4;
  if ( (fpsr & 0x400) == 0 )
    v7 = v6;
  v8 = v7 | 2;
  if ( (fpsr & 0x800) == 0 )
    v8 = v7;
  v9 = v8 | 1;
  if ( (fpsr & 0x1000) == 0 )
    v9 = v8;
  v10 = v9 | 0x80000;
  if ( (fpsr & 0x100) == 0 )
    v10 = v9;
  v11 = (fpsr & 0x6000) == 0;
  v12 = fpsr & 0x6000;
  result = v10;
  if ( !v11 )
  {
    switch ( v12 )
    {
      case 8192:
        result = v10 | 0x100;
        break;
      case 16384:
        result = v10 | 0x200;
        break;
      case 24576:
        result = v10 | 0x300;
        break;
    }
  }
  v14 = (v5 & 0x8040) - 64;
  if ( v14 )
  {
    v15 = v14 - 32704;
    if ( v15 )
    {
      if ( v15 == 64 )
        result |= 0x1000000u;
    }
    else
    {
      result |= 0x3000000u;
    }
  }
  else
  {
    result |= 0x2000000u;
  }
  v16 = v3 & NewValue | result & ~v3;
  if ( v16 != result )
  {
    v17 = (8 * (v16 & 0x10)) | 0x200;
    if ( (v16 & 8) == 0 )
      v17 = 8 * (v16 & 0x10);
    v18 = v17 | 0x400;
    if ( (v16 & 4) == 0 )
      v18 = v17;
    v19 = v18 | 0x800;
    if ( (v16 & 2) == 0 )
      v19 = v18;
    v20 = v19 | 0x1000;
    if ( (v16 & 1) == 0 )
      v20 = v19;
    v21 = v20 | 0x100;
    if ( (v16 & 0x80000) == 0 )
      v21 = v20;
    v22 = v16 & 0x300;
    v23 = v21;
    if ( (v16 & 0x300) != 0 )
    {
      switch ( v22 )
      {
        case 256:
          v23 = v21 | 0x2000;
          break;
        case 512:
          v23 = v21 | 0x4000;
          break;
        case 768:
          v23 = v21 | 0x6000;
          break;
      }
    }
    v24 = v16 & 0x3000000;
    switch ( v24 )
    {
      case 16777216:
        v23 |= 0x8040u;
        break;
      case 33554432:
        v23 |= 0x40u;
        break;
      case 50331648:
        v23 |= 0x8000u;
        break;
    }
    if ( `_control87'::`2'::dazSupported && (v23 & 0x40) != 0 )
    {
      set_fpsr(v23);
    }
    else
    {
      v23 &= ~0x40u;
      set_fpsr(v23);
    }
    v25 = (v23 >> 3) & 0x10 | 8;
    if ( (v23 & 0x200) == 0 )
      v25 = (v23 >> 3) & 0x10;
    v26 = v25 | 4;
    if ( (v23 & 0x400) == 0 )
      v26 = v25;
    v27 = v26 | 2;
    if ( (v23 & 0x800) == 0 )
      v27 = v26;
    v28 = v27 | 1;
    if ( (v23 & 0x1000) == 0 )
      v28 = v27;
    v29 = v28 | 0x80000;
    if ( (v23 & 0x100) == 0 )
      v29 = v28;
    v30 = v23 & 0x6000;
    result = v29;
    if ( (v23 & 0x6000) != 0 )
    {
      switch ( v30 )
      {
        case 8192:
          result = v29 | 0x100;
          break;
        case 16384:
          result = v29 | 0x200;
          break;
        case 24576:
          result = v29 | 0x300;
          break;
      }
    }
    v31 = (v23 & 0x8040) - 64;
    if ( v31 )
    {
      v32 = v31 - 32704;
      if ( v32 )
      {
        if ( v32 == 64 )
          result |= 0x1000000u;
      }
      else
      {
        result |= 0x3000000u;
      }
    }
    else
    {
      result |= 0x2000000u;
    }
  }
  return result;
}
