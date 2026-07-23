/*
 * XREFs of ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x14071EF00
 * Callers:
 *     ?VerifyPartitionTable@SC_DISK@@QEAAJE@Z @ 0x1407204A0 (-VerifyPartitionTable@SC_DISK@@QEAAJE@Z.c)
 * Callees:
 *     crc32 @ 0x14047DD24 (crc32.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z @ 0x14071EA38 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAVGPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x14071EAC0 (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1407205C0 (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x140793650 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     PspUserApcKernelRoutine @ 0x1409FEEE0 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_GPT::VerifyPartitionTable(SC_DISK **this, char a2)
{
  SC_DISK *v2; // rax
  unsigned int v5; // ebx
  unsigned int v6; // r12d
  _DWORD *v7; // rdi
  unsigned __int8 v8; // r8
  int v9; // edx
  int v10; // esi
  unsigned int v11; // edx
  unsigned int v12; // esi
  char *v13; // rax
  char *v14; // rdi
  char *v15; // rsi
  unsigned int v16; // edi
  SC_DISK *v17; // r9
  __int64 v18; // rbx
  __int64 v19; // r8
  void *v20; // r15
  int v21; // edx
  int v22; // ecx
  BOOL v23; // r12d
  int v24; // eax
  unsigned __int64 v25; // rsi
  int v26; // r13d
  __int64 v27; // rax
  unsigned int v28; // r13d
  unsigned __int64 v29; // rdi
  void *v30; // r9
  unsigned __int64 v31; // r8
  __int128 *v32; // rbx
  __int64 v33; // rsi
  __int128 v35; // [rsp+20h] [rbp-30h]
  void *v36[2]; // [rsp+30h] [rbp-20h]
  __int128 v37; // [rsp+40h] [rbp-10h] BYREF
  __int16 v38; // [rsp+80h] [rbp+30h]

  v2 = *this;
  v38 = 0;
  v5 = 0;
  v6 = ((*((_DWORD *)v2 + 50) & 1) == 0) + 1;
  v37 = 0LL;
  *(_OWORD *)v36 = 0LL;
  v35 = 0LL;
  while ( v5 < v6 )
  {
    v7 = (_DWORD *)*((_QWORD *)*this + 33);
    v36[v5 - 2] = v7;
    if ( (int)SC_GPT::ReadHeader(this, v5, (struct GPT_HEADER *)v7) >= 0 )
    {
      v9 = *((_DWORD *)*this + 59);
      v10 = v9 - 1;
      v11 = -v9;
      v12 = v11 & (v7[20] * v7[21] + v10);
      v13 = (char *)SC_ENV::Allocate(v12 + (1 << *((_DWORD *)*this + 60)), v11, v8, 1u);
      *((_QWORD *)&v37 + v5) = v13;
      v14 = v13;
      if ( !v13 )
      {
        v16 = -1073741670;
        goto LABEL_35;
      }
      if ( v5 )
      {
        v15 = v13;
        v14 = &v13[1 << *((_DWORD *)*this + 60)];
      }
      else
      {
        v15 = &v13[v12];
      }
      v36[v5 - 2] = v15;
      v36[v5] = v14;
      memmove(v15, *((const void **)*this + 33), 1 << *((_DWORD *)*this + 60));
      if ( (int)SC_GPT::ReadEntries(this, (struct GPT_HEADER *)v15, (struct GPT_ENTRY *)v14) >= 0 )
        *((_BYTE *)&v38 + v5) = 1;
    }
    ++v5;
  }
  v16 = 0;
  if ( !v38 )
  {
LABEL_13:
    v16 = -1073741774;
    goto LABEL_35;
  }
  v17 = *this;
  if ( (*((_DWORD *)*this + 50) & 1) == 0 )
  {
    v18 = v35;
    if ( !(_BYTE)v38
      || !HIBYTE(v38)
      || __PAIR128__(*(_QWORD *)(*((_QWORD *)&v35 + 1) + 24LL), *(_QWORD *)(*((_QWORD *)&v35 + 1) + 32LL)) != *(_OWORD *)(v35 + 24)
      || *(_OWORD *)(*((_QWORD *)&v35 + 1) + 40LL) != *(_OWORD *)(v35 + 40)
      || *(_QWORD *)(*((_QWORD *)&v35 + 1) + 80LL) != *(_QWORD *)(v35 + 80)
      || *(_DWORD *)(*((_QWORD *)&v35 + 1) + 88LL) != *(_DWORD *)(v35 + 88) )
    {
      goto LABEL_24;
    }
    v19 = *(_QWORD *)(*((_QWORD *)&v35 + 1) + 56LL) - *(_QWORD *)(v35 + 56);
    if ( !v19 )
      v19 = *(_QWORD *)(*((_QWORD *)&v35 + 1) + 64LL) - *(_QWORD *)(v35 + 64);
    if ( v19 )
    {
LABEL_24:
      if ( a2 )
      {
        if ( (_BYTE)v38 )
        {
          v20 = v36[0];
        }
        else
        {
          v20 = v36[1];
          v18 = *((_QWORD *)&v35 + 1);
        }
        v21 = *((_DWORD *)v17 + 59);
        v22 = *((_DWORD *)v17 + 60);
        v23 = (_BYTE)v38 != 0;
        v24 = *(_DWORD *)(v18 + 80) * *(_DWORD *)(v18 + 84);
        *(_DWORD *)(v18 + 16) = 0;
        v25 = *(_QWORD *)(v18 + 32);
        v26 = v24 + v21 - 1;
        v27 = *(_QWORD *)(v18 + 24);
        *(_QWORD *)(v18 + 24) = v25;
        v28 = (-v21 & (unsigned int)v26) >> v22;
        *(_QWORD *)(v18 + 32) = v27;
        if ( v23 )
          v29 = v25 - v28;
        else
          v29 = v25 + 1;
        *(_QWORD *)(v18 + 72) = v29;
        *(_DWORD *)(v18 + 16) = crc32(0LL, v18, *(_DWORD *)(v18 + 12));
        if ( v23 )
        {
          v30 = v20;
          v31 = v29;
        }
        else
        {
          v30 = (void *)v18;
          v31 = v25;
        }
        v16 = SC_DISK::WriteSectors(*this, v28 + 1, v31, v30);
        goto LABEL_35;
      }
      goto LABEL_13;
    }
  }
LABEL_35:
  v32 = &v37;
  v33 = 2LL;
  do
  {
    if ( *(_QWORD *)v32 )
      PspUserApcKernelRoutine(*(_QWORD *)v32);
    v32 = (__int128 *)((char *)v32 + 8);
    --v33;
  }
  while ( v33 );
  return v16;
}
