/*
 * XREFs of ?DetectInOutIn@ShellEdgyRecognizer@@AEAA_NAEBV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x18005269C
 * Callers:
 *     ?ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x18005231C (-ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV-$optional@ULastUpData@ShellEd.c)
 * Callees:
 *     ?HitTestEdgyRegion@ShellEdgyRecognizer@@QEAA?AW4EdgyLocation@1@UtagPOINT@@@Z @ 0x180052720 (-HitTestEdgyRegion@ShellEdgyRecognizer@@QEAA-AW4EdgyLocation@1@UtagPOINT@@@Z.c)
 */

bool __fastcall ShellEdgyRecognizer::DetectInOutIn(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // eax
  int v6; // eax

  if ( !*(_BYTE *)(a2 + 24) )
    return 0;
  if ( !(unsigned int)ShellEdgyRecognizer::HitTestEdgyRegion(a1, *(_QWORD *)(a2 + 16)) )
    return 0;
  if ( *(_QWORD *)(a1 + 56) != *(_QWORD *)(a2 + 8) )
    return 0;
  v4 = *(_QWORD *)(a1 + 136);
  if ( 1000000LL * *(_QWORD *)(v4 + 32) < *(_QWORD *)(a1 + 48) - *(_QWORD *)a2 )
    return 0;
  v5 = *(_DWORD *)(a2 + 16) - *(_DWORD *)(a1 + 40);
  if ( v5 < 0 )
    v5 = *(_DWORD *)(a1 + 40) - *(_DWORD *)(a2 + 16);
  if ( v5 > *(_DWORD *)(v4 + 40) )
    return 0;
  v6 = *(_DWORD *)(a2 + 20) - *(_DWORD *)(a1 + 44);
  if ( v6 < 0 )
    v6 = *(_DWORD *)(a1 + 44) - *(_DWORD *)(a2 + 20);
  return v6 <= *(_DWORD *)(v4 + 44);
}
