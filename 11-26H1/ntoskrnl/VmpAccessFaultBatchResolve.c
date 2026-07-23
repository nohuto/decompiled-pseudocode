/*
 * XREFs of VmpAccessFaultBatchResolve @ 0x140822998
 * Callers:
 *     VmpAccessFaultBatch @ 0x1406C45B0 (VmpAccessFaultBatch.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     MmGetNodeFastLargePageCounts @ 0x1404F6254 (MmGetNodeFastLargePageCounts.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     VmpFillValidFaultInfo @ 0x140AABF4C (VmpFillValidFaultInfo.c)
 *     MmVirtualAccessFault @ 0x140AD3530 (MmVirtualAccessFault.c)
 *     MmBuildLargePages @ 0x140B22ED8 (MmBuildLargePages.c)
 *     VmpLogFaultResolveFailure @ 0x140B5D4CC (VmpLogFaultResolveFailure.c)
 */

__int64 __fastcall VmpAccessFaultBatchResolve(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        int a7)
{
  unsigned __int64 v7; // rbx
  char *v8; // r14
  unsigned int v9; // r9d
  int v10; // ecx
  __int64 v11; // r12
  unsigned int v12; // esi
  unsigned int v13; // edi
  unsigned __int64 v14; // r13
  int v15; // ecx
  int v16; // edx
  int v17; // r8d
  int v18; // esi
  __int64 v19; // rcx
  unsigned __int64 i; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // ebp
  int v24; // r8d
  int v25; // ecx
  __int64 v26; // rax
  unsigned __int64 v27; // r11
  char *v28; // r14
  unsigned __int64 v29; // rbp
  __int64 v30; // rax
  unsigned int v32; // [rsp+30h] [rbp-108h]
  char *v33; // [rsp+38h] [rbp-100h]
  int v34; // [rsp+40h] [rbp-F8h]
  __int64 v35; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-E8h]
  __int64 v37; // [rsp+58h] [rbp-E0h]
  unsigned __int64 v38; // [rsp+60h] [rbp-D8h]
  char v39; // [rsp+70h] [rbp-C8h] BYREF

  v37 = a1;
  v7 = a2;
  v36 = 0LL;
  if ( a4 )
  {
    v8 = *(char **)(a4 + 16);
    v9 = *(_DWORD *)a4;
  }
  else
  {
    v8 = &v39;
    v9 = 16;
  }
  v10 = a5 & 1;
  v32 = v9;
  v33 = v8;
  if ( (a5 & 2) != 0 )
  {
    v10 |= 2u;
  }
  else if ( (a6 & 2) != 0 )
  {
    v10 |= 0x200u;
  }
  LODWORD(v11) = 0;
  v34 = 0;
  v12 = v10 | 1;
  v13 = 0;
  v14 = a2 + 48LL * a3;
  v38 = v14;
  if ( (a5 & 4) == 0 )
    v12 = v10;
  while ( v7 < v14 )
  {
    v15 = v12 | 8;
    if ( (a5 & 8) == 0 )
      v15 = v12;
    v16 = v15 | 0x10;
    if ( (a5 & 0x10) == 0 )
      v16 = v15;
    v17 = a5 & 0x20;
    v18 = v16 | 0x20;
    if ( (a5 & 0x20) == 0 )
      v18 = v16;
    v19 = *(_QWORD *)(v7 + 24) & 0xFFFFFFFFFFFFFLL;
    v12 = v18 & 0xFFFFFEFF;
    v35 = *(_QWORD *)(v7 + 24) << 12;
    if ( v13 )
    {
LABEL_29:
      v36 = v13 << 12;
      if ( v13 > 1 && v17 )
        v12 |= 0x100u;
      if ( (*(_QWORD *)(v7 + 32) & 0x800000000000000LL) != 0 && v13 == 1 )
        v12 &= 0xFFFFFFC7;
      v23 = MmVirtualAccessFault(&v35, v8, v12);
      if ( v23 >= 0 )
      {
        v27 = v7;
        v7 = 0LL;
        v28 = v33;
        v29 = (unsigned __int64)&v33[8 * v13];
        if ( (unsigned __int64)v33 < v29 )
        {
          do
          {
            if ( (*(_QWORD *)v28 & 0x10000000000000LL) != 0 )
            {
              VmpFillValidFaultInfo(v27, (_DWORD)v28, v24, a5, a6);
            }
            else
            {
              if ( (v12 & 0x100) == 0 )
                break;
              if ( (*(_QWORD *)v28 & 0x100000000000000LL) == 0
                || (v30 = *(_QWORD *)(v27 + 32), (v30 & 0x800000000000000LL) != 0) )
              {
                if ( !v7 )
                  v7 = v27;
              }
              else
              {
                *(_QWORD *)(v27 + 32) = v30 | 0x200000000000000LL;
              }
            }
            v28 += 8;
            v27 += 48LL;
            --v13;
          }
          while ( (unsigned __int64)v28 < v29 );
          LODWORD(v11) = v34;
          v14 = v38;
        }
        if ( (v12 & 0x100) != 0 && v7 )
        {
          v11 = (__int64)(v27 - v7) / 48;
          v34 = v11;
        }
        else
        {
          v7 = v27;
        }
        v8 = v33;
      }
      else
      {
        if ( stru_140F06A28.InitialStack
          && *(_DWORD *)stru_140F06A28.InitialStack
          && tlgKeywordOn((__int64)stru_140F06A28.InitialStack, 64LL) )
        {
          VmpLogFaultResolveFailure(v25, (unsigned int)&v35, a5, v12, *(_QWORD *)(v37 + 120), v23);
        }
        if ( (a5 & 0x20) == 0 )
          return (unsigned int)v23;
        v26 = *(_QWORD *)(v7 + 32);
        if ( (v26 & 0x800000000000000LL) != 0 )
          return (unsigned int)v23;
        *(_QWORD *)(v7 + 32) = v26 | 0x200000000000000LL;
        v7 += 48LL;
        v13 = 0;
      }
      v9 = v32;
    }
    else
    {
      v13 = 1;
      if ( !(_DWORD)v11 )
      {
        for ( i = v7 + 48; i < v14; i += 48LL )
        {
          if ( v13 >= v9 )
            break;
          v21 = *(_QWORD *)(i + 24) & 0xFFFFFFFFFFFFFLL;
          if ( v21 != ++v19 )
            break;
          v19 = v21;
          ++v13;
        }
        if ( (a5 & 0x40) != 0 && v13 == 512 )
        {
          if ( !MmGetNodeFastLargePageCounts(v19, a7 - 1) )
            MmBuildLargePages(v22, (unsigned int)(a7 - 1));
          v17 = a5 & 0x20;
        }
        goto LABEL_29;
      }
      LODWORD(v11) = v11 - 1;
      v34 = v11;
      if ( (*(_QWORD *)(v7 + 32) & 0x600000000000000LL) == 0 )
        goto LABEL_29;
      v7 += 48LL;
      v13 = 0;
    }
  }
  return 0;
}
