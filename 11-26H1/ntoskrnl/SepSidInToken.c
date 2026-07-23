/*
 * XREFs of SepSidInToken @ 0x1403DB410
 * Callers:
 *     SeMaximumAuditMask @ 0x14049F4D4 (SeMaximumAuditMask.c)
 *     AuthzBasepMemberOf @ 0x140511550 (AuthzBasepMemberOf.c)
 *     SepMaximumAccessCheck @ 0x14051A140 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x14051B700 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x14051BF40 (SepNormalAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14051D0B0 (SepNormalAccessCheckEx.c)
 *     SeTokenIsAdmin @ 0x1409238F0 (SeTokenIsAdmin.c)
 *     SepExamineSaclEx @ 0x140A60770 (SepExamineSaclEx.c)
 *     SeExamineSacl @ 0x140A60F70 (SeExamineSacl.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x140A96858 (SepIsImpersonationAllowedDueToCapability.c)
 * Callees:
 *     memcmp @ 0x140742350 (memcmp.c)
 */

bool __fastcall SepSidInToken(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3, char a4, char a5, char a6)
{
  __int64 v6; // rdi
  unsigned __int8 *v7; // r14
  __int64 v9; // rdi
  __int64 v10; // rax
  __int16 v11; // r9
  size_t v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int8 v15; // bp
  int v16; // ebx
  __int64 v17; // r13
  int v18; // r12d
  __int64 v19; // r15
  unsigned int v20; // ebx
  char v22; // r12
  int v23; // eax
  unsigned int i; // esi
  unsigned int v25; // [rsp+68h] [rbp+10h]
  __int16 v27; // [rsp+88h] [rbp+30h]

  v6 = 504LL;
  v7 = a3;
  if ( !a5 )
    v6 = 232LL;
  v9 = a1 + v6;
  if ( a2
    && *(_WORD *)RtlpBootStatHandleLock.RelativeTimerBias == *(_WORD *)a3
    && !memcmp(
          (const void *)RtlpBootStatHandleLock.RelativeTimerBias,
          a3,
          4LL * HIBYTE(*(_WORD *)RtlpBootStatHandleLock.RelativeTimerBias) + 8) )
  {
    v7 = a2;
  }
  if ( a6
    && *(_WORD *)RtlpBootStatHandleLock.Teb == *(_WORD *)v7
    && !memcmp(RtlpBootStatHandleLock.Teb, v7, 4LL * HIBYTE(*(_WORD *)RtlpBootStatHandleLock.Teb) + 8) )
  {
    return 1;
  }
  if ( !v9 || !v7 )
    return 0;
  v10 = v7[1];
  v11 = *(_WORD *)v7;
  v27 = *(_WORD *)v7;
  v12 = (unsigned int)(4 * v10 + 8);
  v13 = v7[4 * v10 + 4];
  v25 = v12;
  v14 = *(_QWORD *)(v9 + 8 * (v13 & 0xF) + 16) & *(_QWORD *)(v9 + 8 * (v13 >> 4) + 144);
  v15 = 0;
  while ( v14 )
  {
    LOBYTE(v16) = v14;
    while ( (_BYTE)v16 )
    {
      v17 = *(_QWORD *)(v9 + 8);
      v18 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v16);
      v19 = v17 + 16LL * (v18 + (unsigned int)v15);
      if ( **(_WORD **)v19 == v11 )
      {
        if ( !memcmp(v7, *(const void **)v19, v12) )
          goto LABEL_19;
        v12 = v25;
        v11 = v27;
      }
      v16 = (unsigned __int8)v16 ^ (1 << v18);
    }
    v15 += 8;
    v14 >>= 8;
  }
  v20 = *(_DWORD *)v9;
  if ( *(_DWORD *)v9 <= 0x40u )
    return 0;
  for ( i = 64; ; ++i )
  {
    if ( i >= v20 )
      return 0;
    v17 = *(_QWORD *)(v9 + 8);
    v19 = v17 + 16LL * i;
    if ( **(_WORD **)v19 == v11 )
      break;
LABEL_37:
    ;
  }
  if ( memcmp(v7, *(const void **)v19, v12) )
  {
    v12 = v25;
    v11 = v27;
    goto LABEL_37;
  }
LABEL_19:
  if ( !v19 )
    return 0;
  if ( v19 != v17 || a5 )
  {
    v22 = a4;
  }
  else
  {
    if ( (*(_DWORD *)(v19 + 8) & 0x10) == 0 )
      return 1;
    v22 = a4;
    if ( a4 )
      return 1;
  }
  v23 = *(_DWORD *)(v19 + 8);
  return (v23 & 4) != 0 || v22 && (v23 & 0x10) != 0;
}
