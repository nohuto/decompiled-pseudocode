/*
 * XREFs of BuildTranslatorRanges @ 0x1400BB340
 * Callers:
 *     TranslateEjectInterface @ 0x1400BB8B8 (TranslateEjectInterface.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall BuildTranslatorRanges(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // r12d
  __int64 Pool2; // rax
  unsigned int v5; // edi
  void *v6; // r13
  unsigned int v7; // ebx
  int v8; // r14d
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // rbp
  char *v12; // r15
  __int64 v13; // rdx
  char v14; // r8
  char v15; // r10
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int128 v18; // xmm1
  __int64 v19; // xmm0_8
  __int64 v20; // r8
  unsigned __int64 v21; // rdx
  void *v22; // rax
  int v24; // [rsp+20h] [rbp-88h]
  unsigned int v25; // [rsp+40h] [rbp-68h]
  __int64 v26; // [rsp+50h] [rbp-58h]
  void *Src; // [rsp+58h] [rbp-50h]
  __int64 v28; // [rsp+B0h] [rbp+8h]
  struct _IO_RESOURCE_DESCRIPTOR *v29; // [rsp+B0h] [rbp+8h]
  char v30; // [rsp+B0h] [rbp+8h]
  unsigned __int16 v33; // [rsp+C8h] [rbp+20h] BYREF

  v28 = *(_QWORD *)(a1 + 24);
  v3 = *(_DWORD *)(v28 + 36);
  Pool2 = ExAllocatePool2(256LL, 80 * v3, 1483760449LL);
  v5 = 0;
  Src = (void *)Pool2;
  v6 = (void *)Pool2;
  if ( Pool2 )
  {
    v7 = 0;
    v8 = 0;
    v25 = 0;
    v9 = Pool2;
    if ( !v3 )
      goto LABEL_22;
    v10 = v28;
    v11 = Pool2 + 40;
    v12 = (char *)(v28 + 48);
    do
    {
      if ( *(v12 - 7) == -127 && (*((_WORD *)v12 - 2) & 0x6000) != 0 )
      {
        v26 = 32LL * (v7 - 1);
        *(_BYTE *)v9 = *v12;
        v29 = (struct _IO_RESOURCE_DESCRIPTOR *)(v26 + v10 + 40);
        *(_BYTE *)(v9 + 1) = v29->Type;
        *(_DWORD *)(v9 + 8) = *((_DWORD *)v12 + 1);
        *(_DWORD *)(v9 + 12) = *((_DWORD *)v12 + 2);
        *(_QWORD *)(v9 + 24) = RtlIoDecodeMemIoResource(v29, 0LL, (PULONGLONG)(v9 + 16), 0LL);
        *(_DWORD *)(v9 + 32) = 3;
        if ( qword_14008F820 && v29->Type == 1 )
        {
          v13 = 32LL * (v7 - 1);
          v14 = *v12;
          v15 = *(v12 - 4) & 1;
          v16 = *(unsigned int *)(v26 + v10 + 48);
          v17 = *(_QWORD *)(v12 + 4) - *(_QWORD *)(v26 + v10 + 56);
          v33 = 0;
          v30 = v15;
          if ( v15 )
            v16 = (unsigned int)((*(_DWORD *)(v26 + v10 + 56) + (_DWORD)v16) << 10);
          LOBYTE(v13) = v14 == 3;
          v24 = v16;
          LOBYTE(v16) = v15;
          if ( (int)((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, int, unsigned __int16 *))qword_14008F820)(
                      v16,
                      v13,
                      0LL,
                      v17,
                      v24,
                      &v33) >= 0 )
          {
            v18 = *(_OWORD *)(v9 + 16);
            *(_OWORD *)v11 = *(_OWORD *)v9;
            v19 = *(_QWORD *)(v9 + 32);
            *(_OWORD *)(v11 + 16) = v18;
            *(_DWORD *)(v9 + 32) = 2;
            *(_QWORD *)(v11 + 32) = v19;
            if ( v30 )
              *(_QWORD *)(v9 + 8) = v17 + ((*(_QWORD *)(v9 + 16) & 0xFFFCLL) << 10) + (*(_QWORD *)(v9 + 16) & 0xFFFLL);
            v20 = v11;
            ++v8;
            v9 += 40LL;
            v11 += 40LL;
            v21 = (unsigned __int16)*(_DWORD *)(v20 + 16) | ((unsigned __int64)v33 << 16);
            *(_DWORD *)(v20 + 32) = 1;
            *(_QWORD *)(v20 + 8) = v21;
            *(_BYTE *)v20 = 1;
          }
          v7 = v25;
        }
        ++v8;
        v9 += 40LL;
        v11 += 40LL;
      }
      ++v7;
      v12 += 32;
      v25 = v7;
    }
    while ( v7 < v3 );
    v6 = Src;
    if ( v8 )
    {
      v22 = (void *)ExAllocatePool2(256LL, (unsigned int)(40 * v8), 1483760449LL);
      *a3 = v22;
      if ( !v22 )
      {
        v5 = -1073741670;
LABEL_24:
        ExFreePoolWithTag(v6, 0x58706341u);
        return v5;
      }
      memmove(v22, Src, (unsigned int)(40 * v8));
    }
    else
    {
LABEL_22:
      *a3 = 0LL;
    }
    *a2 = v8;
    goto LABEL_24;
  }
  return (unsigned int)-1073741670;
}
