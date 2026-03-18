/*
 * XREFs of ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x140104000
 * Callers:
 *     bAddAllFlEntry @ 0x1400CAAB4 (bAddAllFlEntry.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1400CB52C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddFlEntry @ 0x140103490 (bAddFlEntry.c)
 *     bUnloadEudcFont @ 0x140104924 (bUnloadEudcFont.c)
 *     ?CleanUpEUDC@@YAXXZ @ 0x14020E8D4 (-CleanUpEUDC@@YAXXZ.c)
 *     ?bSetupDefaultFlEntry@@YAHXZ @ 0x14026078C (-bSetupDefaultFlEntry@@YAHXZ.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x1400CA7A4 (-iHash@@YAIPEBGI@Z.c)
 *     ??$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FE100 (--$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?cCapString@@YAJPEAGPEBGH@Z @ 0x140103F00 (-cCapString@@YAJPEAGPEBGH@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140166AC8 (--$GreReleaseSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z @ 0x14028B4D4 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z.c)
 *     ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4 (--EPffIterator@@QEAAAEAV0@XZ.c)
 *     ??0PffIterator@@QEAA@PEAVPFF@@@Z @ 0x140297050 (--0PffIterator@@QEAA@PEAVPFF@@@Z.c)
 *     memcmp @ 0x14034FDE0 (memcmp.c)
 */

__int64 __fastcall PFTOBJ::bUnloadEUDCFont(PFTOBJ *this, unsigned __int16 *a2)
{
  unsigned int v2; // edi
  int v4; // esi
  __int64 v5; // rax
  unsigned int v6; // r14d
  unsigned __int16 *v7; // rax
  const unsigned __int16 *v8; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r13
  unsigned int v14; // eax
  unsigned int v15; // r12d
  unsigned int v16; // r10d
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 i; // rcx
  char v20; // al
  __int64 v21[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  HIDWORD(v22) = HIDWORD(this);
  v2 = 0;
  v4 = 0;
  LODWORD(v22) = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v6 = v5 + 1;
  if ( (unsigned int)(v5 + 1) > 0x1388000 )
    return 0LL;
  v7 = (unsigned __int16 *)AllocFreeTmpBuffer(2 * v6);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  cCapString(v7, a2, v6);
  v13 = *(_QWORD *)(W32GetSessionState(v11, v10, v12) + 96);
  v21[0] = *(_QWORD *)(v13 + 20392);
  GreAcquireSemaphore<17,>(v13 + 4864);
  v14 = iHash(v8, *(_DWORD *)(v21[0] + 24));
  v15 = v14;
  if ( v14 >= v16 )
  {
    PffIterator::PffIterator((PffIterator *)&v22, 0LL);
    goto LABEL_17;
  }
  v17 = *(_QWORD *)(v21[0] + 8LL * v14 + 40);
  v22 = v17;
  v18 = v17;
  for ( i = v17; ; i = v18 )
  {
    if ( !v18 || (v4 |= 1u, v20 = 1, (*(_DWORD *)(i + 52) & 0x10000) == 0) )
      v20 = 0;
    if ( (v4 & 1) != 0 )
      v4 &= ~1u;
    if ( !v20 )
      break;
    v18 = *(_QWORD *)(v17 + 8);
    v17 = v18;
    v22 = v18;
  }
  while ( v17
       && ((*(_DWORD *)(v17 + 52) & 8) == 0
        || v6 != *(_DWORD *)(v17 + 32)
        || *(_DWORD *)(v17 + 36) != 1
        || memcmp(*(const void **)(v17 + 24), v8, 2LL * v6)
        || *(_DWORD *)(v17 + 48)) )
  {
    PffIterator::operator++(&v22);
LABEL_17:
    v17 = v22;
  }
  if ( v17 )
    v2 = PFTOBJ::bUnloadWorkhorse((PFTOBJ *)v21, (struct PFF *)v17, v15, 0);
  else
    GreReleaseSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(
      GreReleaseSemaphoreExclusiveInternal,
      *(_QWORD *)(v13 + 20320));
  FreeTmpBuffer(v8);
  return v2;
}
