/*
 * XREFs of sub_1400EDE20 @ 0x1400EDE20
 * Callers:
 *     sub_1400ED960 @ 0x1400ED960 (sub_1400ED960.c)
 *     sub_1400EEC0C @ 0x1400EEC0C (sub_1400EEC0C.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 */

__int64 __fastcall sub_1400EDE20(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rdi
  PVOID *v3; // rsi
  unsigned int v4; // r12d
  void *v6; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rax
  PVOID *v10; // rdi
  KDEFERRED_ROUTINE *v11; // r13
  __int64 v12; // rax
  unsigned int v13; // ebp
  __int64 v14; // r14
  __int64 v15; // r14
  unsigned int v16; // eax
  unsigned __int64 v17; // rbx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+10h]

  v2 = (unsigned __int16 *)qword_140168E40;
  v3 = (PVOID *)(a2 + 64);
  v4 = 0;
  v6 = *(void **)(a2 + 64);
  ProcNumber = 0;
  v8 = 0;
  v20 = 0;
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72446152u);
  v9 = sub_1400143E0(72LL, 68LL * *((unsigned int *)v2 + 3), 1917083986LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *v3 = (PVOID)v9;
  if ( !v9 )
  {
    v8 = -1073741670;
    v10 = v3;
LABEL_20:
    if ( *v3 )
    {
      ExFreePoolWithTag(*v3, 0x72446152u);
      *v10 = 0LL;
      *(_QWORD *)(a2 + 72) = 0LL;
    }
    return v8;
  }
  v11 = (KDEFERRED_ROUTINE *)sub_140071C10;
  *(_QWORD *)(a2 + 72) = v9 + ((unsigned __int64)*((unsigned int *)v2 + 3) << 6);
  v12 = *(_QWORD *)(a1 + 128);
  v13 = 0;
  if ( (*(_BYTE *)(v12 + 416) & 0x40) == 0 )
    v11 = sub_140115650;
  if ( *v2 )
  {
    do
    {
      v14 = *((_QWORD *)v2 + 2);
      ProcNumber.Group = v13;
      ProcNumber.Reserved = 0;
      if ( *(_WORD *)(v14 + 16LL * v13 + 2) )
      {
        v15 = *(_QWORD *)(v14 + 16LL * v13 + 8);
        if ( v15 )
        {
          v16 = v20;
          while ( v16 < *((_DWORD *)v2 + 3) )
          {
            if ( _bittest64(&v15, v4) )
            {
              ProcNumber.Number = v4;
              KeGetProcessorIndexFromNumber(&ProcNumber);
              v17 = (unsigned __int64)v20 << 6;
              KeInitializeDpc((PRKDPC)((char *)*v3 + v17), v11, 0LL);
              KeSetImportanceDpc((PRKDPC)((char *)*v3 + v17), MediumHighImportance);
              v8 = KeSetTargetProcessorDpcEx((PKDPC)((char *)*v3 + v17), &ProcNumber);
              v16 = ++v20;
              _bittestandreset64(&v15, v4);
            }
            else
            {
              v16 = v20;
            }
            ++v4;
            if ( !v15 )
              goto LABEL_16;
          }
          v8 = -1073741595;
          goto LABEL_19;
        }
LABEL_16:
        v4 = 0;
      }
      ++v13;
    }
    while ( v13 < *v2 );
    if ( (v8 & 0x80000000) == 0 )
      return v8;
LABEL_19:
    v10 = (PVOID *)(a2 + 64);
    goto LABEL_20;
  }
  return v8;
}
