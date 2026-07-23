/*
 * XREFs of RtlGetNextRange @ 0x140AAF1A0
 * Callers:
 *     ArbOverrideConflict @ 0x14078BA20 (ArbOverrideConflict.c)
 *     ArbShareDriverExclusive @ 0x14078C39C (ArbShareDriverExclusive.c)
 *     RtlpIsRangeAvailable @ 0x140AAF0B8 (RtlpIsRangeAvailable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetNextRange(__int64 *a1, __int64 *a2, char a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r11
  __int64 v9; // rcx
  __int64 result; // rax
  _QWORD *v11; // rax

  v3 = *a1;
  if ( *(_DWORD *)(*a1 + 24) != *((_DWORD *)a1 + 6) )
    return 3221225485LL;
  v6 = a1[2];
  if ( v6 )
  {
    if ( a3 )
      v7 = *(_QWORD *)(v6 + 40);
    else
      v7 = *(_QWORD *)(v6 + 48);
    v8 = a1[1];
    v9 = v7 - 40;
    if ( v8 )
    {
      if ( v7 != v8 )
      {
LABEL_8:
        a1[2] = v9;
        result = 0LL;
        *a2 = v9;
        return result;
      }
      v9 = *(_QWORD *)((-(__int64)(a3 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + v8 + 32) - 40LL;
      a1[1] = 0LL;
    }
    if ( v9 + 40 != v3 )
    {
      if ( (*(_BYTE *)(v9 + 34) & 1) != 0 )
      {
        v11 = (_QWORD *)(v9 + 16);
        a1[1] = v9 + 16;
        if ( !a3 )
          v11 = (_QWORD *)(v9 + 24);
        v9 = *v11 - 40LL;
      }
      goto LABEL_8;
    }
    a1[2] = 0LL;
  }
  *a2 = 0LL;
  return 2147483674LL;
}
