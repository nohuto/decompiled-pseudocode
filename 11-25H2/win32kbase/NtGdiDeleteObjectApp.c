/*
 * XREFs of NtGdiDeleteObjectApp @ 0x140013640
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140015360 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1400153E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x140016520 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgShareLockCheck @ 0x140017AD0 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     GrepDeleteDC @ 0x14001CC30 (GrepDeleteDC.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140046948 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     bDeleteBrush @ 0x140085F50 (bDeleteBrush.c)
 *     bDeleteSurface @ 0x14008CE40 (bDeleteSurface.c)
 *     ??$GrepReleaseLockValidate@$00@@YAXXZ @ 0x14008E380 (--$GrepReleaseLockValidate@$00@@YAXXZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400E8268 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z @ 0x1401C595C (-bDeletePalette@XEPALOBJ@@QEAAHW4_CLEANUPTYPE@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NtGdiDeleteObjectApp(HRGN a1)
{
  unsigned int v2; // r12d
  int v3; // ebx
  __int64 SessionState; // rax
  unsigned int v5; // edi
  unsigned int v6; // r14d
  unsigned __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // r10
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v16; // r9
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  __int64 v19; // r9
  __int64 v20; // r8
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  unsigned int v26; // ebx
  unsigned int (__fastcall *v27)(HRGN, _QWORD); // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  HSEMAPHORE v30; // rax
  unsigned int v31; // esi
  HSEMAPHORE v32; // rbx
  struct _GRETHREAD *v33; // rax
  bool v34; // zf
  HSEMAPHORE v35; // rbx
  struct _GRETHREAD *v36; // rax
  _QWORD v37[8]; // [rsp+20h] [rbp-40h] BYREF
  HSEMAPHORE v38; // [rsp+90h] [rbp+30h] BYREF
  HSEMAPHORE v39; // [rsp+98h] [rbp+38h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v2 = (unsigned int)a1 >> 16;
  v3 = BYTE2(a1) & 0x1F;
  SessionState = W32GetSessionState();
  v5 = 0;
  v6 = 1;
  v7 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v8 = *(_QWORD *)(*(_QWORD *)(SessionState + 88) + 5672LL);
  if ( (unsigned int)v7 >= 0x10000 )
  {
    if ( *(_DWORD *)v8 <= 0x10000u )
    {
      v7 = (unsigned __int16)a1;
    }
    else
    {
      v9 = *(_QWORD *)(v8 + 16);
      v10 = *(_DWORD *)(v9 + 2056);
      if ( (unsigned __int16)a1 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
      {
        v14 = 0LL;
      }
      else
      {
        if ( (unsigned __int16)a1 >= v10 )
          v11 = (((unsigned __int16)a1 - v10) >> 16) + 1;
        else
          v11 = 0;
        v12 = *(_QWORD *)(v9 + 8LL * v11 + 8);
        if ( v11 )
          v13 = (unsigned __int16)a1 + ((1 - v11) << 16) - v10;
        else
          v13 = (unsigned __int16)a1;
        v14 = 0LL;
        if ( (unsigned int)v13 < *(_DWORD *)(v12 + 20) )
          v14 = *(_QWORD *)v12 + 24 * v13;
      }
      if ( *(unsigned __int8 *)(v14 + 13) == WORD1(v7) )
        v7 = (unsigned __int16)a1;
    }
  }
  v16 = *(_QWORD *)(v8 + 16);
  v17 = *(_DWORD *)(v16 + 2056);
  if ( (unsigned int)v7 < v17 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
  {
    if ( (unsigned int)v7 >= v17 )
      v18 = (((unsigned int)v7 - v17) >> 16) + 1;
    else
      v18 = 0;
    v19 = *(_QWORD *)(v16 + 8LL * v18 + 8);
    if ( v18 )
      v7 = ((1 - v18) << 16) - v17 + (unsigned int)v7;
    v20 = 0LL;
    if ( (unsigned int)v7 < *(_DWORD *)(v19 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v19 + 24) + 8 * (v7 >> 8)) + 16LL * (unsigned __int8)v7 + 8) )
    {
      v20 = *(_QWORD *)v19 + 24LL * (unsigned int)v7;
    }
    if ( v20
      && *(unsigned __int8 *)(v20 + 14) == v3
      && *(_WORD *)(v20 + 12) == (_WORD)v2
      && (*(_DWORD *)(v20 + 8) & 0xFFFFFFFE) == 0 )
    {
      LOBYTE(v5) = a1 != 0LL;
      return v5;
    }
  }
  v21 = v3 - 1;
  if ( !v21 )
    return GrepDeleteDC((HDC)a1);
  v22 = v21 - 3;
  if ( !v22 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v37, a1, 0, 0);
    if ( !v37[0] || *(_DWORD *)(v37[0] + 76LL) || !(unsigned int)RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v37) )
      v6 = 0;
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v37);
    return v6;
  }
  v23 = v22 - 1;
  if ( !v23 )
  {
    SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v38);
    v26 = bDeleteSurface(a1);
    EtwTraceGreLockReleaseSemaphore(L"DynamicModeChange", v38);
    GrepReleaseLockValidate<1>();
    GreReleaseSemaphoreSharedInternal(v38);
    return v26;
  }
  v24 = v23 - 3;
  if ( !v24 )
  {
    v28 = W32GetSessionState();
    SEMOBJ<13>::SEMOBJ<13>(&v39, *(_QWORD *)(v28 + 88));
    LOBYTE(v29) = 8;
    v30 = (HSEMAPHORE)HmgShareLockCheck(a1, v29);
    v38 = v30;
    if ( v30 )
    {
      if ( ((_DWORD)v30[6] & 0x1000000) == 0 )
      {
        v31 = XEPALOBJ::bDeletePalette(&v38, 0LL);
        if ( v38 )
          HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)v38, 0LL);
        v32 = v39;
        if ( v39 )
        {
          EtwTraceGreLockReleaseSemaphore(L"Palette", v39);
          v33 = GreGetCurrentThreadCrossSessionCheck();
          if ( v33 )
          {
            v34 = (*((_BYTE *)v33 + 21))-- == 1;
            if ( v34 )
              *(_QWORD *)v33 &= ~0x2000uLL;
          }
          GreReleaseSemaphoreSharedInternal(v32);
        }
        return v31;
      }
      HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)v30, 0LL);
    }
    v35 = v39;
    if ( v39 )
    {
      EtwTraceGreLockReleaseSemaphore(L"Palette", v39);
      v36 = GreGetCurrentThreadCrossSessionCheck();
      if ( v36 )
      {
        v34 = (*((_BYTE *)v36 + 21))-- == 1;
        if ( v34 )
          *(_QWORD *)v36 &= ~0x2000uLL;
      }
      GreReleaseSemaphoreSharedInternal(v35);
    }
    return 0LL;
  }
  v25 = v24 - 2;
  if ( !v25 )
  {
    v27 = *(unsigned int (__fastcall **)(HRGN, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 592LL);
    if ( v27 )
      return v27(a1, 0LL);
    return v5;
  }
  if ( v25 != 6 )
    return 0LL;
  return bDeleteBrush((HBRUSH)a1);
}
