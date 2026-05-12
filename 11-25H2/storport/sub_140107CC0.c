/*
 * XREFs of sub_140107CC0 @ 0x140107CC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400BC8A4 @ 0x1400BC8A4 (sub_1400BC8A4.c)
 *     sub_1400BD378 @ 0x1400BD378 (sub_1400BD378.c)
 *     sub_1400E736C @ 0x1400E736C (sub_1400E736C.c)
 *     sub_1400F5FEC @ 0x1400F5FEC (sub_1400F5FEC.c)
 *     sub_1400F8C38 @ 0x1400F8C38 (sub_1400F8C38.c)
 *     sub_1400F98F8 @ 0x1400F98F8 (sub_1400F98F8.c)
 *     sub_140122D58 @ 0x140122D58 (sub_140122D58.c)
 */

void __fastcall sub_140107CC0(PVOID IoObject, __int64 Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rdi
  int v5; // ebp
  __int64 v6; // r8
  __int64 v7; // r8
  int v8; // eax
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int128 v18; // [rsp+A0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(Context + 616);
  v5 = 1;
  v18 = 0LL;
  sub_140122D58(*(_QWORD *)(Context + 16), v3);
  if ( (int)sub_1400F8C38(Context, *(_QWORD *)(Context + 624)) >= 0 )
  {
    v8 = sub_1400E736C(*(_QWORD *)(Context + 16), 0x200u, v6, (void **)&v18, (_QWORD *)&v18 + 1, 0);
    v10 = *(_QWORD *)v3;
    if ( v8 >= 0 )
    {
      LOBYTE(v9) = -127;
      *(_DWORD *)(*(_QWORD *)v3 + 4256LL) = *(_DWORD *)(v10 + 4256) | 1;
      *(_DWORD *)(*(_QWORD *)v3 + 4256LL) |= 2u;
      *(_WORD *)(*(_QWORD *)v3 + 4252LL) = 0;
      *(_QWORD *)(*(_QWORD *)v3 + 4192LL) = sub_140109F80;
      *(_QWORD *)(*(_QWORD *)v3 + 4216LL) = Context;
      *(_OWORD *)(*(_QWORD *)v3 + 4160LL) = v18;
      *(_QWORD *)(*(_QWORD *)v3 + 4200LL) = v3;
      *(_QWORD *)(*(_QWORD *)v3 + 4240LL) = v3;
      v11 = *(_QWORD *)v3;
      *(_WORD *)(v3 + 52) = *(_WORD *)(Context + 640);
      sub_1400BC8A4(
        *(_QWORD *)(Context + 16),
        v11 + 4096,
        v9,
        0x200u,
        *((__int64 *)&v18 + 1),
        -1,
        0LL,
        0,
        v11,
        *(_QWORD *)(v3 + 8));
      v12 = sub_1400BD378(*(PVOID *)(Context + 16), v3);
      v13 = *(_QWORD *)v3;
      if ( v12 >= 0 )
      {
        v14 = *(_QWORD *)(v13 + 4160);
        if ( (*(_BYTE *)(v14 + 2) & 7) == 3 )
        {
          sub_140122D58(*(_QWORD *)(Context + 16), v3);
          v15 = *(_DWORD *)(v14 + 4);
          if ( (v15 & 8) == 0 )
            v5 = v15 & 7;
          *(_DWORD *)(*(_QWORD *)v3 + 4256LL) |= 1u;
          *(_DWORD *)(*(_QWORD *)v3 + 4256LL) &= ~2u;
          *(_WORD *)(*(_QWORD *)v3 + 4252LL) = 0;
          *(_QWORD *)(*(_QWORD *)v3 + 4192LL) = sub_140109F80;
          v16 = *(_QWORD *)v3;
          v17 = *(_DWORD *)(*(_QWORD *)v3 + 4136LL) & 0xFFFFFFF8;
          *(_BYTE *)(v16 + 4096) = -124;
          *(_DWORD *)(v16 + 4140) = 0;
          *(_DWORD *)(v16 + 4136) = ((v5 | v17) & 0xFFFFFFF7 ^ (8 * ((v15 & 8) != 0))) & 0xFFFFFC0F;
          if ( (int)sub_1400BD378(*(PVOID *)(Context + 16), v3) < 0 )
            sub_1400A870C(
              *(_QWORD *)(Context + 16),
              1,
              2,
              (__int64)L"Sanitize Recover Command Failed",
              L"NVMeStatus",
              *(_WORD *)(*(_QWORD *)v3 + 4260LL),
              &dword_140149108,
              0,
              &dword_140149108,
              0,
              &dword_140149108,
              0,
              (void *)&dword_140149108,
              0,
              (void *)&dword_140149108,
              0,
              (void *)&dword_140149108,
              0,
              (void *)&dword_140149108,
              0);
        }
        else
        {
          sub_1400A870C(
            *(_QWORD *)(Context + 16),
            1,
            2,
            (__int64)L"Last sanitize command completed successfully. Bail out.",
            L"NVMeStatus",
            *(_WORD *)(v13 + 4260),
            &dword_140149108,
            0,
            &dword_140149108,
            0,
            &dword_140149108,
            0,
            (void *)&dword_140149108,
            0,
            (void *)&dword_140149108,
            0,
            (void *)&dword_140149108,
            0,
            (void *)&dword_140149108,
            0);
        }
      }
      else
      {
        sub_1400A870C(
          *(_QWORD *)(Context + 16),
          1,
          2,
          (__int64)L"Get Sanitize Log Page Failed",
          L"NVMeStatus",
          *(_WORD *)(v13 + 4260),
          &dword_140149108,
          0,
          &dword_140149108,
          0,
          &dword_140149108,
          0,
          (void *)&dword_140149108,
          0,
          (void *)&dword_140149108,
          0,
          (void *)&dword_140149108,
          0,
          (void *)&dword_140149108,
          0);
      }
    }
    else
    {
      sub_1400A870C(
        *(_QWORD *)(Context + 16),
        1,
        2,
        (__int64)L"Failed to Allocate DMA buffer for sanitize recover.",
        L"NVMeStatus",
        *(_WORD *)(v10 + 4260),
        &dword_140149108,
        0,
        &dword_140149108,
        0,
        &dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 120));
  }
  else
  {
    sub_1400A870C(
      *(_QWORD *)(Context + 16),
      1,
      2,
      (__int64)L"Failed to acquire remove lock for sanitize recover.",
      L"NVMeStatus",
      *(_WORD *)(*(_QWORD *)v3 + 4260LL),
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
  }
  if ( (_QWORD)v18 )
    sub_1400F5FEC(*(_QWORD *)(Context + 16), 0x200u, v7, v18, *((__int64 *)&v18 + 1));
  sub_1400F98F8(Context);
}
