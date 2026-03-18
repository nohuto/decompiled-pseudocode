/*
 * XREFs of HvpViewMapMigrateCOWData @ 0x14085C9CC
 * Callers:
 *     HvpViewMapPromoteRangeToMapping @ 0x1408DD1F4 (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x1404A2CD4 (CmSiProtectViewOfSection.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     HvpAllExceptionsFatalFilter @ 0x14085C964 (HvpAllExceptionsFatalFilter.c)
 *     HvpViewMapMakeViewRangeReadOnly @ 0x1408B92F8 (HvpViewMapMakeViewRangeReadOnly.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x1408B93E8 (HvpViewMapMakeViewRangeCOWByCaller.c)
 */

__int64 __fastcall HvpViewMapMigrateCOWData(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // r10
  _QWORD *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // r11
  unsigned __int8 v10; // dl
  __int64 i; // rdi
  unsigned __int8 v12; // r9
  __int64 result; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // r12
  size_t v16; // r14
  __int64 v17; // rcx
  unsigned __int8 *v18; // [rsp+50h] [rbp-48h]
  int v21; // [rsp+B8h] [rbp+20h] BYREF

  v5 = a1;
  v6 = a2;
  v7 = a2[5];
  v8 = a3[6];
  if ( v8 >= a2[6] )
    v8 = a2[6];
  if ( a3[5] >= v7 )
    v7 = a3[5];
  while ( v7 < v8 )
  {
    v9 = a3[3];
    v18 = (unsigned __int8 *)a3 + ((unsigned __int64)(v7 - v9) >> 12) + 72;
    v10 = *v18;
    if ( (*v18 & 2) != 0 || (v10 & 4) != 0 )
    {
      for ( i = v7 + 4096; i < v8; i += 4096LL )
      {
        v12 = *((_BYTE *)a3 + ((unsigned __int64)(i - v9) >> 12) + 72);
        if ( ((v12 & 2) != 0) != ((*v18 & 2) != 0) )
          break;
        if ( ((v12 ^ v10) & 4) != 0 )
          break;
      }
      if ( (v10 & 2) != 0 )
      {
        result = HvpViewMapMakeViewRangeCOWByCaller(v5, a2, v7, i);
        if ( (int)result < 0 )
          return result;
        v14 = v6 + 7;
        v15 = v6 + 3;
        v16 = i - v7;
      }
      else
      {
        v21 = 0;
        v15 = a2 + 3;
        v16 = i - v7;
        CmSiProtectViewOfSection(
          (__int64)(a2 + 7),
          *(__int64 **)(v5 + 24),
          v7 + a2[7] - a2[3],
          i - v7,
          8u,
          (__int64)&v21);
        v17 = v7;
        if ( v7 >= i )
        {
          v14 = a2 + 7;
        }
        else
        {
          do
          {
            *((_BYTE *)a2 + ((unsigned __int64)(v17 - *v15) >> 12) + 72) |= 8u;
            v17 += 4096LL;
          }
          while ( v17 < i );
          v14 = a2 + 7;
        }
      }
      memmove((void *)(v7 + *v14 - *v15), (const void *)(v7 + a3[7] - a3[3]), v16);
      if ( (*v18 & 2) == 0 )
        HvpViewMapMakeViewRangeReadOnly(a1, a2, v7, i);
      v7 = i;
      v5 = a1;
      v6 = a2;
    }
    else
    {
      v7 += 4096LL;
    }
  }
  return 0LL;
}
