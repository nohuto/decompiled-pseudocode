/*
 * XREFs of ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x140176804
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x140048FE0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     NtUserCreatePopupMenu @ 0x1401766B0 (NtUserCreatePopupMenu.c)
 *     NtUserCreateMenu @ 0x1401767C0 (NtUserCreateMenu.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     CheckGrantedAccess @ 0x1401768E8 (CheckGrantedAccess.c)
 *     ??$InitLookAsideRef@UtagMENU@@@@YAEPEAUtagMENU@@@Z @ 0x14017691C (--$InitLookAsideRef@UtagMENU@@@@YAEPEAUtagMENU@@@Z.c)
 */

struct tagMENU *__fastcall InternalCreateMenu(__int64 a1, __int64 a2)
{
  int v2; // esi
  struct tagTHREADINFO *v3; // rax
  __int64 v4; // r8
  struct tagTHREADINFO *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi

  v2 = a1;
  v3 = PtiCurrent(a1, a2);
  v5 = v3;
  v6 = *((_QWORD *)v3 + 62);
  if ( *((_QWORD *)v3 + 79) && !(unsigned int)CheckGrantedAccess(*((unsigned int *)v3 + 234), 4LL) )
    return 0LL;
  LOBYTE(v4) = 2;
  v7 = HMAllocObject(v5, v6, v4, 160LL);
  v8 = v7;
  v9 = v7;
  if ( v7 )
  {
    if ( (unsigned __int8)InitLookAsideRef<tagMENU>(v7) )
    {
      if ( v2 )
      {
        *(_DWORD *)(*(_QWORD *)(v9 + 40) + 40LL) = 1;
        *(_OWORD *)(v9 + 128) = 0LL;
        *(_DWORD *)(v9 + 144) = 0;
      }
    }
    else
    {
      HMFreeObject(v8);
      return 0LL;
    }
  }
  return (struct tagMENU *)v8;
}
