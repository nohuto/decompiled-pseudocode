/*
 * XREFs of KiOp_Div @ 0x1404A83D0
 * Callers:
 *     <none>
 * Callees:
 *     KiOpRetrieveRegMemAddress @ 0x1404A851C (KiOpRetrieveRegMemAddress.c)
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 */

__int64 __fastcall KiOp_Div(__int64 a1)
{
  _DWORD *v2; // rsi
  int v3; // r14d
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 ULong64FromUser; // rax
  char v9; // [rsp+50h] [rbp+8h] BYREF
  _DWORD *v10; // [rsp+58h] [rbp+10h] BYREF
  _DWORD *v11; // [rsp+60h] [rbp+18h]

  v9 = 0;
  v10 = 0LL;
  v2 = *(_DWORD **)(a1 + 32);
  v11 = v2;
  if ( *v2 == -1073741676 )
  {
    v3 = KiOpRetrieveRegMemAddress(a1, &v10, &v9, 0LL);
    if ( v3 >= 0 )
    {
      if ( *(_BYTE *)(a1 + 56) == 0xF6 )
      {
        v4 = 1;
      }
      else if ( (*(_DWORD *)(a1 + 48) & 0x40) != 0 )
      {
        v4 = 2;
      }
      else
      {
        v4 = (*(_BYTE *)(a1 + 64) & 8) != 0 ? 8 : 4;
      }
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 2 )
          {
            if ( v9 )
              LODWORD(ULong64FromUser) = RtlReadULongFromUser(v10);
            else
              LODWORD(ULong64FromUser) = *v10;
            ULong64FromUser = (unsigned int)ULong64FromUser;
          }
          else if ( v9 )
          {
            ULong64FromUser = RtlReadULong64FromUser(v10);
          }
          else
          {
            ULong64FromUser = *(_QWORD *)v10;
          }
        }
        else
        {
          if ( v9 )
            LOWORD(ULong64FromUser) = RtlReadUShortFromUser(v10);
          else
            LOWORD(ULong64FromUser) = *(_WORD *)v10;
          ULong64FromUser = (unsigned __int16)ULong64FromUser;
        }
      }
      else
      {
        if ( v9 )
          LOBYTE(ULong64FromUser) = RtlReadUCharFromUser(v10);
        else
          LOBYTE(ULong64FromUser) = *(_BYTE *)v10;
        ULong64FromUser = (unsigned __int8)ULong64FromUser;
      }
      if ( ULong64FromUser )
        *v2 = -1073741675;
    }
  }
  return 0LL;
}
