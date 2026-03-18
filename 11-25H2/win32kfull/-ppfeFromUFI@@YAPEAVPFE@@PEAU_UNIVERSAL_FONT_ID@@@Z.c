/*
 * XREFs of ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x14031E75C
 * Callers:
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z @ 0x140262AA0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVUDCOBJ@@@Z.c)
 * Callees:
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x14010F900 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?SameProccess@PFEOBJ@@QEAAHXZ @ 0x1401CF220 (-SameProccess@PFEOBJ@@QEAAHXZ.c)
 */

struct PFE *__fastcall ppfeFromUFI(struct _UNIVERSAL_FONT_ID *a1, __int64 a2)
{
  __int64 v3; // rdi
  struct _HASHBUCKET *v4; // rax
  _QWORD *i; // rbx
  _DWORD *v6; // rsi
  int v7; // eax
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v10; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  v9[0] = *(_QWORD *)(*(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96) + 20416LL) + 16LL;
  v9[1] = *(_QWORD *)v9[0];
  v4 = FHOBJ::pbktSearch((FHOBJ *)v9, 0LL, 0LL, a1, 0);
  if ( v4 )
  {
    for ( i = (_QWORD *)*((_QWORD *)v4 + 1); i; i = (_QWORD *)*i )
    {
      v6 = (_DWORD *)i[1];
      v7 = *(_DWORD *)a1;
      v10 = v6;
      if ( v6[21] == v7
        && v6[22] == *((_DWORD *)a1 + 1)
        && (unsigned int)PFEOBJ::SameProccess((PFEOBJ *)&v10)
        && (v6[3] & 2) == 0 )
      {
        return (struct PFE *)i[1];
      }
    }
  }
  return (struct PFE *)v3;
}
