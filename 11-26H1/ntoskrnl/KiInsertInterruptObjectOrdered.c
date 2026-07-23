/*
 * XREFs of KiInsertInterruptObjectOrdered @ 0x1404305F8
 * Callers:
 *     KiConnectInterrupt @ 0x140431660 (KiConnectInterrupt.c)
 *     KiConnectSecondaryInterrupt @ 0x1404318E8 (KiConnectSecondaryInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall KiInsertInterruptObjectOrdered(__int64 a1, __int64 a2)
{
  __int64 *v2; // r8
  __int64 **v3; // rcx
  __int64 *result; // rax
  __int64 *v5; // rcx
  __int64 **v6; // rdx
  __int64 *v7; // rax

  if ( *(_BYTE *)(a2 + 93) && *(_BYTE *)(a1 + 93) )
  {
    v2 = (__int64 *)(a1 + 8);
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 16) + 85LL) )
    {
      v3 = *(__int64 ***)(a1 + 16);
      result = (__int64 *)(a2 + 8);
      if ( *v3 != v2 )
        goto LABEL_5;
      *result = (__int64)v2;
      *(_QWORD *)(a2 + 16) = v3;
      *v3 = result;
      v2[1] = (__int64)result;
      return result;
    }
    v7 = (__int64 *)(a1 + 8);
    do
    {
      v5 = v7;
      if ( !*((_BYTE *)v7 + 85) )
        break;
      v7 = (__int64 *)*v7;
    }
    while ( v7 != v2 );
  }
  else
  {
    v5 = (__int64 *)(a1 + 8);
  }
  result = (__int64 *)(a2 + 8);
  v6 = (__int64 **)v5[1];
  if ( *v6 != v5 )
LABEL_5:
    __fastfail(3u);
  *result = (__int64)v5;
  result[1] = (__int64)v6;
  *v6 = result;
  v5[1] = (__int64)result;
  return result;
}
