/*
 * XREFs of GreRealizePalette @ 0x140268A30
 * Callers:
 *     xxxRealizePalette @ 0x1401E0060 (xxxRealizePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x140323AF4 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B170 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140077E90 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14007E404 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14007ED70 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140082AC4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x140082B20 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ @ 0x14008A7E0 (-InterlockedDecrementExclusiveLockCount@OBJECT@@QEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x14009344C (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140093A10 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1400CF040 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400D79B4 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D7D10 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x140142C80 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??0NEEDPDEVPOINTERLOCK@@QEAA@PEAUHDEV__@@@Z @ 0x1401E2734 (--0NEEDPDEVPOINTERLOCK@@QEAA@PEAUHDEV__@@@Z.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x140312160 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall GreRealizePalette(HDC a1)
{
  Gre::Base *v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v9; // eax
  _DWORD *v10; // rdx
  HDC v11; // rbx
  _QWORD *v12; // rax
  void *v13; // rcx
  _DWORD *v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  HDC v21; // rdi
  HSEMAPHORE v22; // rbx
  __int64 v23; // rdx
  int v24; // eax
  _DWORD *v25; // rdx
  HDC v26; // rbx
  _QWORD *v27; // r8
  void *v28; // rcx
  _DWORD *v29; // rcx
  __int64 matched; // rax
  HDC v31; // rdi
  struct _GRETHREAD *v32; // rax
  void (__fastcall *v34)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  unsigned int *v35; // r8
  unsigned int v36; // r9d
  unsigned int v37; // ebx
  _QWORD *v39; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+68h] [rbp-98h] BYREF
  int v43; // [rsp+70h] [rbp-90h]
  OBJECT *v44[10]; // [rsp+80h] [rbp-80h] BYREF
  HSEMAPHORE v45; // [rsp+D0h] [rbp-30h] BYREF
  HSEMAPHORE v46; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v47; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v48[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v49; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v50[14]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v51[176]; // [rsp+170h] [rbp+70h] BYREF
  int v52; // [rsp+238h] [rbp+138h] BYREF
  int v53; // [rsp+240h] [rbp+140h] BYREF
  HSEMAPHORE v54; // [rsp+248h] [rbp+148h] BYREF

  v53 = 0;
  v52 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v50, a1);
  if ( !v50[0] )
    goto LABEL_94;
  v3 = Gre::Base::Globals(v2);
  v41 = *(_QWORD *)(v50[0] + 48LL);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((Gre::Base *)&v49);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v48, (struct PDEVOBJ *)&v41);
  NEEDPDEVPOINTERLOCK::NEEDPDEVPOINTERLOCK((NEEDPDEVPOINTERLOCK *)&v47, *(_QWORD **)(v50[0] + 48LL));
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v51, (struct PDEVOBJ *)&v41);
  v4 = v41;
  v5 = *(_QWORD *)(v41 + 1792);
  v40 = v5;
  v39 = *(_QWORD **)(v50[0] + 88LL);
  v6 = *v39;
  if ( (*(_DWORD *)(v41 + 2156) & 0x100) != 0 )
  {
    SEMOBJ<13>::SEMOBJ<13>(&v46, v3);
    if ( v6 == *((_QWORD *)v3 + 457) )
      goto LABEL_97;
    if ( *(_DWORD *)(*(_QWORD *)(v50[0] + 976LL) + 208LL) != 1 )
      goto LABEL_98;
    v7 = (unsigned __int16)*((_DWORD *)v3 + 914) | (*((_DWORD *)v3 + 914) >> 8) & 0xFF0000u;
    if ( ((unsigned __int16)v6 | ((unsigned int)v6 >> 8) & 0xFF0000) != (_DWORD)v7 )
      goto LABEL_98;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( *((_QWORD *)v3 + 458) == CurrentProcessWin32Process )
    {
LABEL_97:
      if ( !XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v39) )
      {
        v23 = v39[9];
        if ( !v23 || v23 != v39[10] || (v24 = XEPALOBJ::ulTime((XEPALOBJ *)&v40), *v25 != v24) )
        {
          SEMOBJ<20>::SEMOBJ<20>((Gre::Base *)&v54);
          v26 = (HDC)v39[5];
          while ( v26 )
          {
            if ( v26 == a1 )
            {
              *(_DWORD *)(*(_QWORD *)(v50[0] + 976LL) + 152LL) |= 0xFu;
              v26 = *(HDC *)(v50[0] + 984LL);
            }
            else
            {
              DCOBJ::DCOBJ((DCOBJ *)v44, v26);
              if ( !v44[0] )
              {
                DCOBJ::~DCOBJ((DCOBJ *)v44);
                goto LABEL_67;
              }
              *(_DWORD *)(*((_QWORD *)v44[0] + 122) + 152LL) = *(_DWORD *)(*(_QWORD *)(v50[0] + 976LL) + 152LL) | 0xF;
              v26 = (HDC)*((_QWORD *)v44[0] + 123);
              XDCOBJ::RestoreAttributes((XDCOBJ *)v44);
              v44[0] = 0LL;
              DCOBJ::~DCOBJ((DCOBJ *)v44);
            }
          }
          v27 = v39;
          v28 = (void *)v39[11];
          if ( v28 )
          {
            if ( v28 != (void *)v39[9] )
            {
              Win32FreePool(v28);
              v27 = v39;
            }
            v27[11] = 0LL;
            v27 = v39;
          }
          v29 = (_DWORD *)v27[9];
          if ( v29 && !*v29 )
          {
            if ( (_DWORD *)v27[10] != v29 )
            {
              Win32FreePool(v29);
              v27 = v39;
            }
            v27[9] = 0LL;
            v27 = v39;
          }
          if ( v27[9] )
          {
            vMatchAPal(v50[0], v40, v27, &v52, &v53);
          }
          else
          {
            matched = ptransMatchAPal(v29, v40, v27, 1LL, &v52, &v53);
            v39[9] = matched;
          }
          v39[11] = v39[10];
          v39[10] = v39[9];
LABEL_67:
          v31 = (HDC)v39[5];
          while ( v31 != v26 )
          {
            if ( v31 != a1 )
            {
              DCOBJ::DCOBJ((DCOBJ *)v44, v31);
              OBJECT::InterlockedDecrementExclusiveLockCount(v44[0]);
              v31 = (HDC)*((_QWORD *)v44[0] + 123);
              DCOBJ::~DCOBJ((DCOBJ *)v44);
            }
          }
          v22 = v54;
          goto LABEL_72;
        }
      }
    }
    else
    {
LABEL_98:
      if ( !XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v39) )
      {
        if ( !v39[10] || (v9 = XEPALOBJ::ulTime((XEPALOBJ *)&v40), *v10 != v9) )
        {
          SEMOBJ<20>::SEMOBJ<20>((Gre::Base *)&v45);
          v11 = (HDC)v39[5];
          while ( v11 )
          {
            if ( v11 == a1 )
            {
              *(_DWORD *)(*(_QWORD *)(v50[0] + 976LL) + 152LL) |= 0xFu;
              v11 = *(HDC *)(v50[0] + 984LL);
            }
            else
            {
              DCOBJ::DCOBJ((DCOBJ *)v44, v11);
              if ( !v44[0] )
              {
                DCOBJ::~DCOBJ((DCOBJ *)v44);
                goto LABEL_38;
              }
              *(_DWORD *)(*((_QWORD *)v44[0] + 122) + 152LL) = *(_DWORD *)(*(_QWORD *)(v50[0] + 976LL) + 152LL) | 0xF;
              v11 = (HDC)*((_QWORD *)v44[0] + 123);
              XDCOBJ::RestoreAttributes((XDCOBJ *)v44);
              v44[0] = 0LL;
              DCOBJ::~DCOBJ((DCOBJ *)v44);
            }
          }
          v12 = v39;
          v13 = (void *)v39[11];
          if ( v13 )
          {
            if ( v13 != (void *)v39[9] )
            {
              Win32FreePool(v13);
              v12 = v39;
            }
            v12[11] = 0LL;
            v12 = v39;
          }
          v14 = (_DWORD *)v12[9];
          if ( v14 && !*v14 )
          {
            if ( (_DWORD *)v12[10] != v14 )
            {
              Win32FreePool(v14);
              v12 = v39;
            }
            v12[9] = 0LL;
            v12 = v39;
          }
          if ( !v12[9] )
          {
            v43 = 0;
            v42 = 0LL;
            if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v42, 1u, *(_DWORD *)(v40 + 28), 0LL, 0, 0, 0, 0x800u, 1) )
            {
              v15 = *(unsigned int *)(v40 + 28);
              v16 = *(_DWORD *)(v42 + 28);
              if ( (unsigned int)v15 >= v16 )
                v15 = v16;
              memmove(*(void **)(v42 + 112), *(const void **)(v40 + 112), 4 * v15);
              *(_DWORD *)(v42 + 60) = *(_DWORD *)(v40 + 60);
              *(_DWORD *)(v42 + 24) = *(_DWORD *)(v40 + 24);
              XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v42);
              v18 = ptransMatchAPal(v17, v42, v39, 1LL, &v54, &v54);
              v39[9] = v18;
            }
            PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v42);
            v12 = v39;
          }
          v19 = v12[10];
          v12[11] = v19;
          if ( v39[9] )
          {
            v20 = ptransMatchAPal(v19, v40, v39, 0LL, &v52, &v53);
            v39[10] = v20;
            if ( !v39[10] )
              v39[10] = v39[9];
          }
          else
          {
            v39[10] = 0LL;
          }
LABEL_38:
          v21 = (HDC)v39[5];
          while ( v21 != v11 )
          {
            if ( v21 != a1 )
            {
              DCOBJ::DCOBJ((DCOBJ *)v44, v21);
              OBJECT::InterlockedDecrementExclusiveLockCount(v44[0]);
              v21 = (HDC)*((_QWORD *)v44[0] + 123);
              DCOBJ::~DCOBJ((DCOBJ *)v44);
            }
          }
          v22 = v45;
LABEL_72:
          if ( v22 )
          {
            EtwTraceGreLockReleaseSemaphore(L"Hmgr", v22);
            v32 = GreGetCurrentThreadCrossSessionCheck();
            if ( v32 )
            {
              if ( (*((_BYTE *)v32 + 28))-- == 1 )
                *(_QWORD *)v32 &= ~0x100000uLL;
              if ( !*(_QWORD *)v32 )
                GrepOnAllLocksReleased();
            }
            GreReleaseSemaphoreExclusiveInternal(v22);
          }
        }
      }
    }
    SEMOBJ<13>::vUnlock(&v46);
    v4 = v41;
    v5 = v40;
  }
  if ( v52 )
  {
    if ( (*(_DWORD *)(v4 + 40) & 0x400) == 0 )
    {
      v34 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v4 + 1752);
      if ( v34 )
      {
        v34(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 1784LL), &v40, 0LL, 0LL, *(_DWORD *)(v5 + 28));
        v5 = v40;
      }
    }
    if ( *(_DWORD *)(v5 + 28) == 256 )
    {
      v35 = aPalHalftone;
      v36 = 0;
      while ( ((*v35 ^ *(unsigned int *)((char *)v35 + *(_QWORD *)(v5 + 112) - (_QWORD)aPalHalftone)) & 0xFFFFFF) == 0 )
      {
        ++v36;
        ++v35;
        if ( v36 >= 0x100 )
        {
          if ( v36 == 256 )
          {
            *(_DWORD *)(v5 + 24) |= 0x100000u;
            goto LABEL_91;
          }
          break;
        }
      }
      *(_DWORD *)(v5 + 24) &= ~0x100000u;
    }
  }
LABEL_91:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v51);
  if ( v47 )
    GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v47);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v48);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v49);
LABEL_94:
  v37 = v53 | (v52 << 16);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v50);
  return v37;
}
