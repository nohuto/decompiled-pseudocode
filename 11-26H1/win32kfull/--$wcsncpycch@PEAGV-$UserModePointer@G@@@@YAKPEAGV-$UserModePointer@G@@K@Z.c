/*
 * XREFs of ??$wcsncpycch@PEAGV?$UserModePointer@G@@@@YAKPEAGV?$UserModePointer@G@@K@Z @ 0x14029073C
 * Callers:
 *     NtUserRemoteConnect @ 0x140233DB0 (NtUserRemoteConnect.c)
 * Callees:
 *     RtlReadUShortFromUser @ 0x1403E2240 (RtlReadUShortFromUser.c)
 */

__int64 __fastcall wcsncpycch<unsigned short *,UserModePointer<unsigned short>>(_WORD *a1, __int64 a2, int a3)
{
  int v3; // esi
  _WORD *v4; // rdi
  __int64 v6; // rbx
  __int16 UShortFromUser; // ax

  v3 = a3;
  v4 = a1;
  if ( a3 )
  {
    v6 = a2 - (_QWORD)a1;
    do
    {
      UShortFromUser = RtlReadUShortFromUser((char *)v4 + v6);
      *v4++ = UShortFromUser;
      if ( !UShortFromUser )
        break;
      --v3;
    }
    while ( v3 );
  }
  return (unsigned int)(v4 - a1);
}
