/*
 * XREFs of ?GrepRemoveFontMemResource@@YAHPEAX@Z @ 0x14024FF90
 * Callers:
 *     NtGdiAddFontMemResourceEx @ 0x14021B960 (NtGdiAddFontMemResourceEx.c)
 *     NtGdiRemoveFontMemResourceEx @ 0x14024FF70 (NtGdiRemoveFontMemResourceEx.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IAEAI@Z @ 0x1400FE480 (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IAEAI@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z @ 0x14028B4D4 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z.c)
 */

__int64 __fastcall GrepRemoveFontMemResource(void *a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v3; // esi
  __int64 v4; // rdi
  HSEMAPHORE v5; // rbx
  struct PFT *v6; // rcx
  struct PFF *PFFFromId; // rax
  struct PFT *v9; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF
  HSEMAPHORE v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = (unsigned int)a1;
  v3 = 0;
  v4 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  v5 = *(HSEMAPHORE *)(v4 + 20320);
  v11 = v5;
  GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(
    (void (__fastcall *)(__int64))GreAcquireSemaphoreInternal,
    (__int64)v5);
  v6 = *(struct PFT **)(v4 + 20384);
  v9 = v6;
  if ( v6 )
  {
    v10 = 0;
    PFFFromId = GetPFFFromId(v6, v2, &v10);
    if ( PFFFromId )
    {
      if ( (*((_DWORD *)PFFFromId + 13) & 0x10) != 0 )
      {
        v3 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v9, PFFFromId, v10, 0x30u);
        if ( v3 )
          v5 = 0LL;
        v11 = v5;
      }
    }
  }
  SEMOBJ<17>::vUnlock(&v11);
  return v3;
}
