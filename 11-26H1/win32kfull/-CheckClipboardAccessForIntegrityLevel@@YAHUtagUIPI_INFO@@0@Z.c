/*
 * XREFs of ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x140056770
 * Callers:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140057518 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     _GetPriorityClipboardFormat @ 0x1401AF280 (_GetPriorityClipboardFormat.c)
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1401AF6D0 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1402B4F40 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall CheckClipboardAccessForIntegrityLevel(_QWORD *a1, const struct tagUIPI_INFO *a2)
{
  const struct tagUIPI_INFO *v2; // r8
  unsigned int v3; // r9d
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-20h]

  v2 = (const struct tagUIPI_INFO *)&unk_1403AA908;
  v3 = *a1;
  v10 = 0LL;
  v11 = 0;
  v5 = 0LL;
  while ( 1 )
  {
    v6 = v5 + 1;
    if ( v3 >= *(_DWORD *)v2 && v3 < *((_DWORD *)&gaClipILDef + 8 * v6 + 2) )
      break;
    v2 = (const struct tagUIPI_INFO *)((char *)v2 + 32);
    v5 = v6;
    if ( v6 >= 5 )
    {
      if ( v6 != 5 )
        break;
      goto LABEL_11;
    }
  }
  while ( (unsigned int)v5 < 5 )
  {
    if ( *((_DWORD *)&gaClipILDef + 8 * (unsigned int)(v5 + 1) + 6) )
    {
      v7 = 32 * v5;
      LODWORD(v10) = *(_DWORD *)((char *)&gaClipILDef + v7 + 8);
      v8 = *(_DWORD *)((char *)&gaClipILDef + v7 + 12);
      goto LABEL_9;
    }
    v5 = (unsigned int)(v5 + 1);
  }
LABEL_11:
  LODWORD(v10) = dword_1403AA9A8;
  v8 = dword_1403AA9AC;
LABEL_9:
  HIDWORD(v10) = v8;
  return UIPrivilegeIsolation::CheckAccess((UIPrivilegeIsolation *)&v10, a2, v2);
}
