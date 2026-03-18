/*
 * XREFs of bDfbSurfacesMigrated @ 0x14002EBF0
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x140030400 (pProcessDfbSurfaces2.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ?vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x140026D44 (-vLock@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1400271B4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     MulFindDisplayDhsurfFromMetaSurf @ 0x14018FEAC (MulFindDisplayDhsurfFromMetaSurf.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bDfbSurfacesMigrated(__int64 a1, __int64 a2)
{
  int v4; // r11d
  unsigned int v5; // esi
  HSURF v6; // r12
  __int64 (__fastcall *v7)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD); // r10
  __int64 DisplayDhsurfFromMetaSurf; // r13
  __int64 v9; // rbx
  unsigned int v10; // r15d
  _QWORD *v11; // rdx
  unsigned int *v12; // rcx
  __int64 SessionState; // rax
  _QWORD *i; // rdx
  _QWORD *j; // rax
  __int64 v17; // rax
  _QWORD v18[4]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int *v19; // [rsp+70h] [rbp-10h]
  __int64 (__fastcall *v20)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD); // [rsp+C0h] [rbp+40h] BYREF
  _QWORD *v21; // [rsp+C8h] [rbp+48h]
  _QWORD *v22; // [rsp+D0h] [rbp+50h]

  if ( (*(_DWORD *)(a2 + 116) & 0x4000) == 0 && (*(_DWORD *)(a2 + 112) & 0x800000) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 40);
    v5 = 0;
    if ( (v4 & 0x20000) != 0 )
    {
      for ( i = **(_QWORD ***)(a1 + 1784); i; i = (_QWORD *)*i )
      {
        if ( *(_DWORD *)(*(_QWORD *)(i[6] + 1776LL) + 32LL) != 1 )
          return 0LL;
      }
    }
    v6 = 0LL;
    if ( (*(_DWORD *)(a1 + 1808) & 0x8000000) != 0 )
      goto LABEL_16;
    v7 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(a1 + 3432);
    v20 = v7;
    if ( !v7 )
      goto LABEL_16;
    DisplayDhsurfFromMetaSurf = *(_QWORD *)(a2 + 24);
    if ( !_bittest((const signed __int32 *)(*(_QWORD *)(a2 + 48) + 40LL), 0x11u) )
    {
LABEL_7:
      v9 = *(_QWORD *)(a2 + 56);
      v10 = *(_DWORD *)(a2 + 120);
      v20 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD))(a2 + 568);
      if ( (v4 & 0x4000000) != 0 )
      {
        v11 = *(_QWORD **)(a1 + 1784);
        v22 = v11;
        for ( j = (_QWORD *)*v11; ; j = (_QWORD *)*v21 )
        {
          v21 = j;
          if ( !j || v6 )
            break;
          v11[13] = *(_QWORD *)(*(_QWORD *)(j[7] + 2568LL) + 240LL);
          v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _DWORD, _DWORD, _QWORD *))(a1 + 3432))(
                  *(_QWORD *)(a1 + 1784),
                  v9,
                  *(unsigned int *)(a2 + 96),
                  v10 | 0x10,
                  DisplayDhsurfFromMetaSurf,
                  *(_DWORD *)(a2 + 124),
                  0,
                  &v20);
          v11 = v22;
          v6 = (HSURF)v17;
        }
      }
      else
      {
        v6 = (HSURF)v7(
                      *(_QWORD *)(a1 + 1784),
                      v9,
                      *(unsigned int *)(a2 + 96),
                      v10 | 0x10,
                      DisplayDhsurfFromMetaSurf,
                      *(_DWORD *)(a2 + 124),
                      0,
                      &v20);
      }
      UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(
        (__int64)v18,
        (__int64)v11);
      SURFREF::vLock((SURFREF *)v18, v6);
      v12 = v19;
      if ( v19 )
      {
        *(_QWORD *)(a2 + 560) = v19;
        if ( (v12[29] & 0x2000) != 0 )
          *(_DWORD *)(a2 + 116) |= 0x2000u;
        v12[30] = v10;
        if ( (*(_DWORD *)(a1 + 40) & 0x20000) == 0 )
        {
          if ( (v10 & 1) != 0 )
          {
            v19[29] |= 1u;
            *((_QWORD *)v19 + 71) = v20;
            *((_QWORD *)v19 + 72) = *(_QWORD *)(a2 + 576);
            v12 = (unsigned int *)*(unsigned int *)(a2 + 124);
            v19[31] = (unsigned int)v12;
          }
          else if ( (v10 & 2) != 0 )
          {
            v19[29] |= 8u;
          }
          v19[28] |= 0x800000u;
          v19[28] |= 0x4000000u;
          v19[28] |= 0x4000u;
        }
        if ( v19 )
        {
          SessionState = W32GetSessionState(v12);
          HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), v19);
        }
      }
      PopThreadGuardedObject(v18);
LABEL_16:
      LOBYTE(v5) = v6 != 0LL;
      return v5;
    }
    DisplayDhsurfFromMetaSurf = MulFindDisplayDhsurfFromMetaSurf((a2 + 24) & -(__int64)(a2 != 0));
    if ( DisplayDhsurfFromMetaSurf )
    {
      v7 = v20;
      goto LABEL_7;
    }
  }
  return 0LL;
}
