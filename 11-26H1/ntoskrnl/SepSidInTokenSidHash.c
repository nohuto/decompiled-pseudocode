/*
 * XREFs of SepSidInTokenSidHash @ 0x1403CA5B0
 * Callers:
 *     AuthzBasepDeviceMemberOf @ 0x14051165C (AuthzBasepDeviceMemberOf.c)
 *     SepMaximumAccessCheck @ 0x14051A140 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14051BF40 (SepNormalAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14051D0B0 (SepNormalAccessCheckEx.c)
 *     SepCreateAppContainerToken @ 0x14063EAD8 (SepCreateAppContainerToken.c)
 *     NtCreateLowBoxToken @ 0x140819F50 (NtCreateLowBoxToken.c)
 *     SeQueryInformationToken @ 0x1408FA8C0 (SeQueryInformationToken.c)
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x140A96858 (SepIsImpersonationAllowedDueToCapability.c)
 *     NtQueryInformationToken @ 0x140B81F50 (NtQueryInformationToken.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

bool __fastcall SepSidInTokenSidHash(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3, char a4, char a5, char a6)
{
  unsigned __int8 *v6; // rsi
  __int64 v9; // rax
  __int16 v10; // r9
  size_t v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int8 v14; // bp
  int v15; // ebx
  __int64 v16; // r13
  int v17; // r12d
  __int64 v18; // r15
  unsigned int v19; // ebx
  char v21; // r12
  int v22; // eax
  unsigned int i; // edi
  unsigned int v24; // [rsp+68h] [rbp+10h]
  __int16 v26; // [rsp+88h] [rbp+30h]

  v6 = a3;
  if ( a2
    && *(_WORD *)RtlpBootStatHandleLock.RelativeTimerBias == *(_WORD *)a3
    && !memcmp(
          (const void *)RtlpBootStatHandleLock.RelativeTimerBias,
          a3,
          4LL * HIBYTE(*(_WORD *)RtlpBootStatHandleLock.RelativeTimerBias) + 8) )
  {
    v6 = a2;
  }
  if ( a6
    && *(_WORD *)RtlpBootStatHandleLock.Teb == *(_WORD *)v6
    && !memcmp(RtlpBootStatHandleLock.Teb, v6, 4LL * HIBYTE(*(_WORD *)RtlpBootStatHandleLock.Teb) + 8) )
  {
    return 1;
  }
  if ( a1 && v6 )
  {
    v9 = v6[1];
    v10 = *(_WORD *)v6;
    v26 = *(_WORD *)v6;
    v11 = (unsigned int)(4 * v9 + 8);
    v12 = v6[4 * v9 + 4];
    v24 = v11;
    v13 = *(_QWORD *)(a1 + 8 * (v12 & 0xF) + 16) & *(_QWORD *)(a1 + 8 * (v12 >> 4) + 144);
    v14 = 0;
    while ( v13 )
    {
      LOBYTE(v15) = v13;
      while ( (_BYTE)v15 )
      {
        v16 = *(_QWORD *)(a1 + 8);
        v17 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v15);
        v18 = v16 + 16LL * (v17 + (unsigned int)v14);
        if ( **(_WORD **)v18 == v10 )
        {
          if ( !memcmp(v6, *(const void **)v18, v11) )
            goto LABEL_16;
          v11 = v24;
          v10 = v26;
        }
        v15 = (unsigned __int8)v15 ^ (1 << v17);
      }
      v14 += 8;
      v13 >>= 8;
    }
    v19 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > 0x40u )
    {
      for ( i = 64; i < v19; ++i )
      {
        v16 = *(_QWORD *)(a1 + 8);
        v18 = v16 + 16LL * i;
        if ( **(_WORD **)v18 == v10 )
        {
          if ( !memcmp(v6, *(const void **)v18, v11) )
          {
LABEL_16:
            if ( !v18 )
              return 0;
            if ( v18 != v16 || a5 )
            {
              v21 = a4;
            }
            else
            {
              if ( (*(_DWORD *)(v18 + 8) & 0x10) == 0 )
                return 1;
              v21 = a4;
              if ( a4 )
                return 1;
            }
            v22 = *(_DWORD *)(v18 + 8);
            return (v22 & 4) != 0 || v21 && (v22 & 0x10) != 0;
          }
          v11 = v24;
          v10 = v26;
        }
      }
    }
  }
  return 0;
}
