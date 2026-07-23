/*
 * XREFs of RtlpGetActivationContextData @ 0x1800CAF50
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x180038450 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetActivationContextData(int a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  char v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v8; // eax

  v4 = a1;
  if ( !a4 )
    return 3221225714LL;
  if ( (a1 & 0xFFFFFFFE) == 0 )
  {
    *a4 = 0LL;
    if ( a2 )
    {
      if ( a2 == -3 )
        goto LABEL_10;
      if ( a2 != -4 )
      {
        v6 = *(_QWORD *)(a2 + 24);
LABEL_7:
        *a4 = v6;
        if ( v6 )
          return 0LL;
        goto LABEL_9;
      }
    }
    else
    {
      if ( !a3 || (v8 = *(_DWORD *)(a3 + 24) & 7, v8 < 2) )
      {
        v5 = 760LL;
LABEL_6:
        v6 = *(_QWORD *)(&NtCurrentPeb()->InheritedAddressSpace + v5);
        goto LABEL_7;
      }
      if ( v8 != 2 )
      {
        if ( v8 != 4 )
          return 3221225712LL;
LABEL_9:
        if ( (v4 & 1) != 0 )
LABEL_10:
          *a4 = "Actx ";
        return 0LL;
      }
    }
    v5 = 776LL;
    goto LABEL_6;
  }
  return 3221225711LL;
}
