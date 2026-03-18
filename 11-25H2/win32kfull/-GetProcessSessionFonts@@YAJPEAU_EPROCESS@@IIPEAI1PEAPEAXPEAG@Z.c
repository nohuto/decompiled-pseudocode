/*
 * XREFs of ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1401FF2A4
 * Callers:
 *     NtGdiGetProcessSessionFonts @ 0x1401FEE80 (NtGdiGetProcessSessionFonts.c)
 * Callees:
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400B975C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400B9F50 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ??1AttachProcessObj@Gre@@QEAA@XZ @ 0x14010EA74 (--1AttachProcessObj@Gre@@QEAA@XZ.c)
 *     ?Detach@AttachProcessObj@Gre@@QEAAXXZ @ 0x14010EA90 (-Detach@AttachProcessObj@Gre@@QEAAXXZ.c)
 *     ?Attach@AttachProcessObj@Gre@@QEAAXPEAU_EPROCESS@@@Z @ 0x14010EBB8 (-Attach@AttachProcessObj@Gre@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z @ 0x1401B1E08 (-PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030F07C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memmove @ 0x140342600 (memmove.c)
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
  unsigned int v7; // r15d
  void **v8; // rsi
  int v13; // ebx
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rdx
  struct PFF *v18; // rdi
  int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned int i; // edi
  int v25; // [rsp+20h] [rbp-A8h]
  HSEMAPHORE v27; // [rsp+28h] [rbp-A0h] BYREF
  struct _EPROCESS *v28; // [rsp+30h] [rbp-98h]
  struct _EPROCESS *CurrentProcess; // [rsp+38h] [rbp-90h]
  __int64 v30; // [rsp+40h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-80h] BYREF
  char v32; // [rsp+78h] [rbp-50h]

  v7 = 0;
  v8 = a6;
  *a4 = 0;
  *a5 = 0;
  v13 = 0;
  v28 = PROCESS;
  v32 = 0;
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(PROCESS);
  memset(&ApcState, 0, sizeof(ApcState));
  Gre::AttachProcessObj::Attach(&ApcState, PROCESS);
  v30 = *(_QWORD *)(W32GetSessionState(v15, v14) + 96) + 4872LL;
  v16 = v30;
  SEMOBJ<17>::SEMOBJ<17>(&v27, v30);
  v17 = *(_QWORD *)(v16 + 15544);
  v25 = 0;
  if ( *(_DWORD *)(v17 + 24) )
  {
    do
    {
      if ( ((v13 + 0x80000000) & 0x80000000) == 0 && v13 != -1073741789 )
        break;
      v18 = SkipInvalidPff(*(struct PFF **)(v17 + 8LL * v7 + 40));
      if ( v18 )
      {
        do
        {
          if ( (int)(v13 + 0x80000000) >= 0 && v13 != -1073741789 )
            break;
          if ( *((_QWORD *)v18 + 11) )
          {
            v19 = *((_DWORD *)v18 + 13);
            if ( (v19 & 8) == 0 && (v19 & 0x200) == 0 )
            {
              if ( ++*a4 == -1 )
                goto LABEL_14;
              v20 = *((_DWORD *)v18 + 8);
              v21 = -1;
              v22 = v20 + *a5;
              if ( v22 >= v20 )
                v21 = v20 + *a5;
              *a5 = v21;
              if ( v22 < v20 )
LABEL_14:
                v13 = -1073741675;
              if ( a2 && v13 >= 0 )
              {
                if ( *a4 > a2 || *a5 > a3 )
                {
                  v13 = -1073741789;
                }
                else
                {
                  v13 = PffDuplicateFileHandle(v18, CurrentProcess, v28, &a6[*a4 - 1]);
                  if ( v13 >= 0 )
                  {
                    memmove(a7, *(const void **)(**((_QWORD **)v18 + 26) + 80LL), 2LL * *((unsigned int *)v18 + 8));
                    a7 += *((unsigned int *)v18 + 8);
                  }
                }
              }
            }
          }
          v18 = SkipInvalidPff(*((struct PFF **)v18 + 1));
        }
        while ( v18 );
        v7 = v25;
      }
      v25 = ++v7;
      v17 = *(_QWORD *)(v30 + 15544);
    }
    while ( v7 < *(_DWORD *)(v17 + 24) );
  }
  SEMOBJ<17>::vUnlock(&v27);
  Gre::AttachProcessObj::Detach(&ApcState);
  if ( v13 < 0 )
  {
    for ( i = 0; i < a2; ++v8 )
    {
      if ( !*v8 )
        break;
      NtClose(*v8);
      ++i;
    }
  }
  SEMOBJ<17>::vUnlock(&v27);
  Gre::AttachProcessObj::~AttachProcessObj((Gre::AttachProcessObj *)&ApcState);
  return (unsigned int)v13;
}
