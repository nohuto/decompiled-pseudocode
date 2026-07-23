/*
 * XREFs of AuthzBasepRemoveSecurityAttributeFromLists @ 0x14045DB80
 * Callers:
 *     AuthzBasepDeleteSecurityAttribute @ 0x1403B050C (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140719D34 (AuthzBasepRollbackSecurityAttributeChanges.c)
 * Callees:
 *     <none>
 */

void __fastcall AuthzBasepRemoveSecurityAttributeFromLists(_DWORD *a1, __int64 *a2, char a3, char a4)
{
  __int64 v5; // r8
  __int64 **v6; // rax
  __int64 *v7; // r8
  __int64 **v8; // rax

  if ( a4 && (a2[7] & 2) != 0 )
  {
    v5 = a2[2];
    if ( *(__int64 **)(v5 + 8) != a2 + 2 )
      goto LABEL_14;
    v6 = (__int64 **)a2[3];
    if ( *v6 != a2 + 2 )
      goto LABEL_14;
    *v6 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v6;
    *((_DWORD *)a2 + 14) &= ~2u;
    if ( a1 )
      --a1[6];
  }
  if ( a3 && (a2[7] & 1) != 0 )
  {
    v7 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) == a2 )
    {
      v8 = (__int64 **)a2[1];
      if ( *v8 == a2 )
      {
        *v8 = v7;
        v7[1] = (__int64)v8;
        *((_DWORD *)a2 + 14) &= ~1u;
        if ( a1 )
          --*a1;
        return;
      }
    }
LABEL_14:
    __fastfail(3u);
  }
}
