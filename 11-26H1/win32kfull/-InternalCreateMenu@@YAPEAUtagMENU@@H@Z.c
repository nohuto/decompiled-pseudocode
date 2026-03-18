/*
 * XREFs of ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1401E2764
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x140033B50 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     NtUserCreatePopupMenu @ 0x1401E26D0 (NtUserCreatePopupMenu.c)
 *     NtUserCreateMenu @ 0x1401E2720 (NtUserCreateMenu.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$InitLookAsideRef@UtagMENU@@@@YAEPEAUtagMENU@@@Z @ 0x1401E283C (--$InitLookAsideRef@UtagMENU@@@@YAEPEAUtagMENU@@@Z.c)
 */

struct tagMENU *__fastcall InternalCreateMenu(__int64 a1)
{
  int v1; // esi
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // r8
  struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi

  v1 = a1;
  v2 = PtiCurrent(a1);
  v4 = v2;
  v5 = *((_QWORD *)v2 + 61);
  if ( *((_QWORD *)v2 + 78) && !RtlAreAllAccessesGranted(*((_DWORD *)v2 + 232), 4u) )
  {
    UserSetLastError(5);
    return 0LL;
  }
  else
  {
    LOBYTE(v3) = 2;
    v6 = HMAllocObject(v4, v5, v3, 160LL);
    v7 = v6;
    v8 = v6;
    if ( v6 )
    {
      if ( (unsigned __int8)InitLookAsideRef<tagMENU>(v6) )
      {
        if ( v1 )
        {
          *(_DWORD *)(*(_QWORD *)(v8 + 40) + 40LL) = 1;
          *(_OWORD *)(v8 + 128) = 0LL;
          *(_DWORD *)(v8 + 144) = 0;
        }
      }
      else
      {
        HMFreeObject(v7);
        return 0LL;
      }
    }
    return (struct tagMENU *)v7;
  }
}
