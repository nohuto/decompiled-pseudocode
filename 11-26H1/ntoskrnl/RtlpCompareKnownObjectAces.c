/*
 * XREFs of RtlpCompareKnownObjectAces @ 0x14077D67C
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x1408EB060 (RtlpGenerateInheritedAce.c)
 *     RtlpIsDuplicateAce @ 0x1408EB4E0 (RtlpIsDuplicateAce.c)
 * Callees:
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 */

bool __fastcall RtlpCompareKnownObjectAces(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 v3; // rdx
  unsigned int v5; // ebx
  _DWORD *v6; // r9
  unsigned __int8 *v7; // r8
  unsigned int v8; // edi
  _DWORD *v9; // rdx
  int v10; // ebp
  unsigned __int8 *v11; // rcx
  bool v13; // zf

  v3 = *a2;
  if ( *((_BYTE *)RtlBaseAceType + v3) != *((_BYTE *)RtlBaseAceType + *a1)
    || *((_BYTE *)RtlIsSystemAceType + v3) && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
  {
    return 0;
  }
  v5 = *((_DWORD *)a2 + 2) & 1;
  v6 = (_DWORD *)((unsigned __int64)(a2 + 12) & -(__int64)(v5 != 0));
  if ( (*((_DWORD *)a2 + 2) & 2) != 0 )
    v7 = &a2[16 * v5 + 12];
  else
    v7 = 0LL;
  v8 = *((_DWORD *)a1 + 2) & 1;
  v9 = (_DWORD *)((unsigned __int64)(a1 + 12) & -(__int64)(v8 != 0));
  v10 = *((_DWORD *)a1 + 2) & 2;
  if ( v10 )
    v11 = &a1[16 * v8 + 12];
  else
    v11 = 0LL;
  if ( v7 )
  {
    if ( !v11
      || *(_DWORD *)v7 != *(_DWORD *)v11
      || *((_DWORD *)v7 + 1) != *((_DWORD *)v11 + 1)
      || *((_DWORD *)v7 + 2) != *((_DWORD *)v11 + 2)
      || *((_DWORD *)v7 + 3) != *((_DWORD *)v11 + 3) )
    {
      return 0;
    }
  }
  else if ( v11 )
  {
    return 0;
  }
  if ( v6 )
  {
    if ( !v9
      || *v6 != *v9
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 4) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 4)
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 8) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 8) )
    {
      return 0;
    }
    v13 = *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 0xC) == *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 0xC);
  }
  else
  {
    v13 = v9 == 0LL;
  }
  return v13
      && RtlEqualSid(
           &a2[16 * v5 + ((*((_DWORD *)a2 + 2) & 2) != 0 ? 28LL : 12LL)],
           &a1[16 * v8 + (v10 != 0 ? 28LL : 12LL)]);
}
