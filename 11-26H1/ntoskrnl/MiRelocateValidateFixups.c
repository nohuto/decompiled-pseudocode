/*
 * XREFs of MiRelocateValidateFixups @ 0x14099C24C
 * Callers:
 *     MiRelocateImage @ 0x14099B784 (MiRelocateImage.c)
 * Callees:
 *     MiOffsetToProtos @ 0x1403422D4 (MiOffsetToProtos.c)
 *     PsRevertToUserPagePriorityThread @ 0x140481AA0 (PsRevertToUserPagePriorityThread.c)
 *     MiRemoveFromSystemSpace @ 0x140489AA8 (MiRemoveFromSystemSpace.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     MiScanRelocationPage @ 0x140881A44 (MiScanRelocationPage.c)
 *     MiLogRelocationFaults @ 0x14099D670 (MiLogRelocationFaults.c)
 *     MiCompressRelocations @ 0x1409F0C40 (MiCompressRelocations.c)
 */

__int64 __fastcall MiRelocateValidateFixups(__int64 a1)
{
  __int64 v2; // r15
  unsigned __int64 v3; // rbx
  unsigned int v4; // r13d
  unsigned int v5; // r12d
  unsigned int v6; // r14d
  __int64 v7; // rsi
  int v8; // edx
  __int64 v9; // rcx
  unsigned int v10; // r12d
  unsigned int v11; // r11d
  unsigned int v12; // edx
  unsigned int v13; // r8d
  unsigned __int64 v14; // rcx
  int v15; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v17; // rcx
  unsigned int v18; // r8d
  unsigned __int64 v19; // rdx
  unsigned int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned __int16 v22; // r8
  _WORD *v23; // r9
  unsigned int v24; // eax
  _QWORD *v25; // rax
  _DWORD *v27; // [rsp+30h] [rbp-58h]
  unsigned __int64 v28; // [rsp+38h] [rbp-50h]
  __int64 v29; // [rsp+40h] [rbp-48h]
  __int64 v30; // [rsp+48h] [rbp-40h]
  unsigned __int64 v31; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v32; // [rsp+98h] [rbp+10h]
  int v33; // [rsp+A0h] [rbp+18h]
  unsigned int v34; // [rsp+A8h] [rbp+20h]

  v27 = *(_DWORD **)a1;
  v2 = *(_QWORD *)(a1 + 56);
  v3 = *(_QWORD *)(v2 + 32);
  v4 = *(_DWORD *)(a1 + 40);
  v5 = *(_DWORD *)(a1 + 72) << 12;
  v30 = *(_QWORD *)(a1 + 64);
  memmove((void *)v3, (const void *)(v30 + *(unsigned int *)(a1 + 48)), v4);
  v6 = 0;
  LODWORD(v7) = 0;
  v8 = *(_DWORD *)(a1 + 32);
  if ( (v8 & 8) != 0 )
  {
    v9 = *(_QWORD *)(v2 + 88);
    if ( v9 )
    {
      LODWORD(v7) = v5 >> 12;
      while ( (_DWORD)v7 )
      {
        v7 = (unsigned int)(v7 - 1);
        if ( *(_QWORD *)(v9 + 8 * v7 + 64) )
          goto LABEL_7;
      }
      LODWORD(v7) = 0;
    }
  }
LABEL_7:
  if ( (v8 & 0x80u) != 0 && (unsigned int)v7 <= *(_DWORD *)(*(_QWORD *)(v2 + 96) + 36LL) )
    LODWORD(v7) = *(_DWORD *)(*(_QWORD *)(v2 + 96) + 36LL);
  v10 = v4;
  v11 = *(_DWORD *)(*(_QWORD *)v27 + 8LL) << 12;
  v34 = v11;
  v12 = v8 & 0xFFFFFFFB;
  *(_DWORD *)(a1 + 32) = v12;
  LODWORD(v31) = 0;
  v29 = *(_QWORD *)v2;
  if ( v4 )
  {
    v28 = v3;
    if ( v4 >= 0xA )
    {
      while ( 1 )
      {
        v13 = *(_DWORD *)(v3 + 4);
        v32 = v13;
        if ( v13 > v10 || (v13 & 1) != 0 || v13 < 8 )
          break;
        v14 = *(unsigned int *)v3;
        v33 = v14;
        if ( (v14 & 0xFFF) != 0 )
        {
          v12 &= ~0x10u;
          *(_DWORD *)(a1 + 32) = v12;
        }
        if ( (int)v14 + 4096 < (unsigned int)v14 || (int)v14 + 4096 > v11 || (unsigned int)v14 < (unsigned int)v31 )
          break;
        if ( v13 == 8 )
        {
          v10 -= 8;
          v12 &= ~0x10u;
          *(_DWORD *)(a1 + 32) = v12;
        }
        else
        {
          if ( (MiFlags & 0x80000) != 0 && (v27[23] & 0xC0000) != 0 )
          {
            v31 = 0LL;
            if ( (*(_DWORD *)(MiOffsetToProtos((__int64)v27, v14, &v31) + 32) & 4) != 0 )
              return 3221225595LL;
            LODWORD(v14) = v33;
            v13 = v32;
          }
          if ( (unsigned int)v14 >> 12 > (unsigned int)v7 )
            LODWORD(v7) = (unsigned int)v14 >> 12;
          *(_QWORD *)(v29 + 8 * ((unsigned __int64)(unsigned int)v14 >> 12)) |= v3;
          LODWORD(v31) = (v14 & 0xFFFFF000) + 4096;
          v10 -= v13;
          v15 = MiScanRelocationPage(v30, v14, (v13 - 8) >> 1, (_WORD *)(v3 + 8), (__int64)v27, v2);
          if ( v15 < 0 )
          {
            if ( v15 != -1073741207 )
            {
              if ( v15 == -1073741701 )
                return *(unsigned int *)(a1 + 36);
              else
                return (unsigned int)v15;
            }
            return v6;
          }
          *(_DWORD *)(a1 + 32) |= 4u;
          v12 = *(_DWORD *)(a1 + 32);
          v13 = v32;
          v11 = v34;
        }
        if ( !v10 )
          goto LABEL_34;
        v3 = v28 + v13;
        v28 = v3;
        if ( v10 < 0xA )
          goto LABEL_32;
      }
      return *(unsigned int *)(a1 + 36);
    }
LABEL_32:
    if ( v10 != 8 )
      return *(unsigned int *)(a1 + 36);
    v4 -= 8;
  }
LABEL_34:
  CurrentThread = KeGetCurrentThread();
  MiRemoveFromSystemSpace(*(_QWORD *)(a1 + 64));
  PsRevertToUserPagePriorityThread((__int64)CurrentThread, *(unsigned int *)(a1 + 52));
  *(_DWORD *)(a1 + 32) &= ~1u;
  v17 = *(__int64 **)(v2 + 16);
  if ( v17 )
  {
    while ( 1 )
    {
      v18 = *((_DWORD *)v17 + 3);
      v19 = *(_QWORD *)(v29 + 8 * ((unsigned __int64)v18 >> 12));
      v20 = v18 >> 12;
      if ( v18 >> 12 <= (unsigned int)v7 )
        v20 = v7;
      LODWORD(v7) = v20;
      if ( v19 > 1 )
      {
        v21 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
        v22 = v18 & 0xFFF;
        v23 = (_WORD *)(v21 + 8);
        v24 = (unsigned int)(*(_DWORD *)(v21 + 4) - 8) >> 1;
        if ( v24 )
          break;
      }
LABEL_42:
      v17 = (__int64 *)*v17;
      if ( !v17 )
        goto LABEL_43;
    }
    while ( *v23 < 0x1000u || (unsigned __int16)(*v23 & 0xFFF) >= v22 )
    {
      ++v23;
      if ( !--v24 )
        goto LABEL_42;
    }
    return *(unsigned int *)(a1 + 36);
  }
LABEL_43:
  MiLogRelocationFaults(v27, a1 + 80, v2);
  *(_DWORD *)(v2 + 56) = v7 + 1;
  if ( (*(_BYTE *)(a1 + 32) & 0x14) == 0x14 )
  {
    v25 = (_QWORD *)MiCompressRelocations(v2, v4);
    *v25 = v25 + 13;
    *(_QWORD *)(a1 + 56) = v25;
  }
  return 3221225494LL;
}
