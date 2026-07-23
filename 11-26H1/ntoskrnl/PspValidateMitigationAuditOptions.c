/*
 * XREFs of PspValidateMitigationAuditOptions @ 0x140B42824
 * Callers:
 *     PspReadIFEOMitigationAuditOptions @ 0x140A78518 (PspReadIFEOMitigationAuditOptions.c)
 *     PspBuildCreateProcessContext @ 0x140A79424 (PspBuildCreateProcessContext.c)
 *     PspInitPhase0 @ 0x140D0D27C (PspInitPhase0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspValidateMitigationAuditOptions(__int128 *a1)
{
  char *v1; // rdx
  int v2; // eax
  __int64 v3; // r8
  unsigned int v4; // edx
  __int64 v5; // r11
  __int64 v6; // r9
  unsigned int v7; // r8d
  __int64 v8; // xmm1_8
  char v9; // r10
  __int64 v10; // xmm1_8
  __int128 v12; // [rsp+0h] [rbp-80h]
  __int64 v13; // [rsp+10h] [rbp-70h]
  _DWORD v14[3]; // [rsp+20h] [rbp-60h]
  char v15; // [rsp+2Ch] [rbp-54h] BYREF
  int v16; // [rsp+3Ch] [rbp-44h]
  __m128i si128; // [rsp+40h] [rbp-40h]
  __m128i v18; // [rsp+50h] [rbp-30h]
  __m128i v19; // [rsp+60h] [rbp-20h]
  int v20; // [rsp+70h] [rbp-10h]
  int v21; // [rsp+98h] [rbp+18h]

  v14[0] = 1;
  v14[1] = 7;
  v14[2] = 9;
  v1 = &v15;
  v2 = 11;
  v3 = 4LL;
  do
  {
    *(_DWORD *)v1 = v2++;
    v1 += 4;
    --v3;
  }
  while ( v3 );
  v4 = 0;
  v5 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v6 = 0LL;
  v19 = _mm_load_si128((const __m128i *)&_xmm);
  v7 = 40;
  v16 = 17;
  v18 = _mm_load_si128((const __m128i *)&_xmm);
  v20 = 39;
  v21 = 11;
  while ( v4 < 0x28 )
  {
    v8 = *((_QWORD *)a1 + 2);
    v12 = *a1;
    v13 = v8;
    v9 = (*((_QWORD *)&v12 + ((unsigned __int64)(4 * v4) >> 6)) >> (4 * (unsigned __int8)v4)) & 3;
    if ( (unsigned int)v5 < 0x15 && v14[v5] == v4 )
    {
      v5 = (unsigned int)(v5 + 1);
    }
    else if ( v9 )
    {
      return 3221225485LL;
    }
    if ( (_DWORD)v6 || *(&v21 + v6) != v4 )
    {
      if ( v9 == 3 )
        return 3221225485LL;
    }
    else
    {
      v6 = 1LL;
    }
    ++v4;
  }
  while ( v7 < 0x30 )
  {
    v10 = *((_QWORD *)a1 + 2);
    v12 = *a1;
    v13 = v10;
    if ( ((*((_QWORD *)&v12 + ((unsigned __int64)(4 * v7) >> 6)) >> (4 * (unsigned __int8)v7)) & 3) != 0 )
      return 3221225485LL;
    ++v7;
  }
  return 0LL;
}
