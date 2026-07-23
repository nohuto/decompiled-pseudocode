/*
 * XREFs of RtlpCopyContext @ 0x180034DC0
 * Callers:
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x180036C00 (RtlDispatchException.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCopyContext(__int64 a1, __int64 a2)
{
  int v3; // eax
  char *v4; // r10
  __int64 result; // rax
  _OWORD *v6; // rcx
  unsigned int v7; // r11d
  _DWORD *v8; // rbx
  __int64 v9; // rdi
  char *v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // eax
  char *v13; // rbx
  _DWORD *v14; // rdi
  __int64 v15; // rsi
  char *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r10

  if ( a2 != a1 )
  {
    v3 = *(_DWORD *)(a1 + 48);
    v4 = 0LL;
    *(_DWORD *)(a1 + 48) = 0;
    if ( (*(_DWORD *)(a2 + 48) & v3 & 0x100040) != 0x100040 )
    {
LABEL_3:
      *(_DWORD *)(a1 + 48) |= *(_DWORD *)(a2 + 48) & 0x10000F;
      *(_QWORD *)(a1 + 248) = *(_QWORD *)(a2 + 248);
      *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
      *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
      *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 160);
      *(_QWORD *)(a1 + 168) = *(_QWORD *)(a2 + 168);
      *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 176);
      *(_QWORD *)(a1 + 216) = *(_QWORD *)(a2 + 216);
      *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 224);
      *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 232);
      *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 240);
      *(_OWORD *)(a1 + 512) = *(_OWORD *)(a2 + 512);
      *(_OWORD *)(a1 + 528) = *(_OWORD *)(a2 + 528);
      *(_OWORD *)(a1 + 544) = *(_OWORD *)(a2 + 544);
      *(_OWORD *)(a1 + 560) = *(_OWORD *)(a2 + 560);
      *(_OWORD *)(a1 + 576) = *(_OWORD *)(a2 + 576);
      *(_OWORD *)(a1 + 592) = *(_OWORD *)(a2 + 592);
      *(_OWORD *)(a1 + 608) = *(_OWORD *)(a2 + 608);
      *(_OWORD *)(a1 + 624) = *(_OWORD *)(a2 + 624);
      *(_OWORD *)(a1 + 640) = *(_OWORD *)(a2 + 640);
      *(_OWORD *)(a1 + 656) = *(_OWORD *)(a2 + 656);
      *(_WORD *)(a1 + 56) = *(_WORD *)(a2 + 56);
      *(_WORD *)(a1 + 66) = *(_WORD *)(a2 + 66);
      *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
      *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 68);
      result = a2 + 256;
      v6 = (_OWORD *)(a1 + 256);
      *v6 = *(_OWORD *)(a2 + 256);
      v6[1] = *(_OWORD *)(a2 + 272);
      v6[2] = *(_OWORD *)(a2 + 288);
      v6[3] = *(_OWORD *)(a2 + 304);
      v6[4] = *(_OWORD *)(a2 + 320);
      v6[5] = *(_OWORD *)(a2 + 336);
      v6[6] = *(_OWORD *)(a2 + 352);
      v6[7] = *(_OWORD *)(a2 + 368);
      v6[8] = *(_OWORD *)(a2 + 384);
      v6[9] = *(_OWORD *)(a2 + 400);
      return result;
    }
    v7 = 576;
    *(_DWORD *)(a1 + 48) = 1048640;
    v8 = (_DWORD *)(a2 + 1232);
    if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x800) != 0 && (MEMORY[0x7FFE03EC] & 0xFFFFFFF8) == 0 )
    {
      v9 = *(int *)(a2 + 1248);
      if ( *v8 <= (int)v9 && *(_DWORD *)(a2 + 1232) + *(_DWORD *)(a2 + 1236) >= (int)v9 + *(_DWORD *)(a2 + 1252) )
      {
        v10 = (char *)v8 + v9;
        if ( (_DWORD *)((char *)v8 + v9) )
        {
          if ( (MEMORY[0x7FFE03EC] & 2) == 0 )
          {
            v13 = &v10[MEMORY[0x7FFE0448] - 512];
            goto LABEL_48;
          }
          v11 = *((_QWORD *)v10 + 1);
          if ( (v11 & 0x800) != 0 )
          {
            v12 = 576;
            if ( (v11 & 4) != 0 )
            {
              _mm_lfence();
              v12 = MEMORY[0x7FFE060C] + 576;
            }
            if ( (v11 & 8) != 0 )
            {
              _mm_lfence();
              if ( (MEMORY[0x7FFE05F8] & 8) != 0 )
                v12 = (v12 + 63) & 0xFFFFFFC0;
              v12 += MEMORY[0x7FFE0610];
            }
            if ( (v11 & 0x10) != 0 )
            {
              _mm_lfence();
              if ( (MEMORY[0x7FFE05F8] & 0x10) != 0 )
                v12 = (v12 + 63) & 0xFFFFFFC0;
              v12 += MEMORY[0x7FFE0614];
            }
            if ( (v11 & 0x20) != 0 )
            {
              _mm_lfence();
              if ( (MEMORY[0x7FFE05F8] & 0x20) != 0 )
                v12 = (v12 + 63) & 0xFFFFFFC0;
              v12 += MEMORY[0x7FFE0618];
            }
            if ( (v11 & 0x40) != 0 )
            {
              _mm_lfence();
              if ( (MEMORY[0x7FFE05F8] & 0x40) != 0 )
                v12 = (v12 + 63) & 0xFFFFFFC0;
              v12 += MEMORY[0x7FFE061C];
            }
            if ( (v11 & 0x80u) != 0LL )
            {
              _mm_lfence();
              if ( MEMORY[0x7FFE05F8] < 0 )
                v12 = (v12 + 63) & 0xFFFFFFC0;
              v12 += MEMORY[0x7FFE0620];
            }
            if ( (v11 & 0x100) != 0 )
            {
              _mm_lfence();
              if ( (MEMORY[0x7FFE05F8] & 0x100) != 0 )
                v12 = (v12 + 63) & 0xFFFFFFC0;
              v12 += MEMORY[0x7FFE0624];
            }
            if ( (v11 & 0x200) != 0 )
            {
              _mm_lfence();
              if ( (MEMORY[0x7FFE05F8] & 0x200) != 0 )
                v12 = (v12 + 63) & 0xFFFFFFC0;
              v12 += MEMORY[0x7FFE0628];
            }
            if ( (v11 & 0x400) != 0 )
            {
              _mm_lfence();
              if ( (MEMORY[0x7FFE05F8] & 0x400) != 0 )
                v12 = (v12 + 63) & 0xFFFFFFC0;
              v12 += MEMORY[0x7FFE062C];
            }
            if ( (MEMORY[0x7FFE05F8] & 0x800) != 0 )
              v12 = (v12 + 63) & 0xFFFFFFC0;
            v13 = &v10[v12 - 512];
LABEL_48:
            v14 = (_DWORD *)(a1 + 1232);
            if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0x800) != 0 && (MEMORY[0x7FFE03EC] & 0xFFFFFFF8) == 0 )
            {
              v15 = *(int *)(a1 + 1248);
              if ( *v14 <= (int)v15 && *v14 + *(_DWORD *)(a1 + 1236) >= (int)v15 + *(_DWORD *)(a1 + 1252) )
              {
                v16 = (char *)v14 + v15;
                if ( (_DWORD *)((char *)v14 + v15) )
                {
                  if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
                  {
                    v17 = *((_QWORD *)v16 + 1);
                    if ( (v17 & 0x800) == 0 )
                      goto LABEL_93;
                    if ( (v17 & 4) != 0 )
                      v7 = MEMORY[0x7FFE060C] + 576;
                    if ( (v17 & 8) != 0 )
                    {
                      if ( (MEMORY[0x7FFE05F8] & 8) != 0 )
                        v7 = (v7 + 63) & 0xFFFFFFC0;
                      v7 += MEMORY[0x7FFE0610];
                    }
                    if ( (v17 & 0x10) != 0 )
                    {
                      if ( (MEMORY[0x7FFE05F8] & 0x10) != 0 )
                        v7 = (v7 + 63) & 0xFFFFFFC0;
                      v7 += MEMORY[0x7FFE0614];
                    }
                    if ( (v17 & 0x20) != 0 )
                    {
                      if ( (MEMORY[0x7FFE05F8] & 0x20) != 0 )
                        v7 = (v7 + 63) & 0xFFFFFFC0;
                      v7 += MEMORY[0x7FFE0618];
                    }
                    if ( (v17 & 0x40) != 0 )
                    {
                      if ( (MEMORY[0x7FFE05F8] & 0x40) != 0 )
                        v7 = (v7 + 63) & 0xFFFFFFC0;
                      v7 += MEMORY[0x7FFE061C];
                    }
                    if ( (v17 & 0x80u) != 0LL )
                    {
                      if ( MEMORY[0x7FFE05F8] < 0 )
                        v7 = (v7 + 63) & 0xFFFFFFC0;
                      v7 += MEMORY[0x7FFE0620];
                    }
                    if ( (v17 & 0x100) != 0 )
                    {
                      if ( (MEMORY[0x7FFE05F8] & 0x100) != 0 )
                        v7 = (v7 + 63) & 0xFFFFFFC0;
                      v7 += MEMORY[0x7FFE0624];
                    }
                    if ( (v17 & 0x200) != 0 )
                    {
                      if ( (MEMORY[0x7FFE05F8] & 0x200) != 0 )
                        v7 = (v7 + 63) & 0xFFFFFFC0;
                      v7 += MEMORY[0x7FFE0628];
                    }
                    if ( (v17 & 0x400) != 0 )
                    {
                      if ( (MEMORY[0x7FFE05F8] & 0x400) != 0 )
                        v7 = (v7 + 63) & 0xFFFFFFC0;
                      v7 += MEMORY[0x7FFE062C];
                    }
                    if ( (MEMORY[0x7FFE05F8] & 0x800) != 0 )
                      v7 = (v7 + 63) & 0xFFFFFFC0;
                    v18 = v7 - 512LL;
                  }
                  else
                  {
                    v18 = MEMORY[0x7FFE0448] - 512LL;
                  }
                  v4 = &v16[v18];
                }
              }
            }
LABEL_93:
            if ( v13 )
            {
              if ( v4 )
              {
                *(_OWORD *)v4 = *(_OWORD *)v13;
                *(_QWORD *)(*(int *)(a1 + 1248) + a1 + 1232) |= *(_DWORD *)(*(int *)(a2 + 1248) + a2 + 1232) & 0x800;
              }
            }
            goto LABEL_3;
          }
        }
      }
    }
    v13 = 0LL;
    goto LABEL_48;
  }
  result = *(_DWORD *)(a2 + 48) & 0x10004F;
  *(_DWORD *)(a1 + 48) = result;
  return result;
}
