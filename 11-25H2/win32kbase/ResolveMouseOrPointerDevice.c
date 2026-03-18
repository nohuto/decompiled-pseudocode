/*
 * XREFs of ResolveMouseOrPointerDevice @ 0x140067190
 * Callers:
 *     NtUserGetPointerDeviceInputSpace @ 0x1401BD920 (NtUserGetPointerDeviceInputSpace.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall ResolveMouseOrPointerDevice(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  _QWORD *v5; // rsi
  __int64 v7; // rax

  v3 = 0;
  *a2 = 0LL;
  v5 = a2;
  if ( a3 )
    *a3 = 0;
  if ( a1 == -1 )
  {
    if ( a3 )
    {
      v3 = 1;
      *a3 = 1;
    }
  }
  else
  {
    LOBYTE(a2) = 19;
    v7 = HMValidateHandleNoSecure(a1, a2);
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 48) )
      {
        if ( (*(_DWORD *)(v7 + 184) & 0x80u) != 0 )
        {
          v3 = 1;
          *v5 = *(_QWORD *)(v7 + 456);
        }
      }
      else if ( a3 )
      {
        v3 = 1;
        *a3 = 1;
      }
    }
  }
  return v3;
}
