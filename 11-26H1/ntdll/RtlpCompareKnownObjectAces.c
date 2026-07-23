/*
 * XREFs of RtlpCompareKnownObjectAces @ 0x18004C4E0
 * Callers:
 *     RtlpCompareAces @ 0x180043BE0 (RtlpCompareAces.c)
 *     RtlpGenerateInheritedAce @ 0x18004AF80 (RtlpGenerateInheritedAce.c)
 *     RtlpIsDuplicateAce @ 0x18004C270 (RtlpIsDuplicateAce.c)
 * Callees:
 *     RtlEqualSid @ 0x180043DE0 (RtlEqualSid.c)
 *     RtlEqualPrefixSid @ 0x18004C420 (RtlEqualPrefixSid.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

char __fastcall RtlpCompareKnownObjectAces(unsigned __int8 *a1, unsigned __int8 *a2, void *a3, void *a4)
{
  __int64 v6; // rcx
  unsigned int v9; // r10d
  _DWORD *v10; // r9
  int v11; // esi
  unsigned __int8 *v12; // r8
  unsigned int v13; // r11d
  _DWORD *v14; // rdx
  int v15; // ebp
  unsigned __int8 *v16; // rcx
  bool v17; // zf
  __int64 v18; // r12
  unsigned __int8 *v19; // rsi
  int v20; // r8d
  void *v21; // rdx
  int Sid2; // [rsp+20h] [rbp-78h] BYREF
  __int64 v24; // [rsp+24h] [rbp-74h]

  v6 = *a2;
  if ( RtlBaseAceType[v6] != RtlBaseAceType[*a1] || RtlIsSystemAceType[v6] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
    return 0;
  v9 = *((_DWORD *)a2 + 2) & 1;
  v10 = (_DWORD *)((unsigned __int64)(a2 + 12) & -(__int64)(v9 != 0));
  v11 = *((_DWORD *)a2 + 2) & 2;
  if ( v11 )
    v12 = &a2[16 * v9 + 12];
  else
    v12 = 0LL;
  v13 = *((_DWORD *)a1 + 2) & 1;
  v14 = (_DWORD *)((unsigned __int64)(a1 + 12) & -(__int64)(v13 != 0));
  v15 = *((_DWORD *)a1 + 2) & 2;
  if ( v15 )
    v16 = &a1[16 * v13 + 12];
  else
    v16 = 0LL;
  if ( v12 )
  {
    if ( !v16
      || *(_DWORD *)v12 != *(_DWORD *)v16
      || *((_DWORD *)v12 + 1) != *((_DWORD *)v16 + 1)
      || *((_DWORD *)v12 + 2) != *((_DWORD *)v16 + 2)
      || *((_DWORD *)v12 + 3) != *((_DWORD *)v16 + 3) )
    {
      return 0;
    }
  }
  else if ( v16 )
  {
    return 0;
  }
  if ( v10 )
  {
    if ( !v14
      || *v10 != *v14
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 4) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 4)
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 8) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 8) )
    {
      return 0;
    }
    v17 = *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 0xC) == *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 0xC);
  }
  else
  {
    v17 = v14 == 0LL;
  }
  if ( v17 )
  {
    v18 = 16LL * v13;
    v19 = &a2[16 * v9 + (v11 != 0 ? 28LL : 12LL)];
    if ( RtlEqualSid(v19, &a1[v18 + (v15 != 0 ? 28LL : 12LL)]) )
      return 1;
    if ( (a2[1] & 3 | ~a2[1] & 8) == 8 && (a3 || a4) )
    {
      Sid2 = 257;
      v24 = 50331648LL;
      if ( RtlEqualPrefixSid(&a1[v18 + (v15 != 0 ? 28LL : 12LL)], &Sid2) )
      {
        v20 = *(_DWORD *)&a1[v18 + (v15 != 0 ? 36LL : 20LL)];
        if ( v20 )
        {
          if ( v20 != 1 || !a4 )
            return 0;
          v21 = a4;
        }
        else
        {
          if ( !a3 )
            return 0;
          v21 = a3;
        }
        if ( RtlEqualSid(v19, v21) )
          return 1;
      }
    }
  }
  return 0;
}
