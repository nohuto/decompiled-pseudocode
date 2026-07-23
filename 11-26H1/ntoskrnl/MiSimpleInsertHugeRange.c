/*
 * XREFs of MiSimpleInsertHugeRange @ 0x1406F2830
 * Callers:
 *     MiInsertHugeRangeInList @ 0x1404881AC (MiInsertHugeRangeInList.c)
 *     MiCanBeginHugeIoPageAccessor @ 0x14053141C (MiCanBeginHugeIoPageAccessor.c)
 * Callees:
 *     MiUpdateHugeRangeZeroFreeBitmap @ 0x1406F2B2C (MiUpdateHugeRangeZeroFreeBitmap.c)
 */

unsigned __int64 __fastcall MiSimpleInsertHugeRange(unsigned __int64 *a1, int a2, __int64 a3, int a4)
{
  __int64 v5; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 *v15; // r11
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx

  v5 = a3 & 0x3FFFFF;
  v7 = *(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * (a3 & 0x3FFFFF));
  if ( a2 )
  {
    if ( a2 == 1 )
      v8 = v7 & 0xFFFFFFFFFFFFFFF8uLL | 2;
    else
      v8 = v7 & 0xFFFFFFFFFFFFFFF8uLL | 4;
  }
  else
  {
    v8 = v7 & 0xFFFFFFFFFFFFFFF8uLL | 1;
  }
  v9 = *a1;
  v10 = v8 & ((-(__int64)(a4 != 0) & 0x7FFFFE000008000LL) - 0x7FFFFE000000001LL);
  v11 = v10 & 7;
  v12 = (*a1 >> 15) & 0x3FFFFF;
  if ( v12 )
  {
    if ( v11 == 1 )
    {
LABEL_19:
      v19 = v12 << 15;
      v20 = (*a1 >> 15) & 0x3FFFFF;
      *(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v5) = v19 ^ (v10 ^ v19) & 0xFFFFFFE000007FFFuLL;
      result = *(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v20);
      *(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v20) = (a3 << 37) ^ (result ^ (a3 << 37)) & 0xF800001FFFFFFFFFuLL;
      v9 = (a3 << 15) ^ ((a3 << 15) ^ v9) & 0xFFFFFFE000007FFFuLL;
    }
    else
    {
      v14 = (v9 >> 37) & 0x3FFFFF;
      v15 = (unsigned __int64 *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v14);
      v16 = *v15;
      if ( (v10 & 0x800000000000000LL) == 0 )
      {
        while ( 1 )
        {
          v16 = *v15;
          if ( (*v15 & 0x800000000000000LL) == 0 )
            break;
          v17 = v16 >> 37;
          v14 = v17 ^ (v17 ^ v14) & 0xFFFFFFFFFFC00000uLL;
          if ( (v17 & 0x3FFFFF) == 0 )
            goto LABEL_19;
          v15 = (unsigned __int64 *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * (v17 & 0x3FFFFF));
        }
      }
      v18 = v10 & 0xFFFFFFE000007FFFuLL;
      if ( ((v16 >> 15) & 0x3FFFFF) != 0 )
        v18 = (v16 >> 15 << 15) ^ (v10 ^ (v16 >> 15 << 15)) & 0xFFFFFFE000007FFFuLL;
      else
        v9 = (a3 << 37) ^ ((a3 << 37) ^ v9) & 0xF800001FFFFFFFFFuLL;
      *(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v5) = (v14 << 37) ^ (v18 ^ (v14 << 37)) & 0xF800001FFFFFFFFFuLL;
      result = (a3 << 15) ^ (v16 ^ (a3 << 15)) & 0xFFFFFFE000007FFFuLL;
      *v15 = result;
    }
  }
  else
  {
    result = v9 & 0xF800000000007FFFuLL;
    v9 = v9 & 0xF800000000007FFFuLL | ((v5 | (v5 << 22)) << 15);
    *(_QWORD *)(*(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v5) = v10 & 0xFFFFFFE000007FFFuLL;
    if ( v11 != 4 )
      result = MiUpdateHugeRangeZeroFreeBitmap(a3);
  }
  *a1 = v9;
  return result;
}
