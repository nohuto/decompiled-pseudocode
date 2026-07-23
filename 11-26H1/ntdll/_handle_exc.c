/*
 * XREFs of _handle_exc @ 0x180130A90
 * Callers:
 *     _except1 @ 0x180130900 (_except1.c)
 * Callees:
 *     _decomp @ 0x180131280 (_decomp.c)
 *     _set_statfp @ 0x1801314F0 (_set_statfp.c)
 */

__int64 __fastcall handle_exc(__int64 a1, double *a2, __int16 a3)
{
  int v3; // edi
  unsigned int v4; // r15d
  char v7; // bp
  __int64 v8; // rax
  __int64 v9; // xmm0_8
  unsigned int v10; // ebx
  double v11; // xmm0_8
  int v12; // ecx
  double v13; // xmm0_8
  int v14; // r9d
  unsigned int v15; // eax
  __int64 v16; // r8
  unsigned int v17; // ecx
  int v19; // [rsp+60h] [rbp+8h] BYREF
  double v20; // [rsp+78h] [rbp+20h]

  v3 = a1 & 0x1F;
  v4 = 0;
  v7 = a1;
  if ( (a1 & 8) != 0 && (a3 & 0x80u) != 0 )
  {
    set_statfp(1LL);
    v3 &= ~8u;
    goto LABEL_44;
  }
  if ( (a1 & 4) != 0 && (a3 & 0x200) != 0 )
  {
    set_statfp(4LL);
    v3 &= ~4u;
    goto LABEL_44;
  }
  if ( (a1 & 1) == 0 || (a3 & 0x400) == 0 )
  {
    if ( (a1 & 2) != 0 && (a3 & 0x800) != 0 )
    {
      v10 = ((unsigned int)a1 >> 4) & 1;
      if ( *a2 == 0.0 )
        goto LABEL_42;
      v19 = 0;
      v11 = decomp(a1, &v19);
      v12 = v19 - 1536;
      v20 = v11;
      if ( v19 - 1536 >= -1074 )
      {
        v14 = 0;
        LOBYTE(v14) = v11 < 0.0;
        HIWORD(v20) = BYTE6(v20) & 0xF | 0x10;
        if ( v12 < -1021 )
        {
          v15 = LODWORD(v20);
          v16 = (unsigned int)(-1021 - v12);
          v17 = HIDWORD(v20);
          do
          {
            if ( (v15 & 1) != 0 && !v10 )
              v10 = 1;
            v15 >>= 1;
            LODWORD(v20) = v15;
            if ( (v17 & 1) != 0 )
            {
              v15 |= 0x80000000;
              LODWORD(v20) = v15;
            }
            v17 >>= 1;
            --v16;
          }
          while ( v16 );
          HIDWORD(v20) = v17;
        }
        v13 = v20;
        if ( v14 )
          *(_QWORD *)&v13 = *(_QWORD *)&v20 ^ _xmm;
      }
      else
      {
        v13 = v11 * 0.0;
        v10 = 1;
      }
      *a2 = v13;
      if ( v10 )
LABEL_42:
        set_statfp(16LL);
      v3 &= ~2u;
    }
    goto LABEL_44;
  }
  set_statfp(8LL);
  v8 = a3 & 0x6000;
  if ( (a3 & 0x6000) == 0 )
  {
    if ( *a2 > 0.0 )
    {
      v3 &= ~1u;
      *(_QWORD *)a2 = d_inf;
      goto LABEL_44;
    }
LABEL_22:
    v9 = d_inf ^ _xmm;
    goto LABEL_23;
  }
  if ( v8 == 0x2000 )
  {
    if ( *a2 > 0.0 )
    {
      v3 &= ~1u;
      *(_QWORD *)a2 = d_max;
      goto LABEL_44;
    }
    goto LABEL_22;
  }
  if ( v8 != 0x4000 )
  {
    if ( v8 != 24576 )
    {
LABEL_24:
      v3 &= ~1u;
      goto LABEL_44;
    }
    v9 = d_max;
    if ( *a2 <= 0.0 )
    {
      v3 &= ~1u;
      *(_QWORD *)a2 = d_max ^ _xmm;
      goto LABEL_44;
    }
LABEL_23:
    *(_QWORD *)a2 = v9;
    goto LABEL_24;
  }
  v3 &= ~1u;
  if ( *a2 <= 0.0 )
    *(_QWORD *)a2 = d_max ^ _xmm;
  else
    *(_QWORD *)a2 = d_inf;
LABEL_44:
  if ( (v7 & 0x10) != 0 && (a3 & 0x1000) != 0 )
  {
    set_statfp(32LL);
    v3 &= ~0x10u;
  }
  LOBYTE(v4) = v3 == 0;
  return v4;
}
