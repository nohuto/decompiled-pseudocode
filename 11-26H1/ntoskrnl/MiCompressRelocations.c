/*
 * XREFs of MiCompressRelocations @ 0x1409F0C40
 * Callers:
 *     MiRelocateValidateFixups @ 0x14099C24C (MiRelocateValidateFixups.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCompressRelocations(__int64 a1, int a2)
{
  __int64 v2; // rbp
  char v3; // r15
  char v5; // bl
  __int64 v7; // r9
  __int64 v8; // rax
  _WORD *v9; // rdi
  unsigned __int16 v10; // r10
  __int16 v11; // si
  unsigned int v12; // r8d
  unsigned int v13; // r11d
  __int16 v14; // dx
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // dx
  __int16 v17; // ax
  __int64 v18; // rax
  unsigned int v19; // ecx
  bool v20; // cf
  bool v21; // zf
  __int64 v22; // rdi
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  __int64 v25; // r12
  _DWORD *v26; // rcx
  _QWORD *v27; // rsi
  unsigned int v28; // ebp
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // r14
  __int64 v31; // r11
  __int64 v32; // r13
  __int64 v33; // r15
  unsigned __int64 v34; // rax
  __int64 v36; // rax
  __int16 *v37; // rdx
  __int16 v38; // r9
  __int16 v39; // di
  unsigned int v40; // ebx
  unsigned int v41; // r10d
  __int16 v42; // ax
  __int16 v43; // r8
  unsigned __int16 v44; // cx
  __int64 v45; // rax
  __int64 v46; // [rsp+20h] [rbp-58h]
  int v48; // [rsp+90h] [rbp+18h]
  __int64 v49; // [rsp+98h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v5 = 0;
  v7 = 0LL;
  do
  {
    v8 = *(unsigned int *)(v2 + 4);
    v9 = (_WORD *)(v2 + 8);
    a2 -= v8;
    v2 += v8;
    v10 = 0;
    v11 = 4;
    v12 = 0;
    v13 = (unsigned int)(v8 - 8) >> 1;
    while ( v13 )
    {
      v14 = *v9 >> 12;
      if ( v14 )
      {
        if ( v5 != (_BYTE)v14 )
        {
          if ( v3 )
            return a1;
          v5 = v14;
          v3 = 1;
        }
        v15 = *v9 & 0xFFF;
        v16 = v15;
        if ( v15 <= v10 && v10 )
          return a1;
        v17 = v15 - v10;
        if ( v17 == v11 )
        {
          v18 = v7 + 2;
          v19 = v12 + 1;
          v10 = v16;
          if ( v12 != 254 )
            v18 = v7;
          v7 = v18;
          v21 = v12 == 254;
          v12 = 0;
          if ( !v21 )
            v12 = v19;
          ++v9;
          --v13;
        }
        else
        {
          if ( v12 )
          {
            v20 = v12 < 4;
            v21 = v12 == 4;
            v12 = 0;
            v7 += (!v20 && !v21) + 1LL;
          }
          v11 = v17;
          if ( (unsigned __int16)v17 >= 0xEBu )
            v7 += 2LL;
          else
            ++v7;
          ++v9;
          v10 = v16;
          --v13;
        }
      }
      else
      {
        ++v9;
        --v13;
      }
    }
    if ( v12 )
    {
      if ( v12 <= 4 )
        ++v7;
      else
        v7 += 2LL;
    }
    v7 += (v7 & 1) + 2;
  }
  while ( a2 );
  if ( v3 )
  {
    v22 = v7 + 8LL * *(unsigned int *)(a1 + 56);
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = ExAllocatePoolMm(256LL, v22 + 104, 1699900749, CurrentProcessorColor | 0x80000000);
    v46 = PoolMm;
    v25 = PoolMm;
    if ( PoolMm )
    {
      v26 = (_DWORD *)a1;
      v27 = (_QWORD *)(PoolMm + 104);
      v28 = 0;
      v29 = *(_QWORD *)(a1 + 32) - *(_QWORD *)a1;
      *(_OWORD *)PoolMm = *(_OWORD *)a1;
      v30 = v29 >> 3;
      v48 = v30;
      *(_OWORD *)(PoolMm + 16) = *(_OWORD *)(a1 + 16);
      *(_OWORD *)(PoolMm + 32) = *(_OWORD *)(a1 + 32);
      *(_OWORD *)(PoolMm + 48) = *(_OWORD *)(a1 + 48);
      *(_OWORD *)(PoolMm + 64) = *(_OWORD *)(a1 + 64);
      *(_OWORD *)(PoolMm + 80) = *(_OWORD *)(a1 + 80);
      *(_QWORD *)(PoolMm + 96) = *(_QWORD *)(a1 + 96);
      *(_BYTE *)(PoolMm + 64) = v5;
      *(_QWORD *)PoolMm = PoolMm + 104;
      v31 = PoolMm + 104 + 8LL * *(unsigned int *)(a1 + 56);
      *(_QWORD *)(PoolMm + 32) = v31;
      v32 = *(_QWORD *)(a1 + 32);
      if ( !(_DWORD)v30 )
      {
LABEL_30:
        ExFreePoolWithTag(v26, 0);
        return v25;
      }
      v33 = a1 - PoolMm;
      v49 = a1 - PoolMm;
      while ( 1 )
      {
        if ( v28 < v26[14] )
        {
          v34 = *(_QWORD *)((char *)v27 + v33);
          if ( v34 > 1 )
          {
            *v27 = v31;
            if ( (*((_BYTE *)v27 + v33) & 1) != 0 )
              *v27 = v31 | 1;
            v36 = *(unsigned int *)(v32 + 4);
            v37 = (__int16 *)(v32 + 8);
            v32 += v36;
            v38 = 0;
            v39 = 4;
            v40 = 0;
            v41 = (unsigned int)(v36 - 8) >> 1;
            if ( !v41 )
            {
LABEL_47:
              v26 = (_DWORD *)a1;
              *(_WORD *)v31 = 240;
              v31 += 2LL;
              if ( (v31 & 1) != 0 )
                ++v31;
              goto LABEL_28;
            }
            while ( 2 )
            {
              v42 = *v37;
              if ( (unsigned __int16)*v37 >= 0x1000u )
              {
                v43 = v42 & 0xFFF;
                v44 = (v42 & 0xFFF) - v38;
                if ( v44 == v39 )
                {
                  if ( ++v40 == 255 )
                  {
                    *(_WORD *)v31 = -17;
                    v40 = 0;
                    goto LABEL_43;
                  }
                }
                else
                {
                  if ( v40 )
                  {
                    if ( v40 > 4 )
                    {
                      *(_BYTE *)v31 = -17;
                      v45 = 2LL;
                      *(_BYTE *)(v31 + 1) = v40;
                    }
                    else
                    {
                      *(_BYTE *)v31 = -17 - v40;
                      v45 = 1LL;
                    }
                    v40 = 0;
                    v31 += v45;
                  }
                  v39 = v44;
                  if ( v44 >= 0xEBu )
                  {
                    *(_BYTE *)v31 = v44 | 0xF0;
                    *(_BYTE *)(v31 + 1) = v44 >> 4;
LABEL_43:
                    v31 += 2LL;
                  }
                  else
                  {
                    *(_BYTE *)v31++ = v44;
                  }
                }
                v38 = v43;
              }
              ++v37;
              if ( !--v41 )
              {
                LODWORD(v30) = v48;
                v33 = v49;
                if ( v40 )
                {
                  if ( v40 <= 4 )
                  {
                    *(_BYTE *)v31++ = -17 - v40;
                  }
                  else
                  {
                    *(_BYTE *)v31 = -17;
                    *(_BYTE *)(v31 + 1) = v40;
                    v31 += 2LL;
                  }
                }
                goto LABEL_47;
              }
              continue;
            }
          }
          *v27 = v34;
        }
LABEL_28:
        ++v28;
        ++v27;
        if ( v28 >= (unsigned int)v30 )
        {
          v25 = v46;
          goto LABEL_30;
        }
      }
    }
  }
  return a1;
}
