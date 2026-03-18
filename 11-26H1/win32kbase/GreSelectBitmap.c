/*
 * XREFs of GreSelectBitmap @ 0x14003E380
 * Callers:
 *     CleanupGDI @ 0x1400805CC (CleanupGDI.c)
 * Callees:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14003D020 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x14003DDB0 (-vUnlock@DCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributesHelper@DCOBJ@@AEAAXXZ @ 0x14003DE00 (-RestoreAttributesHelper@DCOBJ@@AEAAXXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14003FF44 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1400407D4 (-vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GreSelectBitmap(HDC a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int128 *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  _QWORD **v19; // rcx
  __int64 result; // rax
  _BYTE v21[16]; // [rsp+20h] [rbp-29h] BYREF
  __int64 v22; // [rsp+30h] [rbp-19h] BYREF
  int v23; // [rsp+38h] [rbp-11h]
  __int64 v24; // [rsp+40h] [rbp-9h]
  __int64 v25; // [rsp+48h] [rbp-1h]
  __int64 v26; // [rsp+50h] [rbp+7h] BYREF
  _QWORD **v27; // [rsp+58h] [rbp+Fh]
  __int128 v28; // [rsp+70h] [rbp+27h] BYREF
  __int128 v29; // [rsp+80h] [rbp+37h]
  char v30; // [rsp+90h] [rbp+47h]

  v24 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v25 = 0LL;
  v22 = 0LL;
  v23 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(&v26);
  DCOBJ::vLock((DCOBJ *)&v22, a1);
  v28 = 0LL;
  v29 = 0LL;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v5, v4);
  if ( CurrentThreadWin32Thread )
    v8 = *CurrentThreadWin32Thread;
  else
    v8 = 0LL;
  v9 = v8 + 8;
  v10 = -v8;
  v11 = (__int128 *)(v9 & -(__int64)(v10 != 0));
  *(_QWORD *)&v29 = &v22;
  *((_QWORD *)&v29 + 1) = UnexpectedThreadTerminationHandler<APIDCOBJ>::OnUnexpectedThreadTerminationStatic;
  if ( v11 )
  {
    v12 = (_QWORD *)v11 + 11;
    v13 = *((_QWORD *)v11 + 11);
    if ( *(__int128 **)(v13 + 8) != (__int128 *)((char *)v11 + 88) )
      goto LABEL_5;
    *(_QWORD *)&v28 = *((_QWORD *)v11 + 11);
    v11 = &v28;
    *((_QWORD *)&v28 + 1) = v12;
    *(_QWORD *)(v13 + 8) = &v28;
    v10 = (__int64)&v28;
    *v12 = &v28;
  }
  else
  {
    *((_QWORD *)&v28 + 1) = &v28;
    *(_QWORD *)&v28 = &v28;
  }
  v30 = 1;
  if ( !v22 )
    goto LABEL_23;
  if ( *(_WORD *)(v22 + 12) != 1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v11, v7);
  if ( *(_WORD *)(v22 + 12) != 1 )
    DCOBJ::vUnlock((DCOBJ *)&v22);
  if ( v22 )
  {
    v14 = *(_QWORD *)GrepSelectBitmap((__int64)v21, (__int64)&v22, a2, 4);
    v15 = *((_QWORD *)&v28 + 1);
    v22 &= -(__int64)(v30 != 0);
    v16 = v28;
    if ( *(__int128 **)(v28 + 8) != &v28 || **((__int128 ***)&v28 + 1) != &v28 )
      goto LABEL_5;
    **((_QWORD **)&v28 + 1) = v28;
    *(_QWORD *)(v16 + 8) = v15;
    v17 = v22;
    *((_QWORD *)&v28 + 1) = &v28;
    *(_QWORD *)&v28 = &v28;
    if ( v22 )
    {
      if ( v23 && (*(_DWORD *)(v22 + 44) & 2) != 0 )
      {
        DCOBJ::RestoreAttributesHelper((DCOBJ *)&v22);
        *(_DWORD *)(v22 + 44) &= ~2u;
        v17 = v22;
        v23 = 0;
      }
      _InterlockedDecrement16((volatile signed __int16 *)(v17 + 12));
      v22 = 0LL;
    }
    v18 = v26;
    v19 = v27;
    if ( *(__int64 **)(v26 + 8) != &v26 || *v27 != &v26 )
LABEL_5:
      __fastfail(3u);
    *v27 = (_QWORD *)v26;
    result = v14;
    *(_QWORD *)(v18 + 8) = v19;
  }
  else
  {
LABEL_23:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)&v22);
    return 0LL;
  }
  return result;
}
