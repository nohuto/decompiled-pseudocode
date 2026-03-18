/*
 * XREFs of PopHandleProvIdentifierRequest @ 0x1407CC938
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopHandleProvIdentifierRequest(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        _DWORD *a6)
{
  unsigned int v6; // r10d
  int v7; // ecx

  v6 = 0;
  if ( a1 && a2 >= 0x18 )
  {
    v7 = *(_DWORD *)(a1 + 8);
    if ( !v7 )
    {
      if ( unk_140F10DD0.Length )
      {
        if ( a3 && a4 >= 2 )
        {
          *a5 = word_140F10DD2;
          *a6 = 2;
          return v6;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1073741637;
    }
    if ( v7 == 1 )
    {
      if ( unk_140F10DD0.Length )
      {
        if ( a3 && a4 >= word_140F10DD2[0] )
        {
          *a5 = unk_140F10DD8;
          *a6 = word_140F10DD2[0];
          return v6;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)-1073741811;
}
