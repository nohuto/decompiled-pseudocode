/*
 * XREFs of HalpNumaParseHmat @ 0x140CB82E0
 * Callers:
 *     HalpNumaInitializeHmaConfiguration @ 0x140CB79B4 (HalpNumaInitializeHmaConfiguration.c)
 * Callees:
 *     qsort @ 0x140539380 (qsort.c)
 *     HalpNumaCalculateSllbiSize @ 0x1405942D8 (HalpNumaCalculateSllbiSize.c)
 *     HalpNumaGetHmatConfigSize @ 0x140594348 (HalpNumaGetHmatConfigSize.c)
 *     HalpNumaQueryProximityNode @ 0x1405948B0 (HalpNumaQueryProximityNode.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpNumaParseHmat(__int64 a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v4; // r12
  unsigned int v5; // r13d
  size_t v6; // r15
  int HmatConfigSize; // ebx
  _DWORD *v11; // r8
  int v12; // ecx
  __int64 v13; // rbx
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int *v16; // r14
  int v17; // r9d
  unsigned __int64 v18; // rdx
  int v19; // r10d
  __int64 v20; // r12
  __int64 v21; // rax
  unsigned int v22; // r10d
  unsigned int v23; // r11d
  __int64 v24; // rdx
  char v25; // cl
  __int16 v26; // ax
  __int16 v27; // cx
  int v28; // [rsp+30h] [rbp-40h] BYREF
  int v29; // [rsp+34h] [rbp-3Ch] BYREF
  size_t Size; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v31; // [rsp+40h] [rbp-30h] BYREF
  _DWORD *v32; // [rsp+48h] [rbp-28h]
  unsigned __int64 v33; // [rsp+50h] [rbp-20h]
  __int64 v34; // [rsp+58h] [rbp-18h]
  void *Base; // [rsp+60h] [rbp-10h]
  __int64 v36; // [rsp+A0h] [rbp+30h] BYREF

  v36 = a1;
  v4 = HalpAcpiHmat;
  v5 = 0;
  v6 = a3;
  v34 = HalpAcpiHmat;
  Size = 0LL;
  v29 = 0;
  LOWORD(v36) = 0;
  v31 = 0;
  v28 = 0;
  HmatConfigSize = HalpNumaGetHmatConfigSize(HalpAcpiHmat, &v29, &v28, (int *)&Size + 1, &Size);
  if ( HmatConfigSize < 0 )
    goto LABEL_7;
  if ( (_DWORD)v6 )
  {
    if ( (unsigned int)v6 < (unsigned int)Size )
    {
      HmatConfigSize = -1073741789;
LABEL_8:
      memset_0(a2, 0, v6);
      if ( a4 )
        *a4 = v6;
      return (unsigned int)HmatConfigSize;
    }
    memset_0(a2, 0, (unsigned int)Size);
    v11 = a2 + 6;
    v12 = v28;
    v13 = v4 + 40;
    v14 = v29 + 24;
    a2[3] = 24;
    v15 = v14 + v12;
    a2[5] = v15;
    v16 = (_DWORD *)((char *)a2 + v14);
    a2[4] = v14;
    v17 = 0;
    v18 = v4 + *(unsigned int *)(v4 + 4);
    Base = (char *)a2 + v15;
    v32 = a2 + 6;
    v19 = 0;
    v20 = (__int64)a2 + v15 + 8;
    v29 = 0;
    v28 = 0;
    v33 = v18;
    HIDWORD(Size) = 1;
    while ( v13 + 8 <= v18 )
    {
      v21 = *(unsigned int *)(v13 + 4);
      if ( (unsigned int)v21 < 8 || v13 + v21 > v18 )
        break;
      if ( *(_BYTE *)(v34 + 8) >= 2u || *(_WORD *)v13 && *(_WORD *)v13 != WORD2(Size) )
      {
        if ( *(_WORD *)v13 )
        {
          if ( *(_WORD *)v13 == 1 )
          {
            if ( (int)HalpNumaCalculateSllbiSize(*(_DWORD *)(v13 + 12), *(_DWORD *)(v13 + 16), (int *)&v31) < 0 )
              goto LABEL_39;
            v24 = v31;
            *v16 = v31;
            if ( (*(_BYTE *)(v13 + 8) & 0xF) != 0 )
            {
              switch ( *(_BYTE *)(v13 + 8) & 0xF )
              {
                case 1:
                  v16[1] = 1;
                  break;
                case 2:
                  v16[1] = 2;
                  break;
                case 3:
                  v16[1] = 3;
                  break;
                default:
LABEL_39:
                  HmatConfigSize = -1072431089;
                  goto LABEL_8;
              }
            }
            else
            {
              v16[1] = 0;
            }
            *((_BYTE *)v16 + 9) = *(_BYTE *)(v13 + 9);
            v25 = *((_BYTE *)v16 + 8) ^ (*((_BYTE *)v16 + 8) ^ (*(_BYTE *)(v13 + 8) >> 4)) & 1;
            *((_BYTE *)v16 + 8) = v25;
            *((_BYTE *)v16 + 8) = v25 ^ (v25 ^ (*(_BYTE *)(v13 + 8) >> 4)) & 2;
            *((_BYTE *)v16 + 10) = *(_BYTE *)(v13 + 10);
            v16[3] = v22;
            v16[4] = v23;
            *((_QWORD *)v16 + 3) = *(_QWORD *)(v13 + 24);
            memmove(v16 + 8, (const void *)(v13 + 32), v24 - 40);
            v19 = v28 + 1;
            v11 = v32;
            v16 = (unsigned int *)((char *)v16 + *v16);
            v18 = v33;
            v17 = v29;
            ++v28;
          }
          else if ( *(_WORD *)v13 == 2 )
          {
            if ( (int)HalpNumaQueryProximityNode(*(_DWORD *)(v13 + 8), (unsigned __int16 *)&v36) < 0 )
            {
              HmatConfigSize = -1073741216;
              goto LABEL_8;
            }
            ++v5;
            v11 = v32;
            v18 = v33;
            v17 = v29;
            v19 = v28;
            *(_DWORD *)(v20 - 8) = (unsigned __int16)v36;
            *(_DWORD *)(v20 - 4) = *(_DWORD *)(v13 + 8);
            *(_QWORD *)v20 = *(_QWORD *)(v13 + 16);
            *(_DWORD *)(v20 + 8) = *(_DWORD *)(v13 + 24) & 0xF;
            *(_DWORD *)(v20 + 12) = (*(_DWORD *)(v13 + 24) >> 4) & 0xF;
            *(_DWORD *)(v20 + 16) = (*(_DWORD *)(v13 + 24) >> 8) & 0xF;
            *(_DWORD *)(v20 + 20) = (unsigned __int8)HIBYTE(*(_WORD *)(v13 + 24)) >> 4;
            *(_DWORD *)(v20 + 24) = *(unsigned __int16 *)(v13 + 26);
            *(_DWORD *)(v20 + 28) = *(unsigned __int16 *)(v13 + 28);
            v20 += 40LL;
          }
        }
        else
        {
          v26 = *(_WORD *)v11;
          ++v17;
          v27 = *(_WORD *)v11;
          v29 = v17;
          *(_WORD *)v11 = v26 ^ WORD2(Size) & (*(_WORD *)(v13 + 8) ^ v27);
          v11[1] = *(_DWORD *)(v13 + 12);
          v11[2] = *(_DWORD *)(v13 + 16);
          v11 += 3;
          v32 = v11;
        }
        v13 += *(unsigned int *)(v13 + 4);
      }
      else
      {
        v13 += v21;
      }
    }
    *a2 = v17;
    a2[1] = v19;
    a2[2] = v5;
    if ( v5 > 1 )
      qsort(Base, v5, 0x28uLL, (int (__cdecl *)(const void *, const void *))HalpNumaCompareMemorySideCacheEntries);
    if ( a4 )
      *a4 = Size;
    return 0;
  }
  else
  {
    if ( a4 )
      *a4 = Size;
    else
      HmatConfigSize = -1073741811;
    if ( HmatConfigSize < 0 )
    {
LABEL_7:
      if ( !(_DWORD)v6 )
        return (unsigned int)HmatConfigSize;
      goto LABEL_8;
    }
  }
  return (unsigned int)HmatConfigSize;
}
