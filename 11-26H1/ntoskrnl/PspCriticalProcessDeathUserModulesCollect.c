/*
 * XREFs of PspCriticalProcessDeathUserModulesCollect @ 0x14080091C
 * Callers:
 *     PspCriticalProcessDeathInfoCollectApc @ 0x140800760 (PspCriticalProcessDeathInfoCollectApc.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1402622E0 (RtlWalkFrameChain.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspCriticalProcessDeathBufferStringTruncateCopy @ 0x140800600 (PspCriticalProcessDeathBufferStringTruncateCopy.c)
 *     PspCriticalProcessDeathIsFrameInModule @ 0x1408008F4 (PspCriticalProcessDeathIsFrameInModule.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspCriticalProcessDeathUserModulesCollect(__int64 a1, int *a2)
{
  char *v3; // rsi
  PVOID *v4; // r14
  struct _LIST_ENTRY *Blink; // rdx
  unsigned int v6; // ebx
  int v7; // edi
  __int64 v8; // r13
  char *Pool2; // rax
  PVOID *v10; // rax
  ULONG v11; // r12d
  unsigned int v12; // edi
  unsigned int v13; // ebx
  __int64 v14; // r10
  __int64 i; // r9
  unsigned __int64 v16; // rdx
  int v17; // r9d
  unsigned int j; // r9d
  int v19; // r9d
  char *v20; // rdx
  _OWORD *v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // edi
  __int64 v24; // rbx
  __int128 v26; // [rsp+28h] [rbp-1B0h] BYREF
  __int128 v27; // [rsp+38h] [rbp-1A0h]
  char *v28; // [rsp+48h] [rbp-190h]
  __int64 v29; // [rsp+50h] [rbp-188h] BYREF
  _BYTE v30[16]; // [rsp+60h] [rbp-178h] BYREF
  __int64 v31; // [rsp+70h] [rbp-168h]
  __int64 v33; // [rsp+1F8h] [rbp+20h] BYREF

  v29 = 0LL;
  memset_0(v30, 0, 0x138uLL);
  v33 = 0LL;
  v3 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v4 = 0LL;
  Blink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Blink;
  if ( Blink )
  {
    RtlCopyFromUser(&v29, &Blink[1].Blink, 8uLL);
    RtlCopyFromUser(&v33, (void *)(v29 + 32), 8uLL);
    v8 = v29 + 32;
    Pool2 = (char *)ExAllocatePool2(0x40uLL);
    v3 = Pool2;
    v28 = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, 0xA900uLL);
      *(_QWORD *)&v26 = v3;
      v10 = (PVOID *)ExAllocatePool2(0x40uLL);
      v4 = v10;
      if ( v10 )
      {
        v11 = RtlWalkFrameChain(v10, 0x400u, 1u);
        DWORD1(v27) = v11;
        v12 = 0;
        v13 = DWORD2(v26);
LABEL_8:
        v14 = v33;
LABEL_9:
        while ( v14 != v8 && v12 < 0x200 )
        {
          RtlCopyFromUser(v30, (void *)(v14 - 16), 0x138uLL);
          v14 = v31;
          v33 = v31;
          ++v12;
          for ( i = 0LL; (unsigned int)i < v11; i = (unsigned int)(v17 + 1) )
          {
            if ( PspCriticalProcessDeathIsFrameInModule((__int64)v30, (unsigned __int64)v4[i]) )
            {
              for ( j = 0; j < v13; j = v19 + 1 )
              {
                if ( PspCriticalProcessDeathIsFrameInModule((__int64)&v3[312 * j], v16) )
                  goto LABEL_9;
              }
              v20 = &v3[312 * v13];
              v21 = v30;
              v22 = 2LL;
              do
              {
                *(_OWORD *)v20 = *v21;
                *((_OWORD *)v20 + 1) = v21[1];
                *((_OWORD *)v20 + 2) = v21[2];
                *((_OWORD *)v20 + 3) = v21[3];
                *((_OWORD *)v20 + 4) = v21[4];
                *((_OWORD *)v20 + 5) = v21[5];
                *((_OWORD *)v20 + 6) = v21[6];
                v20 += 128;
                *((_OWORD *)v20 - 1) = v21[7];
                v21 += 8;
                --v22;
              }
              while ( v22 );
              *(_OWORD *)v20 = *v21;
              *((_OWORD *)v20 + 1) = v21[1];
              *((_OWORD *)v20 + 2) = v21[2];
              *((_QWORD *)v20 + 6) = *((_QWORD *)v21 + 6);
              DWORD2(v26) = ++v13;
              goto LABEL_8;
            }
          }
        }
        DWORD2(v27) = v12;
        HIDWORD(v26) = 312 * v13;
        v23 = 0;
        if ( v13 )
        {
          do
          {
            v24 = 312LL * v23;
            PspCriticalProcessDeathBufferStringTruncateCopy((__int64)&v26, v24 + v26 + 88);
            PspCriticalProcessDeathBufferStringTruncateCopy((__int64)&v26, v24 + v26 + 72);
            ++v23;
          }
          while ( v23 < DWORD2(v26) );
        }
        *(_OWORD *)a1 = v26;
        *(_OWORD *)(a1 + 16) = v27;
        *(_QWORD *)(a1 + 32) = v28;
        v3 = 0LL;
        v7 = 0;
        v6 = 0;
      }
      else
      {
        v6 = -1073741670;
        v7 = 1280;
      }
    }
    else
    {
      v6 = -1073741670;
      v7 = 1024;
    }
  }
  else
  {
    v6 = -1073741595;
    v7 = 256;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x644D7350u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x644D7350u);
  *a2 = v7;
  return v6;
}
