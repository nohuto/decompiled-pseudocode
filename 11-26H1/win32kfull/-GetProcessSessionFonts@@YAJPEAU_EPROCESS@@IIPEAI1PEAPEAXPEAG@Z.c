/*
 * XREFs of ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x14021F2C4
 * Callers:
 *     NtGdiGetProcessSessionFonts @ 0x14021EED0 (NtGdiGetProcessSessionFonts.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400C6028 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z @ 0x1400CEE9C (-PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z.c)
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FE8E0 (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?PffBucket@PFT@@QEBA?AVPffIterator@@K@Z @ 0x14025A850 (-PffBucket@PFT@@QEBA-AVPffIterator@@K@Z.c)
 *     ??EPffIterator@@QEAAAEAV0@XZ @ 0x140296FC4 (--EPffIterator@@QEAAAEAV0@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall GetProcessSessionFonts(
        PRKPROCESS PROCESS,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int *a5,
        void **a6,
        unsigned __int16 *a7)
{
  unsigned int v7; // r13d
  void **v9; // rsi
  int v12; // ebx
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rcx
  unsigned int v16; // r10d
  struct PFF *v17; // rdi
  char *v18; // r13
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned int i; // edi
  int v24; // [rsp+20h] [rbp-71h]
  struct PFF *v26; // [rsp+28h] [rbp-69h] BYREF
  void *v27; // [rsp+30h] [rbp-61h]
  __int64 v28; // [rsp+38h] [rbp-59h] BYREF
  struct _EPROCESS *v29; // [rsp+40h] [rbp-51h]
  struct _EPROCESS *CurrentProcess; // [rsp+48h] [rbp-49h]
  __int64 v31; // [rsp+50h] [rbp-41h]
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-39h] BYREF
  char v33; // [rsp+88h] [rbp-9h]

  v7 = 0;
  v9 = a6;
  *a4 = 0;
  v12 = 0;
  *a5 = 0;
  v29 = PROCESS;
  v27 = a7;
  v33 = 0;
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(PROCESS);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(PROCESS, &ApcState);
  v33 = 1;
  v31 = *(_QWORD *)(W32GetSessionState(v14, v13) + 96);
  v28 = *(_QWORD *)(v31 + 20320);
  GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>((void (__fastcall *)(__int64))GreAcquireSemaphoreInternal, v28);
  v15 = *(_QWORD *)(v31 + 20392);
  v24 = 0;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_26;
  v16 = 0x80000000;
  do
  {
    if ( ((v12 + v16) & v16) == 0 && v12 != -1073741789 )
      break;
    PFT::PffBucket(v15, &v26, v7);
    v17 = v26;
    if ( !v26 )
      goto LABEL_25;
    v18 = (char *)v27;
    while ( ((v12 + v16) & v16) != 0 || v12 == -1073741789 )
    {
      if ( *((_QWORD *)v17 + 11) )
      {
        v19 = *((_DWORD *)v17 + 13);
        if ( (v19 & 8) == 0 && (v19 & 0x200) == 0 )
        {
          if ( ++*a4 != -1 )
          {
            v20 = *((_DWORD *)v17 + 8);
            v21 = v20 + *a5;
            if ( v21 >= v20 )
            {
              *a5 = v21;
LABEL_17:
              if ( a2 && v12 >= 0 )
              {
                if ( *a4 > a2 || *a5 > a3 )
                {
                  v12 = -1073741789;
                }
                else
                {
                  v12 = PffDuplicateFileHandle(v17, CurrentProcess, v29, &a6[*a4 - 1]);
                  if ( v12 >= 0 )
                  {
                    memmove(v18, *(const void **)(**((_QWORD **)v17 + 26) + 80LL), 2LL * *((unsigned int *)v17 + 8));
                    v18 += 2 * *((unsigned int *)v17 + 8);
                  }
                }
              }
              goto LABEL_23;
            }
            *a5 = -1;
          }
          v12 = -1073741675;
          goto LABEL_17;
        }
      }
LABEL_23:
      PffIterator::operator++(&v26);
      v17 = v26;
      if ( !v26 )
        break;
    }
    v27 = v18;
    v7 = v24;
LABEL_25:
    v24 = ++v7;
    v15 = *(_QWORD *)(v31 + 20392);
  }
  while ( v7 < *(_DWORD *)(v15 + 24) );
LABEL_26:
  SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v28);
  if ( v33 )
  {
    KeUnstackDetachProcess(&ApcState);
    v33 = 0;
  }
  if ( v12 < 0 )
  {
    for ( i = 0; i < a2; ++v9 )
    {
      if ( !*v9 )
        break;
      NtClose(*v9);
      ++i;
    }
  }
  SEMOBJ<17>::vUnlock((HSEMAPHORE *)&v28);
  if ( v33 )
    KeUnstackDetachProcess(&ApcState);
  return (unsigned int)v12;
}
